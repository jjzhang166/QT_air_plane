/****************************************************************************
** Meta object code from reading C++ file 'space.h'
**
** Created: Mon Sep 16 08:48:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../space.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'space.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Space[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x09,
      20,    6,    6,    6, 0x09,
      33,    6,    6,    6, 0x09,
      56,   50,    6,    6, 0x09,
      74,    6,    6,    6, 0x09,
      90,    6,    6,    6, 0x09,
     104,    6,    6,    6, 0x09,
     120,    6,    6,    6, 0x09,
     139,  133,    6,    6, 0x09,
     154,    6,    6,    6, 0x09,
     165,   50,    6,    6, 0x09,
     188,  186,    6,    6, 0x09,
     209,    6,    6,    6, 0x09,
     237,  228,    6,    6, 0x09,
     268,    6,    6,    6, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Space[] = {
    "Space\0\0slt_updata()\0slt_enemys()\0"
    "slt_playerDead()\0score\0slt_addScore(int)\0"
    "slt_startGame()\0slt_newGame()\0"
    "slt_pauseGame()\0slt_supply()\0level\0"
    "slt_level(int)\0slt_menu()\0"
    "slt_updataScore(int)\0i\0slt_updataBlood(int)\0"
    "slt_bulletSupply()\0flag,sec\0"
    "slt_updataBulletTimes(int,int)\0"
    "slt_aBomb()\0"
};

void Space::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Space *_t = static_cast<Space *>(_o);
        switch (_id) {
        case 0: _t->slt_updata(); break;
        case 1: _t->slt_enemys(); break;
        case 2: _t->slt_playerDead(); break;
        case 3: _t->slt_addScore((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slt_startGame(); break;
        case 5: _t->slt_newGame(); break;
        case 6: _t->slt_pauseGame(); break;
        case 7: _t->slt_supply(); break;
        case 8: _t->slt_level((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->slt_menu(); break;
        case 10: _t->slt_updataScore((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->slt_updataBlood((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->slt_bulletSupply(); break;
        case 13: _t->slt_updataBulletTimes((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->slt_aBomb(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Space::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Space::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_Space,
      qt_meta_data_Space, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Space::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Space::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Space::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Space))
        return static_cast<void*>(const_cast< Space*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int Space::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
