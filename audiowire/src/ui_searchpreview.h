/********************************************************************************
** Form generated from reading UI file 'searchpreview.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHPREVIEW_H
#define UI_SEARCHPREVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "playlist/playlistview.h"
#include "widgets/busyindicator.h"

QT_BEGIN_NAMESPACE

class Ui_SmartPlaylistSearchPreview
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *preview_label;
    QSpacerItem *horizontalSpacer;
    QLabel *count_label;
    QWidget *busy_container;
    QHBoxLayout *horizontalLayout;
    BusyIndicator *widget;
    QLabel *label_2;
    PlaylistView *tree;

    void setupUi(QWidget *SmartPlaylistSearchPreview)
    {
        if (SmartPlaylistSearchPreview->objectName().isEmpty())
            SmartPlaylistSearchPreview->setObjectName(QString::fromUtf8("SmartPlaylistSearchPreview"));
        SmartPlaylistSearchPreview->resize(651, 377);
        verticalLayout = new QVBoxLayout(SmartPlaylistSearchPreview);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        preview_label = new QLabel(SmartPlaylistSearchPreview);
        preview_label->setObjectName(QString::fromUtf8("preview_label"));

        horizontalLayout_2->addWidget(preview_label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        count_label = new QLabel(SmartPlaylistSearchPreview);
        count_label->setObjectName(QString::fromUtf8("count_label"));

        horizontalLayout_2->addWidget(count_label);

        busy_container = new QWidget(SmartPlaylistSearchPreview);
        busy_container->setObjectName(QString::fromUtf8("busy_container"));
        horizontalLayout = new QHBoxLayout(busy_container);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new BusyIndicator(busy_container);
        widget->setObjectName(QString::fromUtf8("widget"));

        horizontalLayout->addWidget(widget);

        label_2 = new QLabel(busy_container);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);


        horizontalLayout_2->addWidget(busy_container);


        verticalLayout->addLayout(horizontalLayout_2);

        tree = new PlaylistView(SmartPlaylistSearchPreview);
        tree->setObjectName(QString::fromUtf8("tree"));
        tree->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tree->setRootIsDecorated(false);
        tree->setItemsExpandable(false);
        tree->setAllColumnsShowFocus(true);

        verticalLayout->addWidget(tree);


        retranslateUi(SmartPlaylistSearchPreview);

        QMetaObject::connectSlotsByName(SmartPlaylistSearchPreview);
    } // setupUi

    void retranslateUi(QWidget *SmartPlaylistSearchPreview)
    {
        SmartPlaylistSearchPreview->setWindowTitle(QApplication::translate("SmartPlaylistSearchPreview", "Form", 0, QApplication::UnicodeUTF8));
        preview_label->setText(QApplication::translate("SmartPlaylistSearchPreview", "Preview", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SmartPlaylistSearchPreview", "Loading...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SmartPlaylistSearchPreview: public Ui_SmartPlaylistSearchPreview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHPREVIEW_H
