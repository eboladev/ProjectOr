/********************************************************************************
** Form generated from reading UI file 'icecastfilterwidget.ui'
**
** Created: Tue Apr 23 15:28:22 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ICECASTFILTERWIDGET_H
#define UI_ICECASTFILTERWIDGET_H

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

class Ui_IcecastFilterWidget
{
public:
    QAction *action_sort_genre_alphabetically;
    QAction *action_sort_genre_popularity;
    QAction *action_sort_station;
    QHBoxLayout *horizontalLayout;
    QSearchField *filter;
    QToolButton *options;

    void setupUi(QWidget *IcecastFilterWidget)
    {
        if (IcecastFilterWidget->objectName().isEmpty())
            IcecastFilterWidget->setObjectName(QString::fromUtf8("IcecastFilterWidget"));
        IcecastFilterWidget->resize(513, 27);
        action_sort_genre_alphabetically = new QAction(IcecastFilterWidget);
        action_sort_genre_alphabetically->setObjectName(QString::fromUtf8("action_sort_genre_alphabetically"));
        action_sort_genre_alphabetically->setCheckable(true);
        action_sort_genre_popularity = new QAction(IcecastFilterWidget);
        action_sort_genre_popularity->setObjectName(QString::fromUtf8("action_sort_genre_popularity"));
        action_sort_genre_popularity->setCheckable(true);
        action_sort_station = new QAction(IcecastFilterWidget);
        action_sort_station->setObjectName(QString::fromUtf8("action_sort_station"));
        action_sort_station->setCheckable(true);
        horizontalLayout = new QHBoxLayout(IcecastFilterWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        filter = new QSearchField(IcecastFilterWidget);
        filter->setObjectName(QString::fromUtf8("filter"));

        horizontalLayout->addWidget(filter);

        options = new QToolButton(IcecastFilterWidget);
        options->setObjectName(QString::fromUtf8("options"));
        options->setIconSize(QSize(16, 16));
        options->setPopupMode(QToolButton::InstantPopup);
        options->setAutoRaise(true);

        horizontalLayout->addWidget(options);


        retranslateUi(IcecastFilterWidget);

        QMetaObject::connectSlotsByName(IcecastFilterWidget);
    } // setupUi

    void retranslateUi(QWidget *IcecastFilterWidget)
    {
        IcecastFilterWidget->setWindowTitle(QApplication::translate("IcecastFilterWidget", "Form", 0, QApplication::UnicodeUTF8));
        action_sort_genre_alphabetically->setText(QApplication::translate("IcecastFilterWidget", "Sort by genre (alphabetically)", 0, QApplication::UnicodeUTF8));
        action_sort_genre_popularity->setText(QApplication::translate("IcecastFilterWidget", "Sort by genre (by popularity)", 0, QApplication::UnicodeUTF8));
        action_sort_station->setText(QApplication::translate("IcecastFilterWidget", "Sort by station name", 0, QApplication::UnicodeUTF8));
        filter->setProperty("placeholderText", QVariant(QApplication::translate("IcecastFilterWidget", "Search Icecast stations", 0, QApplication::UnicodeUTF8)));
    } // retranslateUi

};

namespace Ui {
    class IcecastFilterWidget: public Ui_IcecastFilterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ICECASTFILTERWIDGET_H
