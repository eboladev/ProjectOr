/****************************************************************************
** Meta object code from reading C++ file 'backgroundstreams.h'
**
** Created: Tue Apr 23 15:28:00 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "backgroundstreams.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'backgroundstreams.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BackgroundStreams[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   19,   18,   18, 0x05,
      47,   19,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      78,   70,   18,   18, 0x08,
     104,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BackgroundStreams[] = {
    "BackgroundStreams\0\0name\0StreamStarted(QString)\0"
    "StreamStopped(QString)\0checked\0"
    "StreamActionToggled(bool)\0"
    "StreamActionDestroyed()\0"
};

void BackgroundStreams::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BackgroundStreams *_t = static_cast<BackgroundStreams *>(_o);
        switch (_id) {
        case 0: _t->StreamStarted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->StreamStopped((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->StreamActionToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->StreamActionDestroyed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BackgroundStreams::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BackgroundStreams::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BackgroundStreams,
      qt_meta_data_BackgroundStreams, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BackgroundStreams::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BackgroundStreams::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BackgroundStreams::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BackgroundStreams))
        return static_cast<void*>(const_cast< BackgroundStreams*>(this));
    return QObject::qt_metacast(_clname);
}

int BackgroundStreams::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void BackgroundStreams::StreamStarted(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BackgroundStreams::StreamStopped(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
