#include "myserialport.h"
#include "ui_myserialport.h"
#include <QDebug>
#include <QMessageBox>
#include <QTime>

#define RFCYCLETIME 350     //任务池刷新时间
#define CHECKSENSERTIME 400//获取传感器数据时间
#define SETFORMATETIME 400  //设置编队模式时间
#define DEVICECONNECTTIME 4000//设备连接与否时间
// 查询的频率远小于任务池刷新频率在 1：3左右
// 任务池刷新频率 < 设置三个设备编队模式频率

MySerialPort::MySerialPort(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MySerialPort)
{
    ui->setupUi(this);
    rfSerialPort = new QSerialPort;
    rfReciveSerialPort = new QSerialPort;
    myJoystick = new Widget;

    rfCylceTimer = new QTimer;  //任务池定时器
    checkSenserStateTimer = new QTimer;
    setFormateTimer = new QTimer;
    checkDeviceConnectStateTimer = new QTimer;

    connect(myJoystick,SIGNAL(sendMoveDataSlot(Data_MOVE_TypeDef)),this,SLOT(receiveMoveDataSlot(Data_MOVE_TypeDef)));
    connect(rfCylceTimer,SIGNAL(timeout()),this,SLOT(rfCmdSendPool()));
    connect(checkSenserStateTimer,SIGNAL(timeout()),this,SLOT(triggleSenserState()));
    connect(setFormateTimer,SIGNAL(timeout()),this,SLOT(SetFormateCmd()));
    connect(checkDeviceConnectStateTimer,SIGNAL(timeout()),this,SLOT(flushDeviceConnectState()));
    connect(rfSerialPort,SIGNAL(readyRead()),this,SLOT(readSerialPortData()));

    on_flushSerial_Btn_clicked();
}

MySerialPort::~MySerialPort()
{
    delete ui;
}

/***********外界触发的槽函数************/
void MySerialPort::receiveMoveDataSlot(Data_MOVE_TypeDef MoveData)
{
    CurrentMoveData = MoveData;
}
void MySerialPort::receiveFormationSlot(Data_FORMATE_TypeDef Formation)
{
    //发送编队数据

    FormateData = Formation;//1接收编队参数

    isFormateTriggle = true;//2加入任务池直到三个设备都做好准备
    isDevice1AcceptFormate = false;//3将三个设备状体置0,当设备都准备好后全部置1，将isRormateTriggle置0，退出任务池
    isDevice2AcceptFormate = false;
    isDevice3AcceptFormate = false;
    setFormateTimer->start(SETFORMATETIME);//打开编队模式设置函数，开始设置编队，直到都设置好后，关闭定时器

    //0未编队  1正在编队 2编队完成
    if(FormateData.EnOrDisEN)
    {
        isFormateMode = true;//进入编队模式
        emit sendFormateState(1);//正在编队
    }
    else if(FormateData.EnOrDisEN)
    {
        isFormateMode = false;//退出编队
    }
    //此状态信息至少会发送三次，分别发给三个设备，并给三个设备分配子设备号
    //三个设备都设置完设备号后才将isFormateTriggle置0
}
//校准数据
void MySerialPort::receiveCheckCmd(quint8 receiveId,CheckYawAngle_TypeDef CHECKCMD)
{
    isCheckTriggle = true;
    CheckCmd = CHECKCMD;
    checkRecID = receiveId;
}
//PID调试
void MySerialPort::receivePIDCmd(quint8 receiveId,PIDDebug_TypeDef PIDCMD)
{
    isPidTriggle = true;
    pidRecID = receiveId;
    PIDCmd = PIDCMD;
}
/***********外界触发槽函数 end************/


/****************数据发送模块****************/
//串口发送数据
void MySerialPort::sendDataThroughSerialPort(quint8 *message,quint8 size,quint8 recId,quint8 cmd)
{
    qint8 send[size + 6] = {0};
    send[0] = 0xAA;
    send[1] = sizeof(send);
    send[2] = MasterID;
    send[3] = recId;
    send[4] = cmd;
    memcpy(send+5,message,size);
    send[size+5] = 0xBB;
    if(rfSerialPort->isOpen())
        rfSerialPort->write((const char*)send,sizeof(send));
    else
    {
        QMessageBox::warning(NULL,"WARNING","串口未打开",QMessageBox::Retry);
        return;
    }
}
//发送运动控制数据
void MySerialPort::sendMoveDataCmd()
{
    quint8 recID = 0;

    quint8 message[sizeof(CurrentMoveData)] = {0};
    memcpy(message,&CurrentMoveData,sizeof(CurrentMoveData));
    //编队模式，编队模式下只给主鱼发送控制指令
    if(isFormateMode)
    {
        recID = DEVICE1;//主设备ID
    }
    //其他模式下进行广播发送
    else
    {
        recID = PublicID;
    }
    //send CurrentMoveData
    sendDataThroughSerialPort(message,sizeof(message),recID,CMD_MOVE);
}
//获取状态信息
static qint8 num = 0;
void MySerialPort::sendGetSenserDataCmd()
{
    num++;
    quint8 recId = 0;
    switch(num%3)
    {
    case 0:
        if(DEVICE1STATE || (Device1Num < 4))
        {
            recId = DEVICE1;
            qDebug()<<"发送 device1 state";
        }
        Device1Num ++;
        if(Device1Num > 3)
        {
            emit sendDeviceConnectState(DEVICE1,0);
        }
        else
        {
            emit sendDeviceConnectState(DEVICE1,1);
        }
        DEVICE1STATE = 0;
        break;
    case 1:
        if(DEVICE2STATE || (Device2Num < 4))
        {
            recId = DEVICE2;
            qDebug()<<"发送 device2 state";
        }

        Device2Num ++;
        if(Device2Num > 3)
        {
            emit sendDeviceConnectState(DEVICE2,0);
        }
        else
        {
            emit sendDeviceConnectState(DEVICE2,1);
        }

        DEVICE2STATE = 0;
        break;
    case 2:
        if(DEVICE3STATE || (Device3Num<4))//在没有收到反馈或发送次数少于5的情况下，会重新发送
        {
            recId = DEVICE3;
            qDebug()<<"发送 device3 state";
        }
        Device3Num ++;
        if(Device3Num > 3)
        {
            emit sendDeviceConnectState(DEVICE3,0);
        }
        else
        {
            emit sendDeviceConnectState(DEVICE3,1);
        }

        DEVICE3STATE = 0;
        break;
    default:
        break;
    }
    if(num > 120)
        num = 0;

    quint8 message[1] = {0x01};
    sendDataThroughSerialPort(message,sizeof(message),recId,CMD_STATE);
}
//编队控制指令
void MySerialPort::sendFormateDataCmd( quint8 recId)
{
    quint8 message[sizeof(FormateData)] = {0};
    memcpy(message,&FormateData,sizeof(FormateData));

    sendDataThroughSerialPort(message,sizeof(message),recId,CMD_FORMATE);
}
void MySerialPort::sendPIDCmd()
{
    quint8 message[sizeof(PIDCmd)] = {0};
    memcpy(message,&PIDCmd,sizeof(PIDCmd));

    sendDataThroughSerialPort(message,sizeof(message),pidRecID,CMD_PIDDEBUG);
}
void MySerialPort::sendCheckCmd()
{
    quint8 message[sizeof(CheckCmd)] = {0};
    memcpy(message,&CheckCmd,sizeof(CheckCmd));

    sendDataThroughSerialPort(message,sizeof(message),checkRecID,CMD_CHECKYAWANGLE);
}
/****************数据发送模块end**************/


/*************本地定时器触发***************/
//设置三台设备子设备号以及设置编队数据
//编队模式下，控制指令只发给主设备,查询指令依旧
//如果主设备失联（根据状态恢复进行判断），则更换主设备
void MySerialPort::SetFormateCmd()
{
    quint8 recId = 0;
    if(!isDevice1AcceptFormate)
    {
        //change child id
        recId = DEVICE1;
        FormateData.PointID = 0;
    }
    else if(!isDevice2AcceptFormate)
    {
        //change child id
        recId = DEVICE2;
        FormateData.PointID = 1;

    }
    else if(!isDevice3AcceptFormate)
    {
        //change child id
        recId = DEVICE3;
        FormateData.PointID = 2;
    }
    //此处调用 sendFormateDataCmd()进行发送
    sendFormateDataCmd(recId);
    //如果三个都收到编队指令则将触发定时器关闭
}
//三台设备轮询触发 //查询的频率远小于任务池刷新频率在 1：3左右
void MySerialPort::triggleSenserState()
{
    isSenserStateTriggle = true;//收到回复后置0
    //不断更改设备号就好
}
//任务池
void MySerialPort::rfCmdSendPool()
{
    if(isCheckTriggle)
    {
        sendCheckCmd();
    }
    else if(isPidTriggle)
    {
        sendPIDCmd();
    }
    else if(isFormateTriggle)
    {
        SetFormateCmd();
    }

    else if(isSenserStateTriggle)
    {
        sendMoveDataCmd();
        sendGetSenserDataCmd();
        isSenserStateTriggle = false;
    }
//    else
//    {
//        sendMoveDataCmd();
//    }
}
//每隔30ms刷新一次，
void MySerialPort::flushDeviceConnectState()  //刷新设备连接状态
{
    DeviceConnectState.insert(0,DEVICE1STATE);
    DeviceConnectState.insert(1,DEVICE2STATE);
    DeviceConnectState.insert(3,DEVICE3STATE);

    for(quint8 i = 0;i < DeviceConnectState.size();i++)
    {
        //说明断连
        if(0 == DeviceConnectState.at(i))
        {
            //进行尝试性连接
            if(DEVICE1STATE == 0)
            {
                DEVICE1STATE = 1;
            }
            if(DEVICE2STATE == 0)
            {
                DEVICE2STATE = 1;
            }
            if(DEVICE3STATE == 0)
            {
                DEVICE3STATE = 1;
            }
        }
    }
}
/*************本地定时器触发 end***********/

/*****************界面信号触发**********************/
//设置设备号，此目的是为了当设备出现问题时及时替换设备
void MySerialPort::on_deviceSet_Btn_clicked()
{
    DEVICE1 = ui->device1_LineEdit->text().toShort();
    DEVICE2 = ui->device2_Lineedit->text().toShort();
    DEVICE3 = ui->device3_LineEdit->text().toShort();

    emit sendDeviceNum(DEVICE1,DEVICE2,DEVICE3);
}

void MySerialPort::on_flushSerial_Btn_clicked()
{
    QSerialPortInfo m_SerialPortInfo;
    QStringList serialPortNames;
    foreach(m_SerialPortInfo,QSerialPortInfo::availablePorts())
    {
        QSerialPort serialport;
        serialport.setPort(m_SerialPortInfo);

        if(serialport.open(QIODevice::ReadWrite))
        {
            serialPortNames.append(m_SerialPortInfo.portName());
            serialport.close();
        }
    }
    if(serialPortNames.isEmpty())
    {
        QMessageBox::warning(NULL,"WARNING","无可用串口",QMessageBox::Retry);
        return;
    }
    ui->SerialPort_ComboBox->clear();
    ui->SerialPort_ComboBox->addItems(serialPortNames);
}

void MySerialPort::on_openSerialPort_Btn_clicked()
{
    rfSerialPort->setPortName(ui->SerialPort_ComboBox->currentText());
    if(ui->openSerialPort_Btn->text() == "打开串口")
    {
        if(rfSerialPort->open(QIODevice::ReadWrite))
        {
            rfSerialPort->setBaudRate(ui->baud_SerialPort->currentText().toInt());
            rfSerialPort->setDataBits(QSerialPort::Data8);
            rfSerialPort->setParity(QSerialPort::NoParity);
            rfSerialPort->setStopBits(QSerialPort::OneStop);
            rfSerialPort->setFlowControl(QSerialPort::NoFlowControl);
            ui->openSerialPort_Btn->setText("关闭串口");
            rfCylceTimer->start(RFCYCLETIME);
            checkSenserStateTimer->start(CHECKSENSERTIME);
            checkDeviceConnectStateTimer->start(DEVICECONNECTTIME);
        }
        else
        {
            QMessageBox::warning(NULL,"WARNING","串口打开失败",QMessageBox::Retry);
            return;
        }
    }
    else if(ui->openSerialPort_Btn->text() == "关闭串口")
    {
        rfSerialPort->close();
        ui->openSerialPort_Btn->setText("打开串口");
        rfCylceTimer->stop();
        checkSenserStateTimer->stop();
        checkDeviceConnectStateTimer->stop();
    }
}
/****************
//接收串口
void MySerialPort::on_flushReceiveSerialPort_Btn_clicked()
{
    QSerialPortInfo m_SerialPortInfo;
    QStringList serialPortNames;
    foreach(m_SerialPortInfo,QSerialPortInfo::availablePorts())
    {
        QSerialPort serialport;
        serialport.setPort(m_SerialPortInfo);

        if(serialport.open(QIODevice::ReadWrite))
        {
            serialPortNames.append(m_SerialPortInfo.portName());
            serialport.close();
        }
    }
    if(serialPortNames.isEmpty())
    {
        QMessageBox::warning(NULL,"WARNING","无可用串口",QMessageBox::Retry);
        return;
    }
    ui->receiveSerialPort_ComboBox->clear();
    ui->receiveSerialPort_ComboBox->addItems(serialPortNames);
}

void MySerialPort::on_openReceiveSerialPort_Btn_clicked()
{
    rfReciveSerialPort->setPortName(ui->receiveSerialPort_ComboBox->currentText());
    if(ui->openReceiveSerialPort_Btn->text() == "打开串口")
    {
        if(rfReciveSerialPort->open(QIODevice::ReadWrite))
        {
            rfReciveSerialPort->setBaudRate(ui->baudReceiveSeriaolport_ComboBox->currentText().toInt());
            rfReciveSerialPort->setDataBits(QSerialPort::Data8);
            rfReciveSerialPort->setParity(QSerialPort::NoParity);
            rfReciveSerialPort->setStopBits(QSerialPort::OneStop);
            rfReciveSerialPort->setFlowControl(QSerialPort::NoFlowControl);
            ui->openReceiveSerialPort_Btn->setText("关闭串口");

        }
        else
        {
            QMessageBox::warning(NULL,"WARNING","串口打开失败",QMessageBox::Retry);
            return;
        }
    }
    else if(ui->openReceiveSerialPort_Btn->text() == "关闭串口")
    {
        rfReciveSerialPort->close();
        ui->openReceiveSerialPort_Btn->setText("打开串口");
        rfCylceTimer->stop();
        checkSenserStateTimer->stop();
    }
}
********暂时未用*******/
/*****************界面信号触发  end*******************/

/*************读取串口数据*************/
static QByteArray rfBuffer;
void MySerialPort::readSerialPortData()
{
    QByteArray receiveData;
    receiveData = rfSerialPort->readAll();
    rfBuffer.append(receiveData);

    if(rfBuffer[0] != (char)0xaa)
    {
        rfBuffer.remove(0,1);
        if(rfBuffer.isEmpty())
            return;
    }
    else
    {
        if(rfBuffer.length() >= rfBuffer[1])
        {

            if(rfBuffer[rfBuffer[1] -1] == (char)0xbb)
            {
                Data_STATEACK_TypeDef SenserData;
                Data_PICTUREINF_TypeDef PicMessage;

                char *ch;
                ch = rfBuffer.data();

                memcpy(&SenserData,ch + 5,sizeof(SenserData));
                memcpy(&PicMessage,ch + 5,sizeof(PicMessage));

                qint8 sendId = (qint8)rfBuffer[2];

                qint8 cmd = (qint8)rfBuffer[4];

                switch(cmd)
                {
                //传感器状态反馈
                case CMD_STATE:
                    isSenserStateTriggle = true;
                    if(DEVICE1 == sendId)
                    {
                        DEVICE1STATE = 1;
                        Device1Num = 0;
                        senserDataSignal(SenserData,sendId);
                    }
                    else if(DEVICE2 == sendId)
                    {
                        DEVICE2STATE = 1;
                        Device2Num = 0;
                        senserDataSignal(SenserData,sendId);
                    }
                    else if(DEVICE3 == sendId)
                    {
                        DEVICE3STATE = 1;
                        Device3Num = 0;
                        senserDataSignal(SenserData,sendId);
                    }
                    break;
                    //编队反馈
                case CMD_FORMATE:
                {
                    if(DEVICE1 == sendId)
                        isDevice1AcceptFormate = true;

                    else if(DEVICE2 == sendId)
                        isDevice2AcceptFormate = true;

                    else if(DEVICE3 == sendId)
                        isDevice3AcceptFormate = true;

                    bool isAllSetFormate = isDevice1AcceptFormate&&isDevice2AcceptFormate
                            &&isDevice3AcceptFormate;

                    if(isAllSetFormate&&isFormateMode)
                    {
                        //编队成功
                        isFormateTriggle = false;//退出任务池
                        emit sendFormateState(2);//完成编队

                    }
                    else if(isAllSetFormate &&(!isFormateMode))
                    {
                        //结束编队
                        isFormateTriggle = false;
                        emit sendFormateState(0);//未编队
                    }
                    break;
                }
                case CMD_CHECKYAWANGLE:
                    QMessageBox::warning(NULL,"WARNING","方向校准成功",QMessageBox::Ok);
                    break;
                case CMD_PIDDEBUG:
                    QMessageBox::warning(NULL,"WARNING","调试命令发送成功",QMessageBox::Ok);
                    break;
                case CMD_PICTUREINF:
                    break;
                default:
                    break;
                }
                rfBuffer.remove(0,rfBuffer[1]);
            }
            else
            {
                rfBuffer.remove(0,1);
            }
        }
        else
        {
            return;
        }

    }
}



