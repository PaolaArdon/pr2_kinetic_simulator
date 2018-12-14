/****************************************************************************
** Meta object code from reading C++ file 'dbaseDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ui/DBase/dbaseDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbaseDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DBaseDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      34,    9,    9,    9, 0x0a,
      55,    9,    9,    9, 0x0a,
      81,    9,    9,    9, 0x0a,
     107,    9,    9,    9, 0x0a,
     133,    9,    9,    9, 0x0a,
     163,    9,    9,    9, 0x0a,
     187,    9,    9,    9, 0x0a,
     213,    9,    9,    9, 0x0a,
     234,    9,    9,    9, 0x0a,
     248,    9,    9,    9, 0x0a,
     263,    9,    9,    9, 0x0a,
     282,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DBaseDlg[] = {
    "DBaseDlg\0\0connectButton_clicked()\0"
    "exitButton_clicked()\0loadModelButton_clicked()\0"
    "loadGraspButton_clicked()\0"
    "nextGraspButton_clicked()\0"
    "previousGraspButton_clicked()\0"
    "plannerButton_clicked()\0"
    "createGWSButton_clicked()\0"
    "sortButton_clicked()\0showMarkers()\0"
    "modelChanged()\0graspTypeChanged()\0"
    "classChanged()\0"
};

void DBaseDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DBaseDlg *_t = static_cast<DBaseDlg *>(_o);
        switch (_id) {
        case 0: _t->connectButton_clicked(); break;
        case 1: _t->exitButton_clicked(); break;
        case 2: _t->loadModelButton_clicked(); break;
        case 3: _t->loadGraspButton_clicked(); break;
        case 4: _t->nextGraspButton_clicked(); break;
        case 5: _t->previousGraspButton_clicked(); break;
        case 6: _t->plannerButton_clicked(); break;
        case 7: _t->createGWSButton_clicked(); break;
        case 8: _t->sortButton_clicked(); break;
        case 9: _t->showMarkers(); break;
        case 10: _t->modelChanged(); break;
        case 11: _t->graspTypeChanged(); break;
        case 12: _t->classChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DBaseDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DBaseDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DBaseDlg,
      qt_meta_data_DBaseDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DBaseDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DBaseDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DBaseDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DBaseDlg))
        return static_cast<void*>(const_cast< DBaseDlg*>(this));
    if (!strcmp(_clname, "Ui::DBaseDlgUI"))
        return static_cast< Ui::DBaseDlgUI*>(const_cast< DBaseDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int DBaseDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
