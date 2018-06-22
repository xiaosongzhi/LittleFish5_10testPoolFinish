#include "setformate.h"
#include "ui_setformate.h"

SetFormate::SetFormate(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SetFormate)
{
    ui->setupUi(this);
}

SetFormate::~SetFormate()
{
    delete ui;
}

void SetFormate::on_formateCancel_Btn_clicked()
{
    this->close();
}

void SetFormate::on_formateConfirm_Btn_clicked()
{
    //此条指令每条鱼都要获取一次

    Data_FORMATE_TypeDef FreeFormate;

    FreeFormate.Angle = ui->angle_LineEdit->text().toShort();
    FreeFormate.Interval = ui->Interval_LineEdit->text().toFloat();
    FreeFormate.EnOrDisEN = ENABLE;

    if(ui->angle_RadioButton->isChecked())
        FreeFormate.formates = Formate_Auto;
    else if(ui->line_RadioButton->isChecked())
        FreeFormate.formates = Formate_Line;

    FreeFormate.PointID = 0;
    //需要更改两个参数（1）EnOrDisEN  (2)PointID
    emit SetFormateSignal(FreeFormate);

    this->close();

}




