/****************************************************************************
** Meta object code from reading C++ file 'LayerTopMenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LayerTopMenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LayerTopMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LayerTopMenu_t {
    QByteArrayData data[12];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LayerTopMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LayerTopMenu_t qt_meta_stringdata_LayerTopMenu = {
    {
QT_MOC_LITERAL(0, 0, 12), // "LayerTopMenu"
QT_MOC_LITERAL(1, 13, 12), // "signalSelect"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "MENU_SELECT"
QT_MOC_LITERAL(4, 39, 4), // "data"
QT_MOC_LITERAL(5, 44, 19), // "on_cbKind_activated"
QT_MOC_LITERAL(6, 64, 5), // "index"
QT_MOC_LITERAL(7, 70, 20), // "on_txtId_textChanged"
QT_MOC_LITERAL(8, 91, 4), // "arg1"
QT_MOC_LITERAL(9, 96, 25), // "on_cbTaifexType_activated"
QT_MOC_LITERAL(10, 122, 11), // "btnKClicked"
QT_MOC_LITERAL(11, 134, 8) // "bChicked"

    },
    "LayerTopMenu\0signalSelect\0\0MENU_SELECT\0"
    "data\0on_cbKind_activated\0index\0"
    "on_txtId_textChanged\0arg1\0"
    "on_cbTaifexType_activated\0btnKClicked\0"
    "bChicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LayerTopMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   42,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,
       9,    1,   48,    2, 0x08 /* Private */,
      10,    1,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

void LayerTopMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LayerTopMenu *_t = static_cast<LayerTopMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalSelect((*reinterpret_cast< MENU_SELECT(*)>(_a[1]))); break;
        case 1: _t->on_cbKind_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_txtId_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_cbTaifexType_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->btnKClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LayerTopMenu::*_t)(MENU_SELECT );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LayerTopMenu::signalSelect)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject LayerTopMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LayerTopMenu.data,
      qt_meta_data_LayerTopMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LayerTopMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LayerTopMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LayerTopMenu.stringdata0))
        return static_cast<void*>(const_cast< LayerTopMenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int LayerTopMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void LayerTopMenu::signalSelect(MENU_SELECT _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
