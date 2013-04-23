/****************************************************************************
** Meta object code from reading C++ file 'playlistmanager.h'
**
** Created: Tue Apr 23 15:28:09 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playlistmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlaylistManagerInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x05,
      63,   55,   25,   25, 0x05,
      93,   90,   25,   25, 0x05,
     114,   90,   25,   25, 0x05,
     146,  134,   25,   25, 0x05,
     188,  175,   25,   25, 0x05,
     214,  175,   25,   25, 0x05,
     247,  239,   25,   25, 0x05,
     270,  262,   25,   25, 0x05,
     303,  298,   25,   25, 0x05,
     337,  328,   25,   25, 0x05,
     370,  364,   25,   25, 0x05,
     399,  364,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
     450,  426,   25,   25, 0x0a,
     491,  480,   25,   25, 0x2a,
     518,  513,   25,   25, 0x2a,
     540,  531,   25,   25, 0x0a,
     566,  554,   25,   25, 0x0a,
     584,  134,   25,   25, 0x0a,
     604,   90,   25,   25, 0x0a,
     621,   90,  616,   25, 0x0a,
     632,   90,   25,   25, 0x0a,
     646,  642,   25,   25, 0x0a,
     688,  678,   25,   25, 0x0a,
     726,   90,   25,   25, 0x0a,
     750,   90,   25,   25, 0x0a,
     773,   25,   25,   25, 0x0a,
     804,  794,   25,   25, 0x0a,
     837,   25,   25,   25, 0x0a,
     852,   25,   25,   25, 0x0a,
     869,   25,   25,   25, 0x0a,
     895,   25,   25,   25, 0x0a,
     914,   25,   25,   25, 0x0a,
     932,   25,   25,   25, 0x0a,
     960,  951,   25,   25, 0x0a,
    1002,  995,   25,   25, 0x0a,
    1026,  995,   25,   25, 0x0a,
    1070, 1047,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PlaylistManagerInterface[] = {
    "PlaylistManagerInterface\0\0"
    "PlaylistManagerInitialized()\0id,name\0"
    "PlaylistAdded(int,QString)\0id\0"
    "PlaylistDeleted(int)\0PlaylistClosed(int)\0"
    "id,new_name\0PlaylistRenamed(int,QString)\0"
    "new_playlist\0CurrentChanged(Playlist*)\0"
    "ActiveChanged(Playlist*)\0message\0"
    "Error(QString)\0summary\0"
    "SummaryTextChanged(QString)\0song\0"
    "CurrentSongChanged(Song)\0playlist\0"
    "PlaylistChanged(Playlist*)\0index\0"
    "EditingFinished(QModelIndex)\0"
    "PlayRequested(QModelIndex)\0"
    "name,songs,special_type\0"
    "New(QString,SongList,QString)\0name,songs\0"
    "New(QString,SongList)\0name\0New(QString)\0"
    "filename\0Load(QString)\0id,filename\0"
    "Save(int,QString)\0Rename(int,QString)\0"
    "Delete(int)\0bool\0Close(int)\0Open(int)\0"
    "ids\0ChangePlaylistOrder(QList<int>)\0"
    "url,valid\0SongChangeRequestProcessed(QUrl,bool)\0"
    "SetCurrentPlaylist(int)\0SetActivePlaylist(int)\0"
    "SetActiveToCurrent()\0selection\0"
    "SelectionChanged(QItemSelection)\0"
    "ClearCurrent()\0ShuffleCurrent()\0"
    "RemoveDuplicatesCurrent()\0SetActivePlaying()\0"
    "SetActivePaused()\0SetActiveStopped()\0"
    "url,song\0SetActiveStreamMetadata(QUrl,Song)\0"
    "rating\0RateCurrentSong(double)\0"
    "RateCurrentSong(int)\0generator,as_new,clear\0"
    "PlaySmartPlaylist(smart_playlists::GeneratorPtr,bool,bool)\0"
};

void PlaylistManagerInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlaylistManagerInterface *_t = static_cast<PlaylistManagerInterface *>(_o);
        switch (_id) {
        case 0: _t->PlaylistManagerInitialized(); break;
        case 1: _t->PlaylistAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->PlaylistDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->PlaylistClosed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->PlaylistRenamed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->CurrentChanged((*reinterpret_cast< Playlist*(*)>(_a[1]))); break;
        case 6: _t->ActiveChanged((*reinterpret_cast< Playlist*(*)>(_a[1]))); break;
        case 7: _t->Error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->SummaryTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->CurrentSongChanged((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 10: _t->PlaylistChanged((*reinterpret_cast< Playlist*(*)>(_a[1]))); break;
        case 11: _t->EditingFinished((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: _t->PlayRequested((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 13: _t->New((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const SongList(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 14: _t->New((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const SongList(*)>(_a[2]))); break;
        case 15: _t->New((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->Load((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->Save((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 18: _t->Rename((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 19: _t->Delete((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: { bool _r = _t->Close((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: _t->Open((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->ChangePlaylistOrder((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 23: _t->SongChangeRequestProcessed((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 24: _t->SetCurrentPlaylist((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->SetActivePlaylist((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->SetActiveToCurrent(); break;
        case 27: _t->SelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1]))); break;
        case 28: _t->ClearCurrent(); break;
        case 29: _t->ShuffleCurrent(); break;
        case 30: _t->RemoveDuplicatesCurrent(); break;
        case 31: _t->SetActivePlaying(); break;
        case 32: _t->SetActivePaused(); break;
        case 33: _t->SetActiveStopped(); break;
        case 34: _t->SetActiveStreamMetadata((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const Song(*)>(_a[2]))); break;
        case 35: _t->RateCurrentSong((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 36: _t->RateCurrentSong((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->PlaySmartPlaylist((*reinterpret_cast< smart_playlists::GeneratorPtr(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PlaylistManagerInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlaylistManagerInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PlaylistManagerInterface,
      qt_meta_data_PlaylistManagerInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlaylistManagerInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlaylistManagerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlaylistManagerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistManagerInterface))
        return static_cast<void*>(const_cast< PlaylistManagerInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int PlaylistManagerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    return _id;
}

// SIGNAL 0
void PlaylistManagerInterface::PlaylistManagerInitialized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void PlaylistManagerInterface::PlaylistAdded(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlaylistManagerInterface::PlaylistDeleted(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PlaylistManagerInterface::PlaylistClosed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PlaylistManagerInterface::PlaylistRenamed(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PlaylistManagerInterface::CurrentChanged(Playlist * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PlaylistManagerInterface::ActiveChanged(Playlist * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PlaylistManagerInterface::Error(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PlaylistManagerInterface::SummaryTextChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PlaylistManagerInterface::CurrentSongChanged(const Song & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void PlaylistManagerInterface::PlaylistChanged(Playlist * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void PlaylistManagerInterface::EditingFinished(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void PlaylistManagerInterface::PlayRequested(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
static const uint qt_meta_data_PlaylistManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      41,   17,   16,   16, 0x0a,
      82,   71,   16,   16, 0x2a,
     109,  104,   16,   16, 0x2a,
     131,  122,   16,   16, 0x0a,
     157,  145,   16,   16, 0x0a,
     187,  175,   16,   16, 0x0a,
     210,  207,   16,   16, 0x0a,
     227,  207,  222,   16, 0x0a,
     238,  207,   16,   16, 0x0a,
     252,  248,   16,   16, 0x0a,
     284,  207,   16,   16, 0x0a,
     308,  207,   16,   16, 0x0a,
     331,   16,   16,   16, 0x0a,
     362,  352,   16,   16, 0x0a,
     395,  207,   16,   16, 0x0a,
     417,   16,   16,   16, 0x0a,
     432,   16,   16,   16, 0x0a,
     449,   16,   16,   16, 0x0a,
     484,  475,   16,   16, 0x0a,
     526,  519,   16,   16, 0x0a,
     550,  519,   16,   16, 0x0a,
     594,  571,   16,   16, 0x0a,
     663,  653,   16,   16, 0x0a,
     701,   16,   16,   16, 0x08,
     720,   16,   16,   16, 0x08,
     738,   16,   16,   16, 0x08,
     757,   16,   16,   16, 0x08,
     781,   16,   16,   16, 0x08,
     807,  801,   16,   16, 0x08,
     841,  833,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PlaylistManager[] = {
    "PlaylistManager\0\0name,songs,special_type\0"
    "New(QString,SongList,QString)\0name,songs\0"
    "New(QString,SongList)\0name\0New(QString)\0"
    "filename\0Load(QString)\0id,filename\0"
    "Save(int,QString)\0id,new_name\0"
    "Rename(int,QString)\0id\0Delete(int)\0"
    "bool\0Close(int)\0Open(int)\0ids\0"
    "ChangePlaylistOrder(QList<int>)\0"
    "SetCurrentPlaylist(int)\0SetActivePlaylist(int)\0"
    "SetActiveToCurrent()\0selection\0"
    "SelectionChanged(QItemSelection)\0"
    "SetCurrentOrOpen(int)\0ClearCurrent()\0"
    "ShuffleCurrent()\0RemoveDuplicatesCurrent()\0"
    "url,song\0SetActiveStreamMetadata(QUrl,Song)\0"
    "rating\0RateCurrentSong(double)\0"
    "RateCurrentSong(int)\0generator,as_new,clear\0"
    "PlaySmartPlaylist(smart_playlists::GeneratorPtr,bool,bool)\0"
    "url,valid\0SongChangeRequestProcessed(QUrl,bool)\0"
    "SetActivePlaying()\0SetActivePaused()\0"
    "SetActiveStopped()\0OneOfPlaylistsChanged()\0"
    "UpdateSummaryText()\0songs\0"
    "SongsDiscovered(SongList)\0success\0"
    "LoadFinished(bool)\0"
};

void PlaylistManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlaylistManager *_t = static_cast<PlaylistManager *>(_o);
        switch (_id) {
        case 0: _t->New((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const SongList(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->New((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const SongList(*)>(_a[2]))); break;
        case 2: _t->New((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->Load((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->Save((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->Rename((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->Delete((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: { bool _r = _t->Close((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->Open((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->ChangePlaylistOrder((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 10: _t->SetCurrentPlaylist((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->SetActivePlaylist((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->SetActiveToCurrent(); break;
        case 13: _t->SelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1]))); break;
        case 14: _t->SetCurrentOrOpen((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->ClearCurrent(); break;
        case 16: _t->ShuffleCurrent(); break;
        case 17: _t->RemoveDuplicatesCurrent(); break;
        case 18: _t->SetActiveStreamMetadata((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const Song(*)>(_a[2]))); break;
        case 19: _t->RateCurrentSong((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 20: _t->RateCurrentSong((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->PlaySmartPlaylist((*reinterpret_cast< smart_playlists::GeneratorPtr(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 22: _t->SongChangeRequestProcessed((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 23: _t->SetActivePlaying(); break;
        case 24: _t->SetActivePaused(); break;
        case 25: _t->SetActiveStopped(); break;
        case 26: _t->OneOfPlaylistsChanged(); break;
        case 27: _t->UpdateSummaryText(); break;
        case 28: _t->SongsDiscovered((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 29: _t->LoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PlaylistManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlaylistManager::staticMetaObject = {
    { &PlaylistManagerInterface::staticMetaObject, qt_meta_stringdata_PlaylistManager,
      qt_meta_data_PlaylistManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlaylistManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlaylistManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlaylistManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistManager))
        return static_cast<void*>(const_cast< PlaylistManager*>(this));
    return PlaylistManagerInterface::qt_metacast(_clname);
}

int PlaylistManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlaylistManagerInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
