/****************************************************************************
** Meta object code from reading C++ file 'equalizer.h'
**
** Created: Tue Apr 23 15:28:15 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "equalizer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'equalizer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Equalizer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   11,   10,   10, 0x05,
      58,   40,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      92,   10,   10,   10, 0x08,
     117,  112,   10,   10, 0x08,
     146,  140,   10,   10, 0x08,
     165,   10,   10,   10, 0x08,
     178,   10,   10,   10, 0x08,
     190,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Equalizer[] = {
    "Equalizer\0\0enabled\0EnabledChanged(bool)\0"
    "preamp,band_gains\0ParametersChanged(int,QList<int>)\0"
    "ParametersChanged()\0name\0"
    "PresetChanged(QString)\0index\0"
    "PresetChanged(int)\0SavePreset()\0"
    "DelPreset()\0Save()\0"
};

void Equalizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Equalizer *_t = static_cast<Equalizer *>(_o);
        switch (_id) {
        case 0: _t->EnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->ParametersChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 2: _t->ParametersChanged(); break;
        case 3: _t->PresetChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->PresetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->SavePreset(); break;
        case 6: _t->DelPreset(); break;
        case 7: _t->Save(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Equalizer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Equalizer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Equalizer,
      qt_meta_data_Equalizer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Equalizer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Equalizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Equalizer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Equalizer))
        return static_cast<void*>(const_cast< Equalizer*>(this));
    return QDialog::qt_metacast(_clname);
}

int Equalizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Equalizer::EnabledChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Equalizer::ParametersChanged(int _t1, const QList<int> & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
