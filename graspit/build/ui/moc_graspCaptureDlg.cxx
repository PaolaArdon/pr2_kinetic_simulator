/****************************************************************************
** Meta object code from reading C++ file 'graspCaptureDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ui/graspCaptureDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graspCaptureDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GraspCaptureDlg[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      40,   16,   16,   16, 0x08,
      66,   16,   16,   16, 0x08,
      93,   16,   16,   16, 0x08,
     118,   16,   16,   16, 0x08,
     138,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GraspCaptureDlg[] = {
    "GraspCaptureDlg\0\0captureButtonClicked()\0"
    "saveToFileButtonClicked()\0"
    "saveToDBaseButtonClicked()\0"
    "clearListButtonClicked()\0exitButtonClicked()\0"
    "updateQuality()\0"
};

void GraspCaptureDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GraspCaptureDlg *_t = static_cast<GraspCaptureDlg *>(_o);
        switch (_id) {
        case 0: _t->captureButtonClicked(); break;
        case 1: _t->saveToFileButtonClicked(); break;
        case 2: _t->saveToDBaseButtonClicked(); break;
        case 3: _t->clearListButtonClicked(); break;
        case 4: _t->exitButtonClicked(); break;
        case 5: _t->updateQuality(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GraspCaptureDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GraspCaptureDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GraspCaptureDlg,
      qt_meta_data_GraspCaptureDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GraspCaptureDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GraspCaptureDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GraspCaptureDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GraspCaptureDlg))
        return static_cast<void*>(const_cast< GraspCaptureDlg*>(this));
    if (!strcmp(_clname, "Ui::GraspCaptureDlgUI"))
        return static_cast< Ui::GraspCaptureDlgUI*>(const_cast< GraspCaptureDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int GraspCaptureDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
