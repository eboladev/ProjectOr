/****************************************************************************
** Meta object code from reading C++ file 'playbacksettingspage.h'
**
** Created: Tue Apr 23 15:28:15 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "playbacksettingspage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playbacksettingspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlaybackSettingsPage[] = {

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
      28,   22,   21,   21, 0x08,
      50,   21,   21,   21, 0x08,
      79,   73,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PlaybackSettingsPage[] = {
    "PlaybackSettingsPage\0\0index\0"
    "GstPluginChanged(int)\0FadingOptionsChanged()\0"
    "value\0RgPreampChanged(int)\0"
};

void PlaybackSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlaybackSettingsPage *_t = static_cast<PlaybackSettingsPage *>(_o);
        switch (_id) {
        case 0: _t->GstPluginChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->FadingOptionsChanged(); break;
        case 2: _t->RgPreampChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PlaybackSettingsPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlaybackSettingsPage::staticMetaObject = {
    { &SettingsPage::staticMetaObject, qt_meta_stringdata_PlaybackSettingsPage,
      qt_meta_data_PlaybackSettingsPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlaybackSettingsPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlaybackSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlaybackSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlaybackSettingsPage))
        return static_cast<void*>(const_cast< PlaybackSettingsPage*>(this));
    return SettingsPage::qt_metacast(_clname);
}

int PlaybackSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsPage::qt_metacall(_c, _id, _a);
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
