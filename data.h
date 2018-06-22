#ifndef DATA_H
#define DATA_H

#include <QWidget>

extern QByteArray QString2Hex(QString str);
extern QString ShowHex(QByteArray str);
extern QString Convert4Hex(QByteArray str);
extern bool check(QString str);
extern QString numtohex(QString str);//获取lineEdit中的值并以16进制进行发送
extern QString buwei(QString str,int num,int weizhi);//补位
extern bool check_num(QString str);
extern QString hexstr_to_intstr(QString);
extern QString zhuanyi(QString str);
extern int num_th(int num,int th);
extern int hex_to_int_sum(QString str);

void extern mySleep(int msec);

#endif // DATA_H
