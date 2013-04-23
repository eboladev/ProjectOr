/********************************************************************************
** Form generated from reading UI file 'albumcovermanager.ui'
**
** Created: Tue Apr 23 15:28:24 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMCOVERMANAGER_H
#define UI_ALBUMCOVERMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "3rdparty/qocoa/qsearchfield.h"
#include "ui/albumcovermanagerlist.h"

QT_BEGIN_NAMESPACE

class Ui_CoverManager
{
public:
    QAction *action_fetch;
    QAction *action_load;
    QAction *action_add_to_playlist;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QListWidget *artists;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSearchField *filter;
    QToolButton *view;
    QPushButton *fetch;
    AlbumCoverManagerList *albums;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CoverManager)
    {
        if (CoverManager->objectName().isEmpty())
            CoverManager->setObjectName(QString::fromUtf8("CoverManager"));
        CoverManager->resize(903, 662);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        CoverManager->setWindowIcon(icon);
        action_fetch = new QAction(CoverManager);
        action_fetch->setObjectName(QString::fromUtf8("action_fetch"));
        action_load = new QAction(CoverManager);
        action_load->setObjectName(QString::fromUtf8("action_load"));
        action_add_to_playlist = new QAction(CoverManager);
        action_add_to_playlist->setObjectName(QString::fromUtf8("action_add_to_playlist"));
        centralWidget = new QWidget(CoverManager);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        artists = new QListWidget(splitter);
        artists->setObjectName(QString::fromUtf8("artists"));
        artists->setAlternatingRowColors(true);
        artists->setSelectionBehavior(QAbstractItemView::SelectRows);
        artists->setIconSize(QSize(24, 24));
        artists->setUniformItemSizes(true);
        splitter->addWidget(artists);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        filter = new QSearchField(widget);
        filter->setObjectName(QString::fromUtf8("filter"));

        horizontalLayout->addWidget(filter);

        view = new QToolButton(widget);
        view->setObjectName(QString::fromUtf8("view"));
        view->setIconSize(QSize(16, 16));
        view->setPopupMode(QToolButton::MenuButtonPopup);
        view->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        view->setAutoRaise(true);

        horizontalLayout->addWidget(view);

        fetch = new QPushButton(widget);
        fetch->setObjectName(QString::fromUtf8("fetch"));
        fetch->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(fetch);


        verticalLayout->addLayout(horizontalLayout);

        albums = new AlbumCoverManagerList(widget);
        albums->setObjectName(QString::fromUtf8("albums"));
        albums->setDragEnabled(true);
        albums->setDragDropMode(QAbstractItemView::DragDrop);
        albums->setAlternatingRowColors(false);
        albums->setSelectionMode(QAbstractItemView::ExtendedSelection);
        albums->setIconSize(QSize(120, 120));
        albums->setFlow(QListView::LeftToRight);
        albums->setProperty("isWrapping", QVariant(true));
        albums->setResizeMode(QListView::Adjust);
        albums->setSpacing(2);
        albums->setViewMode(QListView::IconMode);
        albums->setUniformItemSizes(true);
        albums->setWordWrap(true);

        verticalLayout->addWidget(albums);

        splitter->addWidget(widget);

        verticalLayout_2->addWidget(splitter);

        CoverManager->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(CoverManager);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CoverManager->setStatusBar(statusBar);
        QWidget::setTabOrder(artists, filter);
        QWidget::setTabOrder(filter, view);
        QWidget::setTabOrder(view, fetch);
        QWidget::setTabOrder(fetch, albums);

        retranslateUi(CoverManager);

        QMetaObject::connectSlotsByName(CoverManager);
    } // setupUi

    void retranslateUi(QMainWindow *CoverManager)
    {
        CoverManager->setWindowTitle(QApplication::translate("CoverManager", "Cover Manager", 0, QApplication::UnicodeUTF8));
        action_fetch->setText(QApplication::translate("CoverManager", "Fetch automatically", 0, QApplication::UnicodeUTF8));
        action_load->setText(QApplication::translate("CoverManager", "Load", 0, QApplication::UnicodeUTF8));
        action_add_to_playlist->setText(QApplication::translate("CoverManager", "Add to playlist", 0, QApplication::UnicodeUTF8));
        filter->setProperty("placeholderText", QVariant(QApplication::translate("CoverManager", "Enter search terms here", 0, QApplication::UnicodeUTF8)));
        view->setText(QApplication::translate("CoverManager", "View", 0, QApplication::UnicodeUTF8));
        fetch->setText(QApplication::translate("CoverManager", "Fetch Missing Covers", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CoverManager: public Ui_CoverManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMCOVERMANAGER_H
