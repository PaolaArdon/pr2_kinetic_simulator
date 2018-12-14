/****************************************************************************
** Meta object code from reading C++ file 'compliantPlannerDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ui/EGPlanner/compliantPlannerDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'compliantPlannerDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CompliantPlannerDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      45,   20,   20,   20, 0x0a,
      65,   20,   20,   20, 0x0a,
      88,   20,   20,   20, 0x0a,
     108,   20,   20,   20, 0x0a,
     128,   20,   20,   20, 0x0a,
     148,   20,   20,   20, 0x0a,
     157,   20,   20,   20, 0x0a,
     175,   20,   20,   20, 0x0a,
     198,   20,   20,   20, 0x0a,
     224,   20,   20,   20, 0x0a,
     250,   20,   20,   20, 0x0a,
     277,   20,   20,   20, 0x0a,
     303,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CompliantPlannerDlg[] = {
    "CompliantPlannerDlg\0\0generateButtonClicked()\0"
    "testButtonClicked()\0testOneButtonClicked()\0"
    "nextButtonClicked()\0prevButtonClicked()\0"
    "bestButtonClicked()\0update()\0"
    "plannerFinished()\0showOneButtonClicked()\0"
    "prepareOneButtonClicked()\0"
    "visualMarkersBoxClicked()\0"
    "resetObjectButtonClicked()\0"
    "designTestButtonClicked()\0updateOut()\0"
};

void CompliantPlannerDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CompliantPlannerDlg *_t = static_cast<CompliantPlannerDlg *>(_o);
        switch (_id) {
        case 0: _t->generateButtonClicked(); break;
        case 1: _t->testButtonClicked(); break;
        case 2: _t->testOneButtonClicked(); break;
        case 3: _t->nextButtonClicked(); break;
        case 4: _t->prevButtonClicked(); break;
        case 5: _t->bestButtonClicked(); break;
        case 6: _t->update(); break;
        case 7: _t->plannerFinished(); break;
        case 8: _t->showOneButtonClicked(); break;
        case 9: _t->prepareOneButtonClicked(); break;
        case 10: _t->visualMarkersBoxClicked(); break;
        case 11: _t->resetObjectButtonClicked(); break;
        case 12: _t->designTestButtonClicked(); break;
        case 13: _t->updateOut(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CompliantPlannerDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CompliantPlannerDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CompliantPlannerDlg,
      qt_meta_data_CompliantPlannerDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CompliantPlannerDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CompliantPlannerDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CompliantPlannerDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CompliantPlannerDlg))
        return static_cast<void*>(const_cast< CompliantPlannerDlg*>(this));
    if (!strcmp(_clname, "Ui::CompliantPlannerDlgUI"))
        return static_cast< Ui::CompliantPlannerDlgUI*>(const_cast< CompliantPlannerDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int CompliantPlannerDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
