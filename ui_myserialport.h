/********************************************************************************
** Form generated from reading UI file 'myserialport.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSERIALPORT_H
#define UI_MYSERIALPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MySerialPort
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *device1_LineEdit;
    QLineEdit *device2_Lineedit;
    QLineEdit *device3_LineEdit;
    QPushButton *deviceSet_Btn;
    QGroupBox *groupBox_2;
    QComboBox *SerialPort_ComboBox;
    QComboBox *baud_SerialPort;
    QPushButton *flushSerial_Btn;
    QPushButton *openSerialPort_Btn;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *groupBox_3;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *receiveSerialPort_ComboBox;
    QComboBox *baudReceiveSeriaolport_ComboBox;
    QPushButton *flushReceiveSerialPort_Btn;
    QPushButton *openReceiveSerialPort_Btn;

    void setupUi(QWidget *MySerialPort)
    {
        if (MySerialPort->objectName().isEmpty())
            MySerialPort->setObjectName(QStringLiteral("MySerialPort"));
        MySerialPort->resize(543, 391);
        MySerialPort->setStyleSheet(QLatin1String("background-color: rgb(151, 156, 255);\n"
"color: rgb(0, 170, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        groupBox = new QGroupBox(MySerialPort);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 228, 231, 131));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 32, 60, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(9, 63, 60, 12));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(9, 94, 60, 12));
        device1_LineEdit = new QLineEdit(groupBox);
        device1_LineEdit->setObjectName(QStringLiteral("device1_LineEdit"));
        device1_LineEdit->setGeometry(QRect(92, 30, 61, 20));
        device2_Lineedit = new QLineEdit(groupBox);
        device2_Lineedit->setObjectName(QStringLiteral("device2_Lineedit"));
        device2_Lineedit->setGeometry(QRect(92, 60, 61, 20));
        device3_LineEdit = new QLineEdit(groupBox);
        device3_LineEdit->setObjectName(QStringLiteral("device3_LineEdit"));
        device3_LineEdit->setGeometry(QRect(92, 90, 61, 20));
        deviceSet_Btn = new QPushButton(groupBox);
        deviceSet_Btn->setObjectName(QStringLiteral("deviceSet_Btn"));
        deviceSet_Btn->setGeometry(QRect(162, 60, 61, 23));
        groupBox_2 = new QGroupBox(MySerialPort);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 21, 231, 171));
        groupBox_2->setStyleSheet(QStringLiteral(""));
        SerialPort_ComboBox = new QComboBox(groupBox_2);
        SerialPort_ComboBox->setObjectName(QStringLiteral("SerialPort_ComboBox"));
        SerialPort_ComboBox->setGeometry(QRect(80, 30, 111, 22));
        baud_SerialPort = new QComboBox(groupBox_2);
        baud_SerialPort->setObjectName(QStringLiteral("baud_SerialPort"));
        baud_SerialPort->setGeometry(QRect(80, 70, 111, 22));
        flushSerial_Btn = new QPushButton(groupBox_2);
        flushSerial_Btn->setObjectName(QStringLiteral("flushSerial_Btn"));
        flushSerial_Btn->setGeometry(QRect(20, 120, 75, 23));
        openSerialPort_Btn = new QPushButton(groupBox_2);
        openSerialPort_Btn->setObjectName(QStringLiteral("openSerialPort_Btn"));
        openSerialPort_Btn->setGeometry(QRect(120, 120, 75, 23));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(29, 30, 41, 21));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(25, 70, 54, 21));
        groupBox_3 = new QGroupBox(MySerialPort);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(280, 20, 221, 171));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 30, 41, 16));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 70, 54, 16));
        receiveSerialPort_ComboBox = new QComboBox(groupBox_3);
        receiveSerialPort_ComboBox->setObjectName(QStringLiteral("receiveSerialPort_ComboBox"));
        receiveSerialPort_ComboBox->setGeometry(QRect(80, 27, 111, 22));
        baudReceiveSeriaolport_ComboBox = new QComboBox(groupBox_3);
        baudReceiveSeriaolport_ComboBox->setObjectName(QStringLiteral("baudReceiveSeriaolport_ComboBox"));
        baudReceiveSeriaolport_ComboBox->setGeometry(QRect(80, 67, 111, 22));
        flushReceiveSerialPort_Btn = new QPushButton(groupBox_3);
        flushReceiveSerialPort_Btn->setObjectName(QStringLiteral("flushReceiveSerialPort_Btn"));
        flushReceiveSerialPort_Btn->setGeometry(QRect(20, 120, 75, 23));
        openReceiveSerialPort_Btn = new QPushButton(groupBox_3);
        openReceiveSerialPort_Btn->setObjectName(QStringLiteral("openReceiveSerialPort_Btn"));
        openReceiveSerialPort_Btn->setGeometry(QRect(120, 120, 75, 23));

        retranslateUi(MySerialPort);

        QMetaObject::connectSlotsByName(MySerialPort);
    } // setupUi

    void retranslateUi(QWidget *MySerialPort)
    {
        MySerialPort->setWindowTitle(QApplication::translate("MySerialPort", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MySerialPort", "\347\274\226\351\230\237\350\256\276\345\244\207\350\256\276\347\275\256", Q_NULLPTR));
        label->setText(QApplication::translate("MySerialPort", "DEVICE1", Q_NULLPTR));
        label_2->setText(QApplication::translate("MySerialPort", "DEVICE2", Q_NULLPTR));
        label_3->setText(QApplication::translate("MySerialPort", "DEVICE3", Q_NULLPTR));
        deviceSet_Btn->setText(QApplication::translate("MySerialPort", "\347\241\256\350\256\244", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MySerialPort", "\345\217\221\351\200\201\344\270\262\345\217\243", Q_NULLPTR));
        baud_SerialPort->clear();
        baud_SerialPort->insertItems(0, QStringList()
         << QApplication::translate("MySerialPort", "115200", Q_NULLPTR)
         << QApplication::translate("MySerialPort", "9600", Q_NULLPTR)
        );
        flushSerial_Btn->setText(QApplication::translate("MySerialPort", "\345\210\267\346\226\260\344\270\262\345\217\243", Q_NULLPTR));
        openSerialPort_Btn->setText(QApplication::translate("MySerialPort", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        label_4->setText(QApplication::translate("MySerialPort", "\344\270\262\345\217\243", Q_NULLPTR));
        label_5->setText(QApplication::translate("MySerialPort", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MySerialPort", "\346\216\245\346\224\266\344\270\262\345\217\243", Q_NULLPTR));
        label_6->setText(QApplication::translate("MySerialPort", "\344\270\262\345\217\243", Q_NULLPTR));
        label_7->setText(QApplication::translate("MySerialPort", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        flushReceiveSerialPort_Btn->setText(QApplication::translate("MySerialPort", "\345\210\267\346\226\260\344\270\262\345\217\243", Q_NULLPTR));
        openReceiveSerialPort_Btn->setText(QApplication::translate("MySerialPort", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MySerialPort: public Ui_MySerialPort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSERIALPORT_H
