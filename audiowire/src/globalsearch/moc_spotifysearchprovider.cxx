/****************************************************************************
** Meta object code from reading C++ file 'spotifysearchprovider.h'
**
** Created: Tue Apr 23 15:28:19 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "spotifysearchprovider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spotifysearchprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SpotifySearchProvider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x08,
      50,   41,   22,   22, 0x08,
     107,   98,   22,   22, 0x08,
     137,   41,   22,   22, 0x08,
     190,   41,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SpotifySearchProvider[] = {
    "SpotifySearchProvider\0\0ServerDestroyed()\0"
    "response\0SearchFinishedSlot(pb::spotify::SearchResponse)\0"
    "id,image\0ArtLoadedSlot(QString,QImage)\0"
    "SuggestionsLoaded(pb::spotify::LoadPlaylistResponse)\0"
    "SuggestionsLoaded(pb::spotify::BrowseToplistResponse)\0"
};

void SpotifySearchProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SpotifySearchProvider *_t = static_cast<SpotifySearchProvider *>(_o);
        switch (_id) {
        case 0: _t->ServerDestroyed(); break;
        case 1: _t->SearchFinishedSlot((*reinterpret_cast< const pb::spotify::SearchResponse(*)>(_a[1]))); break;
        case 2: _t->ArtLoadedSlot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 3: _t->SuggestionsLoaded((*reinterpret_cast< const pb::spotify::LoadPlaylistResponse(*)>(_a[1]))); break;
        case 4: _t->SuggestionsLoaded((*reinterpret_cast< const pb::spotify::BrowseToplistResponse(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SpotifySearchProvider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SpotifySearchProvider::staticMetaObject = {
    { &SearchProvider::staticMetaObject, qt_meta_stringdata_SpotifySearchProvider,
      qt_meta_data_SpotifySearchProvider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpotifySearchProvider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpotifySearchProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpotifySearchProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpotifySearchProvider))
        return static_cast<void*>(const_cast< SpotifySearchProvider*>(this));
    return SearchProvider::qt_metacast(_clname);
}

int SpotifySearchProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SearchProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
