/****************************************************************************
** Meta object code from reading C++ file 'egPlannerDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ui/EGPlanner/egPlannerDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'egPlannerDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EigenGraspPlannerDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x0a,
      47,   43,   21,   21, 0x0a,
      80,   21,   21,   21, 0x0a,
     103,   21,   21,   21, 0x0a,
     131,  129,   21,   21, 0x0a,
     165,   21,   21,   21, 0x0a,
     191,   21,   21,   21, 0x0a,
     217,   21,   21,   21, 0x0a,
     243,   21,   21,   21, 0x0a,
     266,  259,   21,   21, 0x0a,
     286,   21,   21,   21, 0x0a,
     301,   21,   21,   21, 0x0a,
     338,  330,   21,   21, 0x0a,
     367,   21,   21,   21, 0x0a,
     385,   21,   21,   21, 0x0a,
     407,   21,   21,   21, 0x0a,
     430,   21,   21,   21, 0x0a,
     453,   21,   21,   21, 0x0a,
     487,   21,   21,   21, 0x0a,
     510,   21,   21,   21, 0x0a,
     532,   21,   21,   21, 0x0a,
     560,   21,   21,   21, 0x0a,
     590,   21,   21,   21, 0x0a,
     617,   21,   21,   21, 0x0a,
     649,  647,   21,   21, 0x0a,
     676,  647,   21,   21, 0x0a,
     706,   21,   21,   21, 0x0a,
     734,  129,   21,   21, 0x0a,
     769,  766,   21,   21, 0x0a,
     797,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EigenGraspPlannerDlg[] = {
    "EigenGraspPlannerDlg\0\0exitButton_clicked()\0"
    "h,b\0setMembers(Hand*,GraspableBody*)\0"
    "variableInputChanged()\0variableCheckBoxChanged()\0"
    "s\0spaceSearchBox_activated(QString)\0"
    "prevGraspButton_clicked()\0"
    "bestGraspButton_clicked()\0"
    "nextGraspButton_clicked()\0plannerUpdate()\0"
    "render\0updateResults(bool)\0updateStatus()\0"
    "energyBox_activated(QString)\0checked\0"
    "setContactsBox_toggled(bool)\0"
    "plannerComplete()\0plannerInit_clicked()\0"
    "plannerReset_clicked()\0plannerStart_clicked()\0"
    "plannerTypeBox_activated(QString)\0"
    "autoGraspBox_clicked()\0onlinePlannerUpdate()\0"
    "onlineGraspButton_clicked()\0"
    "onlineReleaseButton_clicked()\0"
    "onlinePlanButton_clicked()\0"
    "instantEnergyButton_clicked()\0c\0"
    "showCloneBox_toggled(bool)\0"
    "showSolutionBox_toggled(bool)\0"
    "useVirtualHandBox_clicked()\0"
    "useRealBarrettBox_toggled(bool)\0on\0"
    "inputGloveBox_toggled(bool)\0"
    "inputLoadButton_clicked()\0"
};

void EigenGraspPlannerDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EigenGraspPlannerDlg *_t = static_cast<EigenGraspPlannerDlg *>(_o);
        switch (_id) {
        case 0: _t->exitButton_clicked(); break;
        case 1: _t->setMembers((*reinterpret_cast< Hand*(*)>(_a[1])),(*reinterpret_cast< GraspableBody*(*)>(_a[2]))); break;
        case 2: _t->variableInputChanged(); break;
        case 3: _t->variableCheckBoxChanged(); break;
        case 4: _t->spaceSearchBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->prevGraspButton_clicked(); break;
        case 6: _t->bestGraspButton_clicked(); break;
        case 7: _t->nextGraspButton_clicked(); break;
        case 8: _t->plannerUpdate(); break;
        case 9: _t->updateResults((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->updateStatus(); break;
        case 11: _t->energyBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->setContactsBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->plannerComplete(); break;
        case 14: _t->plannerInit_clicked(); break;
        case 15: _t->plannerReset_clicked(); break;
        case 16: _t->plannerStart_clicked(); break;
        case 17: _t->plannerTypeBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->autoGraspBox_clicked(); break;
        case 19: _t->onlinePlannerUpdate(); break;
        case 20: _t->onlineGraspButton_clicked(); break;
        case 21: _t->onlineReleaseButton_clicked(); break;
        case 22: _t->onlinePlanButton_clicked(); break;
        case 23: _t->instantEnergyButton_clicked(); break;
        case 24: _t->showCloneBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->showSolutionBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->useVirtualHandBox_clicked(); break;
        case 27: _t->useRealBarrettBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->inputGloveBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->inputLoadButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EigenGraspPlannerDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EigenGraspPlannerDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EigenGraspPlannerDlg,
      qt_meta_data_EigenGraspPlannerDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EigenGraspPlannerDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EigenGraspPlannerDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EigenGraspPlannerDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EigenGraspPlannerDlg))
        return static_cast<void*>(const_cast< EigenGraspPlannerDlg*>(this));
    if (!strcmp(_clname, "Ui::EigenGraspPlannerDlgUI"))
        return static_cast< Ui::EigenGraspPlannerDlgUI*>(const_cast< EigenGraspPlannerDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int EigenGraspPlannerDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
