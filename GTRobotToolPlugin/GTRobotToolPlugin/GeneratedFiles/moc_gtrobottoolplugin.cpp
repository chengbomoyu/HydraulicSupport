/****************************************************************************
** Meta object code from reading C++ file 'gtrobottoolplugin.h'
**
** Created: Tue Feb 15 17:20:33 2022
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gtrobottoolplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gtrobottoolplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Support[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      44,    8,    8,    8, 0x0a,
      78,    8,    8,    8, 0x0a,
     111,    8,    8,    8, 0x0a,
     146,    8,    8,    8, 0x0a,
     179,    8,    8,    8, 0x0a,
     217,    8,    8,    8, 0x0a,
     253,    8,    8,    8, 0x0a,
     282,    8,    8,    8, 0x0a,
     311,    8,    8,    8, 0x0a,
     340,    8,    8,    8, 0x0a,
     367,    8,    8,    8, 0x0a,
     394,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Support[] = {
    "Support\0\0onpbtnclicked_buttonSystemEnable()\0"
    "onpbtnclicked_buttonSystemReset()\0"
    "onpbtnclicked_buttonSensorZero()\0"
    "onpbtnclicked_buttonPressureDown()\0"
    "onpbtnclicked_buttonPressureUp()\0"
    "onpbtnclicked_buttonCoefficientDown()\0"
    "onpbtnclicked_buttonCoefficientUp()\0"
    "onpbtnclicked_buttonKpDown()\0"
    "onpbtnclicked_buttonKiDown()\0"
    "onpbtnclicked_buttonKdDown()\0"
    "onpbtnclicked_buttonKpUp()\0"
    "onpbtnclicked_buttonKiUp()\0"
    "onpbtnclicked_buttonKdUp()\0"
};

const QMetaObject Support::staticMetaObject = {
    { &GtAppFrameInterface::staticMetaObject, qt_meta_stringdata_Support,
      qt_meta_data_Support, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Support::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Support::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Support::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Support))
        return static_cast<void*>(const_cast< Support*>(this));
    if (!strcmp(_clname, "RobotHmi"))
        return static_cast< GtAppFrameInterface*>(const_cast< Support*>(this));
    return GtAppFrameInterface::qt_metacast(_clname);
}

int Support::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GtAppFrameInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onpbtnclicked_buttonSystemEnable(); break;
        case 1: onpbtnclicked_buttonSystemReset(); break;
        case 2: onpbtnclicked_buttonSensorZero(); break;
        case 3: onpbtnclicked_buttonPressureDown(); break;
        case 4: onpbtnclicked_buttonPressureUp(); break;
        case 5: onpbtnclicked_buttonCoefficientDown(); break;
        case 6: onpbtnclicked_buttonCoefficientUp(); break;
        case 7: onpbtnclicked_buttonKpDown(); break;
        case 8: onpbtnclicked_buttonKiDown(); break;
        case 9: onpbtnclicked_buttonKdDown(); break;
        case 10: onpbtnclicked_buttonKpUp(); break;
        case 11: onpbtnclicked_buttonKiUp(); break;
        case 12: onpbtnclicked_buttonKdUp(); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
