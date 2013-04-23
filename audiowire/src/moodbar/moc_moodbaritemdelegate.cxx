/****************************************************************************
** Meta object code from reading C++ file 'moodbaritemdelegate.h'
**
** Created: Tue Apr 23 15:28:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "moodbaritemdelegate.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'moodbaritemdelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MoodbarItemDelegate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      51,   38,   20,   20, 0x08,
      97,   85,   20,   20, 0x08,
     145,   85,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MoodbarItemDelegate[] = {
    "MoodbarItemDelegate\0\0ReloadSettings()\0"
    "url,pipeline\0DataLoaded(QUrl,MoodbarPipeline*)\0"
    "url,watcher\0ColorsLoaded(QUrl,QFutureWatcher<ColorVector>*)\0"
    "ImageLoaded(QUrl,QFutureWatcher<QImage>*)\0"
};

void MoodbarItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MoodbarItemDelegate *_t = static_cast<MoodbarItemDelegate *>(_o);
        switch (_id) {
        case 0: _t->ReloadSettings(); break;
        case 1: _t->DataLoaded((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< MoodbarPipeline*(*)>(_a[2]))); break;
        case 2: _t->ColorsLoaded((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QFutureWatcher<ColorVector>*(*)>(_a[2]))); break;
        case 3: _t->ImageLoaded((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QFutureWatcher<QImage>*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MoodbarItemDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MoodbarItemDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_MoodbarItemDelegate,
      qt_meta_data_MoodbarItemDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MoodbarItemDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MoodbarItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MoodbarItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MoodbarItemDelegate))
        return static_cast<void*>(const_cast< MoodbarItemDelegate*>(this));
    return QItemDelegate::qt_metacast(_clname);
}

int MoodbarItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
