/****************************************************************************
** Meta object code from reading C++ file 'playlistlistcontainer.h'
**
** Created: Tue Apr 23 15:28:09 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playlistlistcontainer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistlistcontainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlaylistListContainer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x08,
      42,   22,   22,   22, 0x08,
      64,   58,   22,   22, 0x08,
     107,   95,   22,   22, 0x08,
     148,  140,   22,   22, 0x08,
     187,  175,   22,   22, 0x08,
     219,  216,   22,   22, 0x08,
     253,  240,   22,   22, 0x08,
     279,  240,   22,   22, 0x08,
     304,   22,   22,   22, 0x08,
     320,   22,   22,   22, 0x08,
     335,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PlaylistListContainer[] = {
    "PlaylistListContainer\0\0NewFolderClicked()\0"
    "DeleteClicked()\0index\0"
    "ViewIndexSelected(QModelIndex)\0"
    "id,new_path\0PlaylistPathChanged(int,QString)\0"
    "id,name\0PlaylistAdded(int,QString)\0"
    "id,new_name\0PlaylistRenamed(int,QString)\0"
    "id\0PlaylistDeleted(int)\0new_playlist\0"
    "CurrentChanged(Playlist*)\0"
    "ActiveChanged(Playlist*)\0ActivePlaying()\0"
    "ActivePaused()\0ActiveStopped()\0"
};

void PlaylistListContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlaylistListContainer *_t = static_cast<PlaylistListContainer *>(_o);
        switch (_id) {
        case 0: _t->NewFolderClicked(); break;
        case 1: _t->DeleteClicked(); break;
        case 2: _t->ViewIndexSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->PlaylistPathChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->PlaylistAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->PlaylistRenamed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->PlaylistDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->CurrentChanged((*reinterpret_cast< Playlist*(*)>(_a[1]))); break;
        case 8: _t->ActiveChanged((*reinterpret_cast< Playlist*(*)>(_a[1]))); break;
        case 9: _t->ActivePlaying(); break;
        case 10: _t->ActivePaused(); break;
        case 11: _t->ActiveStopped(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PlaylistListContainer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlaylistListContainer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PlaylistListContainer,
      qt_meta_data_PlaylistListContainer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlaylistListContainer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlaylistListContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlaylistListContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistListContainer))
        return static_cast<void*>(const_cast< PlaylistListContainer*>(this));
    return QWidget::qt_metacast(_clname);
}

int PlaylistListContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
