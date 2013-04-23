/****************************************************************************
** Meta object code from reading C++ file 'globalshortcuts.h'
**
** Created: Tue Apr 23 15:28:00 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "globalshortcuts.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'globalshortcuts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GlobalShortcuts[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      24,   16,   16,   16, 0x05,
      32,   16,   16,   16, 0x05,
      44,   16,   16,   16, 0x05,
      51,   16,   16,   16, 0x05,
      63,   16,   16,   16, 0x05,
      70,   16,   16,   16, 0x05,
      81,   16,   16,   16, 0x05,
      93,   16,   16,   16, 0x05,
     105,   16,   16,   16, 0x05,
     112,   16,   16,   16, 0x05,
     126,   16,   16,   16, 0x05,
     141,   16,   16,   16, 0x05,
     152,   16,   16,   16, 0x05,
     162,   16,   16,   16, 0x05,
     180,   16,   16,   16, 0x05,
     201,   16,   16,   16, 0x05,
     220,   16,   16,   16, 0x05,
     238,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     257,   16,   16,   16, 0x0a,
     274,   16,   16,   16, 0x0a,
     303,   16,   16,   16, 0x0a,
     316,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GlobalShortcuts[] = {
    "GlobalShortcuts\0\0Play()\0Pause()\0"
    "PlayPause()\0Stop()\0StopAfter()\0Next()\0"
    "Previous()\0IncVolume()\0DecVolume()\0"
    "Mute()\0SeekForward()\0SeekBackward()\0"
    "ShowHide()\0ShowOSD()\0TogglePrettyOSD()\0"
    "RateCurrentSong(int)\0CycleShuffleMode()\0"
    "CycleRepeatMode()\0ToggleScrobbling()\0"
    "ReloadSettings()\0ShowMacAccessibilityDialog()\0"
    "Unregister()\0Register()\0"
};

void GlobalShortcuts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GlobalShortcuts *_t = static_cast<GlobalShortcuts *>(_o);
        switch (_id) {
        case 0: _t->Play(); break;
        case 1: _t->Pause(); break;
        case 2: _t->PlayPause(); break;
        case 3: _t->Stop(); break;
        case 4: _t->StopAfter(); break;
        case 5: _t->Next(); break;
        case 6: _t->Previous(); break;
        case 7: _t->IncVolume(); break;
        case 8: _t->DecVolume(); break;
        case 9: _t->Mute(); break;
        case 10: _t->SeekForward(); break;
        case 11: _t->SeekBackward(); break;
        case 12: _t->ShowHide(); break;
        case 13: _t->ShowOSD(); break;
        case 14: _t->TogglePrettyOSD(); break;
        case 15: _t->RateCurrentSong((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->CycleShuffleMode(); break;
        case 17: _t->CycleRepeatMode(); break;
        case 18: _t->ToggleScrobbling(); break;
        case 19: _t->ReloadSettings(); break;
        case 20: _t->ShowMacAccessibilityDialog(); break;
        case 21: _t->Unregister(); break;
        case 22: _t->Register(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GlobalShortcuts::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GlobalShortcuts::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GlobalShortcuts,
      qt_meta_data_GlobalShortcuts, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GlobalShortcuts::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GlobalShortcuts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GlobalShortcuts::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalShortcuts))
        return static_cast<void*>(const_cast< GlobalShortcuts*>(this));
    return QObject::qt_metacast(_clname);
}

int GlobalShortcuts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void GlobalShortcuts::Play()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void GlobalShortcuts::Pause()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void GlobalShortcuts::PlayPause()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void GlobalShortcuts::Stop()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void GlobalShortcuts::StopAfter()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void GlobalShortcuts::Next()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void GlobalShortcuts::Previous()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void GlobalShortcuts::IncVolume()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void GlobalShortcuts::DecVolume()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void GlobalShortcuts::Mute()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void GlobalShortcuts::SeekForward()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void GlobalShortcuts::SeekBackward()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void GlobalShortcuts::ShowHide()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}

// SIGNAL 13
void GlobalShortcuts::ShowOSD()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void GlobalShortcuts::TogglePrettyOSD()
{
    QMetaObject::activate(this, &staticMetaObject, 14, 0);
}

// SIGNAL 15
void GlobalShortcuts::RateCurrentSong(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void GlobalShortcuts::CycleShuffleMode()
{
    QMetaObject::activate(this, &staticMetaObject, 16, 0);
}

// SIGNAL 17
void GlobalShortcuts::CycleRepeatMode()
{
    QMetaObject::activate(this, &staticMetaObject, 17, 0);
}

// SIGNAL 18
void GlobalShortcuts::ToggleScrobbling()
{
    QMetaObject::activate(this, &staticMetaObject, 18, 0);
}
QT_END_MOC_NAMESPACE
