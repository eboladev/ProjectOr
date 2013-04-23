/****************************************************************************
** Meta object code from reading C++ file 'playlisttabbar.h'
**
** Created: Tue Apr 23 15:28:09 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playlisttabbar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlisttabbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlaylistTabBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   16,   15,   15, 0x05,
      49,   41,   15,   15, 0x05,
      69,   16,   15,   15, 0x05,
      80,   16,   15,   15, 0x05,
      94,   90,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     133,  127,   15,   15, 0x08,
     158,   15,   15,   15, 0x08,
     167,   15,   15,   15, 0x08,
     182,   15,   15,   15, 0x08,
     195,   15,   15,   15, 0x08,
     203,  127,   15,   15, 0x08,
     226,   15,   15,   15, 0x08,
     237,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PlaylistTabBar[] = {
    "PlaylistTabBar\0\0id\0CurrentIdChanged(int)\0"
    "id,name\0Rename(int,QString)\0Close(int)\0"
    "Save(int)\0ids\0PlaylistOrderChanged(QList<int>)\0"
    "index\0CurrentIndexChanged(int)\0Rename()\0"
    "RenameInline()\0HideEditor()\0Close()\0"
    "CloseFromTabIndex(int)\0TabMoved()\0"
    "Save()\0"
};

void PlaylistTabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlaylistTabBar *_t = static_cast<PlaylistTabBar *>(_o);
        switch (_id) {
        case 0: _t->CurrentIdChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->Rename((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->Close((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->Save((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->PlaylistOrderChanged((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 5: _t->CurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->Rename(); break;
        case 7: _t->RenameInline(); break;
        case 8: _t->HideEditor(); break;
        case 9: _t->Close(); break;
        case 10: _t->CloseFromTabIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->TabMoved(); break;
        case 12: _t->Save(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PlaylistTabBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlaylistTabBar::staticMetaObject = {
    { &QTabBar::staticMetaObject, qt_meta_stringdata_PlaylistTabBar,
      qt_meta_data_PlaylistTabBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlaylistTabBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlaylistTabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlaylistTabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistTabBar))
        return static_cast<void*>(const_cast< PlaylistTabBar*>(this));
    return QTabBar::qt_metacast(_clname);
}

int PlaylistTabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void PlaylistTabBar::CurrentIdChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlaylistTabBar::Rename(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlaylistTabBar::Close(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PlaylistTabBar::Save(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PlaylistTabBar::PlaylistOrderChanged(const QList<int> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
