/****************************************************************************
** Meta object code from reading C++ file 'librarymodel.h'
**
** Created: Tue Apr 23 15:28:08 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "librarymodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'librarymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LibraryModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       1,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   14,   13,   13, 0x05,
      49,   47,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      93,   89,   13,   13, 0x0a,
     116,  111,   13,   13, 0x0a,
     150,  139,   13,   13, 0x0a,
     194,   47,   13,   13, 0x0a,
     235,  229,   13,   13, 0x0a,
     246,   13,   13,   13, 0x2a,
     253,   13,   13,   13, 0x0a,
     261,   13,   13,   13, 0x0a,
     280,  274,   13,   13, 0x08,
     306,  274,   13,   13, 0x08,
     329,  274,   13,   13, 0x08,
     362,   14,   13,   13, 0x08,
     393,   13,   13,   13, 0x08,
     428,  419,   13,   13, 0x08,

 // enums: name, flags, count, data
     459, 0x0,    9,   98,

 // enum data: key, value
     467, uint(LibraryModel::GroupBy_None),
     480, uint(LibraryModel::GroupBy_Artist),
     495, uint(LibraryModel::GroupBy_Album),
     509, uint(LibraryModel::GroupBy_YearAlbum),
     527, uint(LibraryModel::GroupBy_Year),
     540, uint(LibraryModel::GroupBy_Composer),
     557, uint(LibraryModel::GroupBy_Genre),
     571, uint(LibraryModel::GroupBy_AlbumArtist),
     591, uint(LibraryModel::GroupBy_FileType),

       0        // eod
};

static const char qt_meta_stringdata_LibraryModel[] = {
    "LibraryModel\0\0count\0TotalSongCountUpdated(int)\0"
    "g\0GroupingChanged(LibraryModel::Grouping)\0"
    "age\0SetFilterAge(int)\0text\0"
    "SetFilterText(QString)\0query_mode\0"
    "SetFilterQueryMode(QueryOptions::QueryMode)\0"
    "SetGroupBy(LibraryModel::Grouping)\0"
    "async\0Init(bool)\0Init()\0Reset()\0"
    "ResetAsync()\0songs\0SongsDiscovered(SongList)\0"
    "SongsDeleted(SongList)\0"
    "SongsStatisticsChanged(SongList)\0"
    "TotalSongCountUpdatedSlot(int)\0"
    "ResetAsyncQueryFinished()\0id,image\0"
    "AlbumArtLoaded(quint64,QImage)\0GroupBy\0"
    "GroupBy_None\0GroupBy_Artist\0GroupBy_Album\0"
    "GroupBy_YearAlbum\0GroupBy_Year\0"
    "GroupBy_Composer\0GroupBy_Genre\0"
    "GroupBy_AlbumArtist\0GroupBy_FileType\0"
};

void LibraryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LibraryModel *_t = static_cast<LibraryModel *>(_o);
        switch (_id) {
        case 0: _t->TotalSongCountUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->GroupingChanged((*reinterpret_cast< const LibraryModel::Grouping(*)>(_a[1]))); break;
        case 2: _t->SetFilterAge((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->SetFilterText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->SetFilterQueryMode((*reinterpret_cast< QueryOptions::QueryMode(*)>(_a[1]))); break;
        case 5: _t->SetGroupBy((*reinterpret_cast< const LibraryModel::Grouping(*)>(_a[1]))); break;
        case 6: _t->Init((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->Init(); break;
        case 8: _t->Reset(); break;
        case 9: _t->ResetAsync(); break;
        case 10: _t->SongsDiscovered((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 11: _t->SongsDeleted((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 12: _t->SongsStatisticsChanged((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 13: _t->TotalSongCountUpdatedSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->ResetAsyncQueryFinished(); break;
        case 15: _t->AlbumArtLoaded((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LibraryModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LibraryModel::staticMetaObject = {
    { &SimpleTreeModel<LibraryItem>::staticMetaObject, qt_meta_stringdata_LibraryModel,
      qt_meta_data_LibraryModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LibraryModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LibraryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LibraryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LibraryModel))
        return static_cast<void*>(const_cast< LibraryModel*>(this));
    return SimpleTreeModel<LibraryItem>::qt_metacast(_clname);
}

int LibraryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SimpleTreeModel<LibraryItem>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void LibraryModel::TotalSongCountUpdated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LibraryModel::GroupingChanged(const LibraryModel::Grouping & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
