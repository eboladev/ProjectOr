/****************************************************************************
** Meta object code from reading C++ file 'gpodloader.h'
**
** Created: Tue Apr 23 15:28:20 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gpodloader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpodloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GPodLoader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   12,   11,   11, 0x05,
      43,   35,   11,   11, 0x05,
      63,   60,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      92,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GPodLoader[] = {
    "GPodLoader\0\0message\0Error(QString)\0"
    "task_id\0TaskStarted(int)\0db\0"
    "LoadFinished(Itdb_iTunesDB*)\0"
    "LoadDatabase()\0"
};

void GPodLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GPodLoader *_t = static_cast<GPodLoader *>(_o);
        switch (_id) {
        case 0: _t->Error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->TaskStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->LoadFinished((*reinterpret_cast< Itdb_iTunesDB*(*)>(_a[1]))); break;
        case 3: _t->LoadDatabase(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GPodLoader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GPodLoader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GPodLoader,
      qt_meta_data_GPodLoader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GPodLoader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GPodLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GPodLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GPodLoader))
        return static_cast<void*>(const_cast< GPodLoader*>(this));
    return QObject::qt_metacast(_clname);
}

int GPodLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GPodLoader::Error(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GPodLoader::TaskStarted(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GPodLoader::LoadFinished(Itdb_iTunesDB * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
