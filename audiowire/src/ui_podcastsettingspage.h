/********************************************************************************
** Form generated from reading UI file 'podcastsettingspage.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PODCASTSETTINGSPAGE_H
#define UI_PODCASTSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "widgets/loginstatewidget.h"

QT_BEGIN_NAMESPACE

class Ui_PodcastSettingsPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *check_interval;
    QLabel *label_4;
    QCheckBox *auto_download;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *download_dir;
    QPushButton *download_dir_browse;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QSpinBox *delete_after;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    LoginStateWidget *login_state;
    QWidget *login_group;
    QFormLayout *formLayout_3;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QLineEdit *username;
    QPushButton *login;
    QLabel *label_6;
    QLineEdit *password;
    QLabel *label_7;
    QLineEdit *device_name;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PodcastSettingsPage)
    {
        if (PodcastSettingsPage->objectName().isEmpty())
            PodcastSettingsPage->setObjectName(QString::fromUtf8("PodcastSettingsPage"));
        PodcastSettingsPage->resize(616, 656);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/providers/podcast32.png"), QSize(), QIcon::Normal, QIcon::Off);
        PodcastSettingsPage->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(PodcastSettingsPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(PodcastSettingsPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        check_interval = new QComboBox(groupBox);
        check_interval->setObjectName(QString::fromUtf8("check_interval"));

        formLayout->setWidget(0, QFormLayout::FieldRole, check_interval);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        auto_download = new QCheckBox(groupBox);
        auto_download->setObjectName(QString::fromUtf8("auto_download"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, auto_download);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        download_dir = new QLineEdit(groupBox);
        download_dir->setObjectName(QString::fromUtf8("download_dir"));

        horizontalLayout_2->addWidget(download_dir);

        download_dir_browse = new QPushButton(groupBox);
        download_dir_browse->setObjectName(QString::fromUtf8("download_dir_browse"));

        horizontalLayout_2->addWidget(download_dir_browse);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_2);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(PodcastSettingsPage);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        delete_after = new QSpinBox(groupBox_2);
        delete_after->setObjectName(QString::fromUtf8("delete_after"));
        delete_after->setMaximum(30);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, delete_after);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(PodcastSettingsPage);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);
        label_3->setOpenExternalLinks(true);

        verticalLayout->addWidget(label_3);

        login_state = new LoginStateWidget(groupBox_3);
        login_state->setObjectName(QString::fromUtf8("login_state"));

        verticalLayout->addWidget(login_state);

        login_group = new QWidget(groupBox_3);
        login_group->setObjectName(QString::fromUtf8("login_group"));
        formLayout_3 = new QFormLayout(login_group);
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_5 = new QLabel(login_group);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        username = new QLineEdit(login_group);
        username->setObjectName(QString::fromUtf8("username"));

        horizontalLayout->addWidget(username);

        login = new QPushButton(login_group);
        login->setObjectName(QString::fromUtf8("login"));

        horizontalLayout->addWidget(login);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        label_6 = new QLabel(login_group);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_6);

        password = new QLineEdit(login_group);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, password);

        label_7 = new QLabel(login_group);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_7);

        device_name = new QLineEdit(login_group);
        device_name->setObjectName(QString::fromUtf8("device_name"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, device_name);


        verticalLayout->addWidget(login_group);


        verticalLayout_2->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        QWidget::setTabOrder(check_interval, download_dir);
        QWidget::setTabOrder(download_dir, download_dir_browse);
        QWidget::setTabOrder(download_dir_browse, auto_download);
        QWidget::setTabOrder(auto_download, delete_after);
        QWidget::setTabOrder(delete_after, username);
        QWidget::setTabOrder(username, password);
        QWidget::setTabOrder(password, device_name);
        QWidget::setTabOrder(device_name, login);

        retranslateUi(PodcastSettingsPage);

        QMetaObject::connectSlotsByName(PodcastSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *PodcastSettingsPage)
    {
        PodcastSettingsPage->setWindowTitle(QApplication::translate("PodcastSettingsPage", "Podcasts", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PodcastSettingsPage", "Updating", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PodcastSettingsPage", "Check for new episodes", 0, QApplication::UnicodeUTF8));
        check_interval->clear();
        check_interval->insertItems(0, QStringList()
         << QApplication::translate("PodcastSettingsPage", "Manually", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PodcastSettingsPage", "Every 10 minutes", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PodcastSettingsPage", "Every 20 minutes", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PodcastSettingsPage", "Every 30 minutes", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PodcastSettingsPage", "Every hour", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PodcastSettingsPage", "Every 2 hours", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PodcastSettingsPage", "Every 6 hours", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PodcastSettingsPage", "Every 12 hours", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("PodcastSettingsPage", "Download episodes to", 0, QApplication::UnicodeUTF8));
        auto_download->setText(QApplication::translate("PodcastSettingsPage", "Download new episodes automatically", 0, QApplication::UnicodeUTF8));
        download_dir_browse->setText(QApplication::translate("PodcastSettingsPage", "Browse...", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("PodcastSettingsPage", "Cleaning up", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PodcastSettingsPage", "Delete played episodes", 0, QApplication::UnicodeUTF8));
        delete_after->setSpecialValueText(QApplication::translate("PodcastSettingsPage", "Manually", 0, QApplication::UnicodeUTF8));
        delete_after->setSuffix(QApplication::translate("PodcastSettingsPage", " days", 0, QApplication::UnicodeUTF8));
        delete_after->setPrefix(QApplication::translate("PodcastSettingsPage", "After ", 0, QApplication::UnicodeUTF8));
        delete_after->setProperty("empty_text", QVariant(QString()));
        groupBox_3->setTitle(QApplication::translate("PodcastSettingsPage", "gpodder.net", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PodcastSettingsPage", "Clementine can synchronize your subscription list with your other computers and podcast applications.  <a href=\"https://gpodder.net/register/\">Create an account</a>.", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PodcastSettingsPage", "Username", 0, QApplication::UnicodeUTF8));
        login->setText(QApplication::translate("PodcastSettingsPage", "Sign in", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("PodcastSettingsPage", "Password", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("PodcastSettingsPage", "Device name", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PodcastSettingsPage: public Ui_PodcastSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PODCASTSETTINGSPAGE_H
