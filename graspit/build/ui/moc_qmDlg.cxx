/****************************************************************************
** Meta object code from reading C++ file 'qmDlg.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ui/qmDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QMDlg[] = {

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
      15,    7,    6,    6, 0x0a,
      37,    6,    6,    6, 0x0a,
      57,    6,    6,    6, 0x0a,
      69,    6,    6,    6, 0x0a,
      86,   80,    6,    6, 0x0a,
     100,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QMDlg[] = {
    "QMDlg\0\0typeStr\0selectQMType(QString)\0"
    "updateSettingsBox()\0addEditQM()\0"
    "deleteQM()\0which\0selectQM(int)\0"
    "gravityBox_clicked()\0"
};

void QMDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QMDlg *_t = static_cast<QMDlg *>(_o);
        switch (_id) {
        case 0: _t->selectQMType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateSettingsBox(); break;
        case 2: _t->addEditQM(); break;
        case 3: _t->deleteQM(); break;
        case 4: _t->selectQM((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->gravityBox_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QMDlg::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QMDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QMDlg,
      qt_meta_data_QMDlg, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QMDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QMDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QMDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QMDlg))
        return static_cast<void*>(const_cast< QMDlg*>(this));
    if (!strcmp(_clname, "Ui::QMDlgUI"))
        return static_cast< Ui::QMDlgUI*>(const_cast< QMDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int QMDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
