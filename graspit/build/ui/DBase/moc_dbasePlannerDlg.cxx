/****************************************************************************
** Meta object code from reading C++ file 'dbasePlannerDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ui/DBase/dbasePlannerDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbasePlannerDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DBasePlannerDlg[] = {

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
      17,   16,   16,   16, 0x0a,
      38,   16,   16,   16, 0x0a,
      66,   16,   16,   16, 0x0a,
      90,   16,   16,   16, 0x0a,
     121,   16,   16,   16, 0x0a,
     148,   16,   16,   16, 0x0a,
     178,   16,   16,   16, 0x0a,
     204,   16,   16,   16, 0x0a,
     230,   16,   16,   16, 0x0a,
     265,   16,   16,   16, 0x0a,
     298,   16,   16,   16, 0x0a,
     313,   16,   16,   16, 0x0a,
     339,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DBasePlannerDlg[] = {
    "DBasePlannerDlg\0\0exitButton_clicked()\0"
    "getNeighborButton_clicked()\0"
    "executeButton_clicked()\0"
    "retrieveGraspsButton_clicked()\0"
    "rankGraspsButton_clicked()\0"
    "previousGraspButton_clicked()\0"
    "nextGraspButton_clicked()\0"
    "createGWSButton_clicked()\0"
    "originalGraspRadioButton_clicked()\0"
    "testedGraspRadioButton_clicked()\0"
    "modelChanged()\0neighborCheckBoxChanged()\0"
    "alignmentChanged()\0"
};

void DBasePlannerDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DBasePlannerDlg *_t = static_cast<DBasePlannerDlg *>(_o);
        switch (_id) {
        case 0: _t->exitButton_clicked(); break;
        case 1: _t->getNeighborButton_clicked(); break;
        case 2: _t->executeButton_clicked(); break;
        case 3: _t->retrieveGraspsButton_clicked(); break;
        case 4: _t->rankGraspsButton_clicked(); break;
        case 5: _t->previousGraspButton_clicked(); break;
        case 6: _t->nextGraspButton_clicked(); break;
        case 7: _t->createGWSButton_clicked(); break;
        case 8: _t->originalGraspRadioButton_clicked(); break;
        case 9: _t->testedGraspRadioButton_clicked(); break;
        case 10: _t->modelChanged(); break;
        case 11: _t->neighborCheckBoxChanged(); break;
        case 12: _t->alignmentChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DBasePlannerDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DBasePlannerDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DBasePlannerDlg,
      qt_meta_data_DBasePlannerDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DBasePlannerDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DBasePlannerDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DBasePlannerDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DBasePlannerDlg))
        return static_cast<void*>(const_cast< DBasePlannerDlg*>(this));
    if (!strcmp(_clname, "Ui::DBasePlannerDlgUI"))
        return static_cast< Ui::DBasePlannerDlgUI*>(const_cast< DBasePlannerDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int DBasePlannerDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
