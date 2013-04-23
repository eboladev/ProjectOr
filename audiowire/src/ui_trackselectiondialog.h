/********************************************************************************
** Form generated from reading UI file 'trackselectiondialog.ui'
**
** Created: Tue Apr 23 15:28:24 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKSELECTIONDIALOG_H
#define UI_TRACKSELECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "widgets/busyindicator.h"

QT_BEGIN_NAMESPACE

class Ui_TrackSelectionDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QListWidget *song_list;
    QStackedWidget *stack;
    QWidget *loading_page;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    BusyIndicator *progress;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *error_page;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_5;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_4;
    QWidget *results_page;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTreeWidget *results;
    QHBoxLayout *horizontalLayout_2;
    BusyIndicator *loading_label;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *TrackSelectionDialog)
    {
        if (TrackSelectionDialog->objectName().isEmpty())
            TrackSelectionDialog->setObjectName(QString::fromUtf8("TrackSelectionDialog"));
        TrackSelectionDialog->resize(773, 375);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        TrackSelectionDialog->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(TrackSelectionDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        splitter = new QSplitter(TrackSelectionDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
        song_list = new QListWidget(splitter);
        song_list->setObjectName(QString::fromUtf8("song_list"));
        song_list->setUniformItemSizes(true);
        splitter->addWidget(song_list);
        stack = new QStackedWidget(splitter);
        stack->setObjectName(QString::fromUtf8("stack"));
        loading_page = new QWidget();
        loading_page->setObjectName(QString::fromUtf8("loading_page"));
        verticalLayout = new QVBoxLayout(loading_page);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 133, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        progress = new BusyIndicator(loading_page);
        progress->setObjectName(QString::fromUtf8("progress"));

        horizontalLayout->addWidget(progress);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 133, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        stack->addWidget(loading_page);
        error_page = new QWidget();
        error_page->setObjectName(QString::fromUtf8("error_page"));
        verticalLayout_4 = new QVBoxLayout(error_page);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_3 = new QSpacerItem(20, 124, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        label_5 = new QLabel(error_page);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("QLabel { font-weight: bold; }"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_5);

        label_4 = new QLabel(error_page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(true);

        verticalLayout_4->addWidget(label_4);

        verticalSpacer_4 = new QSpacerItem(20, 124, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        stack->addWidget(error_page);
        results_page = new QWidget();
        results_page->setObjectName(QString::fromUtf8("results_page"));
        verticalLayout_2 = new QVBoxLayout(results_page);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(results_page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("QLabel { font-weight: bold; }"));

        verticalLayout_2->addWidget(label);

        results = new QTreeWidget(results_page);
        results->setObjectName(QString::fromUtf8("results"));
        results->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        results->setRootIsDecorated(false);
        results->header()->setDefaultSectionSize(150);
        results->header()->setMinimumSectionSize(50);

        verticalLayout_2->addWidget(results);

        stack->addWidget(results_page);
        splitter->addWidget(stack);

        verticalLayout_3->addWidget(splitter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        loading_label = new BusyIndicator(TrackSelectionDialog);
        loading_label->setObjectName(QString::fromUtf8("loading_label"));

        horizontalLayout_2->addWidget(loading_label);

        button_box = new QDialogButtonBox(TrackSelectionDialog);
        button_box->setObjectName(QString::fromUtf8("button_box"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button_box->sizePolicy().hasHeightForWidth());
        button_box->setSizePolicy(sizePolicy1);
        button_box->setOrientation(Qt::Horizontal);
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(button_box);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(TrackSelectionDialog);
        QObject::connect(button_box, SIGNAL(accepted()), TrackSelectionDialog, SLOT(accept()));
        QObject::connect(button_box, SIGNAL(rejected()), TrackSelectionDialog, SLOT(reject()));

        stack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TrackSelectionDialog);
    } // setupUi

    void retranslateUi(QDialog *TrackSelectionDialog)
    {
        TrackSelectionDialog->setWindowTitle(QApplication::translate("TrackSelectionDialog", "Tag fetcher", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("TrackSelectionDialog", "Sorry", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("TrackSelectionDialog", "Clementine was unable to find results for this file", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TrackSelectionDialog", "Select best possible match", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = results->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("TrackSelectionDialog", "Album", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("TrackSelectionDialog", "Artist", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("TrackSelectionDialog", "Title", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("TrackSelectionDialog", "Year", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("TrackSelectionDialog", "Track", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TrackSelectionDialog: public Ui_TrackSelectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKSELECTIONDIALOG_H
