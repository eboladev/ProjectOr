/****************************************************************************
** Meta object code from reading C++ file 'savedradio.h'
**
** Created: Tue Apr 23 15:28:07 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "savedradio.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'savedradio.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SavedRadio[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      34,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,   11,   11,   11, 0x08,
      60,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SavedRadio[] = {
    "SavedRadio\0\0ShowAddStreamDialog()\0"
    "StreamsChanged()\0Remove()\0Edit()\0"
};

void SavedRadio::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SavedRadio *_t = static_cast<SavedRadio *>(_o);
        switch (_id) {
        case 0: _t->ShowAddStreamDialog(); break;
        case 1: _t->StreamsChanged(); break;
        case 2: _t->Remove(); break;
        case 3: _t->Edit(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SavedRadio::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SavedRadio::staticMetaObject = {
    { &InternetService::staticMetaObject, qt_meta_stringdata_SavedRadio,
      qt_meta_data_SavedRadio, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SavedRadio::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SavedRadio::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SavedRadio::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SavedRadio))
        return static_cast<void*>(const_cast< SavedRadio*>(this));
    return InternetService::qt_metacast(_clname);
}

int SavedRadio::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InternetService::qt_metacall(_c, _id, _a);
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
void SavedRadio::ShowAddStreamDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SavedRadio::StreamsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
