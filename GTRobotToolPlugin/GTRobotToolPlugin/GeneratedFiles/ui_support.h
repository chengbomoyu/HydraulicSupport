/********************************************************************************
** Form generated from reading UI file 'support.ui'
**
** Created: Tue Feb 15 17:20:33 2022
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPORT_H
#define UI_SUPPORT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_supportClass
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *labelSystemStatsu;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLCDNumber *lcdPressureNow;
    QLCDNumber *lcdPressureSet;
    QLCDNumber *lcdCoefficient;
    QLCDNumber *lcdKp;
    QLCDNumber *lcdKi;
    QLCDNumber *lcdKd;
    QFrame *line_2;
    QFrame *line;
    QGridLayout *gridLayout_2;
    QPushButton *buttonSystemEnable;
    QPushButton *buttonSystemReset;
    QPushButton *buttonSensorZero;
    QPushButton *buttonPressureDown;
    QPushButton *buttonPressureUp;
    QPushButton *buttonCoefficientDown;
    QPushButton *buttonCoefficientUp;
    QPushButton *buttonKpDown;
    QPushButton *buttonKpUp;
    QPushButton *buttonKiDown;
    QPushButton *buttonKiUp;
    QPushButton *buttonKdDown;
    QPushButton *buttonKdUp;

    void setupUi(QWidget *supportClass)
    {
        if (supportClass->objectName().isEmpty())
            supportClass->setObjectName(QString::fromUtf8("supportClass"));
        supportClass->resize(690, 390);
        supportClass->setMinimumSize(QSize(690, 390));
        supportClass->setMaximumSize(QSize(690, 590));
        supportClass->setContextMenuPolicy(Qt::ActionsContextMenu);
        supportClass->setAutoFillBackground(false);
        horizontalLayout = new QHBoxLayout(supportClass);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(supportClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(15);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        labelSystemStatsu = new QLabel(supportClass);
        labelSystemStatsu->setObjectName(QString::fromUtf8("labelSystemStatsu"));
        labelSystemStatsu->setFont(font);

        gridLayout->addWidget(labelSystemStatsu, 0, 1, 1, 1);

        label = new QLabel(supportClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_3 = new QLabel(supportClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_7 = new QLabel(supportClass);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        label_4 = new QLabel(supportClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_5 = new QLabel(supportClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        label_6 = new QLabel(supportClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        lcdPressureNow = new QLCDNumber(supportClass);
        lcdPressureNow->setObjectName(QString::fromUtf8("lcdPressureNow"));
        lcdPressureNow->setMinimumSize(QSize(0, 48));
        lcdPressureNow->setFont(font);

        gridLayout->addWidget(lcdPressureNow, 1, 1, 1, 1);

        lcdPressureSet = new QLCDNumber(supportClass);
        lcdPressureSet->setObjectName(QString::fromUtf8("lcdPressureSet"));
        lcdPressureSet->setMinimumSize(QSize(0, 48));
        lcdPressureSet->setFont(font);

        gridLayout->addWidget(lcdPressureSet, 2, 1, 1, 1);

        lcdCoefficient = new QLCDNumber(supportClass);
        lcdCoefficient->setObjectName(QString::fromUtf8("lcdCoefficient"));
        lcdCoefficient->setMinimumSize(QSize(0, 48));
        lcdCoefficient->setFont(font);

        gridLayout->addWidget(lcdCoefficient, 3, 1, 1, 1);

        lcdKp = new QLCDNumber(supportClass);
        lcdKp->setObjectName(QString::fromUtf8("lcdKp"));
        lcdKp->setMinimumSize(QSize(0, 48));
        lcdKp->setFont(font);

        gridLayout->addWidget(lcdKp, 4, 1, 1, 1);

        lcdKi = new QLCDNumber(supportClass);
        lcdKi->setObjectName(QString::fromUtf8("lcdKi"));
        lcdKi->setMinimumSize(QSize(0, 48));
        lcdKi->setFont(font);

        gridLayout->addWidget(lcdKi, 5, 1, 1, 1);

        lcdKd = new QLCDNumber(supportClass);
        lcdKd->setObjectName(QString::fromUtf8("lcdKd"));
        lcdKd->setMinimumSize(QSize(0, 48));
        lcdKd->setFont(font);

        gridLayout->addWidget(lcdKd, 6, 1, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setRowStretch(3, 1);
        gridLayout->setRowStretch(4, 1);
        gridLayout->setRowStretch(5, 1);
        gridLayout->setRowStretch(6, 1);

        horizontalLayout->addLayout(gridLayout);

        line_2 = new QFrame(supportClass);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        line = new QFrame(supportClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        buttonSystemEnable = new QPushButton(supportClass);
        buttonSystemEnable->setObjectName(QString::fromUtf8("buttonSystemEnable"));
        buttonSystemEnable->setFont(font);

        gridLayout_2->addWidget(buttonSystemEnable, 0, 0, 1, 1);

        buttonSystemReset = new QPushButton(supportClass);
        buttonSystemReset->setObjectName(QString::fromUtf8("buttonSystemReset"));
        buttonSystemReset->setFont(font);

        gridLayout_2->addWidget(buttonSystemReset, 0, 1, 1, 1);

        buttonSensorZero = new QPushButton(supportClass);
        buttonSensorZero->setObjectName(QString::fromUtf8("buttonSensorZero"));
        buttonSensorZero->setFont(font);

        gridLayout_2->addWidget(buttonSensorZero, 1, 0, 1, 2);

        buttonPressureDown = new QPushButton(supportClass);
        buttonPressureDown->setObjectName(QString::fromUtf8("buttonPressureDown"));
        buttonPressureDown->setFont(font);

        gridLayout_2->addWidget(buttonPressureDown, 2, 0, 1, 1);

        buttonPressureUp = new QPushButton(supportClass);
        buttonPressureUp->setObjectName(QString::fromUtf8("buttonPressureUp"));
        buttonPressureUp->setFont(font);

        gridLayout_2->addWidget(buttonPressureUp, 2, 1, 1, 1);

        buttonCoefficientDown = new QPushButton(supportClass);
        buttonCoefficientDown->setObjectName(QString::fromUtf8("buttonCoefficientDown"));
        buttonCoefficientDown->setFont(font);

        gridLayout_2->addWidget(buttonCoefficientDown, 3, 0, 1, 1);

        buttonCoefficientUp = new QPushButton(supportClass);
        buttonCoefficientUp->setObjectName(QString::fromUtf8("buttonCoefficientUp"));
        buttonCoefficientUp->setFont(font);

        gridLayout_2->addWidget(buttonCoefficientUp, 3, 1, 1, 1);

        buttonKpDown = new QPushButton(supportClass);
        buttonKpDown->setObjectName(QString::fromUtf8("buttonKpDown"));
        buttonKpDown->setFont(font);

        gridLayout_2->addWidget(buttonKpDown, 4, 0, 1, 1);

        buttonKpUp = new QPushButton(supportClass);
        buttonKpUp->setObjectName(QString::fromUtf8("buttonKpUp"));
        buttonKpUp->setFont(font);

        gridLayout_2->addWidget(buttonKpUp, 4, 1, 1, 1);

        buttonKiDown = new QPushButton(supportClass);
        buttonKiDown->setObjectName(QString::fromUtf8("buttonKiDown"));
        buttonKiDown->setFont(font);

        gridLayout_2->addWidget(buttonKiDown, 5, 0, 1, 1);

        buttonKiUp = new QPushButton(supportClass);
        buttonKiUp->setObjectName(QString::fromUtf8("buttonKiUp"));
        buttonKiUp->setFont(font);

        gridLayout_2->addWidget(buttonKiUp, 5, 1, 1, 1);

        buttonKdDown = new QPushButton(supportClass);
        buttonKdDown->setObjectName(QString::fromUtf8("buttonKdDown"));
        buttonKdDown->setFont(font);

        gridLayout_2->addWidget(buttonKdDown, 6, 0, 1, 1);

        buttonKdUp = new QPushButton(supportClass);
        buttonKdUp->setObjectName(QString::fromUtf8("buttonKdUp"));
        buttonKdUp->setFont(font);

        gridLayout_2->addWidget(buttonKdUp, 6, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        horizontalLayout->setStretch(0, 5);
        horizontalLayout->setStretch(3, 1);

        retranslateUi(supportClass);

        QMetaObject::connectSlotsByName(supportClass);
    } // setupUi

    void retranslateUi(QWidget *supportClass)
    {
        supportClass->setWindowTitle(QApplication::translate("supportClass", "support", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("supportClass", "\345\275\223\345\211\215\347\263\273\347\273\237\345\216\213\345\212\233\347\212\266\346\200\201\357\274\232", 0, QApplication::UnicodeUTF8));
        labelSystemStatsu->setText(QApplication::translate("supportClass", "\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("supportClass", "\345\275\223\345\211\215\345\216\213\345\212\233\345\244\247\345\260\217", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("supportClass", "\350\256\276\345\256\232\345\216\213\345\212\233\345\244\247\345\260\217\357\274\232", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("supportClass", "\350\260\203\350\212\202\347\263\273\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("supportClass", "\350\260\203\350\212\202\347\263\273\346\225\260Kp\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("supportClass", "\350\260\203\350\212\202\347\263\273\346\225\260Ki\357\274\232", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("supportClass", "\350\260\203\350\212\202\347\263\273\346\225\260Kd\357\274\232", 0, QApplication::UnicodeUTF8));
        buttonSystemEnable->setText(QApplication::translate("supportClass", "\345\216\213\345\212\233\344\275\277\350\203\275", 0, QApplication::UnicodeUTF8));
        buttonSystemReset->setText(QApplication::translate("supportClass", "\345\216\213\345\212\233\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        buttonSensorZero->setText(QApplication::translate("supportClass", "\344\274\240\346\204\237\345\231\250\346\240\207\345\256\232", 0, QApplication::UnicodeUTF8));
        buttonPressureDown->setText(QApplication::translate("supportClass", "\350\256\276\345\256\232\345\216\213\345\212\233-", 0, QApplication::UnicodeUTF8));
        buttonPressureUp->setText(QApplication::translate("supportClass", "\350\256\276\345\256\232\345\216\213\345\212\233+", 0, QApplication::UnicodeUTF8));
        buttonCoefficientDown->setText(QApplication::translate("supportClass", "\347\263\273\346\225\260-", 0, QApplication::UnicodeUTF8));
        buttonCoefficientUp->setText(QApplication::translate("supportClass", "\347\263\273\346\225\260+", 0, QApplication::UnicodeUTF8));
        buttonKpDown->setText(QApplication::translate("supportClass", "Kp-", 0, QApplication::UnicodeUTF8));
        buttonKpUp->setText(QApplication::translate("supportClass", "Kp+", 0, QApplication::UnicodeUTF8));
        buttonKiDown->setText(QApplication::translate("supportClass", "Ki-", 0, QApplication::UnicodeUTF8));
        buttonKiUp->setText(QApplication::translate("supportClass", "Ki+", 0, QApplication::UnicodeUTF8));
        buttonKdDown->setText(QApplication::translate("supportClass", "Kd-", 0, QApplication::UnicodeUTF8));
        buttonKdUp->setText(QApplication::translate("supportClass", "Kd+", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class supportClass: public Ui_supportClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPORT_H
