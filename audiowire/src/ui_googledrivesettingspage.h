/********************************************************************************
** Form generated from reading UI file 'googledrivesettingspage.ui'
**
** Created: Tue Apr 23 15:28:24 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOOGLEDRIVESETTINGSPAGE_H
#define UI_GOOGLEDRIVESETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "widgets/loginstatewidget.h"

QT_BEGIN_NAMESPACE

class Ui_GoogleDriveSettingsPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    LoginStateWidget *login_state;
    QWidget *login_container;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *login_button;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *GoogleDriveSettingsPage)
    {
        if (GoogleDriveSettingsPage->objectName().isEmpty())
            GoogleDriveSettingsPage->setObjectName(QString::fromUtf8("GoogleDriveSettingsPage"));
        GoogleDriveSettingsPage->resize(569, 491);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/providers/googledrive.png"), QSize(), QIcon::Normal, QIcon::Off);
        GoogleDriveSettingsPage->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(GoogleDriveSettingsPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(GoogleDriveSettingsPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);

        login_state = new LoginStateWidget(GoogleDriveSettingsPage);
        login_state->setObjectName(QString::fromUtf8("login_state"));

        verticalLayout_2->addWidget(login_state);

        login_container = new QWidget(GoogleDriveSettingsPage);
        login_container->setObjectName(QString::fromUtf8("login_container"));
        verticalLayout = new QVBoxLayout(login_container);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(28, 0, -1, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        login_button = new QPushButton(login_container);
        login_button->setObjectName(QString::fromUtf8("login_button"));

        horizontalLayout->addWidget(login_button);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(login_container);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);


        verticalLayout_2->addWidget(login_container);

        verticalSpacer = new QSpacerItem(20, 357, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(GoogleDriveSettingsPage);

        QMetaObject::connectSlotsByName(GoogleDriveSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *GoogleDriveSettingsPage)
    {
        GoogleDriveSettingsPage->setWindowTitle(QApplication::translate("GoogleDriveSettingsPage", "Google Drive", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GoogleDriveSettingsPage", "Clementine can play music that you have uploaded to Google Drive", 0, QApplication::UnicodeUTF8));
        login_button->setText(QApplication::translate("GoogleDriveSettingsPage", "Login", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("GoogleDriveSettingsPage", "Clicking the Login button will open a web browser.  You should return to Clementine after you have logged in.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GoogleDriveSettingsPage: public Ui_GoogleDriveSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOOGLEDRIVESETTINGSPAGE_H
