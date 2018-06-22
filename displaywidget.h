#ifndef DISPLAYWIDGET_H
#define DISPLAYWIDGET_H

#include <QWidget>
#include "dataformat.h"
#include <QTimer>
#include "myserialport.h"
#include "setformate.h"
#include <QMovie>


namespace Ui {
class DisplayWidget;
}

class DisplayWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DisplayWidget(QWidget *parent = 0);
    ~DisplayWidget();

    void initMovePixmap();

    void resizeGroupBox_4();
    void resizeGroupBox_7();
    void resizeGroupBox_8();
    void resizeStackedWidget();

protected:
    void resizeEvent(QResizeEvent* size);
private:
    Ui::DisplayWidget *ui;
    MySerialPort *transPort;
    SetFormate *freeFormate;

    //显示的数据
    char speed,direction,power,temp,hum,roll,pitch;
    short yaw;
    float v,depth;
    quint8 pointId;
    Point2f_TypeDef point;

    quint8 device1,device2,device3;

    //定时器
    QTimer *flushUITimer;

    float xscale4 = 0,yscale4 = 0;
    float xscale7 = 0,yscale7 = 0;
    float xscale8 = 0,yscale8 = 0;
    float xscaleW = 0,yscaleW = 0;

    void setPowerDisplay(quint8 power,quint8 id);
    // 编队可能有两种方式
    //(1)有界面对话框数据编队参数自由编队
    //(2)由摇杆操纵直接切换几种预先编好的队形

signals:
    void SetFormateSignal(Data_FORMATE_TypeDef);
    void sendCheckCmd(quint8 ,CheckYawAngle_TypeDef);
    void sendPIDCmd(quint8,PIDDebug_TypeDef);

public slots:
    void senserDataSlot(Data_STATEACK_TypeDef,quint8);
    void receiveFormateSlot(Data_FORMATE_TypeDef);//从运动控制处收到固定好的编队
    void receiveFormateState(quint8);//0未编队，1正在编队，2编队完成
    void receiveDeviceConnectState(quint8,quint8);
    void receiveDeviceNum(quint8,quint8,quint8);


private slots:
    void on_setFormate_Btn_clicked();//调用自由编队
    void on_serialPortConfig_Btn_clicked();
    void flushUI();
    void on_enter_Btn_clicked();
    void on_check_Btn_clicked();
    void on_PID_Btn_clicked();
    void on_radioButton1_clicked();
};

#endif // DISPLAYWIDGET_H
