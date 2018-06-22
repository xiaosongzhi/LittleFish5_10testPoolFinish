#ifndef MYSERIALPORT_H
#define MYSERIALPORT_H

#include <QWidget>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QTimer>
#include <QTime>
#include "dataformat.h"
#include "widget.h"

//quint8 DEVICE1STATE,DEVICE2STATE,DEVICE3STATE;//三个设备的状态，1--连接，0--断开
namespace Ui {
class MySerialPort;
}

class MySerialPort : public QWidget
{
    Q_OBJECT

public:
    explicit MySerialPort(QWidget *parent = 0);
    ~MySerialPort();
    quint8 DEVICE1 = 1,DEVICE2 = 2,DEVICE3 = 3;
    void sendDataThroughSerialPort(quint8 *message,quint8 szie,quint8 recId,quint8 cmd);//发送数据
    void sendMoveDataCmd();
    void sendGetSenserDataCmd();
    void sendFormateDataCmd(quint8 recId);
    void sendPIDCmd();
    void sendCheckCmd();
public slots:
    void receiveMoveDataSlot(Data_MOVE_TypeDef);
    void receiveFormationSlot(Data_FORMATE_TypeDef);
    void receiveCheckCmd(quint8 ,CheckYawAngle_TypeDef);
    void receivePIDCmd(quint8,PIDDebug_TypeDef);


    void rfCmdSendPool();       //任务池，定时器触发
    void triggleSenserState();  //轮询触发三个设备
    void SetFormateCmd();       //设置编队模式
    void flushDeviceConnectState();//刷新设备连接状态


    void readSerialPortData();
signals:
    void senserDataSignal(Data_STATEACK_TypeDef,quint8 sendId);
    void sendFormateState(quint8);//0未编队，1正在编队，2编队完成
    void sendDeviceConnectState(quint8 DeviceNum,quint8 state);
    void sendDeviceNum(quint8,quint8,quint8);
private slots:
    void on_deviceSet_Btn_clicked();

    void on_flushSerial_Btn_clicked();

    void on_openSerialPort_Btn_clicked();

//    void on_flushReceiveSerialPort_Btn_clicked();

//    void on_openReceiveSerialPort_Btn_clicked();

private:
    Ui::MySerialPort *ui;
    QSerialPort *rfSerialPort;
    QSerialPort *rfReciveSerialPort;
    Widget *myJoystick;
    //定时器
    QTimer *rfCylceTimer;
    QTimer *checkSenserStateTimer;
    QTimer *setFormateTimer;
    QTimer *checkDeviceConnectStateTimer;//每30s触发(刷新)一次

    bool isFormateMode = false; //是否处在便对模式下
    bool isFormateTriggle = false;//判断三个设备是否都进入了编队模式
    bool isSenserStateTriggle = false;

    bool isCheckTriggle = false;
    bool isPidTriggle = false;
    //判断三条鱼是否都接收到了编队指令
    bool isDevice1AcceptFormate = false;
    bool isDevice2AcceptFormate = false;
    bool isDevice3AcceptFormate = false;

    Data_MOVE_TypeDef CurrentMoveData;//运动数据
    Data_FORMATE_TypeDef FormateData; //编队数据
    CheckYawAngle_TypeDef CheckCmd; //方向校准
    PIDDebug_TypeDef PIDCmd;        //Debug调试

    quint8 checkRecID = 0;
    quint8 pidRecID = 0;

    //用于判断设备是否失联,当大于5时代表失联
    quint8 Device1Num = 0,Device2Num = 0,Device3Num = 0;

    QList<quint8>DeviceConnectState; //设备状态链表,用于监视设备状态，每隔30s刷新一次，将未连接的设备最多重新连接5次，然后刷新状态。
    quint8 DEVICE1STATE,DEVICE2STATE,DEVICE3STATE;//三个设备的状态，1--连接，0--断开
};

#endif // MYSERIALPORT_H
