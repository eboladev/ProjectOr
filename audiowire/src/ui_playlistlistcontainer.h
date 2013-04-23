/********************************************************************************
** Form generated from reading UI file 'playlistlistcontainer.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYLISTLISTCONTAINER_H
#define UI_PLAYLISTLISTCONTAINER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "widgets/autoexpandingtreeview.h"

QT_BEGIN_NAMESPACE

class Ui_PlaylistListContainer
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolButton *new_folder;
    QToolButton *new_playlist;
    QToolButton *remove;
    QFrame *line;
    QToolButton *load_playlist;
    QToolButton *save_playlist;
    QSpacerItem *horizontalSpacer;
    AutoExpandingTreeView *tree;

    void setupUi(QWidget *PlaylistListContainer)
    {
        if (PlaylistListContainer->objectName().isEmpty())
            PlaylistListContainer->setObjectName(QString::fromUtf8("PlaylistListContainer"));
        PlaylistListContainer->resize(400, 503);
        verticalLayout = new QVBoxLayout(PlaylistListContainer);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(PlaylistListContainer);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        new_folder = new QToolButton(widget);
        new_folder->setObjectName(QString::fromUtf8("new_folder"));

        horizontalLayout->addWidget(new_folder);

        new_playlist = new QToolButton(widget);
        new_playlist->setObjectName(QString::fromUtf8("new_playlist"));

        horizontalLayout->addWidget(new_playlist);

        remove = new QToolButton(widget);
        remove->setObjectName(QString::fromUtf8("remove"));

        horizontalLayout->addWidget(remove);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        load_playlist = new QToolButton(widget);
        load_playlist->setObjectName(QString::fromUtf8("load_playlist"));

        horizontalLayout->addWidget(load_playlist);

        save_playlist = new QToolButton(widget);
        save_playlist->setObjectName(QString::fromUtf8("save_playlist"));

        horizontalLayout->addWidget(save_playlist);

        horizontalSpacer = new QSpacerItem(319, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        tree = new AutoExpandingTreeView(PlaylistListContainer);
        tree->setObjectName(QString::fromUtf8("tree"));
        tree->setAcceptDrops(true);
        tree->setDragEnabled(true);
        tree->setDragDropMode(QAbstractItemView::InternalMove);
        tree->setDefaultDropAction(Qt::MoveAction);
        tree->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tree->setIconSize(QSize(16, 16));
        tree->header()->setVisible(false);

        verticalLayout->addWidget(tree);


        retranslateUi(PlaylistListContainer);

        QMetaObject::connectSlotsByName(PlaylistListContainer);
    } // setupUi

    void retranslateUi(QWidget *PlaylistListContainer)
    {
        PlaylistListContainer->setWindowTitle(QApplication::translate("PlaylistListContainer", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        new_folder->setToolTip(QApplication::translate("PlaylistListContainer", "New folder", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        remove->setToolTip(QApplication::translate("PlaylistListContainer", "Delete", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class PlaylistListContainer: public Ui_PlaylistListContainer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYLISTLISTCONTAINER_H
