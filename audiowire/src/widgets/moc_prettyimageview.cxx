/****************************************************************************
** Meta object code from reading C++ file 'prettyimageview.h'
**
** Created: Tue Apr 23 15:28:17 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "prettyimageview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prettyimageview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrettyImageView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   17,   16,   16, 0x0a,
      36,   16,   16,   16, 0x08,
      63,   56,   16,   16, 0x08,
      97,   84,   16,   16, 0x08,
     122,  116,   16,   16, 0x28,
     136,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PrettyImageView[] = {
    "PrettyImageView\0\0url\0AddImage(QUrl)\0"
    "ScrollBarReleased()\0action\0"
    "ScrollBarAction(int)\0index,smooth\0"
    "ScrollTo(int,bool)\0index\0ScrollTo(int)\0"
    "ScrollToCurrent()\0"
};

void PrettyImageView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PrettyImageView *_t = static_cast<PrettyImageView *>(_o);
        switch (_id) {
        case 0: _t->AddImage((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->ScrollBarReleased(); break;
        case 2: _t->ScrollBarAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->ScrollTo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->ScrollTo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->ScrollToCurrent(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PrettyImageView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PrettyImageView::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_PrettyImageView,
      qt_meta_data_PrettyImageView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrettyImageView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrettyImageView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrettyImageView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrettyImageView))
        return static_cast<void*>(const_cast< PrettyImageView*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int PrettyImageView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
