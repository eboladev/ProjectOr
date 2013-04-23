/****************************************************************************
** Meta object code from reading C++ file 'qprogressindicatorspinning.h'
**
** Created: Tue Apr 23 13:36:49 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qprogressindicatorspinning.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprogressindicatorspinning.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QProgressIndicatorSpinning[] = {

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
      36,   28,   27,   27, 0x0a,
      50,   27,   27,   27, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_QProgressIndicatorSpinning[] = {
    "QProgressIndicatorSpinning\0\0animate\0"
    "animate(bool)\0animate()\0"
};

void QProgressIndicatorSpinning::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QProgressIndicatorSpinning *_t = static_cast<QProgressIndicatorSpinning *>(_o);
        switch (_id) {
        case 0: _t->animate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->animate(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QProgressIndicatorSpinning::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QProgressIndicatorSpinning::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QProgressIndicatorSpinning,
      qt_meta_data_QProgressIndicatorSpinning, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QProgressIndicatorSpinning::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QProgressIndicatorSpinning::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QProgressIndicatorSpinning::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QProgressIndicatorSpinning))
        return static_cast<void*>(const_cast< QProgressIndicatorSpinning*>(this));
    return QWidget::qt_metacast(_clname);
}

int QProgressIndicatorSpinning::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
