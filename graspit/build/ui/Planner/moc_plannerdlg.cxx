/****************************************************************************
** Meta object code from reading C++ file 'plannerdlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ui/Planner/plannerdlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plannerdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlannerDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      29,   11,   11,   11, 0x0a,
      41,   11,   11,   11, 0x0a,
      49,   11,   11,   11, 0x0a,
      62,   11,   11,   11, 0x0a,
      79,   11,   11,   11, 0x0a,
      92,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PlannerDlg[] = {
    "PlannerDlg\0\0generateGrasps()\0showGrasp()\0"
    "newQM()\0chooseFile()\0chooseSaveFile()\0"
    "testGrasps()\0enableShowButton()\0"
};

void PlannerDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlannerDlg *_t = static_cast<PlannerDlg *>(_o);
        switch (_id) {
        case 0: _t->generateGrasps(); break;
        case 1: _t->showGrasp(); break;
        case 2: _t->newQM(); break;
        case 3: _t->chooseFile(); break;
        case 4: _t->chooseSaveFile(); break;
        case 5: _t->testGrasps(); break;
        case 6: _t->enableShowButton(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PlannerDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlannerDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PlannerDlg,
      qt_meta_data_PlannerDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlannerDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlannerDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlannerDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlannerDlg))
        return static_cast<void*>(const_cast< PlannerDlg*>(this));
    if (!strcmp(_clname, "Ui::PlannerDlgUI"))
        return static_cast< Ui::PlannerDlgUI*>(const_cast< PlannerDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int PlannerDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
