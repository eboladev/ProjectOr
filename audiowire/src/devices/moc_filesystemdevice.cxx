/****************************************************************************
** Meta object code from reading C++ file 'filesystemdevice.h'
**
** Created: Tue Apr 23 15:28:04 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "filesystemdevice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filesystemdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FilesystemDevice[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   14, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: signature, parameters, type, tag, flags
      74,   18,   17,   17, 0x0e,

       0        // eod
};

static const char qt_meta_stringdata_FilesystemDevice[] = {
    "FilesystemDevice\0\0"
    "url,lister,unique_id,manager,app,database_id,first_time\0"
    "FilesystemDevice(QUrl,DeviceLister*,QString,DeviceManager*,Application"
    "*,int,bool)\0"
};

void FilesystemDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { FilesystemDevice *_r = new FilesystemDevice((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< DeviceLister*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< DeviceManager*(*)>(_a[4])),(*reinterpret_cast< Application*(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        }
    }
    Q_UNUSED(_o);
}

const QMetaObjectExtraData FilesystemDevice::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FilesystemDevice::staticMetaObject = {
    { &ConnectedDevice::staticMetaObject, qt_meta_stringdata_FilesystemDevice,
      qt_meta_data_FilesystemDevice, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FilesystemDevice::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FilesystemDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FilesystemDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FilesystemDevice))
        return static_cast<void*>(const_cast< FilesystemDevice*>(this));
    if (!strcmp(_clname, "FilesystemMusicStorage"))
        return static_cast< FilesystemMusicStorage*>(const_cast< FilesystemDevice*>(this));
    return ConnectedDevice::qt_metacast(_clname);
}

int FilesystemDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConnectedDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
