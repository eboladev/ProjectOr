/********************************************************************************
** Form generated from reading UI file 'playbacksettingspage.ui'
**
** Created: Tue Apr 23 15:28:24 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYBACKSETTINGSPAGE_H
#define UI_PLAYBACKSETTINGSPAGE_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "widgets/lineedit.h"
#include "widgets/stickyslider.h"

QT_BEGIN_NAMESPACE

class Ui_PlaybackSettingsPage
{
public:
    QVBoxLayout *verticalLayout_3;
    QCheckBox *current_glow;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *fading_out;
    QCheckBox *fading_cross;
    QCheckBox *fading_auto;
    QCheckBox *fading_samealbum;
    QWidget *fading_options;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *fading_duration;
    QSpacerItem *horizontalSpacer;
    QGroupBox *replaygain_group;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *replaygain;
    QWidget *widget;
    QFormLayout *formLayout_4;
    QLabel *label_8;
    QComboBox *replaygain_mode;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_4;
    QLabel *replaygain_preamp_label;
    StickySlider *replaygain_preamp;
    QCheckBox *replaygain_compression;
    QGroupBox *gst_group;
    QFormLayout *formLayout_3;
    QLabel *label_7;
    QComboBox *gst_plugin;
    QLabel *gst_device_label;
    LineEdit *gst_device;
    QLabel *buffer_duration_label;
    QSpinBox *buffer_duration;
    QCheckBox *mono_playback;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PlaybackSettingsPage)
    {
        if (PlaybackSettingsPage->objectName().isEmpty())
            PlaybackSettingsPage->setObjectName(QString::fromUtf8("PlaybackSettingsPage"));
        PlaybackSettingsPage->resize(596, 638);
        verticalLayout_3 = new QVBoxLayout(PlaybackSettingsPage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        current_glow = new QCheckBox(PlaybackSettingsPage);
        current_glow->setObjectName(QString::fromUtf8("current_glow"));
        current_glow->setChecked(true);

        verticalLayout_3->addWidget(current_glow);

        groupBox = new QGroupBox(PlaybackSettingsPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        fading_out = new QCheckBox(groupBox);
        fading_out->setObjectName(QString::fromUtf8("fading_out"));
        fading_out->setChecked(true);

        verticalLayout->addWidget(fading_out);

        fading_cross = new QCheckBox(groupBox);
        fading_cross->setObjectName(QString::fromUtf8("fading_cross"));
        fading_cross->setChecked(true);

        verticalLayout->addWidget(fading_cross);

        fading_auto = new QCheckBox(groupBox);
        fading_auto->setObjectName(QString::fromUtf8("fading_auto"));

        verticalLayout->addWidget(fading_auto);

        fading_samealbum = new QCheckBox(groupBox);
        fading_samealbum->setObjectName(QString::fromUtf8("fading_samealbum"));
        fading_samealbum->setEnabled(false);

        verticalLayout->addWidget(fading_samealbum);

        fading_options = new QWidget(groupBox);
        fading_options->setObjectName(QString::fromUtf8("fading_options"));
        horizontalLayout = new QHBoxLayout(fading_options);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(fading_options);
        label->setObjectName(QString::fromUtf8("label"));
        label->setIndent(22);

        horizontalLayout->addWidget(label);

        fading_duration = new QSpinBox(fading_options);
        fading_duration->setObjectName(QString::fromUtf8("fading_duration"));
        fading_duration->setMaximum(10000);
        fading_duration->setSingleStep(1000);
        fading_duration->setValue(2000);

        horizontalLayout->addWidget(fading_duration);

        horizontalSpacer = new QSpacerItem(257, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(fading_options);


        verticalLayout_3->addWidget(groupBox);

        replaygain_group = new QGroupBox(PlaybackSettingsPage);
        replaygain_group->setObjectName(QString::fromUtf8("replaygain_group"));
        replaygain_group->setEnabled(false);
        verticalLayout_2 = new QVBoxLayout(replaygain_group);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        replaygain = new QCheckBox(replaygain_group);
        replaygain->setObjectName(QString::fromUtf8("replaygain"));

        verticalLayout_2->addWidget(replaygain);

        widget = new QWidget(replaygain_group);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setEnabled(false);
        formLayout_4 = new QFormLayout(widget);
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_8);

        replaygain_mode = new QComboBox(widget);
        replaygain_mode->setObjectName(QString::fromUtf8("replaygain_mode"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, replaygain_mode);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        replaygain_preamp_label = new QLabel(widget);
        replaygain_preamp_label->setObjectName(QString::fromUtf8("replaygain_preamp_label"));

        horizontalLayout_4->addWidget(replaygain_preamp_label);

        replaygain_preamp = new StickySlider(widget);
        replaygain_preamp->setObjectName(QString::fromUtf8("replaygain_preamp"));
        replaygain_preamp->setMaximum(300);
        replaygain_preamp->setValue(150);
        replaygain_preamp->setOrientation(Qt::Horizontal);
        replaygain_preamp->setProperty("sticky_center", QVariant(150));

        horizontalLayout_4->addWidget(replaygain_preamp);


        formLayout_4->setLayout(1, QFormLayout::FieldRole, horizontalLayout_4);

        replaygain_compression = new QCheckBox(widget);
        replaygain_compression->setObjectName(QString::fromUtf8("replaygain_compression"));

        formLayout_4->setWidget(2, QFormLayout::SpanningRole, replaygain_compression);


        verticalLayout_2->addWidget(widget);


        verticalLayout_3->addWidget(replaygain_group);

        gst_group = new QGroupBox(PlaybackSettingsPage);
        gst_group->setObjectName(QString::fromUtf8("gst_group"));
        gst_group->setEnabled(false);
        formLayout_3 = new QFormLayout(gst_group);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_7 = new QLabel(gst_group);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_7);

        gst_plugin = new QComboBox(gst_group);
        gst_plugin->setObjectName(QString::fromUtf8("gst_plugin"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, gst_plugin);

        gst_device_label = new QLabel(gst_group);
        gst_device_label->setObjectName(QString::fromUtf8("gst_device_label"));
        gst_device_label->setEnabled(false);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, gst_device_label);

        gst_device = new LineEdit(gst_group);
        gst_device->setObjectName(QString::fromUtf8("gst_device"));
        gst_device->setEnabled(false);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, gst_device);

        buffer_duration_label = new QLabel(gst_group);
        buffer_duration_label->setObjectName(QString::fromUtf8("buffer_duration_label"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, buffer_duration_label);

        buffer_duration = new QSpinBox(gst_group);
        buffer_duration->setObjectName(QString::fromUtf8("buffer_duration"));
        buffer_duration->setMaximum(60000);
        buffer_duration->setSingleStep(100);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, buffer_duration);

        mono_playback = new QCheckBox(gst_group);
        mono_playback->setObjectName(QString::fromUtf8("mono_playback"));

        formLayout_3->setWidget(3, QFormLayout::SpanningRole, mono_playback);


        verticalLayout_3->addWidget(gst_group);

        verticalSpacer = new QSpacerItem(20, 114, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(PlaybackSettingsPage);
        QObject::connect(replaygain, SIGNAL(toggled(bool)), widget, SLOT(setEnabled(bool)));
        QObject::connect(fading_auto, SIGNAL(toggled(bool)), fading_samealbum, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(PlaybackSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *PlaybackSettingsPage)
    {
        PlaybackSettingsPage->setWindowTitle(QApplication::translate("PlaybackSettingsPage", "Playback", 0, QApplication::UnicodeUTF8));
        current_glow->setText(QApplication::translate("PlaybackSettingsPage", "Show a glowing animation on the current track", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PlaybackSettingsPage", "Fading", 0, QApplication::UnicodeUTF8));
        fading_out->setText(QApplication::translate("PlaybackSettingsPage", "Fade out when stopping a track", 0, QApplication::UnicodeUTF8));
        fading_cross->setText(QApplication::translate("PlaybackSettingsPage", "Cross-fade when changing tracks manually", 0, QApplication::UnicodeUTF8));
        fading_auto->setText(QApplication::translate("PlaybackSettingsPage", "Cross-fade when changing tracks automatically", 0, QApplication::UnicodeUTF8));
        fading_samealbum->setText(QApplication::translate("PlaybackSettingsPage", "Except between tracks on the same album or in the same CUE sheet", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PlaybackSettingsPage", "Fading duration", 0, QApplication::UnicodeUTF8));
        fading_duration->setSuffix(QApplication::translate("PlaybackSettingsPage", " ms", 0, QApplication::UnicodeUTF8));
        replaygain_group->setTitle(QApplication::translate("PlaybackSettingsPage", "Replay Gain", 0, QApplication::UnicodeUTF8));
        replaygain->setText(QApplication::translate("PlaybackSettingsPage", "Use Replay Gain metadata if it is available", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("PlaybackSettingsPage", "Replay Gain mode", 0, QApplication::UnicodeUTF8));
        replaygain_mode->clear();
        replaygain_mode->insertItems(0, QStringList()
         << QApplication::translate("PlaybackSettingsPage", "Radio (equal loudness for all tracks)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PlaybackSettingsPage", "Album (ideal loudness for all tracks)", 0, QApplication::UnicodeUTF8)
        );
        label_9->setText(QApplication::translate("PlaybackSettingsPage", "Pre-amp", 0, QApplication::UnicodeUTF8));
        replaygain_compression->setText(QApplication::translate("PlaybackSettingsPage", "Apply compression to prevent clipping", 0, QApplication::UnicodeUTF8));
        gst_group->setTitle(QApplication::translate("PlaybackSettingsPage", "GStreamer audio engine", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("PlaybackSettingsPage", "Output plugin", 0, QApplication::UnicodeUTF8));
        gst_plugin->clear();
        gst_plugin->insertItems(0, QStringList()
         << QApplication::translate("PlaybackSettingsPage", "Choose automatically", 0, QApplication::UnicodeUTF8)
        );
        gst_device_label->setText(QApplication::translate("PlaybackSettingsPage", "Output device", 0, QApplication::UnicodeUTF8));
        gst_device->setProperty("hint", QVariant(QApplication::translate("PlaybackSettingsPage", "Leave blank for the default.  Examples: \"/dev/dsp\", \"front\", etc.", 0, QApplication::UnicodeUTF8)));
        buffer_duration_label->setText(QApplication::translate("PlaybackSettingsPage", "Buffer duration", 0, QApplication::UnicodeUTF8));
        buffer_duration->setSuffix(QApplication::translate("PlaybackSettingsPage", " ms", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mono_playback->setToolTip(QApplication::translate("PlaybackSettingsPage", "Changing mono playback preference will be effective for the next playing songs", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mono_playback->setText(QApplication::translate("PlaybackSettingsPage", "Mono playback", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PlaybackSettingsPage: public Ui_PlaybackSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYBACKSETTINGSPAGE_H
