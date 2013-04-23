/****************************************************************************
** Meta object code from reading C++ file 'cddadevice.h'
**
** Created: Tue Apr 23 15:28:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cddadevice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cddadevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CddaDevice[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   24, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      65,   44,   11,   11, 0x08,

 // constructors: signature, parameters, type, tag, flags
     186,  130,   11,   11, 0x0e,

       0        // eod
};

static const char qt_meta_stringdata_CddaDevice[] = {
    "CddaDevice\0\0songs\0SongsDiscovered(SongList)\0"
    "artist,album,results\0"
    "AudioCDTagsLoaded(QString,QString,MusicBrainzClient::ResultList)\0"
    "url,lister,unique_id,manager,app,database_id,first_time\0"
    "CddaDevice(QUrl,DeviceLister*,QString,DeviceManager*,Application*,int,"
    "bool)\0"
};

void CddaDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { CddaDevice *_r = new CddaDevice((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< DeviceLister*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< DeviceManager*(*)>(_a[4])),(*reinterpret_cast< Application*(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CddaDevice *_t = static_cast<CddaDevice *>(_o);
        switch (_id) {
        case 0: _t->SongsDiscovered((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 1: _t->AudioCDTagsLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const MusicBrainzClient::ResultList(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CddaDevice::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CddaDevice::staticMetaObject = {
    { &ConnectedDevice::staticMetaObject, qt_meta_stringdata_CddaDevice,
      qt_meta_data_CddaDevice, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CddaDevice::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CddaDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CddaDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CddaDevice))
        return static_cast<void*>(const_cast< CddaDevice*>(this));
    return ConnectedDevice::qt_metacast(_clname);
}

int CddaDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConnectedDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CddaDevice::SongsDiscovered(const SongList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
