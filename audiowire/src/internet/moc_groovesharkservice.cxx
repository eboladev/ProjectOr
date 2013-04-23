/****************************************************************************
** Meta object code from reading C++ file 'groovesharkservice.h'
**
** Created: Tue Apr 23 15:28:05 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "groovesharkservice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'groovesharkservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GroovesharkService[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   20,   19,   19, 0x05,
      57,   48,   19,   19, 0x05,
     105,   91,   19,   19, 0x05,
     143,   48,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     187,  178,   19,   19, 0x0a,
     213,  208,   19,   19, 0x2a,
     229,   19,   19,   19, 0x0a,
     248,  242,   19,   19, 0x08,
     279,   19,   19,   19, 0x08,
     290,  242,   19,   19, 0x08,
     335,  326,   19,   19, 0x08,
     376,  326,   19,   19, 0x08,
     432,  417,   19,   19, 0x08,
     478,  242,   19,   19, 0x08,
     508,  242,   19,   19, 0x08,
     561,  547,   19,   19, 0x08,
     604,  547,   19,   19, 0x08,
     650,  242,   19,   19, 0x08,
     693,  242,   19,   19, 0x08,
     736,  242,   19,   19, 0x08,
     781,  242,   19,   19, 0x08,
     837,  819,   19,   19, 0x08,
     906,  880,   19,   19, 0x08,
     947,   19,   19,   19, 0x08,
     978,  967,   19,   19, 0x08,
    1021,   19,   19,   19, 0x08,
    1045,   19,   19,   19, 0x08,
    1069,  819,   19,   19, 0x08,
    1132, 1105,   19,   19, 0x08,
    1176,   19,   19,   19, 0x08,
    1208,   19,   19,   19, 0x08,
    1245, 1238,   19,   19, 0x08,
    1280,  547,   19,   19, 0x08,
    1322,  547,   19,   19, 0x08,
    1363,   19,   19,   19, 0x08,
    1390,  242,   19,   19, 0x08,
    1429,   19,   19,   19, 0x08,
    1460,  242,   19,   19, 0x08,
    1503,   19,   19,   19, 0x08,
    1531,   19,   19,   19, 0x08,
    1560,   19,   19,   19, 0x08,
    1587,  547,   19,   19, 0x08,
    1633,  547,   19,   19, 0x08,
    1677,  242,   19,   19, 0x08,
    1706,  242,   19,   19, 0x08,
    1750, 1743,   19,   19, 0x08,
    1785,   19,   19,   19, 0x08,
    1796,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GroovesharkService[] = {
    "GroovesharkService\0\0success\0"
    "LoginFinished(bool)\0id,songs\0"
    "SimpleSearchResults(int,SongList)\0"
    "id,albums_ids\0AlbumSearchResult(int,QList<quint64>)\0"
    "AlbumSongsLoaded(quint64,SongList)\0"
    "text,now\0Search(QString,bool)\0text\0"
    "Search(QString)\0ShowConfig()\0reply\0"
    "SessionCreated(QNetworkReply*)\0"
    "DoSearch()\0SearchSongsFinished(QNetworkReply*)\0"
    "reply,id\0SimpleSearchFinished(QNetworkReply*,int)\0"
    "SearchAlbumsFinished(QNetworkReply*,int)\0"
    "reply,album_id\0"
    "GetAlbumSongsFinished(QNetworkReply*,quint64)\0"
    "Authenticated(QNetworkReply*)\0"
    "UserPlaylistsRetrieved(QNetworkReply*)\0"
    "reply,task_id\0UserFavoritesRetrieved(QNetworkReply*,int)\0"
    "UserLibrarySongsRetrieved(QNetworkReply*,int)\0"
    "PopularSongsMonthRetrieved(QNetworkReply*)\0"
    "PopularSongsTodayRetrieved(QNetworkReply*)\0"
    "SubscribedPlaylistsRetrieved(QNetworkReply*)\0"
    "AutoplayTagsRetrieved(QNetworkReply*)\0"
    "reply,playlist_id\0"
    "PlaylistSongsRetrieved(QNetworkReply*,int)\0"
    "reply,playlist_id,task_id\0"
    "PlaylistSongsSet(QNetworkReply*,int,int)\0"
    "CreateNewPlaylist()\0reply,name\0"
    "NewPlaylistCreated(QNetworkReply*,QString)\0"
    "DeleteCurrentPlaylist()\0RenameCurrentPlaylist()\0"
    "PlaylistDeleted(QNetworkReply*,int)\0"
    "reply,playlist_id,new_name\0"
    "PlaylistRenamed(QNetworkReply*,int,QString)\0"
    "AddCurrentSongToUserFavorites()\0"
    "AddCurrentSongToUserLibrary()\0action\0"
    "AddCurrentSongToPlaylist(QAction*)\0"
    "UserFavoriteSongAdded(QNetworkReply*,int)\0"
    "UserLibrarySongAdded(QNetworkReply*,int)\0"
    "GetCurrentSongUrlToShare()\0"
    "SongUrlToShareReceived(QNetworkReply*)\0"
    "GetCurrentPlaylistUrlToShare()\0"
    "PlaylistUrlToShareReceived(QNetworkReply*)\0"
    "RemoveCurrentFromPlaylist()\0"
    "RemoveCurrentFromFavorites()\0"
    "RemoveCurrentFromLibrary()\0"
    "SongsRemovedFromFavorites(QNetworkReply*,int)\0"
    "SongsRemovedFromLibrary(QNetworkReply*,int)\0"
    "StreamMarked(QNetworkReply*)\0"
    "SongMarkedAsComplete(QNetworkReply*)\0"
    "errors\0RequestSslErrors(QList<QSslError>)\0"
    "Homepage()\0RefreshItems()\0"
};

void GroovesharkService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GroovesharkService *_t = static_cast<GroovesharkService *>(_o);
        switch (_id) {
        case 0: _t->LoginFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->SimpleSearchResults((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< SongList(*)>(_a[2]))); break;
        case 2: _t->AlbumSearchResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QList<quint64>(*)>(_a[2]))); break;
        case 3: _t->AlbumSongsLoaded((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< SongList(*)>(_a[2]))); break;
        case 4: _t->Search((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->Search((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->ShowConfig(); break;
        case 7: _t->SessionCreated((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 8: _t->DoSearch(); break;
        case 9: _t->SearchSongsFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 10: _t->SimpleSearchFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->SearchAlbumsFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->GetAlbumSongsFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 13: _t->Authenticated((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 14: _t->UserPlaylistsRetrieved((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 15: _t->UserFavoritesRetrieved((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: _t->UserLibrarySongsRetrieved((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->PopularSongsMonthRetrieved((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 18: _t->PopularSongsTodayRetrieved((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 19: _t->SubscribedPlaylistsRetrieved((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 20: _t->AutoplayTagsRetrieved((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 21: _t->PlaylistSongsRetrieved((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->PlaylistSongsSet((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 23: _t->CreateNewPlaylist(); break;
        case 24: _t->NewPlaylistCreated((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 25: _t->DeleteCurrentPlaylist(); break;
        case 26: _t->RenameCurrentPlaylist(); break;
        case 27: _t->PlaylistDeleted((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 28: _t->PlaylistRenamed((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 29: _t->AddCurrentSongToUserFavorites(); break;
        case 30: _t->AddCurrentSongToUserLibrary(); break;
        case 31: _t->AddCurrentSongToPlaylist((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 32: _t->UserFavoriteSongAdded((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 33: _t->UserLibrarySongAdded((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 34: _t->GetCurrentSongUrlToShare(); break;
        case 35: _t->SongUrlToShareReceived((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 36: _t->GetCurrentPlaylistUrlToShare(); break;
        case 37: _t->PlaylistUrlToShareReceived((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 38: _t->RemoveCurrentFromPlaylist(); break;
        case 39: _t->RemoveCurrentFromFavorites(); break;
        case 40: _t->RemoveCurrentFromLibrary(); break;
        case 41: _t->SongsRemovedFromFavorites((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 42: _t->SongsRemovedFromLibrary((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 43: _t->StreamMarked((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 44: _t->SongMarkedAsComplete((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 45: _t->RequestSslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 46: _t->Homepage(); break;
        case 47: _t->RefreshItems(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GroovesharkService::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GroovesharkService::staticMetaObject = {
    { &InternetService::staticMetaObject, qt_meta_stringdata_GroovesharkService,
      qt_meta_data_GroovesharkService, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GroovesharkService::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GroovesharkService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GroovesharkService::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GroovesharkService))
        return static_cast<void*>(const_cast< GroovesharkService*>(this));
    return InternetService::qt_metacast(_clname);
}

int GroovesharkService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InternetService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    }
    return _id;
}

// SIGNAL 0
void GroovesharkService::LoginFinished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GroovesharkService::SimpleSearchResults(int _t1, SongList _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GroovesharkService::AlbumSearchResult(int _t1, QList<quint64> _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GroovesharkService::AlbumSongsLoaded(quint64 _t1, SongList _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
