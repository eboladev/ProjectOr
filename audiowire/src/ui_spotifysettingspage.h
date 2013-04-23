/********************************************************************************
** Form generated from reading UI file 'spotifysettingspage.ui'
**
** Created: Tue Apr 23 15:28:22 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPOTIFYSETTINGSPAGE_H
#define UI_SPOTIFYSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "widgets/loginstatewidget.h"

QT_BEGIN_NAMESPACE

class Ui_SpotifySettingsPage
{
public:
    QVBoxLayout *verticalLayout_2;
    LoginStateWidget *login_state;
    QGroupBox *account_group;
    QVBoxLayout *verticalLayout_3;
    QWidget *login_container;
    QGridLayout *gridLayout;
    QLabel *username_label;
    QLineEdit *username;
    QLabel *password_label;
    QLineEdit *password;
    QPushButton *login;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *blob_status;
    QSpacerItem *horizontalSpacer;
    QPushButton *download_blob;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_4;
    QComboBox *bitrate;
    QCheckBox *volume_normalisation;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;

    void setupUi(QWidget *SpotifySettingsPage)
    {
        if (SpotifySettingsPage->objectName().isEmpty())
            SpotifySettingsPage->setObjectName(QString::fromUtf8("SpotifySettingsPage"));
        SpotifySettingsPage->resize(545, 458);
        verticalLayout_2 = new QVBoxLayout(SpotifySettingsPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        login_state = new LoginStateWidget(SpotifySettingsPage);
        login_state->setObjectName(QString::fromUtf8("login_state"));

        verticalLayout_2->addWidget(login_state);

        account_group = new QGroupBox(SpotifySettingsPage);
        account_group->setObjectName(QString::fromUtf8("account_group"));
        verticalLayout_3 = new QVBoxLayout(account_group);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        login_container = new QWidget(account_group);
        login_container->setObjectName(QString::fromUtf8("login_container"));
        login_container->setEnabled(true);
        gridLayout = new QGridLayout(login_container);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        username_label = new QLabel(login_container);
        username_label->setObjectName(QString::fromUtf8("username_label"));

        gridLayout->addWidget(username_label, 1, 0, 1, 1);

        username = new QLineEdit(login_container);
        username->setObjectName(QString::fromUtf8("username"));

        gridLayout->addWidget(username, 1, 1, 1, 1);

        password_label = new QLabel(login_container);
        password_label->setObjectName(QString::fromUtf8("password_label"));

        gridLayout->addWidget(password_label, 2, 0, 1, 1);

        password = new QLineEdit(login_container);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 2, 1, 1, 2);

        login = new QPushButton(login_container);
        login->setObjectName(QString::fromUtf8("login"));

        gridLayout->addWidget(login, 1, 2, 1, 1);


        verticalLayout_3->addWidget(login_container);


        verticalLayout_2->addWidget(account_group);

        groupBox_2 = new QGroupBox(SpotifySettingsPage);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        blob_status = new QLabel(groupBox_2);
        blob_status->setObjectName(QString::fromUtf8("blob_status"));

        horizontalLayout_2->addWidget(blob_status);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        download_blob = new QPushButton(groupBox_2);
        download_blob->setObjectName(QString::fromUtf8("download_blob"));

        horizontalLayout_2->addWidget(download_blob);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(SpotifySettingsPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        bitrate = new QComboBox(groupBox);
        bitrate->setObjectName(QString::fromUtf8("bitrate"));

        formLayout->setWidget(0, QFormLayout::FieldRole, bitrate);

        volume_normalisation = new QCheckBox(groupBox);
        volume_normalisation->setObjectName(QString::fromUtf8("volume_normalisation"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, volume_normalisation);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_3 = new QLabel(SpotifySettingsPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(64, 64));
        label_3->setMaximumSize(QSize(64, 64));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/spotify-core-logo-128x128.png")));
        label_3->setScaledContents(true);

        horizontalLayout_3->addWidget(label_3);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(SpotifySettingsPage);

        QMetaObject::connectSlotsByName(SpotifySettingsPage);
    } // setupUi

    void retranslateUi(QWidget *SpotifySettingsPage)
    {
        SpotifySettingsPage->setWindowTitle(QApplication::translate("SpotifySettingsPage", "Spotify", 0, QApplication::UnicodeUTF8));
        account_group->setTitle(QApplication::translate("SpotifySettingsPage", "Account details", 0, QApplication::UnicodeUTF8));
        username_label->setText(QApplication::translate("SpotifySettingsPage", "Username", 0, QApplication::UnicodeUTF8));
        password_label->setText(QApplication::translate("SpotifySettingsPage", "Password", 0, QApplication::UnicodeUTF8));
        login->setText(QApplication::translate("SpotifySettingsPage", "Login", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("SpotifySettingsPage", "Spotify plugin", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SpotifySettingsPage", "For licensing reasons Spotify support is in a separate plugin.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SpotifySettingsPage", "Plugin status:", 0, QApplication::UnicodeUTF8));
        download_blob->setText(QApplication::translate("SpotifySettingsPage", "Download...", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("SpotifySettingsPage", "Preferences", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SpotifySettingsPage", "Preferred bitrate", 0, QApplication::UnicodeUTF8));
        volume_normalisation->setText(QApplication::translate("SpotifySettingsPage", "Use volume normalisation", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SpotifySettingsPage: public Ui_SpotifySettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPOTIFYSETTINGSPAGE_H
