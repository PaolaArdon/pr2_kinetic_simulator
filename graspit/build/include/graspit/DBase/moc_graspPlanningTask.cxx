/****************************************************************************
** Meta object code from reading C++ file 'graspPlanningTask.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/graspit/DBase/graspPlanningTask.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graspPlanningTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GraspPlanningTask[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      39,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GraspPlanningTask[] = {
    "GraspPlanningTask\0\0plannerLoopUpdate()\0"
    "plannerComplete()\0"
};

void GraspPlanningTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GraspPlanningTask *_t = static_cast<GraspPlanningTask *>(_o);
        switch (_id) {
        case 0: _t->plannerLoopUpdate(); break;
        case 1: _t->plannerComplete(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GraspPlanningTask::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GraspPlanningTask::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GraspPlanningTask,
      qt_meta_data_GraspPlanningTask, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GraspPlanningTask::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GraspPlanningTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GraspPlanningTask::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GraspPlanningTask))
        return static_cast<void*>(const_cast< GraspPlanningTask*>(this));
    if (!strcmp(_clname, "Task"))
        return static_cast< Task*>(const_cast< GraspPlanningTask*>(this));
    return QObject::qt_metacast(_clname);
}

int GraspPlanningTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
