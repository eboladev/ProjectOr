/****************************************************************************
** Meta object code from reading C++ file 'fileview.h'
**
** Created: Tue Apr 23 15:28:16 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fileview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FileView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   10,    9,    9, 0x05,
      41,   36,    9,    9, 0x05,
      72,   67,    9,    9, 0x05,
      99,   67,    9,    9, 0x05,
     126,   67,    9,    9, 0x05,
     152,   67,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     174,    9,    9,    9, 0x08,
     183,    9,    9,    9, 0x08,
     203,  194,    9,    9, 0x08,
     233,  227,    9,    9, 0x08,
     260,  227,    9,    9, 0x08,
     299,  289,    9,    9, 0x08,
     337,  319,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FileView[] = {
    "FileView\0\0path\0PathChanged(QString)\0"
    "data\0AddToPlaylist(QMimeData*)\0urls\0"
    "CopyToLibrary(QList<QUrl>)\0"
    "MoveToLibrary(QList<QUrl>)\0"
    "CopyToDevice(QList<QUrl>)\0"
    "EditTags(QList<QUrl>)\0FileUp()\0"
    "FileHome()\0new_path\0ChangeFilePath(QString)\0"
    "index\0ItemActivated(QModelIndex)\0"
    "ItemDoubleClick(QModelIndex)\0filenames\0"
    "Delete(QStringList)\0songs_with_errors\0"
    "DeleteFinished(SongList)\0"
};

void FileView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileView *_t = static_cast<FileView *>(_o);
        switch (_id) {
        case 0: _t->PathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->AddToPlaylist((*reinterpret_cast< QMimeData*(*)>(_a[1]))); break;
        case 2: _t->CopyToLibrary((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 3: _t->MoveToLibrary((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 4: _t->CopyToDevice((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 5: _t->EditTags((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 6: _t->FileUp(); break;
        case 7: _t->FileHome(); break;
        case 8: _t->ChangeFilePath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->ItemActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->ItemDoubleClick((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 11: _t->Delete((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 12: _t->DeleteFinished((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FileView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FileView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FileView,
      qt_meta_data_FileView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileView))
        return static_cast<void*>(const_cast< FileView*>(this));
    return QWidget::qt_metacast(_clname);
}

int FileView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void FileView::PathChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileView::AddToPlaylist(QMimeData * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileView::CopyToLibrary(const QList<QUrl> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileView::MoveToLibrary(const QList<QUrl> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FileView::CopyToDevice(const QList<QUrl> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FileView::EditTags(const QList<QUrl> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
