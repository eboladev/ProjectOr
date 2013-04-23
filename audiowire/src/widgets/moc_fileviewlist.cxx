/****************************************************************************
** Meta object code from reading C++ file 'fileviewlist.h'
**
** Created: Tue Apr 23 15:28:17 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fileviewlist.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileviewlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FileViewList[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   14,   13,   13, 0x05,
      50,   45,   13,   13, 0x05,
      77,   45,   13,   13, 0x05,
     104,   45,   13,   13, 0x05,
     140,  130,   13,   13, 0x05,
     160,   45,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     182,   13,   13,   13, 0x08,
     193,   13,   13,   13, 0x08,
     213,   13,   13,   13, 0x08,
     237,   13,   13,   13, 0x08,
     257,   13,   13,   13, 0x08,
     277,   13,   13,   13, 0x08,
     296,   13,   13,   13, 0x08,
     309,   13,   13,   13, 0x08,
     324,   13,   13,   13, 0x08,
     352,   13,  340,   13, 0x08,
     389,   13,  377,   13, 0x08,
     422,   13,  412,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FileViewList[] = {
    "FileViewList\0\0data\0AddToPlaylist(QMimeData*)\0"
    "urls\0CopyToLibrary(QList<QUrl>)\0"
    "MoveToLibrary(QList<QUrl>)\0"
    "CopyToDevice(QList<QUrl>)\0filenames\0"
    "Delete(QStringList)\0EditTags(QList<QUrl>)\0"
    "LoadSlot()\0AddToPlaylistSlot()\0"
    "OpenInNewPlaylistSlot()\0CopyToLibrarySlot()\0"
    "MoveToLibrarySlot()\0CopyToDeviceSlot()\0"
    "DeleteSlot()\0EditTagsSlot()\0ShowInBrowser()\0"
    "QStringList\0FilenamesFromSelection()\0"
    "QList<QUrl>\0UrlListFromSelection()\0"
    "MimeData*\0MimeDataFromSelection()\0"
};

void FileViewList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileViewList *_t = static_cast<FileViewList *>(_o);
        switch (_id) {
        case 0: _t->AddToPlaylist((*reinterpret_cast< QMimeData*(*)>(_a[1]))); break;
        case 1: _t->CopyToLibrary((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 2: _t->MoveToLibrary((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 3: _t->CopyToDevice((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 4: _t->Delete((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 5: _t->EditTags((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 6: _t->LoadSlot(); break;
        case 7: _t->AddToPlaylistSlot(); break;
        case 8: _t->OpenInNewPlaylistSlot(); break;
        case 9: _t->CopyToLibrarySlot(); break;
        case 10: _t->MoveToLibrarySlot(); break;
        case 11: _t->CopyToDeviceSlot(); break;
        case 12: _t->DeleteSlot(); break;
        case 13: _t->EditTagsSlot(); break;
        case 14: _t->ShowInBrowser(); break;
        case 15: { QStringList _r = _t->FilenamesFromSelection();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 16: { QList<QUrl> _r = _t->UrlListFromSelection();
            if (_a[0]) *reinterpret_cast< QList<QUrl>*>(_a[0]) = _r; }  break;
        case 17: { MimeData* _r = _t->MimeDataFromSelection();
            if (_a[0]) *reinterpret_cast< MimeData**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FileViewList::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FileViewList::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_FileViewList,
      qt_meta_data_FileViewList, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileViewList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileViewList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileViewList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileViewList))
        return static_cast<void*>(const_cast< FileViewList*>(this));
    return QListView::qt_metacast(_clname);
}

int FileViewList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void FileViewList::AddToPlaylist(QMimeData * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileViewList::CopyToLibrary(const QList<QUrl> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileViewList::MoveToLibrary(const QList<QUrl> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileViewList::CopyToDevice(const QList<QUrl> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FileViewList::Delete(const QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FileViewList::EditTags(const QList<QUrl> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
