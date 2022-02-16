/********************************************************************************
** Form generated from reading UI file 'support.ui'
**
** Created: Wed Feb 16 13:26:37 2022
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
    QLCDNumber *lcdPressureNow;
    QLCDNumber *lcdPressureSet;
    QLCDNumber *lcdCoefficient2;
    QLCDNumber *lcdCoefficient;
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
    QPushButton *buttonCoefficient2Down;
    QPushButton *buttonCoefficient2Up;

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
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        labelSystemStatsu = new QLabel(supportClass);
        labelSystemStatsu->setObjectName(QString::fromUtf8("labelSystemStatsu"));
        QFont font1;
        font1.setPointSize(30);
        labelSystemStatsu->setFont(font1);

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

        lcdPressureNow = new QLCDNumber(supportClass);
        lcdPressureNow->setObjectName(QString::fromUtf8("lcdPressureNow"));
        lcdPressureNow->setMinimumSize(QSize(0, 48));
        QFont font2;
        font2.setPointSize(15);
        lcdPressureNow->setFont(font2);

        gridLayout->addWidget(lcdPressureNow, 1, 1, 1, 1);

        lcdPressureSet = new QLCDNumber(supportClass);
        lcdPressureSet->setObjectName(QString::fromUtf8("lcdPressureSet"));
        lcdPressureSet->setMinimumSize(QSize(0, 48));
        lcdPressureSet->setFont(font2);

        gridLayout->addWidget(lcdPressureSet, 2, 1, 1, 1);

        lcdCoefficient2 = new QLCDNumber(supportClass);
        lcdCoefficient2->setObjectName(QString::fromUtf8("lcdCoefficient2"));
        lcdCoefficient2->setMinimumSize(QSize(0, 48));
        lcdCoefficient2->setFont(font2);
        lcdCoefficient2->setSmallDecimalPoint(false);
        lcdCoefficient2->setSegmentStyle(QLCDNumber::Filled);
        lcdCoefficient2->setProperty("value", QVariant(0.1));

        gridLayout->addWidget(lcdCoefficient2, 3, 1, 1, 1);

        lcdCoefficient = new QLCDNumber(supportClass);
        lcdCoefficient->setObjectName(QString::fromUtf8("lcdCoefficient"));
        lcdCoefficient->setMinimumSize(QSize(0, 48));
        lcdCoefficient->setFont(font2);
        lcdCoefficient->setProperty("value", QVariant(0.1));

        gridLayout->addWidget(lcdCoefficient, 4, 1, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setRowStretch(3, 1);
        gridLayout->setRowStretch(4, 1);

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
        buttonSystemEnable->setMinimumSize(QSize(0, 55));
        buttonSystemEnable->setFont(font);

        gridLayout_2->addWidget(buttonSystemEnable, 0, 0, 1, 1);

        buttonSystemReset = new QPushButton(supportClass);
        buttonSystemReset->setObjectName(QString::fromUtf8("buttonSystemReset"));
        buttonSystemReset->setMinimumSize(QSize(0, 55));
        buttonSystemReset->setFont(font);

        gridLayout_2->addWidget(buttonSystemReset, 0, 1, 1, 1);

        buttonSensorZero = new QPushButton(supportClass);
        buttonSensorZero->setObjectName(QString::fromUtf8("buttonSensorZero"));
        buttonSensorZero->setMinimumSize(QSize(0, 55));
        buttonSensorZero->setFont(font);

        gridLayout_2->addWidget(buttonSensorZero, 1, 0, 1, 2);

        buttonPressureDown = new QPushButton(supportClass);
        buttonPressureDown->setObjectName(QString::fromUtf8("buttonPressureDown"));
        buttonPressureDown->setMinimumSize(QSize(0, 55));
        buttonPressureDown->setFont(font);

        gridLayout_2->addWidget(buttonPressureDown, 2, 0, 1, 1);

        buttonPressureUp = new QPushButton(supportClass);
        buttonPressureUp->setObjectName(QString::fromUtf8("buttonPressureUp"));
        buttonPressureUp->setMinimumSize(QSize(0, 55));
        buttonPressureUp->setFont(font);

        gridLayout_2->addWidget(buttonPressureUp, 2, 1, 1, 1);

        buttonCoefficientDown = new QPushButton(supportClass);
        buttonCoefficientDown->setObjectName(QString::fromUtf8("buttonCoefficientDown"));
        buttonCoefficientDown->setMinimumSize(QSize(0, 55));
        buttonCoefficientDown->setFont(font);

        gridLayout_2->addWidget(buttonCoefficientDown, 3, 0, 1, 1);

        buttonCoefficientUp = new QPushButton(supportClass);
        buttonCoefficientUp->setObjectName(QString::fromUtf8("buttonCoefficientUp"));
        buttonCoefficientUp->setMinimumSize(QSize(0, 55));
        buttonCoefficientUp->setFont(font);

        gridLayout_2->addWidget(buttonCoefficientUp, 3, 1, 1, 1);

        buttonCoefficient2Down = new QPushButton(supportClass);
        buttonCoefficient2Down->setObjectName(QString::fromUtf8("buttonCoefficient2Down"));
        buttonCoefficient2Down->setMinimumSize(QSize(0, 55));
        buttonCoefficient2Down->setFont(font);

        gridLayout_2->addWidget(buttonCoefficient2Down, 4, 0, 1, 1);

        buttonCoefficient2Up = new QPushButton(supportClass);
        buttonCoefficient2Up->setObjectName(QString::fromUtf8("buttonCoefficient2Up"));
        buttonCoefficient2Up->setMinimumSize(QSize(0, 55));
        buttonCoefficient2Up->setFont(font);

        gridLayout_2->addWidget(buttonCoefficient2Up, 4, 1, 1, 1);


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
        label_7->setText(QApplication::translate("supportClass", "\345\233\236\347\274\251\350\260\203\350\212\202\347\263\273\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("supportClass", "\344\274\270\345\207\272\350\260\203\350\212\202\347\263\273\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        buttonSystemEnable->setText(QApplication::translate("supportClass", "\345\216\213\345\212\233\344\275\277\350\203\275", 0, QApplication::UnicodeUTF8));
        buttonSystemReset->setText(QApplication::translate("supportClass", "\345\216\213\345\212\233\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        buttonSensorZero->setText(QApplication::translate("supportClass", "\344\274\240\346\204\237\345\231\250\346\240\207\345\256\232", 0, QApplication::UnicodeUTF8));
        buttonPressureDown->setText(QApplication::translate("supportClass", "\350\256\276\345\256\232\345\216\213\345\212\233-", 0, QApplication::UnicodeUTF8));
        buttonPressureUp->setText(QApplication::translate("supportClass", "\350\256\276\345\256\232\345\216\213\345\212\233+", 0, QApplication::UnicodeUTF8));
        buttonCoefficientDown->setText(QApplication::translate("supportClass", "\347\263\273\346\225\260-", 0, QApplication::UnicodeUTF8));
        buttonCoefficientUp->setText(QApplication::translate("supportClass", "\347\263\273\346\225\260+", 0, QApplication::UnicodeUTF8));
        buttonCoefficient2Down->setText(QApplication::translate("supportClass", "\347\263\273\346\225\260-", 0, QApplication::UnicodeUTF8));
        buttonCoefficient2Up->setText(QApplication::translate("supportClass", "\347\263\273\346\225\260+", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class supportClass: public Ui_supportClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPORT_H
