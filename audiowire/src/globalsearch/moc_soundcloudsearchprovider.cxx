/****************************************************************************
** Meta object code from reading C++ file 'soundcloudsearchprovider.h'
**
** Created: Tue Apr 23 15:28:05 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "soundcloudsearchprovider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'soundcloudsearchprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SoundCloudSearchProvider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      35,   26,   25,   25, 0x08,
      75,   66,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SoundCloudSearchProvider[] = {
    "SoundCloudSearchProvider\0\0id,image\0"
    "AlbumArtLoaded(quint64,QImage)\0id,songs\0"
    "SearchDone(int,SongList)\0"
};

void SoundCloudSearchProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SoundCloudSearchProvider *_t = static_cast<SoundCloudSearchProvider *>(_o);
        switch (_id) {
        case 0: _t->AlbumArtLoaded((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 1: _t->SearchDone((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const SongList(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SoundCloudSearchProvider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SoundCloudSearchProvider::staticMetaObject = {
    { &SearchProvider::staticMetaObject, qt_meta_stringdata_SoundCloudSearchProvider,
      qt_meta_data_SoundCloudSearchProvider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SoundCloudSearchProvider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SoundCloudSearchProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SoundCloudSearchProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SoundCloudSearchProvider))
        return static_cast<void*>(const_cast< SoundCloudSearchProvider*>(this));
    return SearchProvider::qt_metacast(_clname);
}

int SoundCloudSearchProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SearchProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
