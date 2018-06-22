/****************************************************************************
** Meta object code from reading C++ file 'displaywidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../displaywidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'displaywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DisplayWidget_t {
    QByteArrayData data[21];
    char stringdata0[386];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DisplayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DisplayWidget_t qt_meta_stringdata_DisplayWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DisplayWidget"
QT_MOC_LITERAL(1, 14, 16), // "SetFormateSignal"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 20), // "Data_FORMATE_TypeDef"
QT_MOC_LITERAL(4, 53, 12), // "sendCheckCmd"
QT_MOC_LITERAL(5, 66, 21), // "CheckYawAngle_TypeDef"
QT_MOC_LITERAL(6, 88, 10), // "sendPIDCmd"
QT_MOC_LITERAL(7, 99, 16), // "PIDDebug_TypeDef"
QT_MOC_LITERAL(8, 116, 14), // "senserDataSlot"
QT_MOC_LITERAL(9, 131, 21), // "Data_STATEACK_TypeDef"
QT_MOC_LITERAL(10, 153, 18), // "receiveFormateSlot"
QT_MOC_LITERAL(11, 172, 19), // "receiveFormateState"
QT_MOC_LITERAL(12, 192, 25), // "receiveDeviceConnectState"
QT_MOC_LITERAL(13, 218, 16), // "receiveDeviceNum"
QT_MOC_LITERAL(14, 235, 25), // "on_setFormate_Btn_clicked"
QT_MOC_LITERAL(15, 261, 31), // "on_serialPortConfig_Btn_clicked"
QT_MOC_LITERAL(16, 293, 7), // "flushUI"
QT_MOC_LITERAL(17, 301, 20), // "on_enter_Btn_clicked"
QT_MOC_LITERAL(18, 322, 20), // "on_check_Btn_clicked"
QT_MOC_LITERAL(19, 343, 18), // "on_PID_Btn_clicked"
QT_MOC_LITERAL(20, 362, 23) // "on_radioButton1_clicked"

    },
    "DisplayWidget\0SetFormateSignal\0\0"
    "Data_FORMATE_TypeDef\0sendCheckCmd\0"
    "CheckYawAngle_TypeDef\0sendPIDCmd\0"
    "PIDDebug_TypeDef\0senserDataSlot\0"
    "Data_STATEACK_TypeDef\0receiveFormateSlot\0"
    "receiveFormateState\0receiveDeviceConnectState\0"
    "receiveDeviceNum\0on_setFormate_Btn_clicked\0"
    "on_serialPortConfig_Btn_clicked\0flushUI\0"
    "on_enter_Btn_clicked\0on_check_Btn_clicked\0"
    "on_PID_Btn_clicked\0on_radioButton1_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DisplayWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    2,   92,    2, 0x06 /* Public */,
       6,    2,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,  102,    2, 0x0a /* Public */,
      10,    1,  107,    2, 0x0a /* Public */,
      11,    1,  110,    2, 0x0a /* Public */,
      12,    2,  113,    2, 0x0a /* Public */,
      13,    3,  118,    2, 0x0a /* Public */,
      14,    0,  125,    2, 0x08 /* Private */,
      15,    0,  126,    2, 0x08 /* Private */,
      16,    0,  127,    2, 0x08 /* Private */,
      17,    0,  128,    2, 0x08 /* Private */,
      18,    0,  129,    2, 0x08 /* Private */,
      19,    0,  130,    2, 0x08 /* Private */,
      20,    0,  131,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::UChar, 0x80000000 | 5,    2,    2,
    QMetaType::Void, QMetaType::UChar, 0x80000000 | 7,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9, QMetaType::UChar,    2,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::UChar,    2,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar,    2,    2,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UChar,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DisplayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DisplayWidget *_t = static_cast<DisplayWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetFormateSignal((*reinterpret_cast< Data_FORMATE_TypeDef(*)>(_a[1]))); break;
        case 1: _t->sendCheckCmd((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< CheckYawAngle_TypeDef(*)>(_a[2]))); break;
        case 2: _t->sendPIDCmd((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< PIDDebug_TypeDef(*)>(_a[2]))); break;
        case 3: _t->senserDataSlot((*reinterpret_cast< Data_STATEACK_TypeDef(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 4: _t->receiveFormateSlot((*reinterpret_cast< Data_FORMATE_TypeDef(*)>(_a[1]))); break;
        case 5: _t->receiveFormateState((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 6: _t->receiveDeviceConnectState((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 7: _t->receiveDeviceNum((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3]))); break;
        case 8: _t->on_setFormate_Btn_clicked(); break;
        case 9: _t->on_serialPortConfig_Btn_clicked(); break;
        case 10: _t->flushUI(); break;
        case 11: _t->on_enter_Btn_clicked(); break;
        case 12: _t->on_check_Btn_clicked(); break;
        case 13: _t->on_PID_Btn_clicked(); break;
        case 14: _t->on_radioButton1_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DisplayWidget::*_t)(Data_FORMATE_TypeDef );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DisplayWidget::SetFormateSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DisplayWidget::*_t)(quint8 , CheckYawAngle_TypeDef );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DisplayWidget::sendCheckCmd)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DisplayWidget::*_t)(quint8 , PIDDebug_TypeDef );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DisplayWidget::sendPIDCmd)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject DisplayWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DisplayWidget.data,
      qt_meta_data_DisplayWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DisplayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DisplayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DisplayWidget.stringdata0))
        return static_cast<void*>(const_cast< DisplayWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int DisplayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void DisplayWidget::SetFormateSignal(Data_FORMATE_TypeDef _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DisplayWidget::sendCheckCmd(quint8 _t1, CheckYawAngle_TypeDef _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DisplayWidget::sendPIDCmd(quint8 _t1, PIDDebug_TypeDef _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
