/********************************************************************************
** Form generated from reading UI file 'equalizerslider.ui'
**
** Created: Tue Apr 23 15:28:24 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUALIZERSLIDER_H
#define UI_EQUALIZERSLIDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "widgets/stickyslider.h"

QT_BEGIN_NAMESPACE

class Ui_EqualizerSlider
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    StickySlider *slider;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;

    void setupUi(QWidget *EqualizerSlider)
    {
        if (EqualizerSlider->objectName().isEmpty())
            EqualizerSlider->setObjectName(QString::fromUtf8("EqualizerSlider"));
        EqualizerSlider->resize(33, 224);
        verticalLayout = new QVBoxLayout(EqualizerSlider);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        slider = new StickySlider(EqualizerSlider);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setMinimum(-100);
        slider->setMaximum(100);
        slider->setOrientation(Qt::Vertical);
        slider->setProperty("sticky_center", QVariant(0));
        slider->setProperty("sticky_threshold", QVariant(10));

        horizontalLayout->addWidget(slider);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        label = new QLabel(EqualizerSlider);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        retranslateUi(EqualizerSlider);

        QMetaObject::connectSlotsByName(EqualizerSlider);
    } // setupUi

    void retranslateUi(QWidget *EqualizerSlider)
    {
        EqualizerSlider->setWindowTitle(QApplication::translate("EqualizerSlider", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EqualizerSlider: public Ui_EqualizerSlider {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUALIZERSLIDER_H
