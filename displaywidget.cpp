#include "displaywidget.h"
#include "ui_displaywidget.h"
#include <QDebug>
#include "dataformat.h"

DisplayWidget::DisplayWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DisplayWidget)
{
    ui->setupUi(this);

    transPort = new MySerialPort;

    freeFormate = new SetFormate;

    flushUITimer = new QTimer(this);

    ui->graphicsView->setFixedSize(820,500);

    ui->graphicsView->setSceneRect(0,0,800,480);

    connect(this,SIGNAL(SetFormateSignal(Data_FORMATE_TypeDef)),transPort,SLOT(receiveFormationSlot(Data_FORMATE_TypeDef)));
    connect(freeFormate,SIGNAL(SetFormateSignal(Data_FORMATE_TypeDef)),transPort,SLOT(receiveFormationSlot(Data_FORMATE_TypeDef)));

    connect(transPort,SIGNAL(senserDataSignal(Data_STATEACK_TypeDef,quint8)),this,SLOT(senserDataSlot(Data_STATEACK_TypeDef,quint8)));
    connect(transPort,SIGNAL(sendFormateState(quint8)),this,SLOT(receiveFormateState(quint8)));
    connect(transPort,SIGNAL(sendDeviceNum(quint8,quint8,quint8)),this,SLOT(receiveDeviceNum(quint8,quint8,quint8)));
    connect(transPort,SIGNAL(sendDeviceConnectState(quint8,quint8)),this,SLOT(receiveDeviceConnectState(quint8 ,quint8)));

    connect(this,SIGNAL(sendCheckCmd(quint8 ,CheckYawAngle_TypeDef)),transPort,SLOT(receiveCheckCmd(quint8 ,CheckYawAngle_TypeDef)));
    connect(this,SIGNAL(sendPIDCmd(quint8,PIDDebug_TypeDef)),transPort,SLOT(receivePIDCmd(quint8,PIDDebug_TypeDef)));
    connect(flushUITimer,SIGNAL(timeout()),this,SLOT(flushUI()));

    connect(ui->radioButton2,SIGNAL(clicked(bool)),this,SLOT(on_radioButton1_clicked()));
    connect(ui->radioButton3,SIGNAL(clicked(bool)),this,SLOT(on_radioButton1_clicked()));

    flushUITimer->start(50);
    initMovePixmap();
}

DisplayWidget::~DisplayWidget()
{
    delete ui;
}
//初始化动图
void DisplayWidget::initMovePixmap()
{
    QMovie *movie = new QMovie("./image/b.gif");
    ui->rotateBackground1_label->setMovie(movie);
    ui->rotateBackground2_label->setMovie(movie);
    movie->start();

    ui->pitch_GraphicsView->addItem("./hsi/pitch.svg");
    ui->pitch_GraphicsView->setOrignalSizeAndCoordinate(300,300,142,54);

    ui->roll_GraphicsView->addItem("./hsi/roll.svg");
    ui->roll_GraphicsView->setOrignalSizeAndCoordinate(300,300,142,47);

    ui->yaw_GraphicsView->addItem("./hsi/yaw.svg");
    ui->yaw_GraphicsView->setOrignalSizeAndCoordinate(210,210,97,56);

}
void DisplayWidget::on_setFormate_Btn_clicked()//自由编队
{
    if(ui->setFormate_Btn->text() == "开始编队")
    {
        ui->setFormate_Btn->setText("结束编队");
        //进入对话框，获取数据
        freeFormate->show();

    }
    else if(ui->setFormate_Btn->text() == "结束编队")
    {
        ui->setFormate_Btn->setText("开始编队");
        Data_FORMATE_TypeDef FreeFormate;

        FreeFormate.Angle = 0;
        FreeFormate.Interval = 0;
        FreeFormate.EnOrDisEN = DISABLE;
        FreeFormate.formates = Formate_Auto;
        FreeFormate.PointID = 0;

        emit SetFormateSignal(FreeFormate);

    }
}

void DisplayWidget::senserDataSlot(Data_STATEACK_TypeDef State,quint8 sendId)
{

    speed = State.Speed;
    direction = State.Direction;
    power = State.Power;
    temp = State.Temp;
    hum = State.Hum;
    roll = State.Roll;
    pitch = State.Pitch;
    yaw = State.Yaw;
    v = State.V;
    depth = State.NowDeepth;
    pointId = State.pointID;
    point = State.Point;


    switch(sendId)
    {
    case 1:
        ui->speed_label->setText(QString::number(speed));
        ui->direction_label->setText(QString::number(direction));
        ui->power_label->setText(QString::number(power));
        ui->tem_label->setText(QString::number(temp));
        ui->hum_label->setText(QString::number(hum));
        ui->roll_label->setText(QString::number(roll));
        ui->pitch_label->setText(QString::number(pitch));
        ui->v_label->setText(QString::number(v));
        ui->depth_label->setText(QString::number(depth));
        ui->PointId_label->setText(QString::number(pointId));
        ui->pointX_label->setText(QString::number(point.x));
        ui->pointY_label->setText(QString::number(point.y));
        break;
    case 2:
        ui->depth2_label->setText(QString::number(depth,'g',3));
        ui->pointX2_label->setText(QString::number(point.x,'g',3));
        ui->pointY2_label->setText(QString::number(point.y,'g',3));
        ui->tem2_label->setText(QString::number(temp,'g',3));
        ui->hum2_label->setText(QString::number(hum,'g',3));
        ui->dev2Roll_label->setText(QString::number(roll,'g',3));
        ui->dev2Pitch_label->setText(QString::number(pitch,'g',3));
        break;
    case 3:
        ui->depth3_label->setText(QString::number(depth,'g',3));
        ui->pointX3_label->setText(QString::number(point.x,'g',3));
        ui->pointY3_label->setText(QString::number(point.y,'g',3));
        ui->tem3_label->setText(QString::number(temp,'g',3));
        ui->hum3_label->setText(QString::number(hum,'g',3));
        ui->dev3Roll_label->setText(QString::number(roll,'g',3));
        ui->dev3Pitch_label->setText(QString::number(pitch,'g',3));
        break;
    default:
        break;
    }
    setPowerDisplay(power,sendId);

    ui->graphicsView->setPosition(1,point.x,point.y,yaw);

}
//电量显示
void DisplayWidget::setPowerDisplay(quint8 power,quint8 id)
{
    switch (id)
    {
    case 1:
    {
        switch (power)
        {
        case 0:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/0.png);}");
            break;
        case 1:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/10.png);}");
            break;
        case 2:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/20.png);}");
            break;
        case 3:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/30.png);}");
            break;
        case 4:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/40.png);}");
            break;
        case 5:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/50.png);}");
            break;
        case 6:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/60.png);}");
            break;
        case 7:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/70.png);}");
            break;
        case 8:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/80.png);}");
            break;
        case 9:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/90.png);}");
            break;
        case 10:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/100.png);}");
            break;
        default:
            break;
        }

    }
        break;
    case 2:
    {
        switch (power)
        {
        case 0:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/0_1.png);}");
            break;
        case 1:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/10_1.png);}");
            break;
        case 2:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/20_1.png);}");
            break;
        case 3:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/30_1.png);}");
            break;
        case 4:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/40_1.png);}");
            break;
        case 5:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/50_1.png);}");
            break;
        case 6:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/60_1.png);}");
            break;
        case 7:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/70_1.png);}");
            break;
        case 8:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/80_1.png);}");
            break;
        case 9:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/90_1.png);}");
            break;
        case 10:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/100_1.png);}");
            break;
        default:
            break;
        }
    }
        break;
    case 3:
    {
        switch (power)
        {
        case 0:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/0_1.png);}");
            break;
        case 1:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/10_1.png);}");
            break;
        case 2:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/20_1.png);}");
            break;
        case 3:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/30_1.png);}");
            break;
        case 4:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/40_1.png);}");
            break;
        case 5:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/50_1.png);}");
            break;
        case 6:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/60_1.png);}");
            break;
        case 7:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/70_1.png);}");
            break;
        case 8:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/80_1.png);}");
            break;
        case 9:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/90_1.png);}");
            break;
        case 10:
            ui->dev1Power_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/100_1.png);}");
            break;
        default:
            break;
        }
    }
        break;
    default:
        break;
    }
}

void DisplayWidget::receiveFormateSlot(Data_FORMATE_TypeDef Formate)//固定好的编队
{

}

//显示编队状态
void DisplayWidget::receiveFormateState(quint8 state)
{
    switch(state)
    {
    case 0:
        ui->formateState_Label->setText("未编队");
        break;
    case 1:
        ui->formateState_Label->setText("正在编队");
        break;
    case 2:
        ui->formateState_Label->setText("编队完成");
        break;
    default:
        break;
    }
}

void DisplayWidget::on_serialPortConfig_Btn_clicked()
{
    transPort->show();
}
//显示各个设备的链接状态
void DisplayWidget::receiveDeviceConnectState(quint8 deviceNum,quint8 state)
{
    if(deviceNum == device1)
    {
        if(state)
        {
            ui->state1_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/连接_1.png);}");
            ui->graphicsView->setItemHideOrShow(1,1);
        }
        else
        {
            ui->state1_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/断开_1.png);}");
            ui->graphicsView->setItemHideOrShow(1,0);
        }
    }
    else if(deviceNum == device2)
    {
        if(state)
        {
            ui->state2_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/连接.png);}");
            ui->graphicsView->setItemHideOrShow(2,1);
        }
        else
        {
            ui->state2_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/断开.png);}");
            ui->graphicsView->setItemHideOrShow(2,0);
        }
    }
    else if(deviceNum == device3)
    {
        if(state)
        {
            ui->state3_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/连接.png);}");
            ui->graphicsView->setItemHideOrShow(3,1);
        }
        else
        {
            ui->state3_label->setStyleSheet("QLabel{border-image: url(:/new/prefix1/image/images/断开.png);}");
            ui->graphicsView->setItemHideOrShow(3,0);
        }
    }
}

void DisplayWidget::receiveDeviceNum(quint8 Device1,quint8 Device2,quint8 Device3)
{
    device1 = Device1;
    device2 = Device2;
    device3 = Device3;
}

int depth_1 = 0;
bool add = true;
bool lose = false;
void DisplayWidget::flushUI()
{

    if(depth_1 == 60)
    {
        add = false;
        lose = true;
    }
    else if(depth_1 == -60)
    {
        add = true;
        lose = false;
    }

    if(add)
    {
        depth_1 += 1;
    }
    if(lose)
    {
        depth_1 -= 1;
    }


    //   ui->graphicsView->setHeading(depth_1);
    ui->graphicsView->setPosition(1,(depth_1+60)*5,100,depth_1);
    ui->graphicsView->setPosition(2,(depth_1+60)*5,180,depth_1);
    ui->graphicsView->setPosition(3,(depth_1+60)*5,260,depth_1);


    ui->pitch_GraphicsView->setHeading(depth_1,10,90);
    ui->roll_GraphicsView->setHeading(depth_1,10,90);
    ui->yaw_GraphicsView->setHeading(depth_1,3,35);
}
//测试场景
void DisplayWidget::on_enter_Btn_clicked()
{
    quint8 item = ui->item_LineEdit->text().toInt();
    qreal x = ui->x_lineEdit->text().toDouble();
    qreal y = ui->y_lineEdit->text().toDouble();
    qreal angle = ui->angle_LineEdit->text().toDouble();
    ui->graphicsView->setPosition(item,x,y,angle);
    ui->graphicsView->update();
}
//设备校准按钮
void DisplayWidget::on_check_Btn_clicked()
{
    quint8 receiveId = 0;
    CheckYawAngle_TypeDef Angle;
    Angle.OffSetYaw = ui->check_lineEdit->text().toFloat();

    if(ui->check1_RadioButton->isChecked())
    {
        receiveId = 1;
    }
    else if(ui->check2_RadioButton->isChecked())
    {
        receiveId = 2;
    }
    else if(ui->check3_RadioButton->isChecked())
    {
        receiveId = 3;
    }
    //发送校准指令
    emit sendCheckCmd(receiveId,Angle);

}
//Pid
void DisplayWidget::on_PID_Btn_clicked()
{
    PIDDebug_TypeDef PID_CMD;
    quint8 receiveId;

    float KP = ui->P_lineEdit->text().toFloat();
    float TI = ui->I_lineEdit->text().toFloat();
    float TD = ui->D_lineEdit->text().toFloat();
    float NormalValue = ui->Nor_lineEdit->text().toFloat();
    float ZeroValue = ui->Zero_lineEdit->text().toFloat();

    PID_CMD.KP = KP;
    PID_CMD.TI = TI;
    PID_CMD.TD = TD;
    PID_CMD.NormalValue = NormalValue;
    PID_CMD.ZeroValue = ZeroValue;

    if(ui->pid_1RBtn->isChecked())
    {
        receiveId = 1;
        if(ui->depth_RBtn->isChecked())
        {
            PID_CMD.PID_ID = PID_DEEP;
        }
        else if(ui->roll_RBtn->isChecked())
        {
            PID_CMD.PID_ID = PID_ROLL;
        }
        else if(ui->pitch_RBtn->isChecked())
        {
            PID_CMD.PID_ID = PID_PITCH;
        }
        else if(ui->yaw_RBtn->isChecked())
        {
            PID_CMD.PID_ID = PID_YAW;
        }
    }
    else if(ui->pid_2RBtn->isChecked())
    {
        receiveId = 2;
        if(ui->depth_RBtn->isChecked())
        {
            PID_CMD.PID_ID = PID_DEEP;
        }
        else if(ui->roll_RBtn->isChecked())
        {
            PID_CMD.PID_ID = PID_ROLL;
        }
        else if(ui->pitch_RBtn->isChecked())
        {
            PID_CMD.PID_ID = PID_PITCH;
        }
        else if(ui->yaw_RBtn->isChecked())
        {
            PID_CMD.PID_ID = PID_YAW;
        }
    }
    else if(ui->pid_3RBtn->isChecked())
    {
        receiveId = 3;
        if(ui->depth_RBtn->isChecked())
        {
            PID_CMD.PID_ID = PID_DEEP;
        }
        else if(ui->roll_RBtn->isChecked())
        {
            PID_CMD.PID_ID = PID_ROLL;
        }
        else if(ui->pitch_RBtn->isChecked())
        {
            PID_CMD.PID_ID = PID_PITCH;
        }
        else if(ui->yaw_RBtn->isChecked())
        {
            PID_CMD.PID_ID = PID_YAW;
        }
    }

    emit sendPIDCmd(receiveId,PID_CMD);

}
//重绘事件
void DisplayWidget::resizeEvent(QResizeEvent* size)
{
    resizeGroupBox_4();
    resizeGroupBox_7();
    resizeGroupBox_8();
    resizeStackedWidget();
}

void DisplayWidget::resizeGroupBox_4()
{
    xscale4 = ui->groupBox_4->width()/547.f;
    yscale4 = ui->groupBox_4->height()/1078.f;

    ui->serialPortConfig_Btn->move(33*xscale4,103*yscale4);
    ui->serialPortConfig_Btn->resize(114*xscale4,110*yscale4);

    ui->dev1Power_label->move(30*xscale4,30*yscale4);
    ui->dev1Power_label->resize(191*xscale4,191*yscale4);

    ui->dev1PowNum_label->move(50*xscale4,46*yscale4);
    ui->dev1PowNum_label->resize(51*xscale4,41*yscale4);

    ui->state1_label->move(266*xscale4,527*yscale4);
    ui->state1_label->resize(22*xscale4,50*yscale4);

    ui->state2_label->move(350*xscale4,676*yscale4);
    ui->state2_label->resize(23*xscale4,60*yscale4);

    ui->state3_label->move(350*xscale4,847*yscale4);
    ui->state3_label->resize(23*xscale4,60*yscale4);

    ui->yaw_GraphicsView->move(180*xscale4,250*yscale4);
    ui->yaw_GraphicsView->resize(210*xscale4,210*yscale4);

    ui->depth_label->move(160*xscale4,540*yscale4);

    ui->pointX_label->move(150*xscale4,592*yscale4);

    ui->pointY_label->move(150*xscale4,633*yscale4);

    ui->tem_label->move(360*xscale4,591*yscale4);

    ui->hum_label->move(360*xscale4,633*yscale4);

    ui->depth2_label->move(160*xscale4,710*yscale4);
    ui->pointX2_label->move(140*xscale4,763*yscale4);
    ui->pointY2_label->move(140*xscale4,803*yscale4);
    ui->tem2_label->move(352*xscale4,762*yscale4);
    ui->hum2_label->move(352*xscale4,803*yscale4);

    ui->depth3_label->move(160*xscale4,883*yscale4);
    ui->pointX3_label->move(140*xscale4,934*yscale4);
    ui->pointY3_label->move(140*xscale4,970*yscale4);
    ui->tem3_label->move(352*xscale4,934*yscale4);
    ui->hum3_label->move(352*xscale4,973*yscale4);

    ui->radioButton1->move(250*xscale4,149*yscale4);
    ui->radioButton2->move(309*xscale4,149*yscale4);
    ui->radioButton3->move(360*xscale4,149*yscale4);

}
void DisplayWidget::resizeGroupBox_7()
{
    xscale7 = ui->groupBox_7->width()/1035.f;
    yscale7 = ui->groupBox_7->height()/445.f;

    ui->pitch_GraphicsView->resize(283*xscale7,283*yscale7);
    ui->pitch_GraphicsView->move(150*xscale7,110*yscale7);

    ui->roll_GraphicsView->resize(283*xscale7,283*yscale7);
    ui->roll_GraphicsView->move(640*xscale7,110*yscale7);

    ui->roll_label->move(935*xscale7,90*yscale7);
    ui->pitch_label->move(440*xscale7,90*yscale7);

    ui->rotateBackground1_label->move(110*xscale7,350*yscale7);
    ui->rotateBackground1_label->resize(356*xscale7,50*yscale7);

    ui->rotateBackground2_label->move(610*xscale7,350*yscale7);
    ui->rotateBackground2_label->resize(365*xscale7,50*yscale7);
}
void DisplayWidget::resizeGroupBox_8()
{
    xscale8 = ui->groupBox_8->width()/334.f;
    yscale8 = ui->groupBox_8->height()/1078.f;

    ui->dev2Power_label->move(30*xscale8,100*yscale8);
    ui->dev2Power_label->resize(204*xscale8,18*yscale8);
    ui->dev2PowNum_label->move(240*xscale8,100*yscale8);

    ui->dev3Power_label->move(30*xscale8,237*yscale8);
    ui->dev3Power_label->resize(204*xscale8,18*yscale8);
    ui->dev3PowNum_label->move(240*xscale8,230*yscale8);

    ui->dev2Roll_label->move(190*xscale8,145*yscale8);
    ui->dev2Pitch_label->move(190*xscale8,184*yscale8);

    ui->dev3Roll_label->move(190*xscale8,283*yscale8);
    ui->dev3Pitch_label->move(190*xscale8,323*yscale8);

    ui->check1_RadioButton->move(40*xscale8,700*yscale8);
    ui->check2_RadioButton->move(130*xscale8,700*yscale8);
    ui->check3_RadioButton->move(210*xscale8,700*yscale8);

    ui->check_lineEdit->move(48*xscale8,765*yscale8);
    ui->check_lineEdit->resize(135*xscale8,25*yscale8);

    ui->length_lineEdit->move(133*xscale8,451*yscale8);
    ui->length_lineEdit->resize(135*xscale8,25*yscale8);

    ui->angle_lineEdit->move(133*xscale8,498*yscale8);
    ui->angle_lineEdit->resize(135*xscale8,25*yscale8);

    ui->setFormate_Btn->resize(90*xscale8,30*yscale8);
    ui->setFormate_Btn->move(40*xscale8,560*yscale8);

    ui->overFormate_Btn->resize(90*xscale8,30*yscale8);
    ui->overFormate_Btn->move(180*xscale8,560*yscale8);

    ui->check_Btn->resize(75*xscale8,23*yscale8);
    ui->check_Btn->move(196*xscale8,764*yscale8);

    ui->form1_label->resize(80*xscale8,134*yscale8);
    ui->form1_label->move(27*xscale8,864*yscale8);

    ui->form2_label->resize(80*xscale8,134*yscale8);
    ui->form2_label->move(118*xscale8,864*yscale8);

    ui->form3_label->resize(80*xscale8,134*yscale8);
    ui->form3_label->move(211*xscale8,864*yscale8);

}
void DisplayWidget::resizeStackedWidget()
{
    xscaleW = ui->stackedWidget->width()/1035;
    yscaleW = ui->stackedWidget->height()/631;
}
//检测哪个设备在使用
void DisplayWidget::on_radioButton1_clicked()
{

}
