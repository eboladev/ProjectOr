/****************************************************************************
** Meta object code from reading C++ file 'playlistcontainer.h'
**
** Created: Tue Apr 23 15:28:09 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playlistcontainer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistcontainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlaylistContainer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   19,   18,   18, 0x05,
      50,   38,   18,   18, 0x05,
      80,   70,   18,   18, 0x05,
     122,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     150,   18,   18,   18, 0x08,
     164,   18,   18,   18, 0x08,
     179,   18,   18,   18, 0x08,
     194,   19,   18,   18, 0x08,
     212,   18,   18,   18, 0x08,
     234,   18,   18,   18, 0x08,
     269,  260,   18,   18, 0x08,
     301,  293,   18,   18, 0x08,
     328,   19,   18,   18, 0x08,
     348,   38,   18,   18, 0x08,
     377,   18,   18,   18, 0x08,
     393,   18,   18,   18, 0x08,
     408,   18,   18,   18, 0x08,
     424,   18,   18,   18, 0x08,
     439,  431,   18,   18, 0x08,
     469,  462,   18,   18, 0x08,
     490,   18,   18,   18, 0x08,
     509,   18,   18,   18, 0x08,
     529,   18,   18,   18, 0x08,
     550,  544,   18,   18, 0x08,
     576,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PlaylistContainer[] = {
    "PlaylistContainer\0\0id\0TabChanged(int)\0"
    "id,new_name\0Rename(int,QString)\0"
    "undo,redo\0UndoRedoActionsChanged(QAction*,QAction*)\0"
    "ViewSelectionModelChanged()\0NewPlaylist()\0"
    "LoadPlaylist()\0SavePlaylist()\0"
    "SavePlaylist(int)\0GoToNextPlaylistTab()\0"
    "GoToPreviousPlaylistTab()\0playlist\0"
    "SetViewModel(Playlist*)\0id,name\0"
    "PlaylistAdded(int,QString)\0"
    "PlaylistClosed(int)\0PlaylistRenamed(int,QString)\0"
    "ActivePlaying()\0ActivePaused()\0"
    "ActiveStopped()\0Save()\0visible\0"
    "SetTabBarVisible(bool)\0height\0"
    "SetTabBarHeight(int)\0SelectionChanged()\0"
    "MaybeUpdateFilter()\0UpdateFilter()\0"
    "event\0FocusOnFilter(QKeyEvent*)\0"
    "UpdateNoMatchesLabel()\0"
};

void PlaylistContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlaylistContainer *_t = static_cast<PlaylistContainer *>(_o);
        switch (_id) {
        case 0: _t->TabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->Rename((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->UndoRedoActionsChanged((*reinterpret_cast< QAction*(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 3: _t->ViewSelectionModelChanged(); break;
        case 4: _t->NewPlaylist(); break;
        case 5: _t->LoadPlaylist(); break;
        case 6: _t->SavePlaylist(); break;
        case 7: _t->SavePlaylist((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->GoToNextPlaylistTab(); break;
        case 9: _t->GoToPreviousPlaylistTab(); break;
        case 10: _t->SetViewModel((*reinterpret_cast< Playlist*(*)>(_a[1]))); break;
        case 11: _t->PlaylistAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->PlaylistClosed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->PlaylistRenamed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->ActivePlaying(); break;
        case 15: _t->ActivePaused(); break;
        case 16: _t->ActiveStopped(); break;
        case 17: _t->Save(); break;
        case 18: _t->SetTabBarVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->SetTabBarHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->SelectionChanged(); break;
        case 21: _t->MaybeUpdateFilter(); break;
        case 22: _t->UpdateFilter(); break;
        case 23: _t->FocusOnFilter((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 24: _t->UpdateNoMatchesLabel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PlaylistContainer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlaylistContainer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PlaylistContainer,
      qt_meta_data_PlaylistContainer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlaylistContainer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlaylistContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlaylistContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistContainer))
        return static_cast<void*>(const_cast< PlaylistContainer*>(this));
    return QWidget::qt_metacast(_clname);
}

int PlaylistContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void PlaylistContainer::TabChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlaylistContainer::Rename(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlaylistContainer::UndoRedoActionsChanged(QAction * _t1, QAction * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PlaylistContainer::ViewSelectionModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
