/****************************************************************************
** Meta object code from reading C++ file 'autoexpandingtreeview.h'
**
** Created: Tue Apr 23 15:28:16 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "autoexpandingtreeview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autoexpandingtreeview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AutoExpandingTreeView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   23,   22,   22, 0x05,
      66,   60,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
     104,   98,   22,   22, 0x0a,
     135,   22,   22,   22, 0x0a,
     148,   22,   22,   22, 0x0a,
     163,   98,   22,   22, 0x08,
     189,   98,   22,   22, 0x08,
     214,   98,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AutoExpandingTreeView[] = {
    "AutoExpandingTreeView\0\0data\0"
    "AddToPlaylistSignal(QMimeData*)\0event\0"
    "FocusOnFilterSignal(QKeyEvent*)\0index\0"
    "RecursivelyExpand(QModelIndex)\0"
    "UpAndFocus()\0DownAndFocus()\0"
    "ItemExpanded(QModelIndex)\0"
    "ItemClicked(QModelIndex)\0"
    "ItemDoubleClicked(QModelIndex)\0"
};

void AutoExpandingTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AutoExpandingTreeView *_t = static_cast<AutoExpandingTreeView *>(_o);
        switch (_id) {
        case 0: _t->AddToPlaylistSignal((*reinterpret_cast< QMimeData*(*)>(_a[1]))); break;
        case 1: _t->FocusOnFilterSignal((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 2: _t->RecursivelyExpand((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->UpAndFocus(); break;
        case 4: _t->DownAndFocus(); break;
        case 5: _t->ItemExpanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->ItemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->ItemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AutoExpandingTreeView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AutoExpandingTreeView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_AutoExpandingTreeView,
      qt_meta_data_AutoExpandingTreeView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AutoExpandingTreeView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AutoExpandingTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AutoExpandingTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AutoExpandingTreeView))
        return static_cast<void*>(const_cast< AutoExpandingTreeView*>(this));
    return QTreeView::qt_metacast(_clname);
}

int AutoExpandingTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void AutoExpandingTreeView::AddToPlaylistSignal(QMimeData * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AutoExpandingTreeView::FocusOnFilterSignal(QKeyEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
