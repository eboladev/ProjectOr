/****************************************************************************
** Meta object code from reading C++ file 'librarybackend.h'
**
** Created: Tue Apr 23 15:28:07 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "librarybackend.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'librarybackend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LibraryBackendInterface[] = {

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

static const char qt_meta_stringdata_LibraryBackendInterface[] = {
    "LibraryBackendInterface\0"
};

void LibraryBackendInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData LibraryBackendInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LibraryBackendInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LibraryBackendInterface,
      qt_meta_data_LibraryBackendInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LibraryBackendInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LibraryBackendInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LibraryBackendInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LibraryBackendInterface))
        return static_cast<void*>(const_cast< LibraryBackendInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int LibraryBackendInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_LibraryBackend[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       2,  119, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   16,   15,   15, 0x05,
      80,   76,   15,   15, 0x05,
     114,  108,   15,   15, 0x05,
     140,  108,   15,   15, 0x05,
     163,  108,   15,   15, 0x05,
     196,   15,   15,   15, 0x05,
     218,  212,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     245,   15,   15,   15, 0x0a,
     263,   15,   15,   15, 0x0a,
     286,  108,   15,   15, 0x0a,
     313,  108,   15,   15, 0x0a,
     340,  108,   15,   15, 0x0a,
     362,  108,   15,   15, 0x0a,
     401,  393,   15,   15, 0x0a,
     438,   15,   15,   15, 0x0a,
     476,  459,   15,   15, 0x0a,
     539,  522,   15,   15, 0x0a,
     588,  585,   15,   15, 0x0a,
     624,  612,   15,   15, 0x0a,
     654,  585,   15,   15, 0x0a,
     685,  675,   15,   15, 0x0a,

 // constructors: signature, parameters, type, tag, flags
     720,  713,   15,   15, 0x0e,
     745,   15,   15,   15, 0x2e,

       0        // eod
};

static const char qt_meta_stringdata_LibraryBackend[] = {
    "LibraryBackend\0\0dir,subdirs\0"
    "DirectoryDiscovered(Directory,SubdirectoryList)\0"
    "dir\0DirectoryDeleted(Directory)\0songs\0"
    "SongsDiscovered(SongList)\0"
    "SongsDeleted(SongList)\0"
    "SongsStatisticsChanged(SongList)\0"
    "DatabaseReset()\0total\0TotalSongCountUpdated(int)\0"
    "LoadDirectories()\0UpdateTotalSongCount()\0"
    "AddOrUpdateSongs(SongList)\0"
    "UpdateMTimesOnly(SongList)\0"
    "DeleteSongs(SongList)\0"
    "MarkSongsUnavailable(SongList)\0subdirs\0"
    "AddOrUpdateSubdirs(SubdirectoryList)\0"
    "UpdateCompilations()\0artist,album,art\0"
    "UpdateManualAlbumArt(QString,QString,QString)\0"
    "album,artists,on\0"
    "ForceCompilation(QString,QList<QString>,bool)\0"
    "id\0IncrementPlayCount(int)\0id,progress\0"
    "IncrementSkipCount(int,float)\0"
    "ResetStatistics(int)\0id,rating\0"
    "UpdateSongRating(int,float)\0parent\0"
    "LibraryBackend(QObject*)\0LibraryBackend()\0"
};

void LibraryBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { LibraryBackend *_r = new LibraryBackend((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { LibraryBackend *_r = new LibraryBackend();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LibraryBackend *_t = static_cast<LibraryBackend *>(_o);
        switch (_id) {
        case 0: _t->DirectoryDiscovered((*reinterpret_cast< const Directory(*)>(_a[1])),(*reinterpret_cast< const SubdirectoryList(*)>(_a[2]))); break;
        case 1: _t->DirectoryDeleted((*reinterpret_cast< const Directory(*)>(_a[1]))); break;
        case 2: _t->SongsDiscovered((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 3: _t->SongsDeleted((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 4: _t->SongsStatisticsChanged((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 5: _t->DatabaseReset(); break;
        case 6: _t->TotalSongCountUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->LoadDirectories(); break;
        case 8: _t->UpdateTotalSongCount(); break;
        case 9: _t->AddOrUpdateSongs((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 10: _t->UpdateMTimesOnly((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 11: _t->DeleteSongs((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 12: _t->MarkSongsUnavailable((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 13: _t->AddOrUpdateSubdirs((*reinterpret_cast< const SubdirectoryList(*)>(_a[1]))); break;
        case 14: _t->UpdateCompilations(); break;
        case 15: _t->UpdateManualAlbumArt((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 16: _t->ForceCompilation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<QString>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 17: _t->IncrementPlayCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->IncrementSkipCount((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 19: _t->ResetStatistics((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->UpdateSongRating((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LibraryBackend::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LibraryBackend::staticMetaObject = {
    { &LibraryBackendInterface::staticMetaObject, qt_meta_stringdata_LibraryBackend,
      qt_meta_data_LibraryBackend, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LibraryBackend::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LibraryBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LibraryBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LibraryBackend))
        return static_cast<void*>(const_cast< LibraryBackend*>(this));
    return LibraryBackendInterface::qt_metacast(_clname);
}

int LibraryBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LibraryBackendInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void LibraryBackend::DirectoryDiscovered(const Directory & _t1, const SubdirectoryList & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LibraryBackend::DirectoryDeleted(const Directory & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LibraryBackend::SongsDiscovered(const SongList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LibraryBackend::SongsDeleted(const SongList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LibraryBackend::SongsStatisticsChanged(const SongList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LibraryBackend::DatabaseReset()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void LibraryBackend::TotalSongCountUpdated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
