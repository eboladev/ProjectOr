/****************************************************************************
** Meta object code from reading C++ file 'connecteddevice.h'
**
** Created: Tue Apr 23 15:28:03 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "connecteddevice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connecteddevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ConnectedDevice[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   17,   16,   16, 0x05,
      43,   37,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      65,   37,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ConnectedDevice[] = {
    "ConnectedDevice\0\0id\0TaskStarted(int)\0"
    "count\0SongCountUpdated(int)\0"
    "BackendTotalSongCountUpdated(int)\0"
};

void ConnectedDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConnectedDevice *_t = static_cast<ConnectedDevice *>(_o);
        switch (_id) {
        case 0: _t->TaskStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->SongCountUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->BackendTotalSongCountUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ConnectedDevice::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ConnectedDevice::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ConnectedDevice,
      qt_meta_data_ConnectedDevice, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ConnectedDevice::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ConnectedDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ConnectedDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ConnectedDevice))
        return static_cast<void*>(const_cast< ConnectedDevice*>(this));
    if (!strcmp(_clname, "MusicStorage"))
        return static_cast< MusicStorage*>(const_cast< ConnectedDevice*>(this));
    if (!strcmp(_clname, "boost::enable_shared_from_this<ConnectedDevice>"))
        return static_cast< boost::enable_shared_from_this<ConnectedDevice>*>(const_cast< ConnectedDevice*>(this));
    return QObject::qt_metacast(_clname);
}

int ConnectedDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ConnectedDevice::TaskStarted(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ConnectedDevice::SongCountUpdated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
