/********************************************************************************
** Form generated from reading UI file 'setformate.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETFORMATE_H
#define UI_SETFORMATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetFormate
{
public:
    QPushButton *formateConfirm_Btn;
    QLabel *label;
    QRadioButton *line_RadioButton;
    QRadioButton *angle_RadioButton;
    QRadioButton *radioButton_3;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *Interval_LineEdit;
    QLineEdit *angle_LineEdit;
    QLabel *label_4;
    QPushButton *formateCancel_Btn;

    void setupUi(QWidget *SetFormate)
    {
        if (SetFormate->objectName().isEmpty())
            SetFormate->setObjectName(QStringLiteral("SetFormate"));
        SetFormate->resize(400, 175);
        formateConfirm_Btn = new QPushButton(SetFormate);
        formateConfirm_Btn->setObjectName(QStringLiteral("formateConfirm_Btn"));
        formateConfirm_Btn->setGeometry(QRect(250, 138, 75, 23));
        label = new QLabel(SetFormate);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 59, 41, 21));
        line_RadioButton = new QRadioButton(SetFormate);
        line_RadioButton->setObjectName(QStringLiteral("line_RadioButton"));
        line_RadioButton->setGeometry(QRect(80, 62, 71, 16));
        angle_RadioButton = new QRadioButton(SetFormate);
        angle_RadioButton->setObjectName(QStringLiteral("angle_RadioButton"));
        angle_RadioButton->setGeometry(QRect(170, 62, 61, 16));
        radioButton_3 = new QRadioButton(SetFormate);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(260, 62, 89, 16));
        label_2 = new QLabel(SetFormate);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 102, 41, 21));
        label_3 = new QLabel(SetFormate);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(201, 102, 41, 21));
        Interval_LineEdit = new QLineEdit(SetFormate);
        Interval_LineEdit->setObjectName(QStringLiteral("Interval_LineEdit"));
        Interval_LineEdit->setGeometry(QRect(60, 102, 113, 20));
        angle_LineEdit = new QLineEdit(SetFormate);
        angle_LineEdit->setObjectName(QStringLiteral("angle_LineEdit"));
        angle_LineEdit->setGeometry(QRect(240, 102, 113, 20));
        label_4 = new QLabel(SetFormate);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 10, 171, 31));
        label_4->setStyleSheet(QStringLiteral("font: 75 12pt \"Aharoni\";"));
        label_4->setAlignment(Qt::AlignCenter);
        formateCancel_Btn = new QPushButton(SetFormate);
        formateCancel_Btn->setObjectName(QStringLiteral("formateCancel_Btn"));
        formateCancel_Btn->setGeometry(QRect(70, 140, 75, 23));

        retranslateUi(SetFormate);

        QMetaObject::connectSlotsByName(SetFormate);
    } // setupUi

    void retranslateUi(QWidget *SetFormate)
    {
        SetFormate->setWindowTitle(QApplication::translate("SetFormate", "Form", Q_NULLPTR));
        formateConfirm_Btn->setText(QApplication::translate("SetFormate", "\347\241\256\350\256\244", Q_NULLPTR));
        label->setText(QApplication::translate("SetFormate", "\351\230\237\345\275\242", Q_NULLPTR));
        line_RadioButton->setText(QApplication::translate("SetFormate", "\347\272\277\345\236\213", Q_NULLPTR));
        angle_RadioButton->setText(QApplication::translate("SetFormate", "\350\247\222\345\275\242", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("SetFormate", "RadioButton", Q_NULLPTR));
        label_2->setText(QApplication::translate("SetFormate", "\351\227\264\350\267\235", Q_NULLPTR));
        label_3->setText(QApplication::translate("SetFormate", "\350\247\222\345\272\246", Q_NULLPTR));
        label_4->setText(QApplication::translate("SetFormate", "\347\274\226\351\230\237\345\217\202\346\225\260\346\216\247\345\210\266", Q_NULLPTR));
        formateCancel_Btn->setText(QApplication::translate("SetFormate", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SetFormate: public Ui_SetFormate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETFORMATE_H
