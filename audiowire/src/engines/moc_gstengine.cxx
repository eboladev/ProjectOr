/****************************************************************************
** Meta object code from reading C++ file 'gstengine.h'
**
** Created: Tue Apr 23 15:28:04 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gstengine.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gstengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GstEngine[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      63,   11,   10,   10, 0x0a,
     165,  109,  104,   10, 0x0a,
     236,  221,  104,   10, 0x0a,
     250,   10,   10,   10, 0x0a,
     257,   10,   10,   10, 0x0a,
     265,   10,   10,   10, 0x0a,
     275,  221,   10,   10, 0x0a,
     289,   10,   10,   10, 0x0a,
     332,  315,   10,   10, 0x0a,
     371,   10,   10,   10, 0x0a,
     397,  388,   10,   10, 0x0a,
     432,  388,   10,   10, 0x0a,
     497,  470,   10,   10, 0x08,
     564,  526,   10,   10, 0x08,
     624,  605,   10,   10, 0x08,
     666,   10,   10,   10, 0x08,
     702,  686,   10,   10, 0x08,
     735,   10,   10,   10, 0x08,
     753,   10,   10,   10, 0x08,
     763,   10,   10,   10, 0x08,
     790,   10,   10,   10, 0x08,
     817,   10,   10,   10, 0x08,
     828,   10,   10,   10, 0x08,
     855,  847,   10,   10, 0x08,
     878,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GstEngine[] = {
    "GstEngine\0\0"
    "url,force_stop_at_end,beginning_nanosec,end_nanosec\0"
    "StartPreloading(QUrl,bool,qint64,qint64)\0"
    "bool\0,change,force_stop_at_end,beginning_nanosec,end_nanosec\0"
    "Load(QUrl,Engine::TrackChangeFlags,bool,quint64,qint64)\0"
    "offset_nanosec\0Play(quint64)\0Stop()\0"
    "Pause()\0Unpause()\0Seek(quint64)\0"
    "SetEqualizerEnabled(bool)\0preamp,bandGains\0"
    "SetEqualizerParameters(int,QList<int>)\0"
    "ReloadSettings()\0consumer\0"
    "AddBufferConsumer(BufferConsumer*)\0"
    "RemoveBufferConsumer(BufferConsumer*)\0"
    "pipeline_id,has_next_track\0"
    "EndOfStreamReached(int,bool)\0"
    "pipeline_id,message,domain,error_code\0"
    "HandlePipelineError(int,QString,int,int)\0"
    "pipeline_id,bundle\0"
    "NewMetaData(int,Engine::SimpleMetaBundle)\0"
    "ClearScopeBuffers()\0buf,pipeline_id\0"
    "AddBufferToScope(GstBuffer*,int)\0"
    "FadeoutFinished()\0SeekNow()\0"
    "BackgroundStreamFinished()\0"
    "BackgroundStreamPlayDone()\0PlayDone()\0"
    "BufferingStarted()\0percent\0"
    "BufferingProgress(int)\0BufferingFinished()\0"
};

void GstEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GstEngine *_t = static_cast<GstEngine *>(_o);
        switch (_id) {
        case 0: _t->StartPreloading((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])),(*reinterpret_cast< qint64(*)>(_a[4]))); break;
        case 1: { bool _r = _t->Load((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< Engine::TrackChangeFlags(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4])),(*reinterpret_cast< qint64(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->Play((*reinterpret_cast< quint64(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->Stop(); break;
        case 4: _t->Pause(); break;
        case 5: _t->Unpause(); break;
        case 6: _t->Seek((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 7: _t->SetEqualizerEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->SetEqualizerParameters((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 9: _t->ReloadSettings(); break;
        case 10: _t->AddBufferConsumer((*reinterpret_cast< BufferConsumer*(*)>(_a[1]))); break;
        case 11: _t->RemoveBufferConsumer((*reinterpret_cast< BufferConsumer*(*)>(_a[1]))); break;
        case 12: _t->EndOfStreamReached((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->HandlePipelineError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 14: _t->NewMetaData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const Engine::SimpleMetaBundle(*)>(_a[2]))); break;
        case 15: _t->ClearScopeBuffers(); break;
        case 16: _t->AddBufferToScope((*reinterpret_cast< GstBuffer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->FadeoutFinished(); break;
        case 18: _t->SeekNow(); break;
        case 19: _t->BackgroundStreamFinished(); break;
        case 20: _t->BackgroundStreamPlayDone(); break;
        case 21: _t->PlayDone(); break;
        case 22: _t->BufferingStarted(); break;
        case 23: _t->BufferingProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->BufferingFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GstEngine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GstEngine::staticMetaObject = {
    { &Engine::Base::staticMetaObject, qt_meta_stringdata_GstEngine,
      qt_meta_data_GstEngine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GstEngine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GstEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GstEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GstEngine))
        return static_cast<void*>(const_cast< GstEngine*>(this));
    if (!strcmp(_clname, "BufferConsumer"))
        return static_cast< BufferConsumer*>(const_cast< GstEngine*>(this));
    typedef Engine::Base QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int GstEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Engine::Base QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
