/****************************************************************************
** Meta object code from reading C++ file 'eigenGraspDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ui/eigenGraspDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eigenGraspDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EigenGraspDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      35,   14,   14,   14, 0x0a,
      51,   14,   14,   14, 0x0a,
      72,   14,   14,   14, 0x0a,
      93,   14,   14,   14, 0x0a,
     118,   14,   14,   14, 0x0a,
     139,   14,   14,   14, 0x0a,
     146,   14,   14,   14, 0x0a,
     173,   14,   14,   14, 0x0a,
     199,   14,   14,   14, 0x0a,
     223,   14,   14,   14, 0x0a,
     249,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EigenGraspDlg[] = {
    "EigenGraspDlg\0\0eigenGraspChanged()\0"
    "fixBoxChanged()\0saveButton_clicked()\0"
    "loadButton_clicked()\0identityButton_clicked()\0"
    "exitButton_clicked()\0show()\0"
    "handConfigurationChanged()\0"
    "setOriginButton_clicked()\0"
    "rigidCheckBox_clicked()\0"
    "closeHandButton_clicked()\0"
    "goToOriginButton_clicked()\0"
};

void EigenGraspDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EigenGraspDlg *_t = static_cast<EigenGraspDlg *>(_o);
        switch (_id) {
        case 0: _t->eigenGraspChanged(); break;
        case 1: _t->fixBoxChanged(); break;
        case 2: _t->saveButton_clicked(); break;
        case 3: _t->loadButton_clicked(); break;
        case 4: _t->identityButton_clicked(); break;
        case 5: _t->exitButton_clicked(); break;
        case 6: _t->show(); break;
        case 7: _t->handConfigurationChanged(); break;
        case 8: _t->setOriginButton_clicked(); break;
        case 9: _t->rigidCheckBox_clicked(); break;
        case 10: _t->closeHandButton_clicked(); break;
        case 11: _t->goToOriginButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData EigenGraspDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EigenGraspDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EigenGraspDlg,
      qt_meta_data_EigenGraspDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EigenGraspDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EigenGraspDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EigenGraspDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EigenGraspDlg))
        return static_cast<void*>(const_cast< EigenGraspDlg*>(this));
    if (!strcmp(_clname, "Ui::EigenGraspDlgUI"))
        return static_cast< Ui::EigenGraspDlgUI*>(const_cast< EigenGraspDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int EigenGraspDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
