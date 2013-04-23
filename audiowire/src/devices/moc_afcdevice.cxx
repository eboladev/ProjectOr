/****************************************************************************
** Meta object code from reading C++ file 'afcdevice.h'
**
** Created: Tue Apr 23 15:28:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "afcdevice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'afcdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AfcDevice[] = {

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
      19,   11,   10,   10, 0x08,

 // constructors: signature, parameters, type, tag, flags
      94,   38,   10,   10, 0x0e,

       0        // eod
};

static const char qt_meta_stringdata_AfcDevice[] = {
    "AfcDevice\0\0success\0CopyFinished(bool)\0"
    "url,lister,unique_id,manager,app,database_id,first_time\0"
    "AfcDevice(QUrl,DeviceLister*,QString,DeviceManager*,Application*,int,b"
    "ool)\0"
};

void AfcDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { AfcDevice *_r = new AfcDevice((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< DeviceLister*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< DeviceManager*(*)>(_a[4])),(*reinterpret_cast< Application*(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AfcDevice *_t = static_cast<AfcDevice *>(_o);
        switch (_id) {
        case 0: _t->CopyFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AfcDevice::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AfcDevice::staticMetaObject = {
    { &GPodDevice::staticMetaObject, qt_meta_stringdata_AfcDevice,
      qt_meta_data_AfcDevice, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AfcDevice::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AfcDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AfcDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AfcDevice))
        return static_cast<void*>(const_cast< AfcDevice*>(this));
    return GPodDevice::qt_metacast(_clname);
}

int AfcDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GPodDevice::qt_metacall(_c, _id, _a);
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
