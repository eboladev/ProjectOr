/********************************************************************************
** Form generated from reading UI file 'libraryfilterwidget.ui'
**
** Created: Tue Apr 23 15:28:22 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARYFILTERWIDGET_H
#define UI_LIBRARYFILTERWIDGET_H

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

class Ui_LibraryFilterWidget
{
public:
    QAction *filter_age_all;
    QAction *filter_age_today;
    QAction *filter_age_week;
    QAction *filter_age_three_months;
    QAction *filter_age_year;
    QAction *filter_age_month;
    QHBoxLayout *horizontalLayout;
    QSearchField *filter;
    QToolButton *options;

    void setupUi(QWidget *LibraryFilterWidget)
    {
        if (LibraryFilterWidget->objectName().isEmpty())
            LibraryFilterWidget->setObjectName(QString::fromUtf8("LibraryFilterWidget"));
        LibraryFilterWidget->resize(400, 30);
        filter_age_all = new QAction(LibraryFilterWidget);
        filter_age_all->setObjectName(QString::fromUtf8("filter_age_all"));
        filter_age_all->setCheckable(true);
        filter_age_all->setChecked(true);
        filter_age_today = new QAction(LibraryFilterWidget);
        filter_age_today->setObjectName(QString::fromUtf8("filter_age_today"));
        filter_age_today->setCheckable(true);
        filter_age_week = new QAction(LibraryFilterWidget);
        filter_age_week->setObjectName(QString::fromUtf8("filter_age_week"));
        filter_age_week->setCheckable(true);
        filter_age_three_months = new QAction(LibraryFilterWidget);
        filter_age_three_months->setObjectName(QString::fromUtf8("filter_age_three_months"));
        filter_age_three_months->setCheckable(true);
        filter_age_year = new QAction(LibraryFilterWidget);
        filter_age_year->setObjectName(QString::fromUtf8("filter_age_year"));
        filter_age_year->setCheckable(true);
        filter_age_month = new QAction(LibraryFilterWidget);
        filter_age_month->setObjectName(QString::fromUtf8("filter_age_month"));
        filter_age_month->setCheckable(true);
        horizontalLayout = new QHBoxLayout(LibraryFilterWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        filter = new QSearchField(LibraryFilterWidget);
        filter->setObjectName(QString::fromUtf8("filter"));

        horizontalLayout->addWidget(filter);

        options = new QToolButton(LibraryFilterWidget);
        options->setObjectName(QString::fromUtf8("options"));
        options->setIconSize(QSize(16, 16));
        options->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(options);


        retranslateUi(LibraryFilterWidget);

        QMetaObject::connectSlotsByName(LibraryFilterWidget);
    } // setupUi

    void retranslateUi(QWidget *LibraryFilterWidget)
    {
        LibraryFilterWidget->setWindowTitle(QApplication::translate("LibraryFilterWidget", "Form", 0, QApplication::UnicodeUTF8));
        filter_age_all->setText(QApplication::translate("LibraryFilterWidget", "Entire collection", 0, QApplication::UnicodeUTF8));
        filter_age_today->setText(QApplication::translate("LibraryFilterWidget", "Added today", 0, QApplication::UnicodeUTF8));
        filter_age_week->setText(QApplication::translate("LibraryFilterWidget", "Added this week", 0, QApplication::UnicodeUTF8));
        filter_age_three_months->setText(QApplication::translate("LibraryFilterWidget", "Added within three months", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        filter_age_three_months->setToolTip(QApplication::translate("LibraryFilterWidget", "Added within three months", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        filter_age_year->setText(QApplication::translate("LibraryFilterWidget", "Added this year", 0, QApplication::UnicodeUTF8));
        filter_age_month->setText(QApplication::translate("LibraryFilterWidget", "Added this month", 0, QApplication::UnicodeUTF8));
        filter->setProperty("placeholderText", QVariant(QApplication::translate("LibraryFilterWidget", "Enter search terms here", 0, QApplication::UnicodeUTF8)));
    } // retranslateUi

};

namespace Ui {
    class LibraryFilterWidget: public Ui_LibraryFilterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARYFILTERWIDGET_H
