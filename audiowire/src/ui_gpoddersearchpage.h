/********************************************************************************
** Form generated from reading UI file 'gpoddersearchpage.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPODDERSEARCHPAGE_H
#define UI_GPODDERSEARCHPAGE_H

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

class Ui_GPodderSearchPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *query;
    QPushButton *search;

    void setupUi(QWidget *GPodderSearchPage)
    {
        if (GPodderSearchPage->objectName().isEmpty())
            GPodderSearchPage->setObjectName(QString::fromUtf8("GPodderSearchPage"));
        GPodderSearchPage->resize(538, 69);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/providers/mygpo32.png"), QSize(), QIcon::Normal, QIcon::Off);
        GPodderSearchPage->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(GPodderSearchPage);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(GPodderSearchPage);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        query = new QLineEdit(GPodderSearchPage);
        query->setObjectName(QString::fromUtf8("query"));

        horizontalLayout->addWidget(query);

        search = new QPushButton(GPodderSearchPage);
        search->setObjectName(QString::fromUtf8("search"));

        horizontalLayout->addWidget(search);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(GPodderSearchPage);
        QObject::connect(query, SIGNAL(returnPressed()), search, SLOT(click()));

        QMetaObject::connectSlotsByName(GPodderSearchPage);
    } // setupUi

    void retranslateUi(QWidget *GPodderSearchPage)
    {
        GPodderSearchPage->setWindowTitle(QApplication::translate("GPodderSearchPage", "Search gpodder.net", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GPodderSearchPage", "Enter search terms below to find podcasts on gpodder.net", 0, QApplication::UnicodeUTF8));
        search->setText(QApplication::translate("GPodderSearchPage", "Search", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GPodderSearchPage: public Ui_GPodderSearchPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPODDERSEARCHPAGE_H
