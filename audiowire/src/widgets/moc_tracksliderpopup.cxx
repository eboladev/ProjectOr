/****************************************************************************
** Meta object code from reading C++ file 'tracksliderpopup.h'
**
** Created: Tue Apr 23 15:28:18 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tracksliderpopup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tracksliderpopup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TrackSliderPopup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   18,   17,   17, 0x0a,
      51,   40,   17,   17, 0x0a,
      77,   73,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TrackSliderPopup[] = {
    "TrackSliderPopup\0\0text\0SetText(QString)\0"
    "small_text\0SetSmallText(QString)\0pos\0"
    "SetPopupPosition(QPoint)\0"
};

void TrackSliderPopup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TrackSliderPopup *_t = static_cast<TrackSliderPopup *>(_o);
        switch (_id) {
        case 0: _t->SetText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->SetSmallText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->SetPopupPosition((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TrackSliderPopup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TrackSliderPopup::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TrackSliderPopup,
      qt_meta_data_TrackSliderPopup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TrackSliderPopup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TrackSliderPopup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TrackSliderPopup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TrackSliderPopup))
        return static_cast<void*>(const_cast< TrackSliderPopup*>(this));
    return QWidget::qt_metacast(_clname);
}

int TrackSliderPopup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
