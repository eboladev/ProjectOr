/********************************************************************************
** Form generated from reading UI file 'notificationssettingspage.ui'
**
** Created: Tue Apr 23 15:28:24 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTIFICATIONSSETTINGSPAGE_H
#define UI_NOTIFICATIONSSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NotificationsSettingsPage
{
public:
    QAction *action_artist;
    QAction *action_album;
    QAction *action_title;
    QAction *action_albumartist;
    QAction *action_year;
    QAction *action_composer;
    QAction *action_disc;
    QAction *action_track;
    QAction *action_genre;
    QAction *action_length;
    QAction *action_playcount;
    QAction *action_skipcount;
    QAction *action_newline;
    QAction *action_filename;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *notifications_none;
    QRadioButton *notifications_native;
    QRadioButton *notifications_pretty;
    QRadioButton *notifications_tray;
    QGroupBox *notifications_general;
    QVBoxLayout *verticalLayout_6;
    QWidget *notifications_options;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QSpinBox *notifications_duration;
    QCheckBox *notifications_disable_duration;
    QCheckBox *notifications_volume;
    QCheckBox *notifications_play_mode;
    QCheckBox *notifications_art;
    QGroupBox *notifications_custom_text_group;
    QVBoxLayout *verticalLayout_26;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *notifications_custom_text_enabled;
    QPushButton *notifications_preview;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLineEdit *notifications_custom_text1;
    QToolButton *notifications_exp_chooser1;
    QLabel *label_19;
    QLabel *label_20;
    QLineEdit *notifications_custom_text2;
    QToolButton *notifications_exp_chooser2;
    QGroupBox *notifications_pretty_group;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QSlider *notifications_opacity;
    QLabel *label_5;
    QComboBox *notifications_bg_preset;
    QLabel *label_6;
    QPushButton *notifications_fg_choose;
    QPushButton *notifications_font_choose;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *NotificationsSettingsPage)
    {
        if (NotificationsSettingsPage->objectName().isEmpty())
            NotificationsSettingsPage->setObjectName(QString::fromUtf8("NotificationsSettingsPage"));
        NotificationsSettingsPage->resize(526, 642);
        action_artist = new QAction(NotificationsSettingsPage);
        action_artist->setObjectName(QString::fromUtf8("action_artist"));
        action_artist->setText(QString::fromUtf8("%artist%"));
        action_album = new QAction(NotificationsSettingsPage);
        action_album->setObjectName(QString::fromUtf8("action_album"));
        action_album->setText(QString::fromUtf8("%album%"));
        action_title = new QAction(NotificationsSettingsPage);
        action_title->setObjectName(QString::fromUtf8("action_title"));
        action_title->setText(QString::fromUtf8("%title%"));
        action_albumartist = new QAction(NotificationsSettingsPage);
        action_albumartist->setObjectName(QString::fromUtf8("action_albumartist"));
        action_albumartist->setText(QString::fromUtf8("%albumartist%"));
        action_year = new QAction(NotificationsSettingsPage);
        action_year->setObjectName(QString::fromUtf8("action_year"));
        action_year->setText(QString::fromUtf8("%year%"));
        action_composer = new QAction(NotificationsSettingsPage);
        action_composer->setObjectName(QString::fromUtf8("action_composer"));
        action_composer->setText(QString::fromUtf8("%composer%"));
        action_disc = new QAction(NotificationsSettingsPage);
        action_disc->setObjectName(QString::fromUtf8("action_disc"));
        action_disc->setText(QString::fromUtf8("%disc%"));
        action_track = new QAction(NotificationsSettingsPage);
        action_track->setObjectName(QString::fromUtf8("action_track"));
        action_track->setText(QString::fromUtf8("%track%"));
        action_genre = new QAction(NotificationsSettingsPage);
        action_genre->setObjectName(QString::fromUtf8("action_genre"));
        action_genre->setText(QString::fromUtf8("%genre%"));
        action_length = new QAction(NotificationsSettingsPage);
        action_length->setObjectName(QString::fromUtf8("action_length"));
        action_length->setText(QString::fromUtf8("%length%"));
        action_playcount = new QAction(NotificationsSettingsPage);
        action_playcount->setObjectName(QString::fromUtf8("action_playcount"));
        action_playcount->setText(QString::fromUtf8("%playcount%"));
        action_skipcount = new QAction(NotificationsSettingsPage);
        action_skipcount->setObjectName(QString::fromUtf8("action_skipcount"));
        action_skipcount->setText(QString::fromUtf8("%skipcount%"));
        action_newline = new QAction(NotificationsSettingsPage);
        action_newline->setObjectName(QString::fromUtf8("action_newline"));
        action_newline->setText(QString::fromUtf8("%newline%"));
        action_filename = new QAction(NotificationsSettingsPage);
        action_filename->setObjectName(QString::fromUtf8("action_filename"));
        verticalLayout = new QVBoxLayout(NotificationsSettingsPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(NotificationsSettingsPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        groupBox_4 = new QGroupBox(NotificationsSettingsPage);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_7 = new QVBoxLayout(groupBox_4);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        notifications_none = new QRadioButton(groupBox_4);
        notifications_none->setObjectName(QString::fromUtf8("notifications_none"));

        verticalLayout_7->addWidget(notifications_none);

        notifications_native = new QRadioButton(groupBox_4);
        notifications_native->setObjectName(QString::fromUtf8("notifications_native"));

        verticalLayout_7->addWidget(notifications_native);

        notifications_pretty = new QRadioButton(groupBox_4);
        notifications_pretty->setObjectName(QString::fromUtf8("notifications_pretty"));

        verticalLayout_7->addWidget(notifications_pretty);

        notifications_tray = new QRadioButton(groupBox_4);
        notifications_tray->setObjectName(QString::fromUtf8("notifications_tray"));

        verticalLayout_7->addWidget(notifications_tray);


        verticalLayout->addWidget(groupBox_4);

        notifications_general = new QGroupBox(NotificationsSettingsPage);
        notifications_general->setObjectName(QString::fromUtf8("notifications_general"));
        verticalLayout_6 = new QVBoxLayout(notifications_general);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        notifications_options = new QWidget(notifications_general);
        notifications_options->setObjectName(QString::fromUtf8("notifications_options"));
        horizontalLayout_8 = new QHBoxLayout(notifications_options);
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_3 = new QLabel(notifications_options);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_8->addWidget(label_3);

        notifications_duration = new QSpinBox(notifications_options);
        notifications_duration->setObjectName(QString::fromUtf8("notifications_duration"));
        notifications_duration->setMinimum(1);
        notifications_duration->setMaximum(20);
        notifications_duration->setValue(5);

        horizontalLayout_8->addWidget(notifications_duration);

        notifications_disable_duration = new QCheckBox(notifications_options);
        notifications_disable_duration->setObjectName(QString::fromUtf8("notifications_disable_duration"));

        horizontalLayout_8->addWidget(notifications_disable_duration);


        verticalLayout_6->addWidget(notifications_options);

        notifications_volume = new QCheckBox(notifications_general);
        notifications_volume->setObjectName(QString::fromUtf8("notifications_volume"));

        verticalLayout_6->addWidget(notifications_volume);

        notifications_play_mode = new QCheckBox(notifications_general);
        notifications_play_mode->setObjectName(QString::fromUtf8("notifications_play_mode"));

        verticalLayout_6->addWidget(notifications_play_mode);

        notifications_art = new QCheckBox(notifications_general);
        notifications_art->setObjectName(QString::fromUtf8("notifications_art"));

        verticalLayout_6->addWidget(notifications_art);


        verticalLayout->addWidget(notifications_general);

        notifications_custom_text_group = new QGroupBox(NotificationsSettingsPage);
        notifications_custom_text_group->setObjectName(QString::fromUtf8("notifications_custom_text_group"));
        verticalLayout_26 = new QVBoxLayout(notifications_custom_text_group);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        frame_2 = new QFrame(notifications_custom_text_group);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(0);
        horizontalLayout_7 = new QHBoxLayout(frame_2);
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        notifications_custom_text_enabled = new QCheckBox(frame_2);
        notifications_custom_text_enabled->setObjectName(QString::fromUtf8("notifications_custom_text_enabled"));

        horizontalLayout_7->addWidget(notifications_custom_text_enabled);

        notifications_preview = new QPushButton(frame_2);
        notifications_preview->setObjectName(QString::fromUtf8("notifications_preview"));
        notifications_preview->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(notifications_preview->sizePolicy().hasHeightForWidth());
        notifications_preview->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(notifications_preview);


        verticalLayout_26->addWidget(frame_2);

        frame = new QFrame(notifications_custom_text_group);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(0);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, 0);
        notifications_custom_text1 = new QLineEdit(frame);
        notifications_custom_text1->setObjectName(QString::fromUtf8("notifications_custom_text1"));
        notifications_custom_text1->setEnabled(false);

        gridLayout->addWidget(notifications_custom_text1, 0, 1, 1, 1);

        notifications_exp_chooser1 = new QToolButton(frame);
        notifications_exp_chooser1->setObjectName(QString::fromUtf8("notifications_exp_chooser1"));
        notifications_exp_chooser1->setEnabled(false);

        gridLayout->addWidget(notifications_exp_chooser1, 0, 2, 1, 1);

        label_19 = new QLabel(frame);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout->addWidget(label_19, 0, 0, 1, 1);

        label_20 = new QLabel(frame);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout->addWidget(label_20, 1, 0, 1, 1);

        notifications_custom_text2 = new QLineEdit(frame);
        notifications_custom_text2->setObjectName(QString::fromUtf8("notifications_custom_text2"));
        notifications_custom_text2->setEnabled(false);

        gridLayout->addWidget(notifications_custom_text2, 1, 1, 1, 1);

        notifications_exp_chooser2 = new QToolButton(frame);
        notifications_exp_chooser2->setObjectName(QString::fromUtf8("notifications_exp_chooser2"));
        notifications_exp_chooser2->setEnabled(false);

        gridLayout->addWidget(notifications_exp_chooser2, 1, 2, 1, 1);


        verticalLayout_26->addWidget(frame);


        verticalLayout->addWidget(notifications_custom_text_group);

        notifications_pretty_group = new QGroupBox(NotificationsSettingsPage);
        notifications_pretty_group->setObjectName(QString::fromUtf8("notifications_pretty_group"));
        gridLayout_2 = new QGridLayout(notifications_pretty_group);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(notifications_pretty_group);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        notifications_opacity = new QSlider(notifications_pretty_group);
        notifications_opacity->setObjectName(QString::fromUtf8("notifications_opacity"));
        notifications_opacity->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(notifications_opacity, 0, 1, 1, 2);

        label_5 = new QLabel(notifications_pretty_group);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        notifications_bg_preset = new QComboBox(notifications_pretty_group);
        notifications_bg_preset->setObjectName(QString::fromUtf8("notifications_bg_preset"));

        gridLayout_2->addWidget(notifications_bg_preset, 1, 1, 1, 1);

        label_6 = new QLabel(notifications_pretty_group);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        notifications_fg_choose = new QPushButton(notifications_pretty_group);
        notifications_fg_choose->setObjectName(QString::fromUtf8("notifications_fg_choose"));

        gridLayout_2->addWidget(notifications_fg_choose, 2, 1, 1, 1);

        notifications_font_choose = new QPushButton(notifications_pretty_group);
        notifications_font_choose->setObjectName(QString::fromUtf8("notifications_font_choose"));

        gridLayout_2->addWidget(notifications_font_choose, 2, 2, 1, 1);


        verticalLayout->addWidget(notifications_pretty_group);

        verticalSpacer_3 = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        retranslateUi(NotificationsSettingsPage);

        QMetaObject::connectSlotsByName(NotificationsSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *NotificationsSettingsPage)
    {
        NotificationsSettingsPage->setWindowTitle(QApplication::translate("NotificationsSettingsPage", "Notifications", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_artist->setToolTip(QApplication::translate("NotificationsSettingsPage", "Add song artist tag", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        action_album->setToolTip(QApplication::translate("NotificationsSettingsPage", "Add song album tag", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        action_title->setToolTip(QApplication::translate("NotificationsSettingsPage", "Add song title tag", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        action_albumartist->setToolTip(QApplication::translate("NotificationsSettingsPage", "Add song albumartist tag", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        action_year->setToolTip(QApplication::translate("NotificationsSettingsPage", "Add song year tag", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        action_composer->setToolTip(QApplication::translate("NotificationsSettingsPage", "Add song composer tag", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        action_disc->setToolTip(QApplication::translate("NotificationsSettingsPage", "Add song disc tag", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        action_track->setToolTip(QApplication::translate("NotificationsSettingsPage", "Add song track tag", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        action_genre->setToolTip(QApplication::translate("NotificationsSettingsPage", "Add song genre tag", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        action_length->setToolTip(QApplication::translate("NotificationsSettingsPage", "Add song length tag", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        action_playcount->setToolTip(QApplication::translate("NotificationsSettingsPage", "Add song play count", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        action_skipcount->setToolTip(QApplication::translate("NotificationsSettingsPage", "Add song skip count", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        action_newline->setToolTip(QApplication::translate("NotificationsSettingsPage", "Add a new line if supported by the notification type", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_filename->setText(QApplication::translate("NotificationsSettingsPage", "%filename%", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_filename->setToolTip(QApplication::translate("NotificationsSettingsPage", "Add song filename", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("NotificationsSettingsPage", "Clementine can show a message when the track changes.", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("NotificationsSettingsPage", "Notification type", 0, QApplication::UnicodeUTF8));
        notifications_none->setText(QApplication::translate("NotificationsSettingsPage", "Disabled", 0, QApplication::UnicodeUTF8));
        notifications_native->setText(QApplication::translate("NotificationsSettingsPage", "Show a native desktop notification", 0, QApplication::UnicodeUTF8));
        notifications_pretty->setText(QApplication::translate("NotificationsSettingsPage", "Show a pretty OSD", 0, QApplication::UnicodeUTF8));
        notifications_tray->setText(QApplication::translate("NotificationsSettingsPage", "Show a popup from the system tray", 0, QApplication::UnicodeUTF8));
        notifications_general->setTitle(QApplication::translate("NotificationsSettingsPage", "General settings", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("NotificationsSettingsPage", "Popup duration", 0, QApplication::UnicodeUTF8));
        notifications_duration->setSuffix(QApplication::translate("NotificationsSettingsPage", " seconds", 0, QApplication::UnicodeUTF8));
        notifications_disable_duration->setText(QApplication::translate("NotificationsSettingsPage", "Disable duration", 0, QApplication::UnicodeUTF8));
        notifications_volume->setText(QApplication::translate("NotificationsSettingsPage", "Show a notification when I change the volume", 0, QApplication::UnicodeUTF8));
        notifications_play_mode->setText(QApplication::translate("NotificationsSettingsPage", "Show a notification when I change the repeat/shuffle mode", 0, QApplication::UnicodeUTF8));
        notifications_art->setText(QApplication::translate("NotificationsSettingsPage", "Include album art in the notification", 0, QApplication::UnicodeUTF8));
        notifications_custom_text_group->setTitle(QApplication::translate("NotificationsSettingsPage", "Custom message settings", 0, QApplication::UnicodeUTF8));
        notifications_custom_text_enabled->setText(QApplication::translate("NotificationsSettingsPage", "Use a custom message for notifications", 0, QApplication::UnicodeUTF8));
        notifications_preview->setText(QApplication::translate("NotificationsSettingsPage", "Preview", 0, QApplication::UnicodeUTF8));
        notifications_exp_chooser1->setText(QString());
        label_19->setText(QApplication::translate("NotificationsSettingsPage", "Summary", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("NotificationsSettingsPage", "Body", 0, QApplication::UnicodeUTF8));
        notifications_exp_chooser2->setText(QString());
        notifications_pretty_group->setTitle(QApplication::translate("NotificationsSettingsPage", "Pretty OSD options", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("NotificationsSettingsPage", "Background opacity", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("NotificationsSettingsPage", "Background color", 0, QApplication::UnicodeUTF8));
        notifications_bg_preset->clear();
        notifications_bg_preset->insertItems(0, QStringList()
         << QApplication::translate("NotificationsSettingsPage", "Basic Blue", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NotificationsSettingsPage", "Clementine Orange", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NotificationsSettingsPage", "Custom...", 0, QApplication::UnicodeUTF8)
        );
        label_6->setText(QApplication::translate("NotificationsSettingsPage", "Text options", 0, QApplication::UnicodeUTF8));
        notifications_fg_choose->setText(QApplication::translate("NotificationsSettingsPage", "Choose color...", 0, QApplication::UnicodeUTF8));
        notifications_font_choose->setText(QApplication::translate("NotificationsSettingsPage", "Choose font...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NotificationsSettingsPage: public Ui_NotificationsSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTIFICATIONSSETTINGSPAGE_H
