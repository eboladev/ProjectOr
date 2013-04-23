/****************************************************************************
** Meta object code from reading C++ file 'gpoddertoptagspage.h'
**
** Created: Tue Apr 23 15:28:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gpoddertoptagspage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpoddertoptagspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GPodderTopTagsPage[] = {

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
      29,   20,   19,   19, 0x08,
      62,   20,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GPodderTopTagsPage[] = {
    "GPodderTopTagsPage\0\0tag_list\0"
    "TagListLoaded(mygpo::TagListPtr)\0"
    "TagListFailed(mygpo::TagListPtr)\0"
};

void GPodderTopTagsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GPodderTopTagsPage *_t = static_cast<GPodderTopTagsPage *>(_o);
        switch (_id) {
        case 0: _t->TagListLoaded((*reinterpret_cast< mygpo::TagListPtr(*)>(_a[1]))); break;
        case 1: _t->TagListFailed((*reinterpret_cast< mygpo::TagListPtr(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GPodderTopTagsPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GPodderTopTagsPage::staticMetaObject = {
    { &AddPodcastPage::staticMetaObject, qt_meta_stringdata_GPodderTopTagsPage,
      qt_meta_data_GPodderTopTagsPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GPodderTopTagsPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GPodderTopTagsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GPodderTopTagsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GPodderTopTagsPage))
        return static_cast<void*>(const_cast< GPodderTopTagsPage*>(this));
    return AddPodcastPage::qt_metacast(_clname);
}

int GPodderTopTagsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AddPodcastPage::qt_metacall(_c, _id, _a);
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
