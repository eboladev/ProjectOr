/****************************************************************************
** Meta object code from reading C++ file 'Device.h'
**
** Created: Tue Apr 23 13:36:27 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Device.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Device.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mygpo__Device[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      22,   14, 0x0a095401,
      25,   14, 0x0a095401,
      33,   14, 0x0a095401,
      49,   38, 0x05095401,

       0        // eod
};

static const char qt_meta_stringdata_mygpo__Device[] = {
    "mygpo::Device\0QString\0id\0caption\0type\0"
    "qulonglong\0subscriptions\0"
};

void mygpo::Device::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData mygpo::Device::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mygpo::Device::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_mygpo__Device,
      qt_meta_data_mygpo__Device, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mygpo::Device::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mygpo::Device::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mygpo::Device::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mygpo__Device))
        return static_cast<void*>(const_cast< Device*>(this));
    return QObject::qt_metacast(_clname);
}

int mygpo::Device::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = caption(); break;
        case 2: *reinterpret_cast< QString*>(_v) = type(); break;
        case 3: *reinterpret_cast< qulonglong*>(_v) = subscriptions(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
