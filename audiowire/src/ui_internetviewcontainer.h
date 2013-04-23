/********************************************************************************
** Form generated from reading UI file 'internetviewcontainer.ui'
**
** Created: Tue Apr 23 15:28:22 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERNETVIEWCONTAINER_H
#define UI_INTERNETVIEWCONTAINER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "internet/internetview.h"

QT_BEGIN_NAMESPACE

class Ui_InternetViewContainer
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *header_container;
    QVBoxLayout *verticalLayout_2;
    InternetView *tree;

    void setupUi(QWidget *InternetViewContainer)
    {
        if (InternetViewContainer->objectName().isEmpty())
            InternetViewContainer->setObjectName(QString::fromUtf8("InternetViewContainer"));
        InternetViewContainer->resize(424, 395);
        verticalLayout = new QVBoxLayout(InternetViewContainer);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        header_container = new QWidget(InternetViewContainer);
        header_container->setObjectName(QString::fromUtf8("header_container"));
        verticalLayout_2 = new QVBoxLayout(header_container);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        verticalLayout->addWidget(header_container);

        tree = new InternetView(InternetViewContainer);
        tree->setObjectName(QString::fromUtf8("tree"));
        tree->setProperty("showDropIndicator", QVariant(false));
        tree->setDragEnabled(true);
        tree->setDragDropMode(QAbstractItemView::DragDrop);
        tree->setAlternatingRowColors(true);
        tree->setIconSize(QSize(16, 16));
        tree->setUniformRowHeights(true);
        tree->setAllColumnsShowFocus(true);
        tree->setHeaderHidden(true);

        verticalLayout->addWidget(tree);


        retranslateUi(InternetViewContainer);

        QMetaObject::connectSlotsByName(InternetViewContainer);
    } // setupUi

    void retranslateUi(QWidget *InternetViewContainer)
    {
        InternetViewContainer->setWindowTitle(QApplication::translate("InternetViewContainer", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InternetViewContainer: public Ui_InternetViewContainer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERNETVIEWCONTAINER_H
