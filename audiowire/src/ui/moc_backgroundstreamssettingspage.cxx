/****************************************************************************
** Meta object code from reading C++ file 'backgroundstreamssettingspage.h'
**
** Created: Tue Apr 23 15:28:14 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "backgroundstreamssettingspage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'backgroundstreamssettingspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BackgroundStreamsSettingsPage[] = {

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
      39,   31,   30,   30, 0x08,
      64,   58,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BackgroundStreamsSettingsPage[] = {
    "BackgroundStreamsSettingsPage\0\0enabled\0"
    "EnableStream(bool)\0value\0"
    "StreamVolumeChanged(int)\0"
};

void BackgroundStreamsSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BackgroundStreamsSettingsPage *_t = static_cast<BackgroundStreamsSettingsPage *>(_o);
        switch (_id) {
        case 0: _t->EnableStream((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->StreamVolumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BackgroundStreamsSettingsPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BackgroundStreamsSettingsPage::staticMetaObject = {
    { &SettingsPage::staticMetaObject, qt_meta_stringdata_BackgroundStreamsSettingsPage,
      qt_meta_data_BackgroundStreamsSettingsPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BackgroundStreamsSettingsPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BackgroundStreamsSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BackgroundStreamsSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BackgroundStreamsSettingsPage))
        return static_cast<void*>(const_cast< BackgroundStreamsSettingsPage*>(this));
    return SettingsPage::qt_metacast(_clname);
}

int BackgroundStreamsSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsPage::qt_metacall(_c, _id, _a);
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
