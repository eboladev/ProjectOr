/****************************************************************************
** Meta object code from reading C++ file 'spotifyserver.h'
**
** Created: Tue Apr 23 15:28:19 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "spotifyserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spotifyserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SpotifyServer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
      40,   15,   14,   14, 0x05,
     112,  102,   14,   14, 0x05,
     162,  153,   14,   14, 0x05,
     211,  153,   14,   14, 0x05,
     258,  153,   14,   14, 0x05,
     320,  312,   14,   14, 0x05,
     343,  153,   14,   14, 0x05,
     395,  386,   14,   14, 0x05,
     432,  423,   14,   14, 0x05,
     488,  153,   14,   14, 0x05,
     541,  153,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     607,  598,   14,   14, 0x0a,
     651,  638,   14,   14, 0x0a,
     664,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SpotifyServer[] = {
    "SpotifyServer\0\0success,error,error_code\0"
    "LoginCompleted(bool,QString,pb::spotify::LoginResponse_Error)\0"
    "playlists\0PlaylistsUpdated(pb::spotify::Playlists)\0"
    "response\0StarredLoaded(pb::spotify::LoadPlaylistResponse)\0"
    "InboxLoaded(pb::spotify::LoadPlaylistResponse)\0"
    "UserPlaylistLoaded(pb::spotify::LoadPlaylistResponse)\0"
    "message\0PlaybackError(QString)\0"
    "SearchResults(pb::spotify::SearchResponse)\0"
    "id,image\0ImageLoaded(QString,QImage)\0"
    "progress\0"
    "SyncPlaylistProgress(pb::spotify::SyncPlaylistProgress)\0"
    "AlbumBrowseResults(pb::spotify::BrowseAlbumResponse)\0"
    "ToplistBrowseResults(pb::spotify::BrowseToplistResponse)\0"
    "uri,port\0StartPlayback(QString,quint16)\0"
    "offset_bytes\0Seek(qint64)\0NewConnection()\0"
};

void SpotifyServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SpotifyServer *_t = static_cast<SpotifyServer *>(_o);
        switch (_id) {
        case 0: _t->LoginCompleted((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< pb::spotify::LoginResponse_Error(*)>(_a[3]))); break;
        case 1: _t->PlaylistsUpdated((*reinterpret_cast< const pb::spotify::Playlists(*)>(_a[1]))); break;
        case 2: _t->StarredLoaded((*reinterpret_cast< const pb::spotify::LoadPlaylistResponse(*)>(_a[1]))); break;
        case 3: _t->InboxLoaded((*reinterpret_cast< const pb::spotify::LoadPlaylistResponse(*)>(_a[1]))); break;
        case 4: _t->UserPlaylistLoaded((*reinterpret_cast< const pb::spotify::LoadPlaylistResponse(*)>(_a[1]))); break;
        case 5: _t->PlaybackError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->SearchResults((*reinterpret_cast< const pb::spotify::SearchResponse(*)>(_a[1]))); break;
        case 7: _t->ImageLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 8: _t->SyncPlaylistProgress((*reinterpret_cast< const pb::spotify::SyncPlaylistProgress(*)>(_a[1]))); break;
        case 9: _t->AlbumBrowseResults((*reinterpret_cast< const pb::spotify::BrowseAlbumResponse(*)>(_a[1]))); break;
        case 10: _t->ToplistBrowseResults((*reinterpret_cast< const pb::spotify::BrowseToplistResponse(*)>(_a[1]))); break;
        case 11: _t->StartPlayback((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 12: _t->Seek((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 13: _t->NewConnection(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SpotifyServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SpotifyServer::staticMetaObject = {
    { &AbstractMessageHandler<pb::spotify::Message>::staticMetaObject, qt_meta_stringdata_SpotifyServer,
      qt_meta_data_SpotifyServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpotifyServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpotifyServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpotifyServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpotifyServer))
        return static_cast<void*>(const_cast< SpotifyServer*>(this));
    typedef AbstractMessageHandler<pb::spotify::Message> QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int SpotifyServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef AbstractMessageHandler<pb::spotify::Message> QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void SpotifyServer::LoginCompleted(bool _t1, const QString & _t2, pb::spotify::LoginResponse_Error _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SpotifyServer::PlaylistsUpdated(const pb::spotify::Playlists & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SpotifyServer::StarredLoaded(const pb::spotify::LoadPlaylistResponse & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SpotifyServer::InboxLoaded(const pb::spotify::LoadPlaylistResponse & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SpotifyServer::UserPlaylistLoaded(const pb::spotify::LoadPlaylistResponse & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SpotifyServer::PlaybackError(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SpotifyServer::SearchResults(const pb::spotify::SearchResponse & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SpotifyServer::ImageLoaded(const QString & _t1, const QImage & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void SpotifyServer::SyncPlaylistProgress(const pb::spotify::SyncPlaylistProgress & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void SpotifyServer::AlbumBrowseResults(const pb::spotify::BrowseAlbumResponse & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void SpotifyServer::ToplistBrowseResults(const pb::spotify::BrowseToplistResponse & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
