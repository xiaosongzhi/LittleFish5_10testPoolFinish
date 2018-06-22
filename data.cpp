#include "data.h"
#include <QDebug>
#include <QTime>
#include <QApplication>

//将1-9 a-f转化成对于那个的整数
char ConvertHexChar(char ch)
{
    if((ch>='0')&&(ch<='9'))
        return ch - 0x30;
    else if((ch >= 'A') && (ch<='F'))
        return ch - 'A'+10;
    else if((ch>= 'a')&&(ch<='f'))
        return ch - 'a'+10;
    else
        return -1;
}
bool check(QString  str ) //校验和
{
    bool ok;
    int num = 2*(str.mid(2,2)).toInt(&ok,16);

    int sum = (str.mid(str.length()-10,8)).toInt(&ok,16);

    int check_sum = 0;
    for(int i = 0; i <= num;i++)
    {
        check_sum += (str.mid(2*(i+1),2)).toInt(&ok,16);
    }

    if(sum == check_sum)
    {
        return true;
    }
    else
    {
        return false;
    }

}

/*****************数据转义******************/
QString zhuanyi(QString str)  //数据转义
{

    int length = str.length();    //数据总长度
    QString  result;
    QList<QString> list;
    if(str.mid(0,2)=="AA" && str.mid(length-2,2)=="BB" /*&& str.mid(14+hex_length,2) == "BB"*/)
    {
        QString useful_num = str.mid(2,length - 4);

        for(int i = 0; i < useful_num.length()/2; i++)
        {
            QString temp;

            temp = useful_num.mid(2*i,2);

            if(temp == "AA")
            {
                temp = "7DEA";
            }
            else if(temp == "BB")
            {
                temp = "7DFB";

            }

            else if(temp == "7D")
            {
                temp = "7D3D";
            }

            list<<temp;
        }

        for(int i = 0;i < list.length();++i)
        {
            result += list.at(i);
        }
    }
    qDebug()<<"list ="<<list;


    return "AA" + result + "BB";
}



// 将字符型按照每两位转换成16进制
QByteArray QString2Hex(QString str)
{
    QByteArray senddata;
    int hexdata,lowhexdata;
    int hexdatalen = 0;
    int len = str.length();
    senddata.resize(len/2);         // 重新调整字符数组的大小
    char lstr,hstr;
    int i;
    for(i = 0;i<len;)
    {
        hstr = str[i].toLatin1();   // 从字符数组中取出字符
        if(hstr==' ')
        {
            i++;
            continue;
        }
        i++;
        if(i>=len)
            break;

        lstr = str[i].toLatin1();
        hexdata = ConvertHexChar(hstr);
        lowhexdata = ConvertHexChar(lstr);
        if((hexdata==16) || (lowhexdata==16))
            break;
        else
            hexdata = hexdata*16 + lowhexdata;  // 转换成10进制
        i++;
        senddata[hexdatalen]=(char)hexdata;
        hexdatalen++;
    }

    senddata.resize(hexdatalen);
    return senddata;
}

QString hexstr_to_intstr(QString str)//只允许两位
{
    bool ok;
    int temp = str.toInt(&ok,16);
    QString ret = QString::number(temp);
    if(ret.length()<2)
        return buwei(ret,2,1);
    else
        return ret;

}

/*************** n的m次方 ******************/
int num_th(int num,int th)//num 底数，th指数
{
    int x = 1;
    for(int i = 0; i < th ; i++)
    {
        x *= num;
    }
    return x;
}

/*************************
 * 从下位机接收到数据进行解析
 * 下位机按字节发送，并不在乎数据真实数值
 *
 * 上位机进行解析，将数据还原
 * 首先还原成QString
 * 其次还原成int,然后再将int进行拼接
 * Point  最大支持4个字节，因为所接受的数据类型为 int，当大于4个字节时，会出现越界
***************************/

int hex_to_int_sum(QString str)
{
    bool ok;

    int str_num = str.length()/2;
    int num[str_num] = {0};
    int sum = 0;

    for(int i = 0;i < str_num; i++)
    {
        num[i] = str.mid(2*i,2).toInt(&ok,16);

    }


    for(int i = 0;i < str_num; i++)
    {

        sum += num[i]*num_th(10,str_num*2 - 2*(i+1)); //此处调用了自己编写的指数函数

    }

    QString sum_str = QString::number(sum); //当需要返回QString类型时，可直接将sum_str返回

    return sum;
}

/*************判断是否为阿拉伯数字******************/
bool check_num(QString str)
{
    bool ok = true;
    for(int i = 0;i < str.length();i++)
    {

        if(str.mid(i,1)>'9'||str.mid(i,1)<'0')
        {
            ok = false;
            break;
        }
    }

    return ok;
}

/**************将一串十进制字符串按每两位转成16进制******************/
QString numtohex(QString str)
{
    if(str.length()%2 == 0)
    {
        str = str;
    }
    else if(str.length()%2 == 1)
    {
        str = "0"+str;
    }
   QString str_hex;
   QString str_hex_chai[str.length()/2];
   QString str_chai[str.length()/2];
   for(int i = 0;i < str.length()/2;i++)
   {
       str_chai[i] = str.mid(2*i,2);

       str_hex_chai[i] = QString::number(str_chai[i].toInt(),16).toUpper();
       if(str_hex_chai[i].length()<2)
       {
           str_hex_chai[i] = "0" + str_hex_chai[i];
       }
   }
   for(int i =0;i < str.length()/2;i++)
   {
       str_hex += str_hex_chai[i];
   }

return str_hex;
}
//补位函数
QString buwei(QString str,int num,int position)
{
    QString add = "";
    for(int i = 0;i< num-str.length();i++)
    {
        add += "0";
    }
    if(position == 1)//前补位
    {
        str = add + str;
    }
    else if(position == 0)//后补位
    {
       str = str + add;
    }
    return str;

}
/*********************************/
// 将接收到的16进制QByteArray转化成对应的QString 16进制
// 以字符串的的形式显示出字符数组
QString ShowHex(QByteArray str)
{
    QDataStream out(&str,QIODevice::ReadWrite);// 将str中的数据读到out里
    QString buf;

    while(!out.atEnd())
    {
        qint8 outChar = 0;
        out>>outChar;//将out流中的数据输出到outChar中
        //两字符宽度
        QString str = QString("%1").arg(outChar&0xFF,2,16,QLatin1Char('0')).toUpper()+QString("");
        buf += str;
    }
    return buf;
}

 //将接收的一串QbyteArray类型的16进制，每两个16进制转化为1字节的16进制的字符串
 QString Convert4Hex(QByteArray str)
 {
     QDataStream out(&str,QIODevice::ReadWrite);
     QString buf;
     while(!out.atEnd())
     {
         qint16 outChar = 0;
         out>>outChar;
         QString str = QString("%1").arg(outChar&0xFFFF,4,16,QLatin1Char('0')).toUpper()+QString(" ");
         buf += str;
     }
     return buf;

 }

 void  mySleep(int msec)
 {
     QTime reachTime = QTime::currentTime().addMSecs(msec);
     while(QTime::currentTime()<reachTime)
     QCoreApplication::processEvents(QEventLoop::AllEvents,100);

 }
