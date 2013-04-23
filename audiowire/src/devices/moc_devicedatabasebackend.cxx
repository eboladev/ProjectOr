/****************************************************************************
** Meta object code from reading C++ file 'devicedatabasebackend.h'
**
** Created: Tue Apr 23 15:28:03 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "devicedatabasebackend.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'devicedatabasebackend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DeviceDatabaseBackend[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       2,   14, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: signature, parameters, type, tag, flags
      30,   23,   22,   22, 0x0e,
      62,   22,   22,   22, 0x2e,

       0        // eod
};

static const char qt_meta_stringdata_DeviceDatabaseBackend[] = {
    "DeviceDatabaseBackend\0\0parent\0"
    "DeviceDatabaseBackend(QObject*)\0"
    "DeviceDatabaseBackend()\0"
};

void DeviceDatabaseBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { DeviceDatabaseBackend *_r = new DeviceDatabaseBackend((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { DeviceDatabaseBackend *_r = new DeviceDatabaseBackend();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        }
    }
    Q_UNUSED(_o);
}

const QMetaObjectExtraData DeviceDatabaseBackend::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DeviceDatabaseBackend::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DeviceDatabaseBackend,
      qt_meta_data_DeviceDatabaseBackend, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DeviceDatabaseBackend::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DeviceDatabaseBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DeviceDatabaseBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceDatabaseBackend))
        return static_cast<void*>(const_cast< DeviceDatabaseBackend*>(this));
    return QObject::qt_metacast(_clname);
}

int DeviceDatabaseBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
