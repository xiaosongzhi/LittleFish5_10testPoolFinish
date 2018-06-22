/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[12];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 12), // "sendBtnState"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 16), // "sendMoveDataSlot"
QT_MOC_LITERAL(4, 38, 17), // "Data_MOVE_TypeDef"
QT_MOC_LITERAL(5, 56, 24), // "handleQJoystickAxisEvent"
QT_MOC_LITERAL(6, 81, 19), // "QJoystickAxisEvent*"
QT_MOC_LITERAL(7, 101, 5), // "event"
QT_MOC_LITERAL(8, 107, 26), // "handleQJoystickButtonEvent"
QT_MOC_LITERAL(9, 134, 21), // "QJoystickButtonEvent*"
QT_MOC_LITERAL(10, 156, 12), // "sendMoveData"
QT_MOC_LITERAL(11, 169, 11) // "getBtnState"

    },
    "Widget\0sendBtnState\0\0sendMoveDataSlot\0"
    "Data_MOVE_TypeDef\0handleQJoystickAxisEvent\0"
    "QJoystickAxisEvent*\0event\0"
    "handleQJoystickButtonEvent\0"
    "QJoystickButtonEvent*\0sendMoveData\0"
    "getBtnState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   50,    2, 0x08 /* Private */,
       8,    1,   53,    2, 0x08 /* Private */,
      10,    0,   56,    2, 0x08 /* Private */,
      11,    1,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UChar,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar,    2,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendBtnState((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 1: _t->sendMoveDataSlot((*reinterpret_cast< Data_MOVE_TypeDef(*)>(_a[1]))); break;
        case 2: _t->handleQJoystickAxisEvent((*reinterpret_cast< QJoystickAxisEvent*(*)>(_a[1]))); break;
        case 3: _t->handleQJoystickButtonEvent((*reinterpret_cast< QJoystickButtonEvent*(*)>(_a[1]))); break;
        case 4: _t->sendMoveData(); break;
        case 5: _t->getBtnState((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Widget::*_t)(quint8 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::sendBtnState)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Widget::*_t)(Data_MOVE_TypeDef );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::sendMoveDataSlot)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Widget::sendBtnState(quint8 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Widget::sendMoveDataSlot(Data_MOVE_TypeDef _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
