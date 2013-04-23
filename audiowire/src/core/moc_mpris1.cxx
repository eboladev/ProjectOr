/****************************************************************************
** Meta object code from reading C++ file 'mpris1.h'
**
** Created: Tue Apr 23 15:28:19 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mpris1.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mpris1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mpris__Mpris1[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_mpris__Mpris1[] = {
    "mpris::Mpris1\0"
};

void mpris::Mpris1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData mpris::Mpris1::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mpris::Mpris1::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_mpris__Mpris1,
      qt_meta_data_mpris__Mpris1, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mpris::Mpris1::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mpris::Mpris1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mpris::Mpris1::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mpris__Mpris1))
        return static_cast<void*>(const_cast< Mpris1*>(this));
    return QObject::qt_metacast(_clname);
}

int mpris::Mpris1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_mpris__Mpris1Root[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_mpris__Mpris1Root[] = {
    "mpris::Mpris1Root\0"
};

void mpris::Mpris1Root::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData mpris::Mpris1Root::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mpris::Mpris1Root::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_mpris__Mpris1Root,
      qt_meta_data_mpris__Mpris1Root, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mpris::Mpris1Root::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mpris::Mpris1Root::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mpris::Mpris1Root::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mpris__Mpris1Root))
        return static_cast<void*>(const_cast< Mpris1Root*>(this));
    return QObject::qt_metacast(_clname);
}

int mpris::Mpris1Root::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_mpris__Mpris1Player[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      37,   20,   20,   20, 0x05,
      62,   20,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     101,   87,   20,   20, 0x0a,
     141,   20,   20,   20, 0x08,
     176,  170,   20,   20, 0x08,
     210,   20,   20,   20, 0x08,
     231,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_mpris__Mpris1Player[] = {
    "mpris::Mpris1Player\0\0CapsChange(int)\0"
    "TrackChange(QVariantMap)\0"
    "StatusChange(DBusStatus)\0song,art_uri,\0"
    "CurrentSongChanged(Song,QString,QImage)\0"
    "PlaylistManagerInitialized()\0state\0"
    "EngineStateChanged(Engine::State)\0"
    "ShuffleModeChanged()\0RepeatModeChanged()\0"
};

void mpris::Mpris1Player::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Mpris1Player *_t = static_cast<Mpris1Player *>(_o);
        switch (_id) {
        case 0: _t->CapsChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->TrackChange((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 2: _t->StatusChange((*reinterpret_cast< DBusStatus(*)>(_a[1]))); break;
        case 3: _t->CurrentSongChanged((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QImage(*)>(_a[3]))); break;
        case 4: _t->PlaylistManagerInitialized(); break;
        case 5: _t->EngineStateChanged((*reinterpret_cast< Engine::State(*)>(_a[1]))); break;
        case 6: _t->ShuffleModeChanged(); break;
        case 7: _t->RepeatModeChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData mpris::Mpris1Player::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mpris::Mpris1Player::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_mpris__Mpris1Player,
      qt_meta_data_mpris__Mpris1Player, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mpris::Mpris1Player::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mpris::Mpris1Player::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mpris::Mpris1Player::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mpris__Mpris1Player))
        return static_cast<void*>(const_cast< Mpris1Player*>(this));
    return QObject::qt_metacast(_clname);
}

int mpris::Mpris1Player::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void mpris::Mpris1Player::CapsChange(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mpris::Mpris1Player::TrackChange(const QVariantMap & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mpris::Mpris1Player::StatusChange(DBusStatus _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_mpris__Mpris1TrackList[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   24,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      56,   47,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_mpris__Mpris1TrackList[] = {
    "mpris::Mpris1TrackList\0\0i\0"
    "TrackListChange(int)\0playlist\0"
    "PlaylistChanged(Playlist*)\0"
};

void mpris::Mpris1TrackList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Mpris1TrackList *_t = static_cast<Mpris1TrackList *>(_o);
        switch (_id) {
        case 0: _t->TrackListChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->PlaylistChanged((*reinterpret_cast< Playlist*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData mpris::Mpris1TrackList::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mpris::Mpris1TrackList::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_mpris__Mpris1TrackList,
      qt_meta_data_mpris__Mpris1TrackList, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mpris::Mpris1TrackList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mpris::Mpris1TrackList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mpris::Mpris1TrackList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mpris__Mpris1TrackList))
        return static_cast<void*>(const_cast< Mpris1TrackList*>(this));
    return QObject::qt_metacast(_clname);
}

int mpris::Mpris1TrackList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void mpris::Mpris1TrackList::TrackListChange(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
