/****************************************************************************
** Meta object code from reading C++ file 'prettyimage.h'
**
** Created: Tue Apr 23 15:28:17 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "prettyimage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prettyimage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrettyImage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      22,   12,   12,   12, 0x0a,
      33,   12,   12,   12, 0x0a,
      42,   12,   12,   12, 0x0a,
      57,   12,   12,   12, 0x08,
      72,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PrettyImage[] = {
    "PrettyImage\0\0Loaded()\0LazyLoad()\0"
    "SaveAs()\0ShowFullsize()\0ImageFetched()\0"
    "ImageScaled()\0"
};

void PrettyImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PrettyImage *_t = static_cast<PrettyImage *>(_o);
        switch (_id) {
        case 0: _t->Loaded(); break;
        case 1: _t->LazyLoad(); break;
        case 2: _t->SaveAs(); break;
        case 3: _t->ShowFullsize(); break;
        case 4: _t->ImageFetched(); break;
        case 5: _t->ImageScaled(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PrettyImage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PrettyImage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PrettyImage,
      qt_meta_data_PrettyImage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrettyImage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrettyImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrettyImage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrettyImage))
        return static_cast<void*>(const_cast< PrettyImage*>(this));
    return QWidget::qt_metacast(_clname);
}

int PrettyImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void PrettyImage::Loaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
