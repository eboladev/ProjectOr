/****************************************************************************
** Meta object code from reading C++ file 'nyancatanalyzer.h'
**
** Created: Tue Apr 23 15:27:59 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "nyancatanalyzer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nyancatanalyzer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NyanCatAnalyzer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   14, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: signature, parameters, type, tag, flags
      24,   17,   16,   16, 0x0e,

       0        // eod
};

static const char qt_meta_stringdata_NyanCatAnalyzer[] = {
    "NyanCatAnalyzer\0\0parent\0"
    "NyanCatAnalyzer(QWidget*)\0"
};

void NyanCatAnalyzer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { NyanCatAnalyzer *_r = new NyanCatAnalyzer((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        }
    }
    Q_UNUSED(_o);
}

const QMetaObjectExtraData NyanCatAnalyzer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NyanCatAnalyzer::staticMetaObject = {
    { &Analyzer::Base::staticMetaObject, qt_meta_stringdata_NyanCatAnalyzer,
      qt_meta_data_NyanCatAnalyzer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NyanCatAnalyzer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NyanCatAnalyzer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NyanCatAnalyzer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NyanCatAnalyzer))
        return static_cast<void*>(const_cast< NyanCatAnalyzer*>(this));
    typedef Analyzer::Base QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int NyanCatAnalyzer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Analyzer::Base QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
