/****************************************************************************
** Meta object code from reading C++ file 'systemtrayicon.h'
**
** Created: Tue Apr 23 15:28:16 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "systemtrayicon.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemtrayicon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SystemTrayIcon[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   16,   15,   15, 0x05,
      40,   15,   15,   15, 0x05,
      54,   15,   15,   15, 0x05,
      69,   15,   15,   15, 0x05,
      81,   15,   15,   15, 0x05,
      97,   15,   15,   15, 0x05,
     108,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     131,  120,   15,   15, 0x0a,
     148,   15,   15,   15, 0x0a,
     201,  160,   15,   15, 0x0a,
     257,  228,   15,   15, 0x2a,
     297,  279,   15,   15, 0x2a,
     314,   15,   15,   15, 0x2a,
     327,   15,   15,   15, 0x0a,
     346,  340,   15,   15, 0x0a,
     382,  340,   15,   15, 0x0a,
     417,  340,   15,   15, 0x0a,
     451,  340,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SystemTrayIcon[] = {
    "SystemTrayIcon\0\0delta\0ChangeVolume(int)\0"
    "SeekForward()\0SeekBackward()\0NextTrack()\0"
    "PreviousTrack()\0ShowHide()\0PlayPause()\0"
    "percentage\0SetProgress(int)\0SetPaused()\0"
    "enable_play_pause,enable_ban,enable_love\0"
    "SetPlaying(bool,bool,bool)\0"
    "enable_play_pause,enable_ban\0"
    "SetPlaying(bool,bool)\0enable_play_pause\0"
    "SetPlaying(bool)\0SetPlaying()\0"
    "SetStopped()\0value\0"
    "LastFMButtonVisibilityChanged(bool)\0"
    "LastFMButtonLoveStateChanged(bool)\0"
    "LastFMButtonBanStateChanged(bool)\0"
    "MuteButtonStateChanged(bool)\0"
};

void SystemTrayIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SystemTrayIcon *_t = static_cast<SystemTrayIcon *>(_o);
        switch (_id) {
        case 0: _t->ChangeVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->SeekForward(); break;
        case 2: _t->SeekBackward(); break;
        case 3: _t->NextTrack(); break;
        case 4: _t->PreviousTrack(); break;
        case 5: _t->ShowHide(); break;
        case 6: _t->PlayPause(); break;
        case 7: _t->SetProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->SetPaused(); break;
        case 9: _t->SetPlaying((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 10: _t->SetPlaying((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->SetPlaying((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->SetPlaying(); break;
        case 13: _t->SetStopped(); break;
        case 14: _t->LastFMButtonVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->LastFMButtonLoveStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->LastFMButtonBanStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->MuteButtonStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SystemTrayIcon::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SystemTrayIcon::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SystemTrayIcon,
      qt_meta_data_SystemTrayIcon, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SystemTrayIcon::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SystemTrayIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SystemTrayIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SystemTrayIcon))
        return static_cast<void*>(const_cast< SystemTrayIcon*>(this));
    return QObject::qt_metacast(_clname);
}

int SystemTrayIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void SystemTrayIcon::ChangeVolume(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SystemTrayIcon::SeekForward()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void SystemTrayIcon::SeekBackward()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void SystemTrayIcon::NextTrack()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void SystemTrayIcon::PreviousTrack()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void SystemTrayIcon::ShowHide()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void SystemTrayIcon::PlayPause()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
