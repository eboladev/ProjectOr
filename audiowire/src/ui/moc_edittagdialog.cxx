/****************************************************************************
** Meta object code from reading C++ file 'edittagdialog.h'
**
** Created: Tue Apr 23 15:28:15 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "edittagdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edittagdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditTagDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   14,   14,   14, 0x08,
      57,   14,   14,   14, 0x08,
      74,   14,   14,   14, 0x08,
      93,   14,   14,   14, 0x08,
     112,   14,   14,   14, 0x08,
     132,  125,   14,   14, 0x08,
     171,  164,   14,   14, 0x08,
     188,   14,   14,   14, 0x08,
     206,   14,   14,   14, 0x08,
     244,  217,   14,   14, 0x08,
     293,  274,   14,   14, 0x08,
     326,   14,   14,   14, 0x08,
     346,   14,   14,   14, 0x08,
     364,   14,   14,   14, 0x08,
     383,   14,   14,   14, 0x08,
     400,   14,   14,   14, 0x08,
     413,   14,   14,   14, 0x08,
     425,   14,   14,   14, 0x08,
     440,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EditTagDialog[] = {
    "EditTagDialog\0\0message\0Error(QString)\0"
    "SetSongsFinished()\0AcceptFinished()\0"
    "SelectionChanged()\0FieldValueEdited()\0"
    "ResetField()\0button\0ButtonClicked(QAbstractButton*)\0"
    "rating\0SongRated(float)\0ResetPlayCounts()\0"
    "FetchTag()\0original_song,new_metadata\0"
    "FetchTagSongChosen(Song,Song)\0"
    "id,scaled,original\0ArtLoaded(quint64,QImage,QImage)\0"
    "LoadCoverFromFile()\0SaveCoverToFile()\0"
    "LoadCoverFromURL()\0SearchForCover()\0"
    "UnsetCover()\0ShowCover()\0PreviousSong()\0"
    "NextSong()\0"
};

void EditTagDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditTagDialog *_t = static_cast<EditTagDialog *>(_o);
        switch (_id) {
        case 0: _t->Error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->SetSongsFinished(); break;
        case 2: _t->AcceptFinished(); break;
        case 3: _t->SelectionChanged(); break;
        case 4: _t->FieldValueEdited(); break;
        case 5: _t->ResetField(); break;
        case 6: _t->ButtonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 7: _t->SongRated((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->ResetPlayCounts(); break;
        case 9: _t->FetchTag(); break;
        case 10: _t->FetchTagSongChosen((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const Song(*)>(_a[2]))); break;
        case 11: _t->ArtLoaded((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QImage(*)>(_a[3]))); break;
        case 12: _t->LoadCoverFromFile(); break;
        case 13: _t->SaveCoverToFile(); break;
        case 14: _t->LoadCoverFromURL(); break;
        case 15: _t->SearchForCover(); break;
        case 16: _t->UnsetCover(); break;
        case 17: _t->ShowCover(); break;
        case 18: _t->PreviousSong(); break;
        case 19: _t->NextSong(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EditTagDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EditTagDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EditTagDialog,
      qt_meta_data_EditTagDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditTagDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditTagDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditTagDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditTagDialog))
        return static_cast<void*>(const_cast< EditTagDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int EditTagDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void EditTagDialog::Error(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
