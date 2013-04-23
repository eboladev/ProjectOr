/****************************************************************************
** Meta object code from reading C++ file 'gpoddevice.h'
**
** Created: Tue Apr 23 15:28:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gpoddevice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpoddevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GPodDevice[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   19, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x09,

 // constructors: signature, parameters, type, tag, flags
     100,   44,   11,   11, 0x0e,

       0        // eod
};

static const char qt_meta_stringdata_GPodDevice[] = {
    "GPodDevice\0\0db\0LoadFinished(Itdb_iTunesDB*)\0"
    "url,lister,unique_id,manager,app,database_id,first_time\0"
    "GPodDevice(QUrl,DeviceLister*,QString,DeviceManager*,Application*,int,"
    "bool)\0"
};

void GPodDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { GPodDevice *_r = new GPodDevice((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< DeviceLister*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< DeviceManager*(*)>(_a[4])),(*reinterpret_cast< Application*(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GPodDevice *_t = static_cast<GPodDevice *>(_o);
        switch (_id) {
        case 0: _t->LoadFinished((*reinterpret_cast< Itdb_iTunesDB*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GPodDevice::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GPodDevice::staticMetaObject = {
    { &ConnectedDevice::staticMetaObject, qt_meta_stringdata_GPodDevice,
      qt_meta_data_GPodDevice, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GPodDevice::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GPodDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GPodDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GPodDevice))
        return static_cast<void*>(const_cast< GPodDevice*>(this));
    if (!strcmp(_clname, "MusicStorage"))
        return static_cast< MusicStorage*>(const_cast< GPodDevice*>(this));
    return ConnectedDevice::qt_metacast(_clname);
}

int GPodDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConnectedDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
