/****************************************************************************
** Meta object code from reading C++ file 'level_2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Game/level_2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'level_2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Level_2_t {
    QByteArrayData data[15];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Level_2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Level_2_t qt_meta_stringdata_Level_2 = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Level_2"
QT_MOC_LITERAL(1, 8, 6), // "update"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 10), // "startLevel"
QT_MOC_LITERAL(4, 27, 10), // "pauseLevel"
QT_MOC_LITERAL(5, 38, 11), // "resumeLevel"
QT_MOC_LITERAL(6, 50, 12), // "addRectangle"
QT_MOC_LITERAL(7, 63, 9), // "addCircle"
QT_MOC_LITERAL(8, 73, 11), // "addTriangle"
QT_MOC_LITERAL(9, 85, 5), // "reset"
QT_MOC_LITERAL(10, 91, 9), // "quitLevel"
QT_MOC_LITERAL(11, 101, 10), // "rotateLeft"
QT_MOC_LITERAL(12, 112, 11), // "rotateRight"
QT_MOC_LITERAL(13, 124, 7), // "getTime"
QT_MOC_LITERAL(14, 132, 16) // "highscoreCounter"

    },
    "Level_2\0update\0\0startLevel\0pauseLevel\0"
    "resumeLevel\0addRectangle\0addCircle\0"
    "addTriangle\0reset\0quitLevel\0rotateLeft\0"
    "rotateRight\0getTime\0highscoreCounter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Level_2[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    0,   84,    2, 0x0a /* Public */,
       8,    0,   85,    2, 0x0a /* Public */,
       9,    0,   86,    2, 0x0a /* Public */,
      10,    0,   87,    2, 0x0a /* Public */,
      11,    0,   88,    2, 0x0a /* Public */,
      12,    0,   89,    2, 0x0a /* Public */,
      13,    0,   90,    2, 0x0a /* Public */,
      14,    0,   91,    2, 0x0a /* Public */,

 // slots: parameters
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

void Level_2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Level_2 *_t = static_cast<Level_2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->startLevel(); break;
        case 2: _t->pauseLevel(); break;
        case 3: _t->resumeLevel(); break;
        case 4: _t->addRectangle(); break;
        case 5: _t->addCircle(); break;
        case 6: _t->addTriangle(); break;
        case 7: _t->reset(); break;
        case 8: _t->quitLevel(); break;
        case 9: _t->rotateLeft(); break;
        case 10: _t->rotateRight(); break;
        case 11: _t->getTime(); break;
        case 12: _t->highscoreCounter(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Level_2::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_Level_2.data,
      qt_meta_data_Level_2,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Level_2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Level_2::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Level_2.stringdata0))
        return static_cast<void*>(const_cast< Level_2*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int Level_2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE