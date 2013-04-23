/********************************************************************************
** Form generated from reading UI file 'addpodcastbyurl.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPODCASTBYURL_H
#define UI_ADDPODCASTBYURL_H

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

class Ui_AddPodcastByUrl
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *url;
    QPushButton *go;

    void setupUi(QWidget *AddPodcastByUrl)
    {
        if (AddPodcastByUrl->objectName().isEmpty())
            AddPodcastByUrl->setObjectName(QString::fromUtf8("AddPodcastByUrl"));
        AddPodcastByUrl->resize(431, 51);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/providers/podcast32.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddPodcastByUrl->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(AddPodcastByUrl);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(AddPodcastByUrl);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        url = new QLineEdit(AddPodcastByUrl);
        url->setObjectName(QString::fromUtf8("url"));

        horizontalLayout->addWidget(url);

        go = new QPushButton(AddPodcastByUrl);
        go->setObjectName(QString::fromUtf8("go"));

        horizontalLayout->addWidget(go);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddPodcastByUrl);
        QObject::connect(url, SIGNAL(returnPressed()), go, SLOT(click()));

        QMetaObject::connectSlotsByName(AddPodcastByUrl);
    } // setupUi

    void retranslateUi(QWidget *AddPodcastByUrl)
    {
        AddPodcastByUrl->setWindowTitle(QApplication::translate("AddPodcastByUrl", "Enter a URL", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddPodcastByUrl", "If you know the URL of a podcast, enter it below and press Go.", 0, QApplication::UnicodeUTF8));
        go->setText(QApplication::translate("AddPodcastByUrl", "Go", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddPodcastByUrl: public Ui_AddPodcastByUrl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPODCASTBYURL_H
