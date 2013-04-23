/********************************************************************************
** Form generated from reading UI file 'albumcoversearcher.ui'
**
** Created: Tue Apr 23 15:28:24 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALBUMCOVERSEARCHER_H
#define UI_ALBUMCOVERSEARCHER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include "3rdparty/qocoa/qsearchfield.h"
#include "widgets/busyindicator.h"
#include "widgets/groupediconview.h"

QT_BEGIN_NAMESPACE

class Ui_AlbumCoverSearcher
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSearchField *artist;
    QSearchField *album;
    QPushButton *search;
    BusyIndicator *busy;
    GroupedIconView *covers;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AlbumCoverSearcher)
    {
        if (AlbumCoverSearcher->objectName().isEmpty())
            AlbumCoverSearcher->setObjectName(QString::fromUtf8("AlbumCoverSearcher"));
        AlbumCoverSearcher->resize(829, 518);
        verticalLayout = new QVBoxLayout(AlbumCoverSearcher);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        artist = new QSearchField(AlbumCoverSearcher);
        artist->setObjectName(QString::fromUtf8("artist"));

        horizontalLayout->addWidget(artist);

        album = new QSearchField(AlbumCoverSearcher);
        album->setObjectName(QString::fromUtf8("album"));

        horizontalLayout->addWidget(album);

        search = new QPushButton(AlbumCoverSearcher);
        search->setObjectName(QString::fromUtf8("search"));

        horizontalLayout->addWidget(search);

        busy = new BusyIndicator(AlbumCoverSearcher);
        busy->setObjectName(QString::fromUtf8("busy"));

        horizontalLayout->addWidget(busy);


        verticalLayout->addLayout(horizontalLayout);

        covers = new GroupedIconView(AlbumCoverSearcher);
        covers->setObjectName(QString::fromUtf8("covers"));
        covers->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        covers->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        covers->setIconSize(QSize(120, 120));
        covers->setSpacing(2);

        verticalLayout->addWidget(covers);

        buttonBox = new QDialogButtonBox(AlbumCoverSearcher);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(artist, album);
        QWidget::setTabOrder(album, search);
        QWidget::setTabOrder(search, covers);
        QWidget::setTabOrder(covers, buttonBox);

        retranslateUi(AlbumCoverSearcher);
        QObject::connect(buttonBox, SIGNAL(accepted()), AlbumCoverSearcher, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AlbumCoverSearcher, SLOT(reject()));
        QObject::connect(artist, SIGNAL(returnPressed()), search, SLOT(click()));
        QObject::connect(album, SIGNAL(returnPressed()), search, SLOT(click()));

        QMetaObject::connectSlotsByName(AlbumCoverSearcher);
    } // setupUi

    void retranslateUi(QDialog *AlbumCoverSearcher)
    {
        AlbumCoverSearcher->setWindowTitle(QApplication::translate("AlbumCoverSearcher", "Cover Manager", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        artist->setToolTip(QApplication::translate("AlbumCoverSearcher", "Artist", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        artist->setProperty("placeholderText", QVariant(QApplication::translate("AlbumCoverSearcher", "Artist", 0, QApplication::UnicodeUTF8)));
#ifndef QT_NO_TOOLTIP
        album->setToolTip(QApplication::translate("AlbumCoverSearcher", "Album", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        album->setProperty("placeholderText", QVariant(QApplication::translate("AlbumCoverSearcher", "Album", 0, QApplication::UnicodeUTF8)));
        search->setText(QApplication::translate("AlbumCoverSearcher", "Search", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AlbumCoverSearcher: public Ui_AlbumCoverSearcher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALBUMCOVERSEARCHER_H
