/****************************************************************************
** Meta object code from reading C++ file 'playlistsequence.h'
**
** Created: Tue Apr 23 15:28:09 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playlistsequence.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistsequence.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlaylistSequence[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   18,   17,   17, 0x05,
      71,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     121,   18,   17,   17, 0x0a,
     165,   18,   17,   17, 0x0a,
     211,   17,   17,   17, 0x0a,
     230,   17,   17,   17, 0x0a,
     256,  248,   17,   17, 0x0a,
     286,   17,   17,   17, 0x08,
     318,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PlaylistSequence[] = {
    "PlaylistSequence\0\0mode\0"
    "RepeatModeChanged(PlaylistSequence::RepeatMode)\0"
    "ShuffleModeChanged(PlaylistSequence::ShuffleMode)\0"
    "SetRepeatMode(PlaylistSequence::RepeatMode)\0"
    "SetShuffleMode(PlaylistSequence::ShuffleMode)\0"
    "CycleShuffleMode()\0CycleRepeatMode()\0"
    "dynamic\0SetUsingDynamicPlaylist(bool)\0"
    "RepeatActionTriggered(QAction*)\0"
    "ShuffleActionTriggered(QAction*)\0"
};

void PlaylistSequence::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlaylistSequence *_t = static_cast<PlaylistSequence *>(_o);
        switch (_id) {
        case 0: _t->RepeatModeChanged((*reinterpret_cast< PlaylistSequence::RepeatMode(*)>(_a[1]))); break;
        case 1: _t->ShuffleModeChanged((*reinterpret_cast< PlaylistSequence::ShuffleMode(*)>(_a[1]))); break;
        case 2: _t->SetRepeatMode((*reinterpret_cast< PlaylistSequence::RepeatMode(*)>(_a[1]))); break;
        case 3: _t->SetShuffleMode((*reinterpret_cast< PlaylistSequence::ShuffleMode(*)>(_a[1]))); break;
        case 4: _t->CycleShuffleMode(); break;
        case 5: _t->CycleRepeatMode(); break;
        case 6: _t->SetUsingDynamicPlaylist((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->RepeatActionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 8: _t->ShuffleActionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PlaylistSequence::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlaylistSequence::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PlaylistSequence,
      qt_meta_data_PlaylistSequence, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlaylistSequence::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlaylistSequence::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlaylistSequence::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistSequence))
        return static_cast<void*>(const_cast< PlaylistSequence*>(this));
    return QWidget::qt_metacast(_clname);
}

int PlaylistSequence::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void PlaylistSequence::RepeatModeChanged(PlaylistSequence::RepeatMode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlaylistSequence::ShuffleModeChanged(PlaylistSequence::ShuffleMode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
