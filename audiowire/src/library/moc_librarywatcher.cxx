/****************************************************************************
** Meta object code from reading C++ file 'librarywatcher.h'
**
** Created: Tue Apr 23 15:28:08 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "librarywatcher.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'librarywatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LibraryWatcher[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   16,   15,   15, 0x05,
      50,   16,   15,   15, 0x05,
      78,   16,   15,   15, 0x05,
     109,  101,   15,   15, 0x05,
     145,  101,   15,   15, 0x05,
     183,   15,   15,   15, 0x05,
     218,  210,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     235,   15,   15,   15, 0x0a,
     264,  252,   15,   15, 0x0a,
     309,  305,   15,   15, 0x0a,
     342,  336,   15,   15, 0x0a,
     369,  364,   15,   15, 0x08,
     395,   15,   15,   15, 0x08,
     416,   15,   15,   15, 0x08,
     430,   15,   15,   15, 0x08,
     481,  447,   15,   15, 0x08,
     556,  542,   15,   15, 0x28,

       0        // eod
};

static const char qt_meta_stringdata_LibraryWatcher[] = {
    "LibraryWatcher\0\0songs\0NewOrUpdatedSongs(SongList)\0"
    "SongsMTimeUpdated(SongList)\0"
    "SongsDeleted(SongList)\0subdirs\0"
    "SubdirsDiscovered(SubdirectoryList)\0"
    "SubdirsMTimeUpdated(SubdirectoryList)\0"
    "CompilationsNeedUpdating()\0task_id\0"
    "ScanStarted(int)\0ReloadSettings()\0"
    "dir,subdirs\0AddDirectory(Directory,SubdirectoryList)\0"
    "dir\0RemoveDirectory(Directory)\0pause\0"
    "SetRescanPaused(bool)\0path\0"
    "DirectoryChanged(QString)\0"
    "IncrementalScanNow()\0FullScanNow()\0"
    "RescanPathsNow()\0path,subdir,t,force_noincremental\0"
    "ScanSubdirectory(QString,Subdirectory,ScanTransaction*,bool)\0"
    "path,subdir,t\0"
    "ScanSubdirectory(QString,Subdirectory,ScanTransaction*)\0"
};

void LibraryWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LibraryWatcher *_t = static_cast<LibraryWatcher *>(_o);
        switch (_id) {
        case 0: _t->NewOrUpdatedSongs((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 1: _t->SongsMTimeUpdated((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 2: _t->SongsDeleted((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 3: _t->SubdirsDiscovered((*reinterpret_cast< const SubdirectoryList(*)>(_a[1]))); break;
        case 4: _t->SubdirsMTimeUpdated((*reinterpret_cast< const SubdirectoryList(*)>(_a[1]))); break;
        case 5: _t->CompilationsNeedUpdating(); break;
        case 6: _t->ScanStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->ReloadSettings(); break;
        case 8: _t->AddDirectory((*reinterpret_cast< const Directory(*)>(_a[1])),(*reinterpret_cast< const SubdirectoryList(*)>(_a[2]))); break;
        case 9: _t->RemoveDirectory((*reinterpret_cast< const Directory(*)>(_a[1]))); break;
        case 10: _t->SetRescanPaused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->DirectoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->IncrementalScanNow(); break;
        case 13: _t->FullScanNow(); break;
        case 14: _t->RescanPathsNow(); break;
        case 15: _t->ScanSubdirectory((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Subdirectory(*)>(_a[2])),(*reinterpret_cast< ScanTransaction*(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 16: _t->ScanSubdirectory((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Subdirectory(*)>(_a[2])),(*reinterpret_cast< ScanTransaction*(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LibraryWatcher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LibraryWatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LibraryWatcher,
      qt_meta_data_LibraryWatcher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LibraryWatcher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LibraryWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LibraryWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LibraryWatcher))
        return static_cast<void*>(const_cast< LibraryWatcher*>(this));
    return QObject::qt_metacast(_clname);
}

int LibraryWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void LibraryWatcher::NewOrUpdatedSongs(const SongList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LibraryWatcher::SongsMTimeUpdated(const SongList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LibraryWatcher::SongsDeleted(const SongList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LibraryWatcher::SubdirsDiscovered(const SubdirectoryList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LibraryWatcher::SubdirsMTimeUpdated(const SubdirectoryList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LibraryWatcher::CompilationsNeedUpdating()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void LibraryWatcher::ScanStarted(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
