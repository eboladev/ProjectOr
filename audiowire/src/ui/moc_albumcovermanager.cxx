/****************************************************************************
** Meta object code from reading C++ file 'albumcovermanager.h'
**
** Created: Tue Apr 23 15:28:14 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "albumcovermanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'albumcovermanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AlbumCoverManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   19,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   50,   18,   18, 0x08,
      99,   90,   18,   18, 0x08,
     132,   18,   18,   18, 0x08,
     147,   18,   18,   18, 0x08,
     186,  166,   18,   18, 0x08,
     242,   18,   18,   18, 0x08,
     261,   18,   18,   18, 0x08,
     281,   18,   18,   18, 0x08,
     299,   18,   18,   18, 0x08,
     318,   18,   18,   18, 0x08,
     335,   18,   18,   18, 0x08,
     348,   18,   18,   18, 0x08,
     366,  360,   18,   18, 0x08,
     398,   18,   18,   18, 0x08,
     422,   18,   18,   18, 0x08,
     458,  447,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AlbumCoverManager[] = {
    "AlbumCoverManager\0\0data\0"
    "AddToPlaylist(QMimeData*)\0current\0"
    "ArtistChanged(QListWidgetItem*)\0"
    "id,image\0CoverImageLoaded(quint64,QImage)\0"
    "UpdateFilter()\0FetchAlbumCovers()\0"
    "id,image,statistics\0"
    "AlbumCoverFetched(quint64,QImage,CoverSearchStatistics)\0"
    "FetchSingleCover()\0LoadCoverFromFile()\0"
    "SaveCoverToFile()\0LoadCoverFromURL()\0"
    "SearchForCover()\0UnsetCover()\0ShowCover()\0"
    "index\0AlbumDoubleClicked(QModelIndex)\0"
    "AddSelectedToPlaylist()\0"
    "LoadSelectedToPlaylist()\0item,cover\0"
    "UpdateCoverInList(QListWidgetItem*,QString)\0"
};

void AlbumCoverManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AlbumCoverManager *_t = static_cast<AlbumCoverManager *>(_o);
        switch (_id) {
        case 0: _t->AddToPlaylist((*reinterpret_cast< QMimeData*(*)>(_a[1]))); break;
        case 1: _t->ArtistChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->CoverImageLoaded((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 3: _t->UpdateFilter(); break;
        case 4: _t->FetchAlbumCovers(); break;
        case 5: _t->AlbumCoverFetched((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const CoverSearchStatistics(*)>(_a[3]))); break;
        case 6: _t->FetchSingleCover(); break;
        case 7: _t->LoadCoverFromFile(); break;
        case 8: _t->SaveCoverToFile(); break;
        case 9: _t->LoadCoverFromURL(); break;
        case 10: _t->SearchForCover(); break;
        case 11: _t->UnsetCover(); break;
        case 12: _t->ShowCover(); break;
        case 13: _t->AlbumDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 14: _t->AddSelectedToPlaylist(); break;
        case 15: _t->LoadSelectedToPlaylist(); break;
        case 16: _t->UpdateCoverInList((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AlbumCoverManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AlbumCoverManager::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AlbumCoverManager,
      qt_meta_data_AlbumCoverManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AlbumCoverManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AlbumCoverManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AlbumCoverManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AlbumCoverManager))
        return static_cast<void*>(const_cast< AlbumCoverManager*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int AlbumCoverManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void AlbumCoverManager::AddToPlaylist(QMimeData * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
