/****************************************************************************
** Meta object code from reading C++ file 'devicelister.h'
**
** Created: Tue Apr 23 15:28:03 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "devicelister.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'devicelister.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DeviceLister[] = {

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
      17,   14,   13,   13, 0x05,
      38,   14,   13,   13, 0x05,
      61,   14,   13,   13, 0x05,
     106,   84,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     138,   14,   13,   13, 0x0a,
     169,   13,   13,   13, 0x0a,
     180,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DeviceLister[] = {
    "DeviceLister\0\0id\0DeviceAdded(QString)\0"
    "DeviceRemoved(QString)\0DeviceChanged(QString)\0"
    "id,request_id,success\0"
    "DeviceMounted(QString,int,bool)\0"
    "UpdateDeviceFreeSpace(QString)\0"
    "ShutDown()\0ThreadStarted()\0"
};

void DeviceLister::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DeviceLister *_t = static_cast<DeviceLister *>(_o);
        switch (_id) {
        case 0: _t->DeviceAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->DeviceRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->DeviceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->DeviceMounted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->UpdateDeviceFreeSpace((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->ShutDown(); break;
        case 6: _t->ThreadStarted(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DeviceLister::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DeviceLister::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DeviceLister,
      qt_meta_data_DeviceLister, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DeviceLister::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DeviceLister::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DeviceLister::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceLister))
        return static_cast<void*>(const_cast< DeviceLister*>(this));
    return QObject::qt_metacast(_clname);
}

int DeviceLister::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void DeviceLister::DeviceAdded(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeviceLister::DeviceRemoved(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DeviceLister::DeviceChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DeviceLister::DeviceMounted(const QString & _t1, int _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
