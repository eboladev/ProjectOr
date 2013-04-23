/****************************************************************************
** Meta object code from reading C++ file 'shortcuts.h'
**
** Created: Tue Apr 23 15:28:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "shortcuts.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shortcuts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WiimotedevShortcuts[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      43,   20,   20,   20, 0x05,
      67,   20,   20,   20, 0x05,
      91,   20,   20,   20, 0x05,
     120,  118,   20,   20, 0x05,
     149,  118,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     191,  183,   20,   20, 0x0a,
     227,   20,   20,   20, 0x0a,
     252,  244,   20,   20, 0x08,
     290,  287,   20,   20, 0x08,
     317,  287,   20,   20, 0x08,
     356,  347,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WiimotedevShortcuts[] = {
    "WiimotedevShortcuts\0\0WiiremoteActived(int)\0"
    "WiiremoteDeactived(int)\0WiiremoteConnected(int)\0"
    "WiiremoteDisconnected(int)\0,\0"
    "WiiremoteLowBattery(int,int)\0"
    "WiiremoteCriticalBattery(int,int)\0"
    "actived\0SetWiimotedevInterfaceActived(bool)\0"
    "ReloadSettings()\0id,life\0"
    "DbusWiimoteBatteryLife(uint,uchar)\0"
    "id\0DbusWiimoteConnected(uint)\0"
    "DbusWiimoteDisconnected(uint)\0id,value\0"
    "DbusWiimoteGeneralButtons(uint,qulonglong)\0"
};

void WiimotedevShortcuts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WiimotedevShortcuts *_t = static_cast<WiimotedevShortcuts *>(_o);
        switch (_id) {
        case 0: _t->WiiremoteActived((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->WiiremoteDeactived((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->WiiremoteConnected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->WiiremoteDisconnected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->WiiremoteLowBattery((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->WiiremoteCriticalBattery((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->SetWiimotedevInterfaceActived((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->ReloadSettings(); break;
        case 8: _t->DbusWiimoteBatteryLife((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uchar(*)>(_a[2]))); break;
        case 9: _t->DbusWiimoteConnected((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 10: _t->DbusWiimoteDisconnected((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 11: _t->DbusWiimoteGeneralButtons((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WiimotedevShortcuts::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WiimotedevShortcuts::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WiimotedevShortcuts,
      qt_meta_data_WiimotedevShortcuts, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WiimotedevShortcuts::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WiimotedevShortcuts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WiimotedevShortcuts::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WiimotedevShortcuts))
        return static_cast<void*>(const_cast< WiimotedevShortcuts*>(this));
    return QObject::qt_metacast(_clname);
}

int WiimotedevShortcuts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void WiimotedevShortcuts::WiiremoteActived(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WiimotedevShortcuts::WiiremoteDeactived(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WiimotedevShortcuts::WiiremoteConnected(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WiimotedevShortcuts::WiiremoteDisconnected(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WiimotedevShortcuts::WiiremoteLowBattery(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WiimotedevShortcuts::WiiremoteCriticalBattery(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
