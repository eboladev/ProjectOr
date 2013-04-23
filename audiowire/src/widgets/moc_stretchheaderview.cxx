/****************************************************************************
** Meta object code from reading C++ file 'stretchheaderview.h'
**
** Created: Tue Apr 23 15:28:18 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stretchheaderview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stretchheaderview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StretchHeaderView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   19,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   18,   18,   18, 0x0a,
      78,   19,   18,   18, 0x0a,
     128,  102,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StretchHeaderView[] = {
    "StretchHeaderView\0\0enabled\0"
    "StretchEnabledChanged(bool)\0"
    "ToggleStretchEnabled()\0SetStretchEnabled(bool)\0"
    "logical,old_size,new_size\0"
    "SectionResized(int,int,int)\0"
};

void StretchHeaderView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StretchHeaderView *_t = static_cast<StretchHeaderView *>(_o);
        switch (_id) {
        case 0: _t->StretchEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->ToggleStretchEnabled(); break;
        case 2: _t->SetStretchEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->SectionResized((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StretchHeaderView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StretchHeaderView::staticMetaObject = {
    { &QHeaderView::staticMetaObject, qt_meta_stringdata_StretchHeaderView,
      qt_meta_data_StretchHeaderView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StretchHeaderView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StretchHeaderView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StretchHeaderView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StretchHeaderView))
        return static_cast<void*>(const_cast< StretchHeaderView*>(this));
    return QHeaderView::qt_metacast(_clname);
}

int StretchHeaderView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHeaderView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void StretchHeaderView::StretchEnabledChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
