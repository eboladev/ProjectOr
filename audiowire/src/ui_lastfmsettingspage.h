/********************************************************************************
** Form generated from reading UI file 'lastfmsettingspage.ui'
**
** Created: Tue Apr 23 15:28:24 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LASTFMSETTINGSPAGE_H
#define UI_LASTFMSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFormLayout>
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

class Ui_LastFMSettingsPage
{
public:
    QVBoxLayout *verticalLayout_2;
    LoginStateWidget *login_state;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *username;
    QPushButton *login;
    QLabel *label_3;
    QLineEdit *password;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *scrobble;
    QCheckBox *love_ban_;
    QCheckBox *scrobble_button;
    QCheckBox *prefer_albumartist;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *LastFMSettingsPage)
    {
        if (LastFMSettingsPage->objectName().isEmpty())
            LastFMSettingsPage->setObjectName(QString::fromUtf8("LastFMSettingsPage"));
        LastFMSettingsPage->resize(769, 551);
        verticalLayout_2 = new QVBoxLayout(LastFMSettingsPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        login_state = new LoginStateWidget(LastFMSettingsPage);
        login_state->setObjectName(QString::fromUtf8("login_state"));

        verticalLayout_2->addWidget(login_state);

        groupBox = new QGroupBox(LastFMSettingsPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        username = new QLineEdit(groupBox);
        username->setObjectName(QString::fromUtf8("username"));

        horizontalLayout_2->addWidget(username);

        login = new QPushButton(groupBox);
        login->setObjectName(QString::fromUtf8("login"));

        horizontalLayout_2->addWidget(login);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        password = new QLineEdit(groupBox);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, password);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(LastFMSettingsPage);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrobble = new QCheckBox(groupBox_2);
        scrobble->setObjectName(QString::fromUtf8("scrobble"));
        scrobble->setChecked(true);

        verticalLayout->addWidget(scrobble);

        love_ban_ = new QCheckBox(groupBox_2);
        love_ban_->setObjectName(QString::fromUtf8("love_ban_"));
        love_ban_->setChecked(true);

        verticalLayout->addWidget(love_ban_);

        scrobble_button = new QCheckBox(groupBox_2);
        scrobble_button->setObjectName(QString::fromUtf8("scrobble_button"));

        verticalLayout->addWidget(scrobble_button);

        prefer_albumartist = new QCheckBox(groupBox_2);
        prefer_albumartist->setObjectName(QString::fromUtf8("prefer_albumartist"));

        verticalLayout->addWidget(prefer_albumartist);


        verticalLayout_2->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        QWidget::setTabOrder(username, password);
        QWidget::setTabOrder(password, login);
        QWidget::setTabOrder(login, scrobble);
        QWidget::setTabOrder(scrobble, love_ban_);
        QWidget::setTabOrder(love_ban_, scrobble_button);

        retranslateUi(LastFMSettingsPage);

        QMetaObject::connectSlotsByName(LastFMSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *LastFMSettingsPage)
    {
        LastFMSettingsPage->setWindowTitle(QApplication::translate("LastFMSettingsPage", "Last.fm", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("LastFMSettingsPage", "Account details", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("LastFMSettingsPage", "Last.fm username", 0, QApplication::UnicodeUTF8));
        login->setText(QApplication::translate("LastFMSettingsPage", "Login", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("LastFMSettingsPage", "Last.fm password", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("LastFMSettingsPage", "Preferences", 0, QApplication::UnicodeUTF8));
        scrobble->setText(QApplication::translate("LastFMSettingsPage", "Scrobble tracks that I listen to", 0, QApplication::UnicodeUTF8));
        love_ban_->setText(QApplication::translate("LastFMSettingsPage", "Show the \"love\" and \"ban\" buttons", 0, QApplication::UnicodeUTF8));
        scrobble_button->setText(QApplication::translate("LastFMSettingsPage", "Show the scrobble button in the main window", 0, QApplication::UnicodeUTF8));
        prefer_albumartist->setText(QApplication::translate("LastFMSettingsPage", "Use Album Artist tag when available", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LastFMSettingsPage: public Ui_LastFMSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LASTFMSETTINGSPAGE_H
