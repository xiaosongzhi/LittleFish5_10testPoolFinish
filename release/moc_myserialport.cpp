/****************************************************************************
** Meta object code from reading C++ file 'myserialport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../myserialport.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myserialport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MySerialPort_t {
    QByteArrayData data[26];
    char stringdata0[451];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MySerialPort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MySerialPort_t qt_meta_stringdata_MySerialPort = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MySerialPort"
QT_MOC_LITERAL(1, 13, 16), // "senserDataSignal"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 21), // "Data_STATEACK_TypeDef"
QT_MOC_LITERAL(4, 53, 6), // "sendId"
QT_MOC_LITERAL(5, 60, 16), // "sendFormateState"
QT_MOC_LITERAL(6, 77, 22), // "sendDeviceConnectState"
QT_MOC_LITERAL(7, 100, 9), // "DeviceNum"
QT_MOC_LITERAL(8, 110, 5), // "state"
QT_MOC_LITERAL(9, 116, 13), // "sendDeviceNum"
QT_MOC_LITERAL(10, 130, 19), // "receiveMoveDataSlot"
QT_MOC_LITERAL(11, 150, 17), // "Data_MOVE_TypeDef"
QT_MOC_LITERAL(12, 168, 20), // "receiveFormationSlot"
QT_MOC_LITERAL(13, 189, 20), // "Data_FORMATE_TypeDef"
QT_MOC_LITERAL(14, 210, 15), // "receiveCheckCmd"
QT_MOC_LITERAL(15, 226, 21), // "CheckYawAngle_TypeDef"
QT_MOC_LITERAL(16, 248, 13), // "receivePIDCmd"
QT_MOC_LITERAL(17, 262, 16), // "PIDDebug_TypeDef"
QT_MOC_LITERAL(18, 279, 13), // "rfCmdSendPool"
QT_MOC_LITERAL(19, 293, 18), // "triggleSenserState"
QT_MOC_LITERAL(20, 312, 13), // "SetFormateCmd"
QT_MOC_LITERAL(21, 326, 23), // "flushDeviceConnectState"
QT_MOC_LITERAL(22, 350, 18), // "readSerialPortData"
QT_MOC_LITERAL(23, 369, 24), // "on_deviceSet_Btn_clicked"
QT_MOC_LITERAL(24, 394, 26), // "on_flushSerial_Btn_clicked"
QT_MOC_LITERAL(25, 421, 29) // "on_openSerialPort_Btn_clicked"

    },
    "MySerialPort\0senserDataSignal\0\0"
    "Data_STATEACK_TypeDef\0sendId\0"
    "sendFormateState\0sendDeviceConnectState\0"
    "DeviceNum\0state\0sendDeviceNum\0"
    "receiveMoveDataSlot\0Data_MOVE_TypeDef\0"
    "receiveFormationSlot\0Data_FORMATE_TypeDef\0"
    "receiveCheckCmd\0CheckYawAngle_TypeDef\0"
    "receivePIDCmd\0PIDDebug_TypeDef\0"
    "rfCmdSendPool\0triggleSenserState\0"
    "SetFormateCmd\0flushDeviceConnectState\0"
    "readSerialPortData\0on_deviceSet_Btn_clicked\0"
    "on_flushSerial_Btn_clicked\0"
    "on_openSerialPort_Btn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MySerialPort[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   94,    2, 0x06 /* Public */,
       5,    1,   99,    2, 0x06 /* Public */,
       6,    2,  102,    2, 0x06 /* Public */,
       9,    3,  107,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  114,    2, 0x0a /* Public */,
      12,    1,  117,    2, 0x0a /* Public */,
      14,    2,  120,    2, 0x0a /* Public */,
      16,    2,  125,    2, 0x0a /* Public */,
      18,    0,  130,    2, 0x0a /* Public */,
      19,    0,  131,    2, 0x0a /* Public */,
      20,    0,  132,    2, 0x0a /* Public */,
      21,    0,  133,    2, 0x0a /* Public */,
      22,    0,  134,    2, 0x0a /* Public */,
      23,    0,  135,    2, 0x08 /* Private */,
      24,    0,  136,    2, 0x08 /* Private */,
      25,    0,  137,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::UChar,    2,    4,
    QMetaType::Void, QMetaType::UChar,    2,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar,    7,    8,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UChar,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, QMetaType::UChar, 0x80000000 | 15,    2,    2,
    QMetaType::Void, QMetaType::UChar, 0x80000000 | 17,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MySerialPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MySerialPort *_t = static_cast<MySerialPort *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->senserDataSignal((*reinterpret_cast< Data_STATEACK_TypeDef(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 1: _t->sendFormateState((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 2: _t->sendDeviceConnectState((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 3: _t->sendDeviceNum((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3]))); break;
        case 4: _t->receiveMoveDataSlot((*reinterpret_cast< Data_MOVE_TypeDef(*)>(_a[1]))); break;
        case 5: _t->receiveFormationSlot((*reinterpret_cast< Data_FORMATE_TypeDef(*)>(_a[1]))); break;
        case 6: _t->receiveCheckCmd((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< CheckYawAngle_TypeDef(*)>(_a[2]))); break;
        case 7: _t->receivePIDCmd((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< PIDDebug_TypeDef(*)>(_a[2]))); break;
        case 8: _t->rfCmdSendPool(); break;
        case 9: _t->triggleSenserState(); break;
        case 10: _t->SetFormateCmd(); break;
        case 11: _t->flushDeviceConnectState(); break;
        case 12: _t->readSerialPortData(); break;
        case 13: _t->on_deviceSet_Btn_clicked(); break;
        case 14: _t->on_flushSerial_Btn_clicked(); break;
        case 15: _t->on_openSerialPort_Btn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MySerialPort::*_t)(Data_STATEACK_TypeDef , quint8 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MySerialPort::senserDataSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MySerialPort::*_t)(quint8 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MySerialPort::sendFormateState)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MySerialPort::*_t)(quint8 , quint8 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MySerialPort::sendDeviceConnectState)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MySerialPort::*_t)(quint8 , quint8 , quint8 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MySerialPort::sendDeviceNum)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject MySerialPort::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MySerialPort.data,
      qt_meta_data_MySerialPort,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MySerialPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MySerialPort::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MySerialPort.stringdata0))
        return static_cast<void*>(const_cast< MySerialPort*>(this));
    return QWidget::qt_metacast(_clname);
}

int MySerialPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void MySerialPort::senserDataSignal(Data_STATEACK_TypeDef _t1, quint8 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MySerialPort::sendFormateState(quint8 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MySerialPort::sendDeviceConnectState(quint8 _t1, quint8 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MySerialPort::sendDeviceNum(quint8 _t1, quint8 _t2, quint8 _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
