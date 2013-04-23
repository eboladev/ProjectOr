/****************************************************************************
** Meta object code from reading C++ file 'songinfoprovider.h'
**
** Created: Tue Apr 23 15:28:13 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "songinfoprovider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songinfoprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SongInfoProvider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   18,   17,   17, 0x05,
      54,   46,   17,   17, 0x05,
      98,   95,   17,   17, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_SongInfoProvider[] = {
    "SongInfoProvider\0\0id,url\0ImageReady(int,QUrl)\0"
    "id,data\0InfoReady(int,CollapsibleInfoPane::Data)\0"
    "id\0Finished(int)\0"
};

void SongInfoProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SongInfoProvider *_t = static_cast<SongInfoProvider *>(_o);
        switch (_id) {
        case 0: _t->ImageReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 1: _t->InfoReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const CollapsibleInfoPane::Data(*)>(_a[2]))); break;
        case 2: _t->Finished((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SongInfoProvider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SongInfoProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SongInfoProvider,
      qt_meta_data_SongInfoProvider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SongInfoProvider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SongInfoProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SongInfoProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SongInfoProvider))
        return static_cast<void*>(const_cast< SongInfoProvider*>(this));
    return QObject::qt_metacast(_clname);
}

int SongInfoProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SongInfoProvider::ImageReady(int _t1, const QUrl & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SongInfoProvider::InfoReady(int _t1, const CollapsibleInfoPane::Data & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SongInfoProvider::Finished(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
