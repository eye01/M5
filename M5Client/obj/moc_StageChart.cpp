/****************************************************************************
** Meta object code from reading C++ file 'StageChart.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../StageChart.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StageChart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StageChart_t {
    QByteArrayData data[10];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StageChart_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StageChart_t qt_meta_stringdata_StageChart = {
    {
QT_MOC_LITERAL(0, 0, 10), // "StageChart"
QT_MOC_LITERAL(1, 11, 11), // "slotTopMenu"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "MENU_SELECT"
QT_MOC_LITERAL(4, 36, 4), // "menu"
QT_MOC_LITERAL(5, 41, 8), // "slotTick"
QT_MOC_LITERAL(6, 50, 5), // "bTick"
QT_MOC_LITERAL(7, 56, 5), // "sTick"
QT_MOC_LITERAL(8, 62, 13), // "slotTickStock"
QT_MOC_LITERAL(9, 76, 14) // "slotTickFaitex"

    },
    "StageChart\0slotTopMenu\0\0MENU_SELECT\0"
    "menu\0slotTick\0bTick\0sTick\0slotTickStock\0"
    "slotTickFaitex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StageChart[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       5,    1,   42,    2, 0x0a /* Public */,
       5,    1,   45,    2, 0x0a /* Public */,
       8,    1,   48,    2, 0x0a /* Public */,
       9,    1,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QByteArray,    6,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void StageChart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StageChart *_t = static_cast<StageChart *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotTopMenu((*reinterpret_cast< MENU_SELECT(*)>(_a[1]))); break;
        case 1: _t->slotTick((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->slotTick((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->slotTickStock((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->slotTickFaitex((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject StageChart::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_StageChart.data,
      qt_meta_data_StageChart,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StageChart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StageChart::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StageChart.stringdata0))
        return static_cast<void*>(const_cast< StageChart*>(this));
    return QWidget::qt_metacast(_clname);
}

int StageChart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
