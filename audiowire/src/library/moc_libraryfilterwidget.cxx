/****************************************************************************
** Meta object code from reading C++ file 'libraryfilterwidget.h'
**
** Created: Tue Apr 23 15:28:08 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "libraryfilterwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'libraryfilterwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LibraryFilterWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,
      33,   20,   20,   20, 0x05,
      47,   20,   20,   20, 0x05,
      68,   63,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      89,   84,   20,   20, 0x0a,
     129,  127,   20,   20, 0x0a,
     157,  155,   20,   20, 0x08,
     204,  197,   20,   20, 0x08,
     229,   63,   20,   20, 0x08,
     256,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LibraryFilterWidget[] = {
    "LibraryFilterWidget\0\0UpPressed()\0"
    "DownPressed()\0ReturnPressed()\0text\0"
    "Filter(QString)\0view\0"
    "SetQueryMode(QueryOptions::QueryMode)\0"
    "e\0FocusOnFilter(QKeyEvent*)\0g\0"
    "GroupingChanged(LibraryModel::Grouping)\0"
    "action\0GroupByClicked(QAction*)\0"
    "FilterTextChanged(QString)\0"
    "FilterDelayTimeout()\0"
};

void LibraryFilterWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LibraryFilterWidget *_t = static_cast<LibraryFilterWidget *>(_o);
        switch (_id) {
        case 0: _t->UpPressed(); break;
        case 1: _t->DownPressed(); break;
        case 2: _t->ReturnPressed(); break;
        case 3: _t->Filter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->SetQueryMode((*reinterpret_cast< QueryOptions::QueryMode(*)>(_a[1]))); break;
        case 5: _t->FocusOnFilter((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 6: _t->GroupingChanged((*reinterpret_cast< const LibraryModel::Grouping(*)>(_a[1]))); break;
        case 7: _t->GroupByClicked((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 8: _t->FilterTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->FilterDelayTimeout(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LibraryFilterWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LibraryFilterWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LibraryFilterWidget,
      qt_meta_data_LibraryFilterWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LibraryFilterWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LibraryFilterWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LibraryFilterWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LibraryFilterWidget))
        return static_cast<void*>(const_cast< LibraryFilterWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int LibraryFilterWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void LibraryFilterWidget::UpPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void LibraryFilterWidget::DownPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void LibraryFilterWidget::ReturnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void LibraryFilterWidget::Filter(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
