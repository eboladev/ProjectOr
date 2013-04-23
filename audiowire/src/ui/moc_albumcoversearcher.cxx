/****************************************************************************
** Meta object code from reading C++ file 'albumcoversearcher.h'
**
** Created: Tue Apr 23 15:28:14 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "albumcoversearcher.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'albumcoversearcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AlbumCoverSearcher[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      40,   29,   19,   19, 0x08,
      92,   83,   19,   19, 0x08,
     126,  120,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AlbumCoverSearcher[] = {
    "AlbumCoverSearcher\0\0Search()\0id,results\0"
    "SearchFinished(quint64,CoverSearchResults)\0"
    "id,image\0ImageLoaded(quint64,QImage)\0"
    "index\0CoverDoubleClicked(QModelIndex)\0"
};

void AlbumCoverSearcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AlbumCoverSearcher *_t = static_cast<AlbumCoverSearcher *>(_o);
        switch (_id) {
        case 0: _t->Search(); break;
        case 1: _t->SearchFinished((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const CoverSearchResults(*)>(_a[2]))); break;
        case 2: _t->ImageLoaded((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 3: _t->CoverDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AlbumCoverSearcher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AlbumCoverSearcher::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AlbumCoverSearcher,
      qt_meta_data_AlbumCoverSearcher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AlbumCoverSearcher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AlbumCoverSearcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AlbumCoverSearcher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AlbumCoverSearcher))
        return static_cast<void*>(const_cast< AlbumCoverSearcher*>(this));
    return QDialog::qt_metacast(_clname);
}

int AlbumCoverSearcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
