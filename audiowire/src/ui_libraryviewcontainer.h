/********************************************************************************
** Form generated from reading UI file 'libraryviewcontainer.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARYVIEWCONTAINER_H
#define UI_LIBRARYVIEWCONTAINER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "library/libraryfilterwidget.h"
#include "library/libraryview.h"

QT_BEGIN_NAMESPACE

class Ui_LibraryViewContainer
{
public:
    QVBoxLayout *verticalLayout;
    LibraryFilterWidget *filter;
    LibraryView *view;

    void setupUi(QWidget *LibraryViewContainer)
    {
        if (LibraryViewContainer->objectName().isEmpty())
            LibraryViewContainer->setObjectName(QString::fromUtf8("LibraryViewContainer"));
        LibraryViewContainer->resize(400, 300);
        verticalLayout = new QVBoxLayout(LibraryViewContainer);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        filter = new LibraryFilterWidget(LibraryViewContainer);
        filter->setObjectName(QString::fromUtf8("filter"));

        verticalLayout->addWidget(filter);

        view = new LibraryView(LibraryViewContainer);
        view->setObjectName(QString::fromUtf8("view"));

        verticalLayout->addWidget(view);


        retranslateUi(LibraryViewContainer);

        QMetaObject::connectSlotsByName(LibraryViewContainer);
    } // setupUi

    void retranslateUi(QWidget *LibraryViewContainer)
    {
        LibraryViewContainer->setWindowTitle(QApplication::translate("LibraryViewContainer", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LibraryViewContainer: public Ui_LibraryViewContainer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARYVIEWCONTAINER_H
