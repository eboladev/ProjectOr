/****************************************************************************
** Meta object code from reading C++ file 'fixedopmlpage.h'
**
** Created: Tue Apr 23 15:28:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fixedopmlpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fixedopmlpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FixedOpmlPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   15,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FixedOpmlPage[] = {
    "FixedOpmlPage\0\0reply\0"
    "LoadFinished(PodcastUrlLoaderReply*)\0"
};

void FixedOpmlPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FixedOpmlPage *_t = static_cast<FixedOpmlPage *>(_o);
        switch (_id) {
        case 0: _t->LoadFinished((*reinterpret_cast< PodcastUrlLoaderReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FixedOpmlPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FixedOpmlPage::staticMetaObject = {
    { &AddPodcastPage::staticMetaObject, qt_meta_stringdata_FixedOpmlPage,
      qt_meta_data_FixedOpmlPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FixedOpmlPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FixedOpmlPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FixedOpmlPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FixedOpmlPage))
        return static_cast<void*>(const_cast< FixedOpmlPage*>(this));
    return AddPodcastPage::qt_metacast(_clname);
}

int FixedOpmlPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AddPodcastPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
