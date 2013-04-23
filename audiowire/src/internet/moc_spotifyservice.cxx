/****************************************************************************
** Meta object code from reading C++ file 'spotifyservice.h'
**
** Created: Tue Apr 23 15:28:19 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "spotifyservice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spotifyservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SpotifyService[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      43,   35,   15,   15, 0x05,
      72,   63,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     109,  100,   15,   15, 0x0a,
     135,  130,   15,   15, 0x2a,
     151,   15,   15,   15, 0x0a,
     182,  164,   15,   15, 0x08,
     228,  219,   15,   15, 0x28,
     257,   15,   15,   15, 0x28,
     285,  279,   15,   15, 0x08,
     351,  326,   15,   15, 0x08,
     422,  413,   15,   15, 0x08,
     463,  413,   15,   15, 0x08,
     510,  413,   15,   15, 0x08,
     559,  413,   15,   15, 0x08,
     613,  413,   15,   15, 0x08,
     665,  656,   15,   15, 0x08,
     721,  413,   15,   15, 0x08,
     771,   15,   15,   15, 0x08,
     782,   15,   15,   15, 0x08,
     797,   15,   15,   15, 0x08,

 // methods: signature, parameters, type, tag, flags
     823,  820,   15,   15, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_SpotifyService[] = {
    "SpotifyService\0\0BlobStateChanged()\0"
    "success\0LoginFinished(bool)\0id,image\0"
    "ImageLoaded(QString,QImage)\0text,now\0"
    "Search(QString,bool)\0text\0Search(QString)\0"
    "ShowConfig()\0username,password\0"
    "EnsureServerCreated(QString,QString)\0"
    "username\0EnsureServerCreated(QString)\0"
    "EnsureServerCreated()\0error\0"
    "BlobProcessError(QProcess::ProcessError)\0"
    "success,error,error_code\0"
    "LoginCompleted(bool,QString,pb::spotify::LoginResponse_Error)\0"
    "response\0PlaylistsUpdated(pb::spotify::Playlists)\0"
    "InboxLoaded(pb::spotify::LoadPlaylistResponse)\0"
    "StarredLoaded(pb::spotify::LoadPlaylistResponse)\0"
    "UserPlaylistLoaded(pb::spotify::LoadPlaylistResponse)\0"
    "SearchResults(pb::spotify::SearchResponse)\0"
    "progress\0"
    "SyncPlaylistProgress(pb::spotify::SyncPlaylistProgress)\0"
    "ToplistLoaded(pb::spotify::BrowseToplistResponse)\0"
    "DoSearch()\0SyncPlaylist()\0"
    "BlobDownloadFinished()\0id\0LoadImage(QString)\0"
};

void SpotifyService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SpotifyService *_t = static_cast<SpotifyService *>(_o);
        switch (_id) {
        case 0: _t->BlobStateChanged(); break;
        case 1: _t->LoginFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->ImageLoaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 3: _t->Search((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->Search((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->ShowConfig(); break;
        case 6: _t->EnsureServerCreated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->EnsureServerCreated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->EnsureServerCreated(); break;
        case 9: _t->BlobProcessError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 10: _t->LoginCompleted((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< pb::spotify::LoginResponse_Error(*)>(_a[3]))); break;
        case 11: _t->PlaylistsUpdated((*reinterpret_cast< const pb::spotify::Playlists(*)>(_a[1]))); break;
        case 12: _t->InboxLoaded((*reinterpret_cast< const pb::spotify::LoadPlaylistResponse(*)>(_a[1]))); break;
        case 13: _t->StarredLoaded((*reinterpret_cast< const pb::spotify::LoadPlaylistResponse(*)>(_a[1]))); break;
        case 14: _t->UserPlaylistLoaded((*reinterpret_cast< const pb::spotify::LoadPlaylistResponse(*)>(_a[1]))); break;
        case 15: _t->SearchResults((*reinterpret_cast< const pb::spotify::SearchResponse(*)>(_a[1]))); break;
        case 16: _t->SyncPlaylistProgress((*reinterpret_cast< const pb::spotify::SyncPlaylistProgress(*)>(_a[1]))); break;
        case 17: _t->ToplistLoaded((*reinterpret_cast< const pb::spotify::BrowseToplistResponse(*)>(_a[1]))); break;
        case 18: _t->DoSearch(); break;
        case 19: _t->SyncPlaylist(); break;
        case 20: _t->BlobDownloadFinished(); break;
        case 21: _t->LoadImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SpotifyService::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SpotifyService::staticMetaObject = {
    { &InternetService::staticMetaObject, qt_meta_stringdata_SpotifyService,
      qt_meta_data_SpotifyService, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpotifyService::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpotifyService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpotifyService::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpotifyService))
        return static_cast<void*>(const_cast< SpotifyService*>(this));
    return InternetService::qt_metacast(_clname);
}

int SpotifyService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InternetService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void SpotifyService::BlobStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SpotifyService::LoginFinished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SpotifyService::ImageLoaded(const QString & _t1, const QImage & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
