#ifndef DATAFORMAT_H
#define DATAFORMAT_H
#include <QWidget>
#define PackageMaxLength 256
#define PackageMinLength 7
#define PackageHead 0xAA
#define PackageTail 0xBB
#define MasterID 0xFE //上帝ID
#define PublicID 0xFF//透传ID

//extern quint8 DEVICE1,DEVICE2,DEVICE3;

typedef struct
{
    float x,y,z;    //设备三维坐标
}Point3f_TypeDef;
typedef struct
{
    float x,y;    //设备二维坐标
}Point2f_TypeDef;

typedef struct
{
    int x,y,z;    //设备三维坐标
}Point3d_TypeDef;
typedef struct
{
    int x,y;    //设备二维坐标
}Point2d_TypeDef;
/*************************/
typedef struct
{
    quint8	Head;
    quint8  PackageLength;//整包长
    quint8	SendID;
    quint8	ReceivedID;
    quint8	Cmd;
    quint8	*Code;
    quint8	Tail;
}DataPackage_TypeDef;

typedef enum
{
    CMD_MOVE=0,//设备运动控制  no feedback
    CMD_STATE,//设备状态信息
    CMD_FORMATE,//队形
    CMD_LASERCONTROL,//激光透传
    CMD_PICTUREINF,//目标图片信息
    CMD_GPSCOORD,//GPS坐标  二维
    CMD_SOUNDCONTROL,//水听器采集数据控制
    CMD_DOWNLOADCONTROL,//程序加载控制
    CMD_CHECKYAWANGLE,  //方向校准
    CMD_PIDDEBUG        //PID调节
}TrainCmd;

typedef struct
{ /******方向或角度控制左负右正*****/
    short  Speed;	//正负100 //油门百分比 负数代表反向
    short  Direction;//正负100 //油门
    short  lightpower;//设备灯控 0-100 亮度
    short  Deepset;	//-100 ~ +100
    short  Roll;    //定侧倾角  默认 0度
    short Yaw;     //定向  ENABLE:开始锁定	DISABLE
}Data_MOVE_TypeDef;

typedef struct
{
    unsigned char Get;	//ENABLE	DISABLE
}Data_CMDGet_TypeDef;

typedef struct
{
    short Speed,Direction;//速度档位 方向
    short  Power;     //电量，0-5
    short  Temp;      //温度 +-128
    short  Hum;		 //湿度 百分之 0-100
    short  Roll;    	 //侧倾角
    short  Pitch;	 //俯仰角
    quint8 pointID;	 //编队ID
    short Yaw;       //航向角 0-360
    float V;	 //航速
    float NowDeepth; //当前深度 单位米
    Point2f_TypeDef Point;//设备坐标 无效坐标 (0,0)
}Data_STATEACK_TypeDef;



typedef struct
{
    Point3f_TypeDef pt;
    //float x,y,z;    //设备三维坐标
}Data_COORD_TypeDef;


typedef struct
{
    Point2f_TypeDef pt;
    //float longitude,latitude;     //设备GPS坐标
}Data_GPSCOORD_TypeDef;


typedef enum
{
    Formate_Line=0,//线型队形
    Formate_Auto //自动相对间隔
}Formate_3;

typedef enum
{
    DISABLE = 0,
    ENABLE
}ISABLE;

typedef struct
{
    unsigned char EnOrDisEN;	//ENABLE	DISABLE
    unsigned char formates;     //队形
    unsigned char PointID;		//决定Leader （ID=0） 其余顺延
    float Interval;     		//间距(米)
    unsigned char Angle;     			//角度 左负右正line： 0~180
}Data_FORMATE_TypeDef;

typedef struct
{
    unsigned char EnOrDisEN;	//ENABLE	DISABLE设备激光透传 开启，自动启动
}Data_LASERRet_TypeDef;
typedef struct
{
    unsigned char EnOrDisEN;	//ENABLE	DISABLE设备激光透传 开使 ：发透传包 计数  结束 +计数
}Data_LASERAck_TypeDef;

typedef struct
{   //左负右正
    int    directx;	//偏离方向
    int    directy;	//偏离方向
    float  length; 	//距离
}Data_PICTUREINF_TypeDef;

typedef struct
{
    quint8 RorWCro; 				//开始读所有数据，并清空缓存R:0  W:1  clear：2 NO:0XFF
    quint8 GetFS;	 				//水听器频谱数据控制  开启或结束获取，开启。触发一次并返回频谱
}Data_SOUNDCONTROL_TypeDef;

typedef struct
{
    unsigned char FScode[250];//512点fft
}Data_SOUNDFSACK_TypeDef;

typedef struct
{
    unsigned char EnOrDisEN;	//ENABLE	DISABLE
    long long	cnt;//包长度 计数
}Data_SOUNDAck_TypeDef;

typedef enum
{
    Boot_Reset=0,
    Boot_JumpToAPP
}BootloaderCmd;
typedef struct
{
    quint8 Cmd;     //设备程序加载控制
    quint8 Ask;     //对应命令回复
}Data_DOWNLOADCONTROL_TypeDef;

typedef struct
{
    float OffSetYaw;
}CheckYawAngle_TypeDef;

typedef enum
{
    PID_PITCH=0,
    PID_ROLL,
    PID_YAW,
    PID_DEEP
}PID_Debug;

typedef struct
{
    quint8 PID_ID;
    float KP;
    float TI;
    float TD;
    float NormalValue;
    float ZeroValue;
}PIDDebug_TypeDef;
#endif // DATAFORMAT_H
