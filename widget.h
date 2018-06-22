#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "qjoystick.h"
#include <QProgressBar>
#include <QLabel>
#include <QMap>
#include "dataformat.h"
#include <QTimer>


class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
private:
    QMap<uint, QList<QProgressBar*> > barsMap;
    QMap<uint, QList<QLabel*> > buttonLabelsMap;
    QTimer *moveDataTimer;
    bool keepYaw = false;
    char roll = 0,depth_1 = 0,direction = 0,nowDirection = 0,speed = 0;
private slots:
    void handleQJoystickAxisEvent(QJoystickAxisEvent *event);
    void handleQJoystickButtonEvent(QJoystickButtonEvent *event);
    void sendMoveData();
    void getBtnState(quint8);
signals:
    void sendBtnState(quint8);
    void sendMoveDataSlot(Data_MOVE_TypeDef);
};

#endif // WIDGET_H
