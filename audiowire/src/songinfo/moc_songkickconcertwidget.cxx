/****************************************************************************
** Meta object code from reading C++ file 'songkickconcertwidget.h'
**
** Created: Tue Apr 23 15:28:13 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "songkickconcertwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songkickconcertwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SongKickConcertWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x0a,
      46,   40,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SongKickConcertWidget[] = {
    "SongKickConcertWidget\0\0ReloadSettings()\0"
    "reply\0MapLoaded(QNetworkReply*)\0"
};

void SongKickConcertWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SongKickConcertWidget *_t = static_cast<SongKickConcertWidget *>(_o);
        switch (_id) {
        case 0: _t->ReloadSettings(); break;
        case 1: _t->MapLoaded((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SongKickConcertWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SongKickConcertWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SongKickConcertWidget,
      qt_meta_data_SongKickConcertWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SongKickConcertWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SongKickConcertWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SongKickConcertWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SongKickConcertWidget))
        return static_cast<void*>(const_cast< SongKickConcertWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SongKickConcertWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
