/********************************************************************************
** Form generated from reading UI file 'magnatunesettingspage.ui'
**
** Created: Tue Apr 23 15:28:22 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGNATUNESETTINGSPAGE_H
#define UI_MAGNATUNESETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "widgets/loginstatewidget.h"

QT_BEGIN_NAMESPACE

class Ui_MagnatuneSettingsPage
{
public:
    QVBoxLayout *verticalLayout;
    LoginStateWidget *login_state;
    QGroupBox *groupBox;
    QFormLayout *formLayout_3;
    QLabel *label;
    QComboBox *membership;
    QWidget *login_container;
    QGridLayout *gridLayout;
    QLabel *username_label;
    QLineEdit *username;
    QPushButton *login;
    QLabel *password_label;
    QLineEdit *password;
    QGroupBox *preferences_group;
    QFormLayout *formLayout_2;
    QLabel *audio_format_label;
    QComboBox *format;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *MagnatuneSettingsPage)
    {
        if (MagnatuneSettingsPage->objectName().isEmpty())
            MagnatuneSettingsPage->setObjectName(QString::fromUtf8("MagnatuneSettingsPage"));
        MagnatuneSettingsPage->resize(444, 306);
        verticalLayout = new QVBoxLayout(MagnatuneSettingsPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        login_state = new LoginStateWidget(MagnatuneSettingsPage);
        login_state->setObjectName(QString::fromUtf8("login_state"));

        verticalLayout->addWidget(login_state);

        groupBox = new QGroupBox(MagnatuneSettingsPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout_3 = new QFormLayout(groupBox);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label);

        membership = new QComboBox(groupBox);
        membership->setObjectName(QString::fromUtf8("membership"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, membership);

        login_container = new QWidget(groupBox);
        login_container->setObjectName(QString::fromUtf8("login_container"));
        login_container->setEnabled(false);
        gridLayout = new QGridLayout(login_container);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        username_label = new QLabel(login_container);
        username_label->setObjectName(QString::fromUtf8("username_label"));

        gridLayout->addWidget(username_label, 1, 0, 1, 1);

        username = new QLineEdit(login_container);
        username->setObjectName(QString::fromUtf8("username"));

        gridLayout->addWidget(username, 1, 1, 1, 1);

        login = new QPushButton(login_container);
        login->setObjectName(QString::fromUtf8("login"));

        gridLayout->addWidget(login, 1, 2, 1, 1);

        password_label = new QLabel(login_container);
        password_label->setObjectName(QString::fromUtf8("password_label"));

        gridLayout->addWidget(password_label, 3, 0, 1, 1);

        password = new QLineEdit(login_container);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 3, 1, 1, 2);


        formLayout_3->setWidget(1, QFormLayout::SpanningRole, login_container);


        verticalLayout->addWidget(groupBox);

        preferences_group = new QGroupBox(MagnatuneSettingsPage);
        preferences_group->setObjectName(QString::fromUtf8("preferences_group"));
        preferences_group->setEnabled(false);
        formLayout_2 = new QFormLayout(preferences_group);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        audio_format_label = new QLabel(preferences_group);
        audio_format_label->setObjectName(QString::fromUtf8("audio_format_label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, audio_format_label);

        format = new QComboBox(preferences_group);
        format->setObjectName(QString::fromUtf8("format"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, format);


        verticalLayout->addWidget(preferences_group);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(membership, username);
        QWidget::setTabOrder(username, password);
        QWidget::setTabOrder(password, login);
        QWidget::setTabOrder(login, format);

        retranslateUi(MagnatuneSettingsPage);

        QMetaObject::connectSlotsByName(MagnatuneSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *MagnatuneSettingsPage)
    {
        MagnatuneSettingsPage->setWindowTitle(QApplication::translate("MagnatuneSettingsPage", "Magnatune", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MagnatuneSettingsPage", "Account details", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MagnatuneSettingsPage", "Membership type", 0, QApplication::UnicodeUTF8));
        membership->clear();
        membership->insertItems(0, QStringList()
         << QApplication::translate("MagnatuneSettingsPage", "I don't have a Magnatune account", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MagnatuneSettingsPage", "Streaming membership", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MagnatuneSettingsPage", "Download membership", 0, QApplication::UnicodeUTF8)
        );
        username_label->setText(QApplication::translate("MagnatuneSettingsPage", "Username", 0, QApplication::UnicodeUTF8));
        login->setText(QApplication::translate("MagnatuneSettingsPage", "Login", 0, QApplication::UnicodeUTF8));
        password_label->setText(QApplication::translate("MagnatuneSettingsPage", "Password", 0, QApplication::UnicodeUTF8));
        preferences_group->setTitle(QApplication::translate("MagnatuneSettingsPage", "Preferences", 0, QApplication::UnicodeUTF8));
        audio_format_label->setText(QApplication::translate("MagnatuneSettingsPage", "Preferred audio format", 0, QApplication::UnicodeUTF8));
        format->clear();
        format->insertItems(0, QStringList()
         << QApplication::translate("MagnatuneSettingsPage", "Ogg Vorbis", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MagnatuneSettingsPage", "FLAC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MagnatuneSettingsPage", "WAV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MagnatuneSettingsPage", "VBR MP3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MagnatuneSettingsPage", "128k MP3", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class MagnatuneSettingsPage: public Ui_MagnatuneSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGNATUNESETTINGSPAGE_H
