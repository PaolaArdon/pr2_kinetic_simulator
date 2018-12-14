/****************************************************************************
** Meta object code from reading C++ file 'bodyPropDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ui/bodyPropDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bodyPropDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BodyPropDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   13,   12,   12, 0x0a,
      44,   38,   12,   12, 0x0a,
      61,   38,   12,   12, 0x0a,
      76,   38,   12,   12, 0x0a,
      92,   38,   12,   12, 0x0a,
     128,  121,   12,   12, 0x0a,
     145,   12,   12,   12, 0x0a,
     155,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BodyPropDlg[] = {
    "BodyPropDlg\0\0val\0setTransparency(int)\0"
    "state\0setShowAxes(int)\0setShowFC(int)\0"
    "setDynamic(int)\0setShowDynContactForces(int)\0"
    "choice\0setMaterial(int)\0showBvs()\0"
    "revertAndClose()\0"
};

void BodyPropDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BodyPropDlg *_t = static_cast<BodyPropDlg *>(_o);
        switch (_id) {
        case 0: _t->setTransparency((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setShowAxes((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setShowFC((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setDynamic((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setShowDynContactForces((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setMaterial((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->showBvs(); break;
        case 7: _t->revertAndClose(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BodyPropDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BodyPropDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BodyPropDlg,
      qt_meta_data_BodyPropDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BodyPropDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BodyPropDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BodyPropDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BodyPropDlg))
        return static_cast<void*>(const_cast< BodyPropDlg*>(this));
    if (!strcmp(_clname, "Ui::BodyPropDlgUI"))
        return static_cast< Ui::BodyPropDlgUI*>(const_cast< BodyPropDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int BodyPropDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
