/****************************************************************************
** Meta object code from reading C++ file 'songloaderinserter.h'
**
** Created: Tue Apr 23 15:28:10 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "songloaderinserter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songloaderinserter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SongLoaderInserter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   20,   19,   19, 0x05,
      49,   43,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      89,   81,   19,   19, 0x08,
     115,   19,   19,   19, 0x08,
     138,   81,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SongLoaderInserter[] = {
    "SongLoaderInserter\0\0message\0Error(QString)\0"
    "songs\0EffectiveLoadFinished(SongList)\0"
    "success\0PendingLoadFinished(bool)\0"
    "DestinationDestroyed()\0AudioCDTagsLoaded(bool)\0"
};

void SongLoaderInserter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SongLoaderInserter *_t = static_cast<SongLoaderInserter *>(_o);
        switch (_id) {
        case 0: _t->Error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->EffectiveLoadFinished((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 2: _t->PendingLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->DestinationDestroyed(); break;
        case 4: _t->AudioCDTagsLoaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SongLoaderInserter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SongLoaderInserter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SongLoaderInserter,
      qt_meta_data_SongLoaderInserter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SongLoaderInserter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SongLoaderInserter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SongLoaderInserter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SongLoaderInserter))
        return static_cast<void*>(const_cast< SongLoaderInserter*>(this));
    return QObject::qt_metacast(_clname);
}

int SongLoaderInserter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SongLoaderInserter::Error(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SongLoaderInserter::EffectiveLoadFinished(const SongList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
