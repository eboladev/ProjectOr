/****************************************************************************
** Meta object code from reading C++ file 'devicemanager.h'
**
** Created: Tue Apr 23 15:28:03 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "devicemanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'devicemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DeviceManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   15,   14,   14, 0x05,
      40,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   15,   14,   14, 0x0a,
      80,   77,   14,   14, 0x08,
     109,   77,   14,   14, 0x08,
     140,   77,   14,   14, 0x08,
     171,   77,   14,   14, 0x08,
     194,   14,   14,   14, 0x08,
     215,  209,   14,   14, 0x08,
     243,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DeviceManager[] = {
    "DeviceManager\0\0row\0DeviceConnected(int)\0"
    "DeviceDisconnected(int)\0Unmount(int)\0"
    "id\0PhysicalDeviceAdded(QString)\0"
    "PhysicalDeviceRemoved(QString)\0"
    "PhysicalDeviceChanged(QString)\0"
    "DeviceTaskStarted(int)\0TasksChanged()\0"
    "count\0DeviceSongCountUpdated(int)\0"
    "LoadAllDevices()\0"
};

void DeviceManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DeviceManager *_t = static_cast<DeviceManager *>(_o);
        switch (_id) {
        case 0: _t->DeviceConnected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->DeviceDisconnected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->Unmount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->PhysicalDeviceAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->PhysicalDeviceRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->PhysicalDeviceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->DeviceTaskStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->TasksChanged(); break;
        case 8: _t->DeviceSongCountUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->LoadAllDevices(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DeviceManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DeviceManager::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_DeviceManager,
      qt_meta_data_DeviceManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DeviceManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DeviceManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DeviceManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceManager))
        return static_cast<void*>(const_cast< DeviceManager*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int DeviceManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void DeviceManager::DeviceConnected(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeviceManager::DeviceDisconnected(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
