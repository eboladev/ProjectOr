/****************************************************************************
** Meta object code from reading C++ file 'groupediconview.h'
**
** Created: Tue Apr 23 15:28:17 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "groupediconview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'groupediconview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GroupedIconView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       4,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,

 // properties: name, type, flags
      35,   31, 0x02095003,
      50,   31, 0x02095003,
      64,   31, 0x02095003,
      84,   76, 0x0a095003,

       0        // eod
};

static const char qt_meta_stringdata_GroupedIconView[] = {
    "GroupedIconView\0\0LayoutItems()\0int\0"
    "header_spacing\0header_indent\0item_indent\0"
    "QString\0header_text\0"
};

void GroupedIconView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GroupedIconView *_t = static_cast<GroupedIconView *>(_o);
        switch (_id) {
        case 0: _t->LayoutItems(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GroupedIconView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GroupedIconView::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_GroupedIconView,
      qt_meta_data_GroupedIconView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GroupedIconView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GroupedIconView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GroupedIconView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GroupedIconView))
        return static_cast<void*>(const_cast< GroupedIconView*>(this));
    return QListView::qt_metacast(_clname);
}

int GroupedIconView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = header_spacing(); break;
        case 1: *reinterpret_cast< int*>(_v) = header_indent(); break;
        case 2: *reinterpret_cast< int*>(_v) = item_indent(); break;
        case 3: *reinterpret_cast< QString*>(_v) = header_text(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: set_header_spacing(*reinterpret_cast< int*>(_v)); break;
        case 1: set_header_indent(*reinterpret_cast< int*>(_v)); break;
        case 2: set_item_indent(*reinterpret_cast< int*>(_v)); break;
        case 3: set_header_text(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
