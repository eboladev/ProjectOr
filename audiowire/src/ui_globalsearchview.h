/********************************************************************************
** Form generated from reading UI file 'globalsearchview.ui'
**
** Created: Tue Apr 23 15:28:22 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLOBALSEARCHVIEW_H
#define UI_GLOBALSEARCHVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "3rdparty/qocoa/qsearchfield.h"
#include "widgets/autoexpandingtreeview.h"

QT_BEGIN_NAMESPACE

class Ui_GlobalSearchView
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSearchField *search;
    QToolButton *settings;
    QStackedWidget *results_stack;
    QWidget *results_page;
    QVBoxLayout *verticalLayout_3;
    AutoExpandingTreeView *results;
    QWidget *help_page;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *help_frame;
    QWidget *help_frame_contents;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *help_text;
    QWidget *providers_group;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QWidget *enabled_list;
    QLabel *disabled_label;
    QWidget *disabled_list;
    QWidget *suggestions_group;
    QVBoxLayout *verticalLayout_7;
    QLabel *label;
    QWidget *suggestions_list;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *GlobalSearchView)
    {
        if (GlobalSearchView->objectName().isEmpty())
            GlobalSearchView->setObjectName(QString::fromUtf8("GlobalSearchView"));
        GlobalSearchView->resize(437, 633);
        verticalLayout = new QVBoxLayout(GlobalSearchView);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        search = new QSearchField(GlobalSearchView);
        search->setObjectName(QString::fromUtf8("search"));

        horizontalLayout->addWidget(search);

        settings = new QToolButton(GlobalSearchView);
        settings->setObjectName(QString::fromUtf8("settings"));
        settings->setPopupMode(QToolButton::InstantPopup);
        settings->setAutoRaise(true);

        horizontalLayout->addWidget(settings);


        verticalLayout->addLayout(horizontalLayout);

        results_stack = new QStackedWidget(GlobalSearchView);
        results_stack->setObjectName(QString::fromUtf8("results_stack"));
        results_page = new QWidget();
        results_page->setObjectName(QString::fromUtf8("results_page"));
        verticalLayout_3 = new QVBoxLayout(results_page);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        results = new AutoExpandingTreeView(results_page);
        results->setObjectName(QString::fromUtf8("results"));
        results->setEditTriggers(QAbstractItemView::NoEditTriggers);
        results->setDragEnabled(true);
        results->setDragDropMode(QAbstractItemView::DragOnly);
        results->setSelectionMode(QAbstractItemView::ExtendedSelection);
        results->setAllColumnsShowFocus(true);
        results->header()->setVisible(false);

        verticalLayout_3->addWidget(results);

        results_stack->addWidget(results_page);
        help_page = new QWidget();
        help_page->setObjectName(QString::fromUtf8("help_page"));
        verticalLayout_6 = new QVBoxLayout(help_page);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        help_frame = new QScrollArea(help_page);
        help_frame->setObjectName(QString::fromUtf8("help_frame"));
        help_frame->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        help_frame->setWidgetResizable(true);
        help_frame_contents = new QWidget();
        help_frame_contents->setObjectName(QString::fromUtf8("help_frame_contents"));
        help_frame_contents->setGeometry(QRect(0, 0, 435, 605));
        verticalLayout_2 = new QVBoxLayout(help_frame_contents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(help_frame_contents);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(32, 16, 32, 64);
        help_text = new QLabel(widget);
        help_text->setObjectName(QString::fromUtf8("help_text"));
        help_text->setAlignment(Qt::AlignCenter);
        help_text->setWordWrap(true);

        verticalLayout_4->addWidget(help_text);


        verticalLayout_2->addWidget(widget);

        providers_group = new QWidget(help_frame_contents);
        providers_group->setObjectName(QString::fromUtf8("providers_group"));
        verticalLayout_5 = new QVBoxLayout(providers_group);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_2 = new QLabel(providers_group);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        verticalLayout_5->addWidget(label_2);

        enabled_list = new QWidget(providers_group);
        enabled_list->setObjectName(QString::fromUtf8("enabled_list"));

        verticalLayout_5->addWidget(enabled_list);

        disabled_label = new QLabel(providers_group);
        disabled_label->setObjectName(QString::fromUtf8("disabled_label"));

        verticalLayout_5->addWidget(disabled_label);

        disabled_list = new QWidget(providers_group);
        disabled_list->setObjectName(QString::fromUtf8("disabled_list"));

        verticalLayout_5->addWidget(disabled_list);


        verticalLayout_2->addWidget(providers_group);

        suggestions_group = new QWidget(help_frame_contents);
        suggestions_group->setObjectName(QString::fromUtf8("suggestions_group"));
        verticalLayout_7 = new QVBoxLayout(suggestions_group);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label = new QLabel(suggestions_group);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_7->addWidget(label);

        suggestions_list = new QWidget(suggestions_group);
        suggestions_list->setObjectName(QString::fromUtf8("suggestions_list"));

        verticalLayout_7->addWidget(suggestions_list);


        verticalLayout_2->addWidget(suggestions_group);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        help_frame->setWidget(help_frame_contents);

        verticalLayout_6->addWidget(help_frame);

        results_stack->addWidget(help_page);

        verticalLayout->addWidget(results_stack);


        retranslateUi(GlobalSearchView);

        results_stack->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(GlobalSearchView);
    } // setupUi

    void retranslateUi(QWidget *GlobalSearchView)
    {
        search->setProperty("placeholderText", QVariant(QApplication::translate("GlobalSearchView", "Search for anything", 0, QApplication::UnicodeUTF8)));
        help_text->setText(QApplication::translate("GlobalSearchView", "Enter search terms above to find music on your computer and on the internet", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("GlobalSearchView", "Clementine will find music in:", 0, QApplication::UnicodeUTF8));
        disabled_label->setText(QApplication::translate("GlobalSearchView", "But these sources are disabled:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GlobalSearchView", "Why not try...", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(GlobalSearchView);
    } // retranslateUi

};

namespace Ui {
    class GlobalSearchView: public Ui_GlobalSearchView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLOBALSEARCHVIEW_H
