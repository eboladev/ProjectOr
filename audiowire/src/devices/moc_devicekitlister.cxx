/****************************************************************************
** Meta object code from reading C++ file 'devicekitlister.h'
**
** Created: Tue Apr 23 15:28:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "devicekitlister.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'devicekitlister.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DeviceKitLister[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   17,   16,   16, 0x0a,
      56,   51,   16,   16, 0x08,
      89,   51,   16,   16, 0x08,
     124,   51,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DeviceKitLister[] = {
    "DeviceKitLister\0\0id\0UpdateDeviceFreeSpace(QString)\0"
    "path\0DBusDeviceAdded(QDBusObjectPath)\0"
    "DBusDeviceRemoved(QDBusObjectPath)\0"
    "DBusDeviceChanged(QDBusObjectPath)\0"
};

void DeviceKitLister::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DeviceKitLister *_t = static_cast<DeviceKitLister *>(_o);
        switch (_id) {
        case 0: _t->UpdateDeviceFreeSpace((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->DBusDeviceAdded((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        case 2: _t->DBusDeviceRemoved((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        case 3: _t->DBusDeviceChanged((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DeviceKitLister::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DeviceKitLister::staticMetaObject = {
    { &DeviceLister::staticMetaObject, qt_meta_stringdata_DeviceKitLister,
      qt_meta_data_DeviceKitLister, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DeviceKitLister::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DeviceKitLister::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DeviceKitLister::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceKitLister))
        return static_cast<void*>(const_cast< DeviceKitLister*>(this));
    return DeviceLister::qt_metacast(_clname);
}

int DeviceKitLister::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeviceLister::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
