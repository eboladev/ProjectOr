/****************************************************************************
** Meta object code from reading C++ file 'albumcoverfetcher.h'
**
** Created: Tue Apr 23 15:28:02 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "albumcoverfetcher.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'albumcoverfetcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AlbumCoverFetcher[] = {

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
      37,   19,   18,   18, 0x05,
     113,   93,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     187,  178,   18,   18, 0x08,
     243,  236,   18,   18, 0x08,
     278,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AlbumCoverFetcher[] = {
    "AlbumCoverFetcher\0\0,cover,statistics\0"
    "AlbumCoverFetched(quint64,QImage,CoverSearchStatistics)\0"
    ",results,statistics\0"
    "SearchFinished(quint64,CoverSearchResults,CoverSearchStatistics)\0"
    ",results\0SingleSearchFinished(quint64,CoverSearchResults)\0"
    ",cover\0SingleCoverFetched(quint64,QImage)\0"
    "StartRequests()\0"
};

void AlbumCoverFetcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AlbumCoverFetcher *_t = static_cast<AlbumCoverFetcher *>(_o);
        switch (_id) {
        case 0: _t->AlbumCoverFetched((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const CoverSearchStatistics(*)>(_a[3]))); break;
        case 1: _t->SearchFinished((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const CoverSearchResults(*)>(_a[2])),(*reinterpret_cast< const CoverSearchStatistics(*)>(_a[3]))); break;
        case 2: _t->SingleSearchFinished((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< CoverSearchResults(*)>(_a[2]))); break;
        case 3: _t->SingleCoverFetched((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 4: _t->StartRequests(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AlbumCoverFetcher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AlbumCoverFetcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AlbumCoverFetcher,
      qt_meta_data_AlbumCoverFetcher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AlbumCoverFetcher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AlbumCoverFetcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AlbumCoverFetcher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AlbumCoverFetcher))
        return static_cast<void*>(const_cast< AlbumCoverFetcher*>(this));
    return QObject::qt_metacast(_clname);
}

int AlbumCoverFetcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AlbumCoverFetcher::AlbumCoverFetched(quint64 _t1, const QImage & _t2, const CoverSearchStatistics & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AlbumCoverFetcher::SearchFinished(quint64 _t1, const CoverSearchResults & _t2, const CoverSearchStatistics & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
