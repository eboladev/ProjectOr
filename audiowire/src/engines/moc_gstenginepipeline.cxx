/****************************************************************************
** Meta object code from reading C++ file 'gstenginepipeline.h'
**
** Created: Tue Apr 23 15:28:04 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gstenginepipeline.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gstenginepipeline.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GstEnginePipeline[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      46,   19,   18,   18, 0x05,
      94,   75,   18,   18, 0x05,
     176,  138,   18,   18, 0x05,
     203,   18,   18,   18, 0x05,
     219,   18,   18,   18, 0x05,
     246,  238,   18,   18, 0x05,
     269,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     293,  289,   18,   18, 0x0a,
     318,   18,   18,   18, 0x08,

 // methods: signature, parameters, type, tag, flags
     355,  347,  342,   18, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_GstEnginePipeline[] = {
    "GstEnginePipeline\0\0pipeline_id,has_next_track\0"
    "EndOfStreamReached(int,bool)\0"
    "pipeline_id,bundle\0"
    "MetadataFound(int,Engine::SimpleMetaBundle)\0"
    "pipeline_id,message,domain,error_code\0"
    "Error(int,QString,int,int)\0FaderFinished()\0"
    "BufferingStarted()\0percent\0"
    "BufferingProgress(int)\0BufferingFinished()\0"
    "mod\0SetVolumeModifier(qreal)\0"
    "FaderTimelineFinished()\0bool\0nanosec\0"
    "Seek(qint64)\0"
};

void GstEnginePipeline::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GstEnginePipeline *_t = static_cast<GstEnginePipeline *>(_o);
        switch (_id) {
        case 0: _t->EndOfStreamReached((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->MetadataFound((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const Engine::SimpleMetaBundle(*)>(_a[2]))); break;
        case 2: _t->Error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->FaderFinished(); break;
        case 4: _t->BufferingStarted(); break;
        case 5: _t->BufferingProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->BufferingFinished(); break;
        case 7: _t->SetVolumeModifier((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 8: _t->FaderTimelineFinished(); break;
        case 9: { bool _r = _t->Seek((*reinterpret_cast< qint64(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GstEnginePipeline::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GstEnginePipeline::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GstEnginePipeline,
      qt_meta_data_GstEnginePipeline, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GstEnginePipeline::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GstEnginePipeline::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GstEnginePipeline::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GstEnginePipeline))
        return static_cast<void*>(const_cast< GstEnginePipeline*>(this));
    return QObject::qt_metacast(_clname);
}

int GstEnginePipeline::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void GstEnginePipeline::EndOfStreamReached(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GstEnginePipeline::MetadataFound(int _t1, const Engine::SimpleMetaBundle & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GstEnginePipeline::Error(int _t1, const QString & _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GstEnginePipeline::FaderFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void GstEnginePipeline::BufferingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void GstEnginePipeline::BufferingProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GstEnginePipeline::BufferingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
