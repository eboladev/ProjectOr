/****************************************************************************
** Meta object code from reading C++ file 'transcoderoptionsmp3.h'
**
** Created: Tue Apr 23 15:28:14 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "transcoderoptionsmp3.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transcoderoptionsmp3.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TranscoderOptionsMP3[] = {

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
      28,   22,   21,   21, 0x08,
      54,   22,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TranscoderOptionsMP3[] = {
    "TranscoderOptionsMP3\0\0value\0"
    "QualitySliderChanged(int)\0"
    "QualitySpinboxChanged(double)\0"
};

void TranscoderOptionsMP3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TranscoderOptionsMP3 *_t = static_cast<TranscoderOptionsMP3 *>(_o);
        switch (_id) {
        case 0: _t->QualitySliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->QualitySpinboxChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TranscoderOptionsMP3::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TranscoderOptionsMP3::staticMetaObject = {
    { &TranscoderOptionsInterface::staticMetaObject, qt_meta_stringdata_TranscoderOptionsMP3,
      qt_meta_data_TranscoderOptionsMP3, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TranscoderOptionsMP3::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TranscoderOptionsMP3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TranscoderOptionsMP3::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TranscoderOptionsMP3))
        return static_cast<void*>(const_cast< TranscoderOptionsMP3*>(this));
    return TranscoderOptionsInterface::qt_metacast(_clname);
}

int TranscoderOptionsMP3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TranscoderOptionsInterface::qt_metacall(_c, _id, _a);
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
