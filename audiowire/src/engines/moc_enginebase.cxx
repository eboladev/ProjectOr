/****************************************************************************
** Meta object code from reading C++ file 'enginebase.h'
**
** Created: Tue Apr 23 15:28:04 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "enginebase.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'enginebase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Engine__Base[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      32,   13,   13,   13, 0x05,
      45,   13,   13,   13, 0x05,
      69,   13,   13,   13, 0x05,
      89,   13,   13,   13, 0x05,
     104,   13,   13,   13, 0x05,
     131,   13,   13,   13, 0x05,
     156,   13,   13,   13, 0x05,
     191,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     219,   13,   13,   13, 0x0a,
     236,   13,   13,   13, 0x0a,
     279,  262,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Engine__Base[] = {
    "Engine::Base\0\0TrackAboutToEnd()\0"
    "TrackEnded()\0FadeoutFinishedSignal()\0"
    "StatusText(QString)\0Error(QString)\0"
    "InvalidSongRequested(QUrl)\0"
    "ValidSongRequested(QUrl)\0"
    "MetaData(Engine::SimpleMetaBundle)\0"
    "StateChanged(Engine::State)\0"
    "ReloadSettings()\0SetEqualizerEnabled(bool)\0"
    "preamp,bandGains\0"
    "SetEqualizerParameters(int,QList<int>)\0"
};

void Engine::Base::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Base *_t = static_cast<Base *>(_o);
        switch (_id) {
        case 0: _t->TrackAboutToEnd(); break;
        case 1: _t->TrackEnded(); break;
        case 2: _t->FadeoutFinishedSignal(); break;
        case 3: _t->StatusText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->Error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->InvalidSongRequested((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 6: _t->ValidSongRequested((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 7: _t->MetaData((*reinterpret_cast< const Engine::SimpleMetaBundle(*)>(_a[1]))); break;
        case 8: _t->StateChanged((*reinterpret_cast< Engine::State(*)>(_a[1]))); break;
        case 9: _t->ReloadSettings(); break;
        case 10: _t->SetEqualizerEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->SetEqualizerParameters((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Engine::Base::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Engine::Base::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Engine__Base,
      qt_meta_data_Engine__Base, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Engine::Base::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Engine::Base::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Engine::Base::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Engine__Base))
        return static_cast<void*>(const_cast< Base*>(this));
    if (!strcmp(_clname, "boost::noncopyable"))
        return static_cast< boost::noncopyable*>(const_cast< Base*>(this));
    return QObject::qt_metacast(_clname);
}

int Engine::Base::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Engine::Base::TrackAboutToEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Engine::Base::TrackEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Engine::Base::FadeoutFinishedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Engine::Base::StatusText(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Engine::Base::Error(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Engine::Base::InvalidSongRequested(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Engine::Base::ValidSongRequested(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Engine::Base::MetaData(const Engine::SimpleMetaBundle & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Engine::Base::StateChanged(Engine::State _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
