/****************************************************************************
** Meta object code from reading C++ file 'gfoDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ui/gfoDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gfoDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GFODlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      28,    7,    7,    7, 0x0a,
      55,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GFODlg[] = {
    "GFODlg\0\0exitButtonClicked()\0"
    "optimizationOnBoxClicked()\0"
    "handConfigurationChanged()\0"
};

void GFODlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GFODlg *_t = static_cast<GFODlg *>(_o);
        switch (_id) {
        case 0: _t->exitButtonClicked(); break;
        case 1: _t->optimizationOnBoxClicked(); break;
        case 2: _t->handConfigurationChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GFODlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GFODlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GFODlg,
      qt_meta_data_GFODlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GFODlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GFODlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GFODlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GFODlg))
        return static_cast<void*>(const_cast< GFODlg*>(this));
    if (!strcmp(_clname, "Ui::GFODlgUI"))
        return static_cast< Ui::GFODlgUI*>(const_cast< GFODlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int GFODlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
