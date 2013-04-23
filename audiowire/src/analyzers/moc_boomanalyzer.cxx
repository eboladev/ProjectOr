/****************************************************************************
** Meta object code from reading C++ file 'boomanalyzer.h'
**
** Created: Tue Apr 23 15:27:59 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "boomanalyzer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'boomanalyzer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BoomAnalyzer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   24, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      37,   13,   13,   13, 0x0a,

 // constructors: signature, parameters, type, tag, flags
      60,   13,   13,   13, 0x0e,

       0        // eod
};

static const char qt_meta_stringdata_BoomAnalyzer[] = {
    "BoomAnalyzer\0\0changeK_barHeight(int)\0"
    "changeF_peakSpeed(int)\0BoomAnalyzer(QWidget*)\0"
};

void BoomAnalyzer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { BoomAnalyzer *_r = new BoomAnalyzer((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BoomAnalyzer *_t = static_cast<BoomAnalyzer *>(_o);
        switch (_id) {
        case 0: _t->changeK_barHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->changeF_peakSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BoomAnalyzer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BoomAnalyzer::staticMetaObject = {
    { &Analyzer::Base::staticMetaObject, qt_meta_stringdata_BoomAnalyzer,
      qt_meta_data_BoomAnalyzer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BoomAnalyzer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BoomAnalyzer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BoomAnalyzer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BoomAnalyzer))
        return static_cast<void*>(const_cast< BoomAnalyzer*>(this));
    typedef Analyzer::Base QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int BoomAnalyzer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Analyzer::Base QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
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
