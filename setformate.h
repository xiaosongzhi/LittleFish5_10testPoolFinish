#ifndef SETFORMATE_H
#define SETFORMATE_H

#include <QWidget>
#include "dataformat.h"

namespace Ui {
class SetFormate;
}

class SetFormate : public QWidget
{
    Q_OBJECT

public:
    explicit SetFormate(QWidget *parent = 0);
    ~SetFormate();

private slots:
    void on_formateCancel_Btn_clicked();

    void on_formateConfirm_Btn_clicked();
signals:
    void SetFormateSignal(Data_FORMATE_TypeDef);//数据可改的自由编队
private:
    Ui::SetFormate *ui;
};

#endif // SETFORMATE_H
