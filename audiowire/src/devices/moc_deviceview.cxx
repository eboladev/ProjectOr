/****************************************************************************
** Meta object code from reading C++ file 'deviceview.h'
**
** Created: Tue Apr 23 15:28:04 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "deviceview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deviceview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DeviceView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      22,   11,   11,   11, 0x08,
      32,   11,   11,   11, 0x08,
      41,   11,   11,   11, 0x08,
      54,   11,   11,   11, 0x08,
      61,   11,   11,   11, 0x08,
      77,   11,   11,   11, 0x08,
      97,   11,   11,   11, 0x08,
     108,   11,   11,   11, 0x08,
     121,  117,   11,   11, 0x08,
     142,  117,   11,   11, 0x08,
     184,  166,   11,   11, 0x08,
     220,  214,  209,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DeviceView[] = {
    "DeviceView\0\0Connect()\0Unmount()\0"
    "Forget()\0Properties()\0Load()\0"
    "AddToPlaylist()\0OpenInNewPlaylist()\0"
    "Organise()\0Delete()\0row\0DeviceConnected(int)\0"
    "DeviceDisconnected(int)\0songs_with_errors\0"
    "DeleteFinished(SongList)\0bool\0index\0"
    "CanRecursivelyExpand(QModelIndex)\0"
};

void DeviceView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DeviceView *_t = static_cast<DeviceView *>(_o);
        switch (_id) {
        case 0: _t->Connect(); break;
        case 1: _t->Unmount(); break;
        case 2: _t->Forget(); break;
        case 3: _t->Properties(); break;
        case 4: _t->Load(); break;
        case 5: _t->AddToPlaylist(); break;
        case 6: _t->OpenInNewPlaylist(); break;
        case 7: _t->Organise(); break;
        case 8: _t->Delete(); break;
        case 9: _t->DeviceConnected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->DeviceDisconnected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->DeleteFinished((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 12: { bool _r = _t->CanRecursivelyExpand((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DeviceView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DeviceView::staticMetaObject = {
    { &AutoExpandingTreeView::staticMetaObject, qt_meta_stringdata_DeviceView,
      qt_meta_data_DeviceView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DeviceView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DeviceView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DeviceView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceView))
        return static_cast<void*>(const_cast< DeviceView*>(this));
    return AutoExpandingTreeView::qt_metacast(_clname);
}

int DeviceView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AutoExpandingTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
