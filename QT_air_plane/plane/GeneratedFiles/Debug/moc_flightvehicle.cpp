/****************************************************************************
** Meta object code from reading C++ file 'flightvehicle.h'
**
** Created: Mon Sep 16 08:48:22 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../flightvehicle.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flightvehicle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FlightVehicle[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   15,   14,   14, 0x05,
      45,   39,   14,   14, 0x05,
      69,   60,   14,   14, 0x05,
      94,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     106,   14,   14,   14, 0x0a,
     114,   14,   14,   14, 0x09,
     136,   14,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_FlightVehicle[] = {
    "FlightVehicle\0\0score\0sig_addScore(int)\0"
    "blood\0sig_blood(int)\0flag,sec\0"
    "sig_bulletTimes(int,int)\0sig_aBomb()\0"
    "shoot()\0slt_resetBulletFlag()\0slt_cache()\0"
};

void FlightVehicle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FlightVehicle *_t = static_cast<FlightVehicle *>(_o);
        switch (_id) {
        case 0: _t->sig_addScore((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sig_blood((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sig_bulletTimes((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->sig_aBomb(); break;
        case 4: _t->shoot(); break;
        case 5: _t->slt_resetBulletFlag(); break;
        case 6: _t->slt_cache(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FlightVehicle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FlightVehicle::staticMetaObject = {
    { &Flyer::staticMetaObject, qt_meta_stringdata_FlightVehicle,
      qt_meta_data_FlightVehicle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FlightVehicle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FlightVehicle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FlightVehicle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FlightVehicle))
        return static_cast<void*>(const_cast< FlightVehicle*>(this));
    return Flyer::qt_metacast(_clname);
}

int FlightVehicle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Flyer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void FlightVehicle::sig_addScore(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FlightVehicle::sig_blood(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FlightVehicle::sig_bulletTimes(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FlightVehicle::sig_aBomb()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
