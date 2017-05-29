/****************************************************************************
** Meta object code from reading C++ file 'purdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../sql2/purdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'purdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_purDialog_t {
    QByteArrayData data[13];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_purDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_purDialog_t qt_meta_stringdata_purDialog = {
    {
QT_MOC_LITERAL(0, 0, 9), // "purDialog"
QT_MOC_LITERAL(1, 10, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(4, 59, 10), // "sampleslot"
QT_MOC_LITERAL(5, 70, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(6, 92, 8), // "qchanged"
QT_MOC_LITERAL(7, 101, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(8, 125, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(9, 149, 17), // "doubleClickedSlot"
QT_MOC_LITERAL(10, 167, 5), // "index"
QT_MOC_LITERAL(11, 173, 18), // "doubleClickedSlot2"
QT_MOC_LITERAL(12, 192, 23) // "on_pushButton_6_clicked"

    },
    "purDialog\0on_pushButton_2_clicked\0\0"
    "on_pushButton_4_clicked\0sampleslot\0"
    "on_pushButton_clicked\0qchanged\0"
    "on_pushButton_3_clicked\0on_pushButton_5_clicked\0"
    "doubleClickedSlot\0index\0doubleClickedSlot2\0"
    "on_pushButton_6_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_purDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    1,   71,    2, 0x08 /* Private */,
      11,    1,   74,    2, 0x08 /* Private */,
      12,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   10,
    QMetaType::Void, QMetaType::QModelIndex,   10,
    QMetaType::Void,

       0        // eod
};

void purDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        purDialog *_t = static_cast<purDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_2_clicked(); break;
        case 1: _t->on_pushButton_4_clicked(); break;
        case 2: _t->sampleslot(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->qchanged(); break;
        case 5: _t->on_pushButton_3_clicked(); break;
        case 6: _t->on_pushButton_5_clicked(); break;
        case 7: _t->doubleClickedSlot((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 8: _t->doubleClickedSlot2((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 9: _t->on_pushButton_6_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject purDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_purDialog.data,
      qt_meta_data_purDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *purDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *purDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_purDialog.stringdata0))
        return static_cast<void*>(const_cast< purDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int purDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
