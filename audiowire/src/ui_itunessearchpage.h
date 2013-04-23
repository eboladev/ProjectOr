/********************************************************************************
** Form generated from reading UI file 'itunessearchpage.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITUNESSEARCHPAGE_H
#define UI_ITUNESSEARCHPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ITunesSearchPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *query;
    QPushButton *search;

    void setupUi(QWidget *ITunesSearchPage)
    {
        if (ITunesSearchPage->objectName().isEmpty())
            ITunesSearchPage->setObjectName(QString::fromUtf8("ITunesSearchPage"));
        ITunesSearchPage->resize(516, 69);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/providers/itunes.png"), QSize(), QIcon::Normal, QIcon::Off);
        ITunesSearchPage->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ITunesSearchPage);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(ITunesSearchPage);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        query = new QLineEdit(ITunesSearchPage);
        query->setObjectName(QString::fromUtf8("query"));

        horizontalLayout->addWidget(query);

        search = new QPushButton(ITunesSearchPage);
        search->setObjectName(QString::fromUtf8("search"));

        horizontalLayout->addWidget(search);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ITunesSearchPage);
        QObject::connect(query, SIGNAL(returnPressed()), search, SLOT(click()));

        QMetaObject::connectSlotsByName(ITunesSearchPage);
    } // setupUi

    void retranslateUi(QWidget *ITunesSearchPage)
    {
        ITunesSearchPage->setWindowTitle(QApplication::translate("ITunesSearchPage", "Search iTunes", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ITunesSearchPage", "Enter search terms below to find podcasts in the iTunes Store", 0, QApplication::UnicodeUTF8));
        search->setText(QApplication::translate("ITunesSearchPage", "Search", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ITunesSearchPage: public Ui_ITunesSearchPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITUNESSEARCHPAGE_H
