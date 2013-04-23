/****************************************************************************
** Meta object code from reading C++ file 'mtploader.h'
**
** Created: Tue Apr 23 15:28:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mtploader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtploader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MtpLoader[] = {

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
      19,   11,   10,   10, 0x05,
      42,   34,   10,   10, 0x05,
      59,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      74,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MtpLoader[] = {
    "MtpLoader\0\0message\0Error(QString)\0"
    "task_id\0TaskStarted(int)\0LoadFinished()\0"
    "LoadDatabase()\0"
};

void MtpLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MtpLoader *_t = static_cast<MtpLoader *>(_o);
        switch (_id) {
        case 0: _t->Error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->TaskStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->LoadFinished(); break;
        case 3: _t->LoadDatabase(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MtpLoader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MtpLoader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MtpLoader,
      qt_meta_data_MtpLoader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MtpLoader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MtpLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MtpLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MtpLoader))
        return static_cast<void*>(const_cast< MtpLoader*>(this));
    return QObject::qt_metacast(_clname);
}

int MtpLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void MtpLoader::Error(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MtpLoader::TaskStarted(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MtpLoader::LoadFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
