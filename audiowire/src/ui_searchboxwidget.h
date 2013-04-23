/********************************************************************************
** Form generated from reading UI file 'searchboxwidget.ui'
**
** Created: Tue Apr 23 15:28:22 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHBOXWIDGET_H
#define UI_SEARCHBOXWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>
#include "3rdparty/qocoa/qsearchfield.h"

QT_BEGIN_NAMESPACE

class Ui_SearchBoxWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QSearchField *filter;
    QToolButton *options;

    void setupUi(QWidget *SearchBoxWidget)
    {
        if (SearchBoxWidget->objectName().isEmpty())
            SearchBoxWidget->setObjectName(QString::fromUtf8("SearchBoxWidget"));
        SearchBoxWidget->resize(513, 27);
        horizontalLayout = new QHBoxLayout(SearchBoxWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        filter = new QSearchField(SearchBoxWidget);
        filter->setObjectName(QString::fromUtf8("filter"));

        horizontalLayout->addWidget(filter);

        options = new QToolButton(SearchBoxWidget);
        options->setObjectName(QString::fromUtf8("options"));
        options->setIconSize(QSize(16, 16));
        options->setPopupMode(QToolButton::InstantPopup);
        options->setAutoRaise(true);

        horizontalLayout->addWidget(options);


        retranslateUi(SearchBoxWidget);

        QMetaObject::connectSlotsByName(SearchBoxWidget);
    } // setupUi

    void retranslateUi(QWidget *SearchBoxWidget)
    {
        SearchBoxWidget->setWindowTitle(QApplication::translate("SearchBoxWidget", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SearchBoxWidget: public Ui_SearchBoxWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHBOXWIDGET_H
