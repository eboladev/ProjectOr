/****************************************************************************
** Meta object code from reading C++ file 'searchprovider.h'
**
** Created: Tue Apr 23 15:28:05 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "searchprovider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SearchProvider[] = {

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
      27,   16,   15,   15, 0x05,
      79,   76,   15,   15, 0x05,
     108,   99,   15,   15, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_SearchProvider[] = {
    "SearchProvider\0\0id,results\0"
    "ResultsAvailable(int,SearchProvider::ResultList)\0"
    "id\0SearchFinished(int)\0id,image\0"
    "ArtLoaded(int,QImage)\0"
};

void SearchProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SearchProvider *_t = static_cast<SearchProvider *>(_o);
        switch (_id) {
        case 0: _t->ResultsAvailable((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const SearchProvider::ResultList(*)>(_a[2]))); break;
        case 1: _t->SearchFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ArtLoaded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SearchProvider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SearchProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SearchProvider,
      qt_meta_data_SearchProvider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SearchProvider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SearchProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SearchProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SearchProvider))
        return static_cast<void*>(const_cast< SearchProvider*>(this));
    return QObject::qt_metacast(_clname);
}

int SearchProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SearchProvider::ResultsAvailable(int _t1, const SearchProvider::ResultList & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SearchProvider::SearchFinished(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SearchProvider::ArtLoaded(int _t1, const QImage & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_BlockingSearchProvider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BlockingSearchProvider[] = {
    "BlockingSearchProvider\0\0"
    "BlockingSearchFinished()\0"
};

void BlockingSearchProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BlockingSearchProvider *_t = static_cast<BlockingSearchProvider *>(_o);
        switch (_id) {
        case 0: _t->BlockingSearchFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData BlockingSearchProvider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BlockingSearchProvider::staticMetaObject = {
    { &SearchProvider::staticMetaObject, qt_meta_stringdata_BlockingSearchProvider,
      qt_meta_data_BlockingSearchProvider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BlockingSearchProvider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BlockingSearchProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BlockingSearchProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BlockingSearchProvider))
        return static_cast<void*>(const_cast< BlockingSearchProvider*>(this));
    return SearchProvider::qt_metacast(_clname);
}

int BlockingSearchProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SearchProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
