/****************************************************************************
** Meta object code from reading C++ file 'player.h'
**
** Created: Tue Apr 23 15:28:02 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "player.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'player.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlayerInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      27,   16,   16,   16, 0x05,
      36,   16,   16,   16, 0x05,
      46,   16,   16,   16, 0x05,
      72,   65,   16,   16, 0x05,
      99,   91,   16,   16, 0x05,
     124,  114,   16,   16, 0x05,
     167,  154,   16,   16, 0x05,
     195,  185,   16,   16, 0x05,
     241,  233,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     265,   16,   16,   16, 0x0a,
     301,  282,   16,   16, 0x0a,
     343,   16,   16,   16, 0x0a,
     355,   16,   16,   16, 0x0a,
     362,   16,   16,   16, 0x0a,
     379,  373,   16,   16, 0x0a,
     394,   16,   16,   16, 0x0a,
     405,   16,   16,   16, 0x0a,
     426,  418,   16,   16, 0x0a,
     438,   16,   16,   16, 0x0a,
     452,   16,   16,   16, 0x0a,
     476,  467,   16,   16, 0x0a,
     505,   16,   16,   16, 0x0a,
     512,   16,   16,   16, 0x0a,
     520,   16,   16,   16, 0x0a,
     527,   16,   16,   16, 0x0a,
     534,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PlayerInterface[] = {
    "PlayerInterface\0\0Playing()\0Paused()\0"
    "Stopped()\0PlaylistFinished()\0volume\0"
    "VolumeChanged(int)\0message\0Error(QString)\0"
    "old_track\0TrackSkipped(PlaylistItemPtr)\0"
    "microseconds\0Seeked(qlonglong)\0url,valid\0"
    "SongChangeRequestProcessed(QUrl,bool)\0"
    ",toogle\0ForceShowOSD(Song,bool)\0"
    "ReloadSettings()\0i,change,reshuffle\0"
    "PlayAt(int,Engine::TrackChangeFlags,bool)\0"
    "PlayPause()\0Next()\0Previous()\0value\0"
    "SetVolume(int)\0VolumeUp()\0VolumeDown()\0"
    "seconds\0SeekTo(int)\0SeekForward()\0"
    "SeekBackward()\0metadata\0"
    "CurrentMetadataChanged(Song)\0Mute()\0"
    "Pause()\0Stop()\0Play()\0ShowOSD()\0"
};

void PlayerInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlayerInterface *_t = static_cast<PlayerInterface *>(_o);
        switch (_id) {
        case 0: _t->Playing(); break;
        case 1: _t->Paused(); break;
        case 2: _t->Stopped(); break;
        case 3: _t->PlaylistFinished(); break;
        case 4: _t->VolumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->Error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->TrackSkipped((*reinterpret_cast< PlaylistItemPtr(*)>(_a[1]))); break;
        case 7: _t->Seeked((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 8: _t->SongChangeRequestProcessed((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->ForceShowOSD((*reinterpret_cast< Song(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->ReloadSettings(); break;
        case 11: _t->PlayAt((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Engine::TrackChangeFlags(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 12: _t->PlayPause(); break;
        case 13: _t->Next(); break;
        case 14: _t->Previous(); break;
        case 15: _t->SetVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->VolumeUp(); break;
        case 17: _t->VolumeDown(); break;
        case 18: _t->SeekTo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->SeekForward(); break;
        case 20: _t->SeekBackward(); break;
        case 21: _t->CurrentMetadataChanged((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 22: _t->Mute(); break;
        case 23: _t->Pause(); break;
        case 24: _t->Stop(); break;
        case 25: _t->Play(); break;
        case 26: _t->ShowOSD(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PlayerInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlayerInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PlayerInterface,
      qt_meta_data_PlayerInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlayerInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlayerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlayerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlayerInterface))
        return static_cast<void*>(const_cast< PlayerInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int PlayerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void PlayerInterface::Playing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void PlayerInterface::Paused()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void PlayerInterface::Stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void PlayerInterface::PlaylistFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void PlayerInterface::VolumeChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PlayerInterface::Error(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PlayerInterface::TrackSkipped(PlaylistItemPtr _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PlayerInterface::Seeked(qlonglong _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PlayerInterface::SongChangeRequestProcessed(const QUrl & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PlayerInterface::ForceShowOSD(Song _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
static const uint qt_meta_data_Player[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      44,   25,    7,    7, 0x0a,
      86,    7,    7,    7, 0x0a,
      98,    7,    7,    7, 0x0a,
     105,    7,    7,    7, 0x0a,
     122,  116,    7,    7, 0x0a,
     137,    7,    7,    7, 0x0a,
     148,    7,    7,    7, 0x0a,
     169,  161,    7,    7, 0x0a,
     181,    7,    7,    7, 0x0a,
     195,    7,    7,    7, 0x0a,
     219,  210,    7,    7, 0x0a,
     248,    7,    7,    7, 0x0a,
     255,    7,    7,    7, 0x0a,
     263,    7,    7,    7, 0x0a,
     270,    7,    7,    7, 0x0a,
     277,    7,    7,    7, 0x0a,
     287,    7,    7,    7, 0x0a,
     305,    7,    7,    7, 0x08,
     346,  339,    7,    7, 0x08,
     395,    7,    7,    7, 0x08,
     413,    7,    7,    7, 0x08,
     433,  426,    7,    7, 0x08,
     468,  426,    7,    7, 0x08,
     507,    7,    7,    7, 0x08,
     546,    7,    7,    7, 0x08,
     571,    7,    7,    7, 0x08,
     605,  598,    7,    7, 0x08,
     642,  635,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Player[] = {
    "Player\0\0ReloadSettings()\0i,change,reshuffle\0"
    "PlayAt(int,Engine::TrackChangeFlags,bool)\0"
    "PlayPause()\0Next()\0Previous()\0value\0"
    "SetVolume(int)\0VolumeUp()\0VolumeDown()\0"
    "seconds\0SeekTo(int)\0SeekForward()\0"
    "SeekBackward()\0metadata\0"
    "CurrentMetadataChanged(Song)\0Mute()\0"
    "Pause()\0Stop()\0Play()\0ShowOSD()\0"
    "TogglePrettyOSD()\0EngineStateChanged(Engine::State)\0"
    "bundle\0EngineMetadataReceived(Engine::SimpleMetaBundle)\0"
    "TrackAboutToEnd()\0TrackEnded()\0change\0"
    "NextItem(Engine::TrackChangeFlags)\0"
    "PreviousItem(Engine::TrackChangeFlags)\0"
    "NextInternal(Engine::TrackChangeFlags)\0"
    "ValidSongRequested(QUrl)\0"
    "InvalidSongRequested(QUrl)\0object\0"
    "UrlHandlerDestroyed(QObject*)\0result\0"
    "HandleLoadResult(UrlHandler::LoadResult)\0"
};

void Player::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Player *_t = static_cast<Player *>(_o);
        switch (_id) {
        case 0: _t->ReloadSettings(); break;
        case 1: _t->PlayAt((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Engine::TrackChangeFlags(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->PlayPause(); break;
        case 3: _t->Next(); break;
        case 4: _t->Previous(); break;
        case 5: _t->SetVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->VolumeUp(); break;
        case 7: _t->VolumeDown(); break;
        case 8: _t->SeekTo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->SeekForward(); break;
        case 10: _t->SeekBackward(); break;
        case 11: _t->CurrentMetadataChanged((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 12: _t->Mute(); break;
        case 13: _t->Pause(); break;
        case 14: _t->Stop(); break;
        case 15: _t->Play(); break;
        case 16: _t->ShowOSD(); break;
        case 17: _t->TogglePrettyOSD(); break;
        case 18: _t->EngineStateChanged((*reinterpret_cast< Engine::State(*)>(_a[1]))); break;
        case 19: _t->EngineMetadataReceived((*reinterpret_cast< const Engine::SimpleMetaBundle(*)>(_a[1]))); break;
        case 20: _t->TrackAboutToEnd(); break;
        case 21: _t->TrackEnded(); break;
        case 22: _t->NextItem((*reinterpret_cast< Engine::TrackChangeFlags(*)>(_a[1]))); break;
        case 23: _t->PreviousItem((*reinterpret_cast< Engine::TrackChangeFlags(*)>(_a[1]))); break;
        case 24: _t->NextInternal((*reinterpret_cast< Engine::TrackChangeFlags(*)>(_a[1]))); break;
        case 25: _t->ValidSongRequested((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 26: _t->InvalidSongRequested((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 27: _t->UrlHandlerDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 28: _t->HandleLoadResult((*reinterpret_cast< const UrlHandler::LoadResult(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Player::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Player::staticMetaObject = {
    { &PlayerInterface::staticMetaObject, qt_meta_stringdata_Player,
      qt_meta_data_Player, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Player::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Player::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Player::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Player))
        return static_cast<void*>(const_cast< Player*>(this));
    return PlayerInterface::qt_metacast(_clname);
}

int Player::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlayerInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
