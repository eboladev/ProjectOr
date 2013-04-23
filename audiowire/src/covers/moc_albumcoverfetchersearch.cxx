/****************************************************************************
** Meta object code from reading C++ file 'albumcoverfetchersearch.h'
**
** Created: Tue Apr 23 15:28:02 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "albumcoverfetchersearch.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'albumcoverfetchersearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AlbumCoverFetcherSearch[] = {

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
      34,   25,   24,   24, 0x05,
      84,   77,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     129,  118,   24,   24, 0x08,
     188,  182,   24,   24, 0x08,
     234,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AlbumCoverFetcherSearch[] = {
    "AlbumCoverFetcherSearch\0\0,results\0"
    "SearchFinished(quint64,CoverSearchResults)\0"
    ",cover\0AlbumCoverFetched(quint64,QImage)\0"
    "id,results\0"
    "ProviderSearchFinished(int,QList<CoverSearchResult>)\0"
    "reply\0ProviderCoverFetchFinished(RedirectFollower*)\0"
    "TerminateSearch()\0"
};

void AlbumCoverFetcherSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AlbumCoverFetcherSearch *_t = static_cast<AlbumCoverFetcherSearch *>(_o);
        switch (_id) {
        case 0: _t->SearchFinished((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const CoverSearchResults(*)>(_a[2]))); break;
        case 1: _t->AlbumCoverFetched((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 2: _t->ProviderSearchFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<CoverSearchResult>(*)>(_a[2]))); break;
        case 3: _t->ProviderCoverFetchFinished((*reinterpret_cast< RedirectFollower*(*)>(_a[1]))); break;
        case 4: _t->TerminateSearch(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AlbumCoverFetcherSearch::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AlbumCoverFetcherSearch::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AlbumCoverFetcherSearch,
      qt_meta_data_AlbumCoverFetcherSearch, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AlbumCoverFetcherSearch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AlbumCoverFetcherSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AlbumCoverFetcherSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AlbumCoverFetcherSearch))
        return static_cast<void*>(const_cast< AlbumCoverFetcherSearch*>(this));
    return QObject::qt_metacast(_clname);
}

int AlbumCoverFetcherSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AlbumCoverFetcherSearch::SearchFinished(quint64 _t1, const CoverSearchResults & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AlbumCoverFetcherSearch::AlbumCoverFetched(quint64 _t1, const QImage & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
