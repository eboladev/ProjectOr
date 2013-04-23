/****************************************************************************
** Meta object code from reading C++ file 'podcastinfowidget.h'
**
** Created: Tue Apr 23 15:28:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "podcastinfowidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'podcastinfowidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PodcastInfoWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   37,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PodcastInfoWidget[] = {
    "PodcastInfoWidget\0\0LoadingFinished()\0"
    "id,image\0ImageLoaded(quint64,QImage)\0"
};

void PodcastInfoWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PodcastInfoWidget *_t = static_cast<PodcastInfoWidget *>(_o);
        switch (_id) {
        case 0: _t->LoadingFinished(); break;
        case 1: _t->ImageLoaded((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PodcastInfoWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PodcastInfoWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PodcastInfoWidget,
      qt_meta_data_PodcastInfoWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PodcastInfoWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PodcastInfoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PodcastInfoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PodcastInfoWidget))
        return static_cast<void*>(const_cast< PodcastInfoWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int PodcastInfoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void PodcastInfoWidget::LoadingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
