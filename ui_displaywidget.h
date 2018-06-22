/********************************************************************************
** Form generated from reading UI file 'displaywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYWIDGET_H
#define UI_DISPLAYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "myitem.h"
#include "qfi_hsi.h"

QT_BEGIN_NAMESPACE

class Ui_DisplayWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_4;
    QLabel *hum_label;
    QLabel *tem_label;
    QLabel *pointX_label;
    QLabel *pointY_label;
    QLabel *depth_label;
    QLabel *PointId_label;
    QLabel *v_label;
    QLabel *power_label;
    QLabel *direction_label;
    QLabel *speed_label;
    QLabel *depth3_label;
    MyItem *yaw_GraphicsView;
    QLabel *dev1Power_label;
    QLabel *state1_label;
    QLabel *state2_label;
    QLabel *state3_label;
    QPushButton *serialPortConfig_Btn;
    QLabel *dev1PowNum_label;
    QRadioButton *radioButton1;
    QRadioButton *radioButton2;
    QRadioButton *radioButton3;
    QLabel *pointX3_label;
    QLabel *pointY3_label;
    QLabel *tem3_label;
    QLabel *hum3_label;
    QLabel *pointX2_label;
    QLabel *pointY2_label;
    QLabel *tem2_label;
    QLabel *hum2_label;
    QLabel *depth2_label;
    QCheckBox *checkBox_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_7;
    MyItem *pitch_GraphicsView;
    MyItem *roll_GraphicsView;
    QLabel *rotateBackground2_label;
    QLabel *rotateBackground1_label;
    QLabel *pitch_label;
    QLabel *roll_label;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    qfi_HSI *graphicsView;
    QWidget *page_2;
    QGroupBox *groupBox_3;
    QRadioButton *pid_1RBtn;
    QRadioButton *pid_2RBtn;
    QRadioButton *pid_3RBtn;
    QRadioButton *depth_RBtn;
    QRadioButton *yaw_RBtn;
    QRadioButton *roll_RBtn;
    QRadioButton *pitch_RBtn;
    QLineEdit *P_lineEdit;
    QLineEdit *I_lineEdit;
    QLineEdit *D_lineEdit;
    QLineEdit *Nor_lineEdit;
    QLineEdit *Zero_lineEdit;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QPushButton *PID_Btn;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *item_LineEdit;
    QLineEdit *x_lineEdit;
    QLineEdit *y_lineEdit;
    QLineEdit *angle_LineEdit;
    QPushButton *enter_Btn;
    QGroupBox *groupBox_8;
    QPushButton *setFormate_Btn;
    QPushButton *overFormate_Btn;
    QLabel *dev2Power_label;
    QLabel *dev3Power_label;
    QLabel *dev2Roll_label;
    QLabel *dev3Roll_label;
    QLabel *dev2Pitch_label;
    QLabel *dev3Pitch_label;
    QLabel *dev2PowNum_label;
    QLabel *dev3PowNum_label;
    QLabel *formateState_Label;
    QRadioButton *check1_RadioButton;
    QRadioButton *check2_RadioButton;
    QRadioButton *check3_RadioButton;
    QLineEdit *check_lineEdit;
    QPushButton *check_Btn;
    QLineEdit *angle_lineEdit;
    QLineEdit *length_lineEdit;
    QLabel *form1_label;
    QLabel *form2_label;
    QLabel *form3_label;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;

    void setupUi(QWidget *DisplayWidget)
    {
        if (DisplayWidget->objectName().isEmpty())
            DisplayWidget->setObjectName(QStringLiteral("DisplayWidget"));
        DisplayWidget->resize(1920, 1080);
        gridLayout = new QGridLayout(DisplayWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox_4 = new QGroupBox(DisplayWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\350\203\214\346\231\257\345\267\246.png);"));
        hum_label = new QLabel(groupBox_4);
        hum_label->setObjectName(QStringLiteral("hum_label"));
        hum_label->setGeometry(QRect(352, 633, 61, 21));
        hum_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"Agency FB\";\n"
""));
        tem_label = new QLabel(groupBox_4);
        tem_label->setObjectName(QStringLiteral("tem_label"));
        tem_label->setGeometry(QRect(352, 591, 61, 21));
        tem_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"Agency FB\";"));
        pointX_label = new QLabel(groupBox_4);
        pointX_label->setObjectName(QStringLiteral("pointX_label"));
        pointX_label->setGeometry(QRect(140, 592, 61, 21));
        pointX_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"Agency FB\";"));
        pointY_label = new QLabel(groupBox_4);
        pointY_label->setObjectName(QStringLiteral("pointY_label"));
        pointY_label->setGeometry(QRect(140, 633, 61, 21));
        pointY_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"Agency FB\";"));
        depth_label = new QLabel(groupBox_4);
        depth_label->setObjectName(QStringLiteral("depth_label"));
        depth_label->setGeometry(QRect(160, 540, 61, 21));
        depth_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"Agency FB\";"));
        PointId_label = new QLabel(groupBox_4);
        PointId_label->setObjectName(QStringLiteral("PointId_label"));
        PointId_label->setGeometry(QRect(330, 540, 61, 21));
        PointId_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"Agency FB\";"));
        v_label = new QLabel(groupBox_4);
        v_label->setObjectName(QStringLiteral("v_label"));
        v_label->setGeometry(QRect(390, 540, 61, 21));
        v_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"Agency FB\";"));
        power_label = new QLabel(groupBox_4);
        power_label->setObjectName(QStringLiteral("power_label"));
        power_label->setGeometry(QRect(330, 500, 61, 21));
        power_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"Agency FB\";"));
        direction_label = new QLabel(groupBox_4);
        direction_label->setObjectName(QStringLiteral("direction_label"));
        direction_label->setGeometry(QRect(420, 540, 81, 21));
        direction_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"Agency FB\";"));
        speed_label = new QLabel(groupBox_4);
        speed_label->setObjectName(QStringLiteral("speed_label"));
        speed_label->setGeometry(QRect(390, 501, 61, 21));
        speed_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"Agency FB\";"));
        depth3_label = new QLabel(groupBox_4);
        depth3_label->setObjectName(QStringLiteral("depth3_label"));
        depth3_label->setGeometry(QRect(160, 883, 61, 21));
        depth3_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"Agency FB\";"));
        yaw_GraphicsView = new MyItem(groupBox_4);
        yaw_GraphicsView->setObjectName(QStringLiteral("yaw_GraphicsView"));
        yaw_GraphicsView->setGeometry(QRect(180, 250, 210, 210));
        yaw_GraphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        yaw_GraphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        yaw_GraphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        dev1Power_label = new QLabel(groupBox_4);
        dev1Power_label->setObjectName(QStringLiteral("dev1Power_label"));
        dev1Power_label->setGeometry(QRect(30, 30, 191, 191));
        QFont font;
        font.setPointSize(31);
        font.setBold(true);
        font.setWeight(75);
        dev1Power_label->setFont(font);
        dev1Power_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/\345\210\207\345\233\276/100.png);\n"
"color: rgb(85, 255, 0);"));
        dev1Power_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        state1_label = new QLabel(groupBox_4);
        state1_label->setObjectName(QStringLiteral("state1_label"));
        state1_label->setGeometry(QRect(266, 527, 22, 50));
        state1_label->setStyleSheet(QString::fromUtf8("QLabel{border-image: url(:/new/prefix1/image/images/\350\277\236\346\216\245_1.png);}"));
        state2_label = new QLabel(groupBox_4);
        state2_label->setObjectName(QStringLiteral("state2_label"));
        state2_label->setGeometry(QRect(350, 676, 23, 60));
        state2_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\350\277\236\346\216\245.png);"));
        state3_label = new QLabel(groupBox_4);
        state3_label->setObjectName(QStringLiteral("state3_label"));
        state3_label->setGeometry(QRect(350, 847, 23, 60));
        state3_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\350\277\236\346\216\245.png);"));
        serialPortConfig_Btn = new QPushButton(groupBox_4);
        serialPortConfig_Btn->setObjectName(QStringLiteral("serialPortConfig_Btn"));
        serialPortConfig_Btn->setGeometry(QRect(33, 103, 114, 100));
        serialPortConfig_Btn->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{border-image: url(:/new/prefix1/image/images/\351\205\215\347\275\256-\346\255\243\345\270\270.png);}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/images/\351\205\215\347\275\256-\346\202\254\346\265\256.png);}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/images/\351\205\215\347\275\256-\346\214\211\344\270\213.png);}"));
        dev1PowNum_label = new QLabel(groupBox_4);
        dev1PowNum_label->setObjectName(QStringLiteral("dev1PowNum_label"));
        dev1PowNum_label->setGeometry(QRect(50, 46, 51, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(25);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        dev1PowNum_label->setFont(font1);
        dev1PowNum_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"font: 75 25pt \"Agency FB\";\n"
"color: rgb(85, 255, 0);\n"
""));
        radioButton1 = new QRadioButton(groupBox_4);
        radioButton1->setObjectName(QStringLiteral("radioButton1"));
        radioButton1->setGeometry(QRect(250, 148, 21, 19));
        radioButton1->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        radioButton2 = new QRadioButton(groupBox_4);
        radioButton2->setObjectName(QStringLiteral("radioButton2"));
        radioButton2->setGeometry(QRect(309, 149, 21, 19));
        radioButton2->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        radioButton3 = new QRadioButton(groupBox_4);
        radioButton3->setObjectName(QStringLiteral("radioButton3"));
        radioButton3->setGeometry(QRect(360, 149, 21, 19));
        radioButton3->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        pointX3_label = new QLabel(groupBox_4);
        pointX3_label->setObjectName(QStringLiteral("pointX3_label"));
        pointX3_label->setGeometry(QRect(140, 934, 61, 21));
        pointX3_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"Agency FB\";"));
        pointY3_label = new QLabel(groupBox_4);
        pointY3_label->setObjectName(QStringLiteral("pointY3_label"));
        pointY3_label->setGeometry(QRect(140, 970, 61, 21));
        pointY3_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"Agency FB\";"));
        tem3_label = new QLabel(groupBox_4);
        tem3_label->setObjectName(QStringLiteral("tem3_label"));
        tem3_label->setGeometry(QRect(352, 934, 61, 21));
        tem3_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"Agency FB\";"));
        hum3_label = new QLabel(groupBox_4);
        hum3_label->setObjectName(QStringLiteral("hum3_label"));
        hum3_label->setGeometry(QRect(352, 973, 61, 21));
        hum3_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"Agency FB\";\n"
""));
        pointX2_label = new QLabel(groupBox_4);
        pointX2_label->setObjectName(QStringLiteral("pointX2_label"));
        pointX2_label->setGeometry(QRect(140, 763, 61, 21));
        pointX2_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"Agency FB\";"));
        pointY2_label = new QLabel(groupBox_4);
        pointY2_label->setObjectName(QStringLiteral("pointY2_label"));
        pointY2_label->setGeometry(QRect(140, 803, 61, 21));
        pointY2_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"Agency FB\";"));
        tem2_label = new QLabel(groupBox_4);
        tem2_label->setObjectName(QStringLiteral("tem2_label"));
        tem2_label->setGeometry(QRect(352, 762, 61, 21));
        tem2_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"Agency FB\";"));
        hum2_label = new QLabel(groupBox_4);
        hum2_label->setObjectName(QStringLiteral("hum2_label"));
        hum2_label->setGeometry(QRect(352, 803, 61, 21));
        hum2_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"Agency FB\";\n"
""));
        depth2_label = new QLabel(groupBox_4);
        depth2_label->setObjectName(QStringLiteral("depth2_label"));
        depth2_label->setGeometry(QRect(160, 710, 61, 21));
        depth2_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"Agency FB\";"));
        checkBox_3 = new QCheckBox(groupBox_4);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(390, 210, 91, 19));

        horizontalLayout->addWidget(groupBox_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_7 = new QGroupBox(DisplayWidget);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\350\203\214\346\231\257\344\270\212.png);"));
        pitch_GraphicsView = new MyItem(groupBox_7);
        pitch_GraphicsView->setObjectName(QStringLiteral("pitch_GraphicsView"));
        pitch_GraphicsView->setGeometry(QRect(150, 110, 283, 283));
        pitch_GraphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        pitch_GraphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pitch_GraphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        roll_GraphicsView = new MyItem(groupBox_7);
        roll_GraphicsView->setObjectName(QStringLiteral("roll_GraphicsView"));
        roll_GraphicsView->setGeometry(QRect(640, 110, 283, 283));
        roll_GraphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        roll_GraphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        roll_GraphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        rotateBackground2_label = new QLabel(groupBox_7);
        rotateBackground2_label->setObjectName(QStringLiteral("rotateBackground2_label"));
        rotateBackground2_label->setGeometry(QRect(610, 350, 356, 50));
        rotateBackground2_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        rotateBackground1_label = new QLabel(groupBox_7);
        rotateBackground1_label->setObjectName(QStringLiteral("rotateBackground1_label"));
        rotateBackground1_label->setGeometry(QRect(110, 350, 356, 50));
        rotateBackground1_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        pitch_label = new QLabel(groupBox_7);
        pitch_label->setObjectName(QStringLiteral("pitch_label"));
        pitch_label->setGeometry(QRect(440, 90, 61, 31));
        pitch_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"Agency FB\";;"));
        roll_label = new QLabel(groupBox_7);
        roll_label->setObjectName(QStringLiteral("roll_label"));
        roll_label->setGeometry(QRect(935, 95, 61, 31));
        roll_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"Agency FB\";"));

        verticalLayout->addWidget(groupBox_7);

        stackedWidget = new QStackedWidget(DisplayWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\347\274\226\351\230\237\350\203\214\346\231\257.png);"));
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        graphicsView = new qfi_HSI(page_1);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 20, 991, 581));
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        groupBox_3 = new QGroupBox(page_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(500, 60, 381, 191));
        groupBox_3->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 170, 255);\n"
"color: rgb(255, 255, 255);"));
        pid_1RBtn = new QRadioButton(groupBox_3);
        pid_1RBtn->setObjectName(QStringLiteral("pid_1RBtn"));
        pid_1RBtn->setGeometry(QRect(10, 30, 51, 16));
        pid_1RBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        pid_2RBtn = new QRadioButton(groupBox_3);
        pid_2RBtn->setObjectName(QStringLiteral("pid_2RBtn"));
        pid_2RBtn->setGeometry(QRect(100, 30, 51, 16));
        pid_2RBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        pid_3RBtn = new QRadioButton(groupBox_3);
        pid_3RBtn->setObjectName(QStringLiteral("pid_3RBtn"));
        pid_3RBtn->setGeometry(QRect(190, 30, 51, 16));
        pid_3RBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        depth_RBtn = new QRadioButton(groupBox_3);
        depth_RBtn->setObjectName(QStringLiteral("depth_RBtn"));
        depth_RBtn->setGeometry(QRect(10, 60, 51, 16));
        depth_RBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        yaw_RBtn = new QRadioButton(groupBox_3);
        yaw_RBtn->setObjectName(QStringLiteral("yaw_RBtn"));
        yaw_RBtn->setGeometry(QRect(100, 60, 51, 16));
        yaw_RBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        roll_RBtn = new QRadioButton(groupBox_3);
        roll_RBtn->setObjectName(QStringLiteral("roll_RBtn"));
        roll_RBtn->setGeometry(QRect(188, 60, 51, 16));
        roll_RBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        pitch_RBtn = new QRadioButton(groupBox_3);
        pitch_RBtn->setObjectName(QStringLiteral("pitch_RBtn"));
        pitch_RBtn->setGeometry(QRect(280, 60, 71, 16));
        pitch_RBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        P_lineEdit = new QLineEdit(groupBox_3);
        P_lineEdit->setObjectName(QStringLiteral("P_lineEdit"));
        P_lineEdit->setGeometry(QRect(90, 85, 81, 20));
        P_lineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        I_lineEdit = new QLineEdit(groupBox_3);
        I_lineEdit->setObjectName(QStringLiteral("I_lineEdit"));
        I_lineEdit->setGeometry(QRect(90, 115, 81, 20));
        I_lineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        D_lineEdit = new QLineEdit(groupBox_3);
        D_lineEdit->setObjectName(QStringLiteral("D_lineEdit"));
        D_lineEdit->setGeometry(QRect(90, 145, 81, 20));
        D_lineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        Nor_lineEdit = new QLineEdit(groupBox_3);
        Nor_lineEdit->setObjectName(QStringLiteral("Nor_lineEdit"));
        Nor_lineEdit->setGeometry(QRect(260, 85, 81, 20));
        Nor_lineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        Zero_lineEdit = new QLineEdit(groupBox_3);
        Zero_lineEdit->setObjectName(QStringLiteral("Zero_lineEdit"));
        Zero_lineEdit->setGeometry(QRect(260, 115, 81, 20));
        Zero_lineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        label_33 = new QLabel(groupBox_3);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(10, 90, 51, 16));
        label_33->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        label_33->setAlignment(Qt::AlignCenter);
        label_34 = new QLabel(groupBox_3);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(10, 114, 51, 16));
        label_34->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        label_34->setAlignment(Qt::AlignCenter);
        label_35 = new QLabel(groupBox_3);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(10, 140, 51, 16));
        label_35->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        label_35->setAlignment(Qt::AlignCenter);
        label_36 = new QLabel(groupBox_3);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(200, 114, 51, 16));
        label_36->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        label_36->setAlignment(Qt::AlignCenter);
        label_37 = new QLabel(groupBox_3);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(200, 90, 51, 16));
        label_37->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        label_37->setAlignment(Qt::AlignCenter);
        PID_Btn = new QPushButton(groupBox_3);
        PID_Btn->setObjectName(QStringLiteral("PID_Btn"));
        PID_Btn->setGeometry(QRect(260, 140, 75, 23));
        PID_Btn->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(200, 40, 201, 221));
        groupBox->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(255, 255, 0);"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 30, 41, 16));
        QFont font2;
        font2.setPointSize(11);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 67, 41, 16));
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 100, 41, 16));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(23, 128, 41, 16));
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignCenter);
        item_LineEdit = new QLineEdit(groupBox);
        item_LineEdit->setObjectName(QStringLiteral("item_LineEdit"));
        item_LineEdit->setGeometry(QRect(80, 30, 113, 20));
        item_LineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\346\226\207\345\255\227\346\241\206\350\203\214\346\231\257 (1).png);"));
        x_lineEdit = new QLineEdit(groupBox);
        x_lineEdit->setObjectName(QStringLiteral("x_lineEdit"));
        x_lineEdit->setGeometry(QRect(80, 63, 113, 20));
        x_lineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\346\226\207\345\255\227\346\241\206\350\203\214\346\231\257 (1).png);"));
        y_lineEdit = new QLineEdit(groupBox);
        y_lineEdit->setObjectName(QStringLiteral("y_lineEdit"));
        y_lineEdit->setGeometry(QRect(80, 98, 113, 20));
        y_lineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\346\226\207\345\255\227\346\241\206\350\203\214\346\231\257 (1).png);"));
        angle_LineEdit = new QLineEdit(groupBox);
        angle_LineEdit->setObjectName(QStringLiteral("angle_LineEdit"));
        angle_LineEdit->setGeometry(QRect(80, 130, 113, 20));
        angle_LineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\346\226\207\345\255\227\346\241\206\350\203\214\346\231\257 (1).png);"));
        enter_Btn = new QPushButton(groupBox);
        enter_Btn->setObjectName(QStringLiteral("enter_Btn"));
        enter_Btn->setGeometry(QRect(70, 180, 75, 23));
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);

        verticalLayout->setStretch(0, 447);
        verticalLayout->setStretch(1, 633);

        horizontalLayout->addLayout(verticalLayout);

        groupBox_8 = new QGroupBox(DisplayWidget);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\350\203\214\346\231\257\345\217\263.png);"));
        setFormate_Btn = new QPushButton(groupBox_8);
        setFormate_Btn->setObjectName(QStringLiteral("setFormate_Btn"));
        setFormate_Btn->setGeometry(QRect(40, 560, 90, 30));
        setFormate_Btn->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{border-image: url(:/new/prefix1/image/images/\345\274\200\345\247\213\347\274\226\351\230\237-\346\255\243\345\270\270.png);}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/images/\345\274\200\345\247\213\347\274\226\351\230\237-\346\202\254\346\265\256.png);}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/images/\345\274\200\345\247\213\347\274\226\351\230\237-\346\214\211\344\270\213.png);}\n"
"\n"
""));
        overFormate_Btn = new QPushButton(groupBox_8);
        overFormate_Btn->setObjectName(QStringLiteral("overFormate_Btn"));
        overFormate_Btn->setGeometry(QRect(180, 560, 90, 30));
        overFormate_Btn->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{border-image: url(:/new/prefix1/image/images/\347\273\223\346\235\237\347\274\226\351\230\237-\346\255\243\345\270\270.png);}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/images/\347\273\223\346\235\237\347\274\226\351\230\237-\346\202\254\346\265\256.png);}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/images/\347\273\223\346\235\237\347\274\226\351\230\237-\346\214\211\344\270\213.png);}"));
        dev2Power_label = new QLabel(groupBox_8);
        dev2Power_label->setObjectName(QStringLiteral("dev2Power_label"));
        dev2Power_label->setGeometry(QRect(30, 100, 204, 18));
        dev2Power_label->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/images/90_1.png);"));
        dev3Power_label = new QLabel(groupBox_8);
        dev3Power_label->setObjectName(QStringLiteral("dev3Power_label"));
        dev3Power_label->setGeometry(QRect(29, 237, 204, 18));
        dev3Power_label->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/images/90_1.png);"));
        dev2Roll_label = new QLabel(groupBox_8);
        dev2Roll_label->setObjectName(QStringLiteral("dev2Roll_label"));
        dev2Roll_label->setGeometry(QRect(190, 145, 101, 21));
        dev2Roll_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"font: 75 12pt \"Arial\";\n"
"color: rgb(255, 255, 255);"));
        dev2Roll_label->setAlignment(Qt::AlignCenter);
        dev3Roll_label = new QLabel(groupBox_8);
        dev3Roll_label->setObjectName(QStringLiteral("dev3Roll_label"));
        dev3Roll_label->setGeometry(QRect(190, 283, 101, 21));
        dev3Roll_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"font: 75 12pt \"Arial\";\n"
"color: rgb(255, 255, 255);\n"
""));
        dev3Roll_label->setAlignment(Qt::AlignCenter);
        dev2Pitch_label = new QLabel(groupBox_8);
        dev2Pitch_label->setObjectName(QStringLiteral("dev2Pitch_label"));
        dev2Pitch_label->setGeometry(QRect(190, 184, 101, 21));
        dev2Pitch_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"font: 75 12pt \"Arial\";\n"
"color: rgb(255, 255, 255);\n"
""));
        dev2Pitch_label->setAlignment(Qt::AlignCenter);
        dev3Pitch_label = new QLabel(groupBox_8);
        dev3Pitch_label->setObjectName(QStringLiteral("dev3Pitch_label"));
        dev3Pitch_label->setGeometry(QRect(190, 323, 101, 21));
        dev3Pitch_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"font: 75 12pt \"Arial\";\n"
"color: rgb(255, 255, 255);"));
        dev3Pitch_label->setAlignment(Qt::AlignCenter);
        dev2PowNum_label = new QLabel(groupBox_8);
        dev2PowNum_label->setObjectName(QStringLiteral("dev2PowNum_label"));
        dev2PowNum_label->setGeometry(QRect(240, 100, 51, 18));
        dev2PowNum_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(85, 255, 0);\n"
"font: 75 14pt \"Agency FB\";"));
        dev3PowNum_label = new QLabel(groupBox_8);
        dev3PowNum_label->setObjectName(QStringLiteral("dev3PowNum_label"));
        dev3PowNum_label->setGeometry(QRect(240, 230, 51, 31));
        dev3PowNum_label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(85, 255, 0);\n"
"font: 75 14pt \"Agency FB\";"));
        formateState_Label = new QLabel(groupBox_8);
        formateState_Label->setObjectName(QStringLiteral("formateState_Label"));
        formateState_Label->setGeometry(QRect(20, 810, 101, 21));
        formateState_Label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);\n"
"color: rgb(85, 255, 255);"));
        check1_RadioButton = new QRadioButton(groupBox_8);
        check1_RadioButton->setObjectName(QStringLiteral("check1_RadioButton"));
        check1_RadioButton->setGeometry(QRect(40, 700, 60, 30));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial Rounded MT Bold"));
        check1_RadioButton->setFont(font3);
        check1_RadioButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);\n"
"border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        check2_RadioButton = new QRadioButton(groupBox_8);
        check2_RadioButton->setObjectName(QStringLiteral("check2_RadioButton"));
        check2_RadioButton->setGeometry(QRect(130, 700, 65, 30));
        check2_RadioButton->setFont(font3);
        check2_RadioButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);\n"
"border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        check3_RadioButton = new QRadioButton(groupBox_8);
        check3_RadioButton->setObjectName(QStringLiteral("check3_RadioButton"));
        check3_RadioButton->setGeometry(QRect(210, 700, 65, 30));
        check3_RadioButton->setFont(font3);
        check3_RadioButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);\n"
"border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        check_lineEdit = new QLineEdit(groupBox_8);
        check_lineEdit->setObjectName(QStringLiteral("check_lineEdit"));
        check_lineEdit->setGeometry(QRect(48, 765, 135, 25));
        check_lineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\346\226\207\345\255\227\346\241\206\350\203\214\346\231\257 (1).png);"));
        check_Btn = new QPushButton(groupBox_8);
        check_Btn->setObjectName(QStringLiteral("check_Btn"));
        check_Btn->setGeometry(QRect(196, 764, 75, 23));
        check_Btn->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{border-image: url(:/new/prefix1/image/images/\347\241\256\350\256\244-\346\255\243\345\270\270.png);}\n"
"QPushButton:hover{border-image: url(:/new/prefix1/image/images/\347\241\256\350\256\244-\346\202\254\346\265\256.png);}\n"
"QPushButton:pressed{border-image: url(:/new/prefix1/image/images/\347\241\256\350\256\244-\346\214\211\344\270\213.png);}"));
        angle_lineEdit = new QLineEdit(groupBox_8);
        angle_lineEdit->setObjectName(QStringLiteral("angle_lineEdit"));
        angle_lineEdit->setGeometry(QRect(134, 498, 135, 25));
        angle_lineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\346\226\207\345\255\227\346\241\206\350\203\214\346\231\257 (1).png);"));
        length_lineEdit = new QLineEdit(groupBox_8);
        length_lineEdit->setObjectName(QStringLiteral("length_lineEdit"));
        length_lineEdit->setGeometry(QRect(133, 451, 135, 25));
        length_lineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image/images/\346\226\207\345\255\227\346\241\206\350\203\214\346\231\257 (1).png);"));
        form1_label = new QLabel(groupBox_8);
        form1_label->setObjectName(QStringLiteral("form1_label"));
        form1_label->setGeometry(QRect(27, 864, 80, 134));
        form1_label->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/images/btn_1c.png);"));
        form2_label = new QLabel(groupBox_8);
        form2_label->setObjectName(QStringLiteral("form2_label"));
        form2_label->setGeometry(QRect(118, 864, 80, 134));
        form2_label->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/images/btn_2a.png);"));
        form3_label = new QLabel(groupBox_8);
        form3_label->setObjectName(QStringLiteral("form3_label"));
        form3_label->setGeometry(QRect(211, 864, 80, 134));
        form3_label->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/images/btn_3c.png);"));
        checkBox = new QCheckBox(groupBox_8);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(40, 420, 91, 19));
        checkBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);\n"
"border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));
        checkBox_2 = new QCheckBox(groupBox_8);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(200, 420, 91, 19));
        checkBox_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);\n"
"border-image: url(:/new/prefix1/image/images/\351\200\217\346\230\216.png);"));

        horizontalLayout->addWidget(groupBox_8);

        horizontalLayout->setStretch(0, 548);
        horizontalLayout->setStretch(1, 1038);
        horizontalLayout->setStretch(2, 334);

        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(DisplayWidget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DisplayWidget);
    } // setupUi

    void retranslateUi(QWidget *DisplayWidget)
    {
        DisplayWidget->setWindowTitle(QApplication::translate("DisplayWidget", "DisplayWidget", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        hum_label->setText(QApplication::translate("DisplayWidget", "123", Q_NULLPTR));
        tem_label->setText(QApplication::translate("DisplayWidget", "123", Q_NULLPTR));
        pointX_label->setText(QApplication::translate("DisplayWidget", "123", Q_NULLPTR));
        pointY_label->setText(QApplication::translate("DisplayWidget", "123", Q_NULLPTR));
        depth_label->setText(QApplication::translate("DisplayWidget", "123", Q_NULLPTR));
        PointId_label->setText(QApplication::translate("DisplayWidget", "pointId", Q_NULLPTR));
        v_label->setText(QApplication::translate("DisplayWidget", "v", Q_NULLPTR));
        power_label->setText(QApplication::translate("DisplayWidget", "power", Q_NULLPTR));
        direction_label->setText(QApplication::translate("DisplayWidget", "direction", Q_NULLPTR));
        speed_label->setText(QApplication::translate("DisplayWidget", "speed", Q_NULLPTR));
        depth3_label->setText(QApplication::translate("DisplayWidget", "12", Q_NULLPTR));
        dev1Power_label->setText(QString());
        state1_label->setText(QString());
        state2_label->setText(QString());
        state3_label->setText(QString());
        serialPortConfig_Btn->setText(QString());
        dev1PowNum_label->setText(QApplication::translate("DisplayWidget", "100", Q_NULLPTR));
        radioButton1->setText(QString());
        radioButton2->setText(QString());
        radioButton3->setText(QString());
        pointX3_label->setText(QApplication::translate("DisplayWidget", "yaw", Q_NULLPTR));
        pointY3_label->setText(QApplication::translate("DisplayWidget", "yaw", Q_NULLPTR));
        tem3_label->setText(QApplication::translate("DisplayWidget", "123", Q_NULLPTR));
        hum3_label->setText(QApplication::translate("DisplayWidget", "123", Q_NULLPTR));
        pointX2_label->setText(QApplication::translate("DisplayWidget", "123", Q_NULLPTR));
        pointY2_label->setText(QApplication::translate("DisplayWidget", "123", Q_NULLPTR));
        tem2_label->setText(QApplication::translate("DisplayWidget", "123", Q_NULLPTR));
        hum2_label->setText(QApplication::translate("DisplayWidget", "123", Q_NULLPTR));
        depth2_label->setText(QApplication::translate("DisplayWidget", "12", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("DisplayWidget", "CheckBox", Q_NULLPTR));
        groupBox_7->setTitle(QString());
        rotateBackground2_label->setText(QString());
        rotateBackground1_label->setText(QString());
        pitch_label->setText(QApplication::translate("DisplayWidget", "pitch", Q_NULLPTR));
        roll_label->setText(QApplication::translate("DisplayWidget", "roll", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("DisplayWidget", "PID", Q_NULLPTR));
        pid_1RBtn->setText(QApplication::translate("DisplayWidget", "1\345\217\267", Q_NULLPTR));
        pid_2RBtn->setText(QApplication::translate("DisplayWidget", "2\345\217\267", Q_NULLPTR));
        pid_3RBtn->setText(QApplication::translate("DisplayWidget", "3\345\217\267", Q_NULLPTR));
        depth_RBtn->setText(QApplication::translate("DisplayWidget", "\346\267\261\345\272\246", Q_NULLPTR));
        yaw_RBtn->setText(QApplication::translate("DisplayWidget", "Yaw", Q_NULLPTR));
        roll_RBtn->setText(QApplication::translate("DisplayWidget", "Roll", Q_NULLPTR));
        pitch_RBtn->setText(QApplication::translate("DisplayWidget", "Pitch", Q_NULLPTR));
        label_33->setText(QApplication::translate("DisplayWidget", "P", Q_NULLPTR));
        label_34->setText(QApplication::translate("DisplayWidget", "I", Q_NULLPTR));
        label_35->setText(QApplication::translate("DisplayWidget", "D", Q_NULLPTR));
        label_36->setText(QApplication::translate("DisplayWidget", "Zero", Q_NULLPTR));
        label_37->setText(QApplication::translate("DisplayWidget", "Normal", Q_NULLPTR));
        PID_Btn->setText(QApplication::translate("DisplayWidget", "\347\241\256\345\256\232", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("DisplayWidget", "GroupBox", Q_NULLPTR));
        label_3->setText(QApplication::translate("DisplayWidget", "item", Q_NULLPTR));
        label_4->setText(QApplication::translate("DisplayWidget", "X", Q_NULLPTR));
        label_5->setText(QApplication::translate("DisplayWidget", "Y", Q_NULLPTR));
        label_6->setText(QApplication::translate("DisplayWidget", "angle", Q_NULLPTR));
        enter_Btn->setText(QApplication::translate("DisplayWidget", "\347\241\256\350\256\244", Q_NULLPTR));
        groupBox_8->setTitle(QString());
        setFormate_Btn->setText(QString());
        overFormate_Btn->setText(QString());
        dev2Power_label->setText(QString());
        dev3Power_label->setText(QString());
        dev2Roll_label->setText(QApplication::translate("DisplayWidget", "60", Q_NULLPTR));
        dev3Roll_label->setText(QApplication::translate("DisplayWidget", "60", Q_NULLPTR));
        dev2Pitch_label->setText(QApplication::translate("DisplayWidget", "60", Q_NULLPTR));
        dev3Pitch_label->setText(QApplication::translate("DisplayWidget", "60", Q_NULLPTR));
        dev2PowNum_label->setText(QApplication::translate("DisplayWidget", "90%", Q_NULLPTR));
        dev3PowNum_label->setText(QApplication::translate("DisplayWidget", "90%", Q_NULLPTR));
        formateState_Label->setText(QApplication::translate("DisplayWidget", "\347\274\226\351\230\237\347\212\266\346\200\201", Q_NULLPTR));
        check1_RadioButton->setText(QApplication::translate("DisplayWidget", "DEV1", Q_NULLPTR));
        check2_RadioButton->setText(QApplication::translate("DisplayWidget", "DEV2", Q_NULLPTR));
        check3_RadioButton->setText(QApplication::translate("DisplayWidget", "DEV3", Q_NULLPTR));
        check_Btn->setText(QString());
        form1_label->setText(QString());
        form2_label->setText(QString());
        form3_label->setText(QString());
        checkBox->setText(QApplication::translate("DisplayWidget", "CheckBox", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("DisplayWidget", "CheckBox", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DisplayWidget: public Ui_DisplayWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYWIDGET_H
