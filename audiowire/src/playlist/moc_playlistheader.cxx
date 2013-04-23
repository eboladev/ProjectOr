/****************************************************************************
** Meta object code from reading C++ file 'playlistheader.h'
**
** Created: Tue Apr 23 15:28:09 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playlistheader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistheader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlaylistHeader[] = {

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
      32,   16,   15,   15, 0x05,
      67,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      82,   15,   15,   15, 0x08,
     104,   96,   15,   15, 0x08,
     130,  123,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PlaylistHeader[] = {
    "PlaylistHeader\0\0logical,visible\0"
    "SectionVisibilityChanged(int,bool)\0"
    "MouseEntered()\0HideCurrent()\0section\0"
    "ToggleVisible(int)\0action\0"
    "SetColumnAlignment(QAction*)\0"
};

void PlaylistHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlaylistHeader *_t = static_cast<PlaylistHeader *>(_o);
        switch (_id) {
        case 0: _t->SectionVisibilityChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->MouseEntered(); break;
        case 2: _t->HideCurrent(); break;
        case 3: _t->ToggleVisible((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->SetColumnAlignment((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PlaylistHeader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlaylistHeader::staticMetaObject = {
    { &StretchHeaderView::staticMetaObject, qt_meta_stringdata_PlaylistHeader,
      qt_meta_data_PlaylistHeader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlaylistHeader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlaylistHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlaylistHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistHeader))
        return static_cast<void*>(const_cast< PlaylistHeader*>(this));
    return StretchHeaderView::qt_metacast(_clname);
}

int PlaylistHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StretchHeaderView::qt_metacall(_c, _id, _a);
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
void PlaylistHeader::SectionVisibilityChanged(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlaylistHeader::MouseEntered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
