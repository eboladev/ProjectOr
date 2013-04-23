/********************************************************************************
** Form generated from reading UI file 'addpodcastdialog.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPODCASTDIALOG_H
#define UI_ADDPODCASTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "podcasts/podcastinfowidget.h"
#include "widgets/autoexpandingtreeview.h"
#include "widgets/busyindicator.h"

QT_BEGIN_NAMESPACE

class Ui_AddPodcastDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QListWidget *provider_list;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stack;
    QStackedWidget *results_stack;
    QWidget *results_page;
    QVBoxLayout *verticalLayout_2;
    AutoExpandingTreeView *results;
    QWidget *busy_page;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    BusyIndicator *widget;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QScrollArea *details_scroll_area;
    PodcastInfoWidget *details;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *AddPodcastDialog)
    {
        if (AddPodcastDialog->objectName().isEmpty())
            AddPodcastDialog->setObjectName(QString::fromUtf8("AddPodcastDialog"));
        AddPodcastDialog->resize(941, 473);
        verticalLayout_3 = new QVBoxLayout(AddPodcastDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        provider_list = new QListWidget(AddPodcastDialog);
        provider_list->setObjectName(QString::fromUtf8("provider_list"));
        provider_list->setMaximumSize(QSize(200, 16777215));
        provider_list->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        provider_list->setIconSize(QSize(32, 32));
        provider_list->setUniformItemSizes(true);

        horizontalLayout->addWidget(provider_list);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stack = new QStackedWidget(AddPodcastDialog);
        stack->setObjectName(QString::fromUtf8("stack"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stack->sizePolicy().hasHeightForWidth());
        stack->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(stack);

        results_stack = new QStackedWidget(AddPodcastDialog);
        results_stack->setObjectName(QString::fromUtf8("results_stack"));
        results_page = new QWidget();
        results_page->setObjectName(QString::fromUtf8("results_page"));
        verticalLayout_2 = new QVBoxLayout(results_page);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        results = new AutoExpandingTreeView(results_page);
        results->setObjectName(QString::fromUtf8("results"));
        results->setEditTriggers(QAbstractItemView::NoEditTriggers);
        results->setUniformRowHeights(true);
        results->header()->setVisible(false);

        verticalLayout_2->addWidget(results);

        results_stack->addWidget(results_page);
        busy_page = new QWidget();
        busy_page->setObjectName(QString::fromUtf8("busy_page"));
        verticalLayout_4 = new QVBoxLayout(busy_page);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_2 = new QSpacerItem(0, 192, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        widget = new BusyIndicator(busy_page);
        widget->setObjectName(QString::fromUtf8("widget"));

        horizontalLayout_2->addWidget(widget);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        results_stack->addWidget(busy_page);

        verticalLayout->addWidget(results_stack);


        horizontalLayout->addLayout(verticalLayout);

        details_scroll_area = new QScrollArea(AddPodcastDialog);
        details_scroll_area->setObjectName(QString::fromUtf8("details_scroll_area"));
        details_scroll_area->setMinimumSize(QSize(250, 0));
        details_scroll_area->setMaximumSize(QSize(250, 16777215));
        details_scroll_area->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        details_scroll_area->setWidgetResizable(true);
        details = new PodcastInfoWidget();
        details->setObjectName(QString::fromUtf8("details"));
        details->setGeometry(QRect(0, 0, 248, 418));
        details_scroll_area->setWidget(details);

        horizontalLayout->addWidget(details_scroll_area);


        verticalLayout_3->addLayout(horizontalLayout);

        button_box = new QDialogButtonBox(AddPodcastDialog);
        button_box->setObjectName(QString::fromUtf8("button_box"));
        button_box->setOrientation(Qt::Horizontal);
        button_box->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_3->addWidget(button_box);


        retranslateUi(AddPodcastDialog);
        QObject::connect(button_box, SIGNAL(accepted()), AddPodcastDialog, SLOT(accept()));
        QObject::connect(button_box, SIGNAL(rejected()), AddPodcastDialog, SLOT(reject()));

        results_stack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AddPodcastDialog);
    } // setupUi

    void retranslateUi(QDialog *AddPodcastDialog)
    {
        AddPodcastDialog->setWindowTitle(QApplication::translate("AddPodcastDialog", "Add podcast", 0, QApplication::UnicodeUTF8));
        widget->setProperty("text", QVariant(QApplication::translate("AddPodcastDialog", "Loading...", 0, QApplication::UnicodeUTF8)));
    } // retranslateUi

};

namespace Ui {
    class AddPodcastDialog: public Ui_AddPodcastDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPODCASTDIALOG_H
