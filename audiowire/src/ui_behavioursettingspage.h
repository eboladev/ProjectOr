/********************************************************************************
** Form generated from reading UI file 'behavioursettingspage.ui'
**
** Created: Tue Apr 23 15:28:24 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEHAVIOURSETTINGSPAGE_H
#define UI_BEHAVIOURSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BehaviourSettingsPage
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *b_show_tray_icon_;
    QCheckBox *b_keep_running_;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_13;
    QComboBox *language;
    QLabel *label_10;
    QGroupBox *startup_group_;
    QVBoxLayout *verticalLayout_8;
    QRadioButton *b_always_show_;
    QRadioButton *b_always_hide_;
    QRadioButton *b_remember_;
    QSpacerItem *verticalSpacer_6;
    QCheckBox *b_grey_out_deleted_;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_18;
    QComboBox *menu_playmode;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *doubleclick_addmode;
    QComboBox *doubleclick_playmode;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *BehaviourSettingsPage)
    {
        if (BehaviourSettingsPage->objectName().isEmpty())
            BehaviourSettingsPage->setObjectName(QString::fromUtf8("BehaviourSettingsPage"));
        BehaviourSettingsPage->resize(516, 516);
        verticalLayout = new QVBoxLayout(BehaviourSettingsPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        b_show_tray_icon_ = new QCheckBox(BehaviourSettingsPage);
        b_show_tray_icon_->setObjectName(QString::fromUtf8("b_show_tray_icon_"));
        b_show_tray_icon_->setChecked(true);

        verticalLayout->addWidget(b_show_tray_icon_);

        b_keep_running_ = new QCheckBox(BehaviourSettingsPage);
        b_keep_running_->setObjectName(QString::fromUtf8("b_keep_running_"));

        verticalLayout->addWidget(b_keep_running_);

        groupBox_3 = new QGroupBox(BehaviourSettingsPage);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_13 = new QVBoxLayout(groupBox_3);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        language = new QComboBox(groupBox_3);
        language->setObjectName(QString::fromUtf8("language"));

        verticalLayout_13->addWidget(language);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_13->addWidget(label_10);


        verticalLayout->addWidget(groupBox_3);

        startup_group_ = new QGroupBox(BehaviourSettingsPage);
        startup_group_->setObjectName(QString::fromUtf8("startup_group_"));
        verticalLayout_8 = new QVBoxLayout(startup_group_);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        b_always_show_ = new QRadioButton(startup_group_);
        b_always_show_->setObjectName(QString::fromUtf8("b_always_show_"));

        verticalLayout_8->addWidget(b_always_show_);

        b_always_hide_ = new QRadioButton(startup_group_);
        b_always_hide_->setObjectName(QString::fromUtf8("b_always_hide_"));

        verticalLayout_8->addWidget(b_always_hide_);

        b_remember_ = new QRadioButton(startup_group_);
        b_remember_->setObjectName(QString::fromUtf8("b_remember_"));
        b_remember_->setChecked(true);

        verticalLayout_8->addWidget(b_remember_);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_8->addItem(verticalSpacer_6);

        b_grey_out_deleted_ = new QCheckBox(startup_group_);
        b_grey_out_deleted_->setObjectName(QString::fromUtf8("b_grey_out_deleted_"));

        verticalLayout_8->addWidget(b_grey_out_deleted_);


        verticalLayout->addWidget(startup_group_);

        groupBox_8 = new QGroupBox(BehaviourSettingsPage);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        verticalLayout_18 = new QVBoxLayout(groupBox_8);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        menu_playmode = new QComboBox(groupBox_8);
        menu_playmode->setObjectName(QString::fromUtf8("menu_playmode"));

        verticalLayout_18->addWidget(menu_playmode);


        verticalLayout->addWidget(groupBox_8);

        groupBox_7 = new QGroupBox(BehaviourSettingsPage);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_7);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        doubleclick_addmode = new QComboBox(groupBox_7);
        doubleclick_addmode->setObjectName(QString::fromUtf8("doubleclick_addmode"));

        horizontalLayout_6->addWidget(doubleclick_addmode);

        doubleclick_playmode = new QComboBox(groupBox_7);
        doubleclick_playmode->setObjectName(QString::fromUtf8("doubleclick_playmode"));

        horizontalLayout_6->addWidget(doubleclick_playmode);


        verticalLayout->addWidget(groupBox_7);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(BehaviourSettingsPage);

        menu_playmode->setCurrentIndex(0);
        doubleclick_addmode->setCurrentIndex(0);
        doubleclick_playmode->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(BehaviourSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *BehaviourSettingsPage)
    {
        BehaviourSettingsPage->setWindowTitle(QApplication::translate("BehaviourSettingsPage", "Behavior", 0, QApplication::UnicodeUTF8));
        b_show_tray_icon_->setText(QApplication::translate("BehaviourSettingsPage", "Show tray icon", 0, QApplication::UnicodeUTF8));
        b_keep_running_->setText(QApplication::translate("BehaviourSettingsPage", "Keep running in the background when the window is closed", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("BehaviourSettingsPage", "Language", 0, QApplication::UnicodeUTF8));
        language->clear();
        language->insertItems(0, QStringList()
         << QApplication::translate("BehaviourSettingsPage", "Use the system default", 0, QApplication::UnicodeUTF8)
        );
        label_10->setText(QApplication::translate("BehaviourSettingsPage", "You will need to restart Clementine if you change the language.", 0, QApplication::UnicodeUTF8));
        startup_group_->setTitle(QApplication::translate("BehaviourSettingsPage", "When Clementine starts", 0, QApplication::UnicodeUTF8));
        b_always_show_->setText(QApplication::translate("BehaviourSettingsPage", "Always show the main window", 0, QApplication::UnicodeUTF8));
        b_always_hide_->setText(QApplication::translate("BehaviourSettingsPage", "Always hide the main window", 0, QApplication::UnicodeUTF8));
        b_remember_->setText(QApplication::translate("BehaviourSettingsPage", "Remember from last time", 0, QApplication::UnicodeUTF8));
        b_grey_out_deleted_->setText(QApplication::translate("BehaviourSettingsPage", "Grey out non existent songs in my playlists", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("BehaviourSettingsPage", "Using the menu to add a song will...", 0, QApplication::UnicodeUTF8));
        menu_playmode->clear();
        menu_playmode->insertItems(0, QStringList()
         << QApplication::translate("BehaviourSettingsPage", "Never start playing", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BehaviourSettingsPage", "Play if there is nothing already playing", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BehaviourSettingsPage", "Always start playing", 0, QApplication::UnicodeUTF8)
        );
        groupBox_7->setTitle(QApplication::translate("BehaviourSettingsPage", "Double clicking a song will...", 0, QApplication::UnicodeUTF8));
        doubleclick_addmode->clear();
        doubleclick_addmode->insertItems(0, QStringList()
         << QApplication::translate("BehaviourSettingsPage", "Append to the playlist", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BehaviourSettingsPage", "Replace the playlist", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BehaviourSettingsPage", "Open in new playlist", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BehaviourSettingsPage", "Add to the queue", 0, QApplication::UnicodeUTF8)
        );
        doubleclick_playmode->clear();
        doubleclick_playmode->insertItems(0, QStringList()
         << QApplication::translate("BehaviourSettingsPage", "Never start playing", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BehaviourSettingsPage", "Play if there is nothing already playing", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BehaviourSettingsPage", "Always start playing", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class BehaviourSettingsPage: public Ui_BehaviourSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEHAVIOURSETTINGSPAGE_H
