/****************************************************************************
** Meta object code from reading C++ file 'roulette.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CasinoNight/roulette.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'roulette.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Roulette_t {
    QByteArrayData data[20];
    char stringdata0[385];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Roulette_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Roulette_t qt_meta_stringdata_Roulette = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Roulette"
QT_MOC_LITERAL(1, 9, 13), // "startRoulette"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "name"
QT_MOC_LITERAL(4, 29, 8), // "username"
QT_MOC_LITERAL(5, 38, 6), // "amount"
QT_MOC_LITERAL(6, 45, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(7, 67, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(8, 91, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(9, 115, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(10, 139, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(11, 163, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(12, 187, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(13, 211, 24), // "on_pushButton_13_clicked"
QT_MOC_LITERAL(14, 236, 24), // "on_pushButton_14_clicked"
QT_MOC_LITERAL(15, 261, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(16, 285, 24), // "on_pushButton_19_clicked"
QT_MOC_LITERAL(17, 310, 24), // "on_pushButton_18_clicked"
QT_MOC_LITERAL(18, 335, 24), // "on_pushButton_17_clicked"
QT_MOC_LITERAL(19, 360, 24) // "on_pushButton_15_clicked"

    },
    "Roulette\0startRoulette\0\0name\0username\0"
    "amount\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_4_clicked\0on_pushButton_8_clicked\0"
    "on_pushButton_7_clicked\0on_pushButton_6_clicked\0"
    "on_pushButton_13_clicked\0"
    "on_pushButton_14_clicked\0"
    "on_pushButton_5_clicked\0"
    "on_pushButton_19_clicked\0"
    "on_pushButton_18_clicked\0"
    "on_pushButton_17_clicked\0"
    "on_pushButton_15_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Roulette[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   89,    2, 0x0a /* Public */,
       6,    0,   96,    2, 0x08 /* Private */,
       7,    0,   97,    2, 0x08 /* Private */,
       8,    0,   98,    2, 0x08 /* Private */,
       9,    0,   99,    2, 0x08 /* Private */,
      10,    0,  100,    2, 0x08 /* Private */,
      11,    0,  101,    2, 0x08 /* Private */,
      12,    0,  102,    2, 0x08 /* Private */,
      13,    0,  103,    2, 0x08 /* Private */,
      14,    0,  104,    2, 0x08 /* Private */,
      15,    0,  105,    2, 0x08 /* Private */,
      16,    0,  106,    2, 0x08 /* Private */,
      17,    0,  107,    2, 0x08 /* Private */,
      18,    0,  108,    2, 0x08 /* Private */,
      19,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void Roulette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Roulette *_t = static_cast<Roulette *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startRoulette((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 4: _t->on_pushButton_4_clicked(); break;
        case 5: _t->on_pushButton_8_clicked(); break;
        case 6: _t->on_pushButton_7_clicked(); break;
        case 7: _t->on_pushButton_6_clicked(); break;
        case 8: _t->on_pushButton_13_clicked(); break;
        case 9: _t->on_pushButton_14_clicked(); break;
        case 10: _t->on_pushButton_5_clicked(); break;
        case 11: _t->on_pushButton_19_clicked(); break;
        case 12: _t->on_pushButton_18_clicked(); break;
        case 13: _t->on_pushButton_17_clicked(); break;
        case 14: _t->on_pushButton_15_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Roulette::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Roulette.data,
    qt_meta_data_Roulette,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Roulette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Roulette::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Roulette.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Roulette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
