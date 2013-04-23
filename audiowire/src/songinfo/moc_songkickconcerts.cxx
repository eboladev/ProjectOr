/****************************************************************************
** Meta object code from reading C++ file 'songkickconcerts.h'
**
** Created: Tue Apr 23 15:28:13 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "songkickconcerts.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songkickconcerts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SongkickConcerts[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   18,   17,   17, 0x08,
      68,   18,   17,   17, 0x08,
     119,  112,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SongkickConcerts[] = {
    "SongkickConcerts\0\0reply,id\0"
    "ArtistSearchFinished(QNetworkReply*,int)\0"
    "CalendarRequestFinished(QNetworkReply*,int)\0"
    "latlng\0GeolocateFinished(Geolocator::LatLng)\0"
};

void SongkickConcerts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SongkickConcerts *_t = static_cast<SongkickConcerts *>(_o);
        switch (_id) {
        case 0: _t->ArtistSearchFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->CalendarRequestFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->GeolocateFinished((*reinterpret_cast< Geolocator::LatLng(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SongkickConcerts::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SongkickConcerts::staticMetaObject = {
    { &SongInfoProvider::staticMetaObject, qt_meta_stringdata_SongkickConcerts,
      qt_meta_data_SongkickConcerts, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SongkickConcerts::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SongkickConcerts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SongkickConcerts::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SongkickConcerts))
        return static_cast<void*>(const_cast< SongkickConcerts*>(this));
    return SongInfoProvider::qt_metacast(_clname);
}

int SongkickConcerts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SongInfoProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
