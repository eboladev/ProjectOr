/****************************************************************************
** Meta object code from reading C++ file 'playlistdelegates.h'
**
** Created: Tue Apr 23 15:28:09 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playlistdelegates.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistdelegates.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlaylistDelegateBase[] = {

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
      51,   27,   22,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PlaylistDelegateBase[] = {
    "PlaylistDelegateBase\0\0bool\0"
    "event,view,option,index\0"
    "helpEvent(QHelpEvent*,QAbstractItemView*,QStyleOptionViewItem,QModelIn"
    "dex)\0"
};

void PlaylistDelegateBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlaylistDelegateBase *_t = static_cast<PlaylistDelegateBase *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->helpEvent((*reinterpret_cast< QHelpEvent*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemView*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PlaylistDelegateBase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlaylistDelegateBase::staticMetaObject = {
    { &QueuedItemDelegate::staticMetaObject, qt_meta_stringdata_PlaylistDelegateBase,
      qt_meta_data_PlaylistDelegateBase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlaylistDelegateBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlaylistDelegateBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlaylistDelegateBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistDelegateBase))
        return static_cast<void*>(const_cast< PlaylistDelegateBase*>(this));
    return QueuedItemDelegate::qt_metacast(_clname);
}

int PlaylistDelegateBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QueuedItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_TagCompleter[] = {

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
      14,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TagCompleter[] = {
    "TagCompleter\0\0ModelReady()\0"
};

void TagCompleter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TagCompleter *_t = static_cast<TagCompleter *>(_o);
        switch (_id) {
        case 0: _t->ModelReady(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData TagCompleter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TagCompleter::staticMetaObject = {
    { &QCompleter::staticMetaObject, qt_meta_stringdata_TagCompleter,
      qt_meta_data_TagCompleter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TagCompleter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TagCompleter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TagCompleter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TagCompleter))
        return static_cast<void*>(const_cast< TagCompleter*>(this));
    return QCompleter::qt_metacast(_clname);
}

int TagCompleter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCompleter::qt_metacall(_c, _id, _a);
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
