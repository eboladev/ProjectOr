/****************************************************************************
** Meta object code from reading C++ file 'songinfotextview.h'
**
** Created: Tue Apr 23 15:28:13 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "songinfotextview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songinfotextview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SongInfoTextView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   17,   17,   17, 0x0a,
      61,   56,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SongInfoTextView[] = {
    "SongInfoTextView\0\0ShowSettingsDialog()\0"
    "ReloadSettings()\0html\0SetHtml(QString)\0"
};

void SongInfoTextView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SongInfoTextView *_t = static_cast<SongInfoTextView *>(_o);
        switch (_id) {
        case 0: _t->ShowSettingsDialog(); break;
        case 1: _t->ReloadSettings(); break;
        case 2: _t->SetHtml((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SongInfoTextView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SongInfoTextView::staticMetaObject = {
    { &QTextBrowser::staticMetaObject, qt_meta_stringdata_SongInfoTextView,
      qt_meta_data_SongInfoTextView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SongInfoTextView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SongInfoTextView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SongInfoTextView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SongInfoTextView))
        return static_cast<void*>(const_cast< SongInfoTextView*>(this));
    return QTextBrowser::qt_metacast(_clname);
}

int SongInfoTextView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextBrowser::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SongInfoTextView::ShowSettingsDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
