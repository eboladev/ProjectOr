/********************************************************************************
** Form generated from reading UI file 'appearancesettingspage.ui'
**
** Created: Tue Apr 23 15:28:24 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPEARANCESETTINGSPAGE_H
#define UI_APPEARANCESETTINGSPAGE_H

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
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppearanceSettingsPage
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *use_system_color_set;
    QRadioButton *use_a_custom_color_set;
    QHBoxLayout *horizontalLayout;
    QLabel *select_foreground_color_label;
    QPushButton *select_foreground_color;
    QHBoxLayout *horizontalLayout_2;
    QLabel *select_background_color_label;
    QPushButton *select_background_color;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *use_default_background;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *use_album_cover_background;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *use_no_background;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *use_custom_background_image;
    QLineEdit *background_image_filename;
    QPushButton *select_background_image_filename_button;
    QHBoxLayout *horizontalLayout_6;
    QLabel *select_background_blur_label;
    QLabel *background_blur_radius_label;
    QSlider *blur_slider;
    QGroupBox *moodbar_group;
    QFormLayout *formLayout;
    QCheckBox *moodbar_show;
    QLabel *label;
    QComboBox *moodbar_style;
    QCheckBox *moodbar_save;
    QCheckBox *moodbar_calculate;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *AppearanceSettingsPage)
    {
        if (AppearanceSettingsPage->objectName().isEmpty())
            AppearanceSettingsPage->setObjectName(QString::fromUtf8("AppearanceSettingsPage"));
        AppearanceSettingsPage->resize(596, 566);
        verticalLayout = new QVBoxLayout(AppearanceSettingsPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(AppearanceSettingsPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        use_system_color_set = new QRadioButton(groupBox);
        use_system_color_set->setObjectName(QString::fromUtf8("use_system_color_set"));

        verticalLayout_3->addWidget(use_system_color_set);

        use_a_custom_color_set = new QRadioButton(groupBox);
        use_a_custom_color_set->setObjectName(QString::fromUtf8("use_a_custom_color_set"));

        verticalLayout_3->addWidget(use_a_custom_color_set);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        select_foreground_color_label = new QLabel(groupBox);
        select_foreground_color_label->setObjectName(QString::fromUtf8("select_foreground_color_label"));
        select_foreground_color_label->setEnabled(false);

        horizontalLayout->addWidget(select_foreground_color_label);

        select_foreground_color = new QPushButton(groupBox);
        select_foreground_color->setObjectName(QString::fromUtf8("select_foreground_color"));
        select_foreground_color->setEnabled(false);

        horizontalLayout->addWidget(select_foreground_color);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        select_background_color_label = new QLabel(groupBox);
        select_background_color_label->setObjectName(QString::fromUtf8("select_background_color_label"));
        select_background_color_label->setEnabled(false);

        horizontalLayout_2->addWidget(select_background_color_label);

        select_background_color = new QPushButton(groupBox);
        select_background_color->setObjectName(QString::fromUtf8("select_background_color"));
        select_background_color->setEnabled(false);

        horizontalLayout_2->addWidget(select_background_color);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(AppearanceSettingsPage);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        use_default_background = new QRadioButton(groupBox_2);
        use_default_background->setObjectName(QString::fromUtf8("use_default_background"));

        horizontalLayout_5->addWidget(use_default_background);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        use_album_cover_background = new QRadioButton(groupBox_2);
        use_album_cover_background->setObjectName(QString::fromUtf8("use_album_cover_background"));

        horizontalLayout_4->addWidget(use_album_cover_background);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        use_no_background = new QRadioButton(groupBox_2);
        use_no_background->setObjectName(QString::fromUtf8("use_no_background"));

        horizontalLayout_7->addWidget(use_no_background);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        use_custom_background_image = new QRadioButton(groupBox_2);
        use_custom_background_image->setObjectName(QString::fromUtf8("use_custom_background_image"));

        horizontalLayout_3->addWidget(use_custom_background_image);

        background_image_filename = new QLineEdit(groupBox_2);
        background_image_filename->setObjectName(QString::fromUtf8("background_image_filename"));
        background_image_filename->setEnabled(false);

        horizontalLayout_3->addWidget(background_image_filename);

        select_background_image_filename_button = new QPushButton(groupBox_2);
        select_background_image_filename_button->setObjectName(QString::fromUtf8("select_background_image_filename_button"));
        select_background_image_filename_button->setEnabled(false);

        horizontalLayout_3->addWidget(select_background_image_filename_button);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        select_background_blur_label = new QLabel(groupBox_2);
        select_background_blur_label->setObjectName(QString::fromUtf8("select_background_blur_label"));
        select_background_blur_label->setEnabled(true);

        horizontalLayout_6->addWidget(select_background_blur_label);

        background_blur_radius_label = new QLabel(groupBox_2);
        background_blur_radius_label->setObjectName(QString::fromUtf8("background_blur_radius_label"));
        background_blur_radius_label->setEnabled(true);

        horizontalLayout_6->addWidget(background_blur_radius_label);

        blur_slider = new QSlider(groupBox_2);
        blur_slider->setObjectName(QString::fromUtf8("blur_slider"));
        blur_slider->setMinimum(0);
        blur_slider->setMaximum(10);
        blur_slider->setValue(0);
        blur_slider->setOrientation(Qt::Horizontal);
        blur_slider->setTickPosition(QSlider::TicksBelow);
        blur_slider->setTickInterval(1);

        horizontalLayout_6->addWidget(blur_slider);


        verticalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout->addWidget(groupBox_2);

        moodbar_group = new QGroupBox(AppearanceSettingsPage);
        moodbar_group->setObjectName(QString::fromUtf8("moodbar_group"));
        formLayout = new QFormLayout(moodbar_group);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        moodbar_show = new QCheckBox(moodbar_group);
        moodbar_show->setObjectName(QString::fromUtf8("moodbar_show"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, moodbar_show);

        label = new QLabel(moodbar_group);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        moodbar_style = new QComboBox(moodbar_group);
        moodbar_style->setObjectName(QString::fromUtf8("moodbar_style"));

        formLayout->setWidget(2, QFormLayout::FieldRole, moodbar_style);

        moodbar_save = new QCheckBox(moodbar_group);
        moodbar_save->setObjectName(QString::fromUtf8("moodbar_save"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, moodbar_save);

        moodbar_calculate = new QCheckBox(moodbar_group);
        moodbar_calculate->setObjectName(QString::fromUtf8("moodbar_calculate"));

        formLayout->setWidget(0, QFormLayout::LabelRole, moodbar_calculate);


        verticalLayout->addWidget(moodbar_group);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(AppearanceSettingsPage);
        QObject::connect(use_a_custom_color_set, SIGNAL(toggled(bool)), select_background_color, SLOT(setEnabled(bool)));
        QObject::connect(use_a_custom_color_set, SIGNAL(toggled(bool)), select_background_color_label, SLOT(setEnabled(bool)));
        QObject::connect(use_a_custom_color_set, SIGNAL(toggled(bool)), select_foreground_color, SLOT(setEnabled(bool)));
        QObject::connect(use_a_custom_color_set, SIGNAL(toggled(bool)), select_foreground_color_label, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(AppearanceSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *AppearanceSettingsPage)
    {
        AppearanceSettingsPage->setWindowTitle(QApplication::translate("AppearanceSettingsPage", "Appearance", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("AppearanceSettingsPage", "Colors", 0, QApplication::UnicodeUTF8));
        use_system_color_set->setText(QApplication::translate("AppearanceSettingsPage", "Use the system default color set", 0, QApplication::UnicodeUTF8));
        use_a_custom_color_set->setText(QApplication::translate("AppearanceSettingsPage", "Use a custom color set", 0, QApplication::UnicodeUTF8));
        select_foreground_color_label->setText(QApplication::translate("AppearanceSettingsPage", "Select foreground color:", 0, QApplication::UnicodeUTF8));
        select_foreground_color->setText(QString());
        select_background_color_label->setText(QApplication::translate("AppearanceSettingsPage", "Select background color:", 0, QApplication::UnicodeUTF8));
        select_background_color->setText(QString());
        groupBox_2->setTitle(QApplication::translate("AppearanceSettingsPage", "Background image", 0, QApplication::UnicodeUTF8));
        use_default_background->setText(QApplication::translate("AppearanceSettingsPage", "Default background image", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        use_album_cover_background->setToolTip(QApplication::translate("AppearanceSettingsPage", "The album cover of the currently playing song", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        use_album_cover_background->setText(QApplication::translate("AppearanceSettingsPage", "Album cover", 0, QApplication::UnicodeUTF8));
        use_no_background->setText(QApplication::translate("AppearanceSettingsPage", "No background image", 0, QApplication::UnicodeUTF8));
        use_custom_background_image->setText(QApplication::translate("AppearanceSettingsPage", "Custom image:", 0, QApplication::UnicodeUTF8));
        select_background_image_filename_button->setText(QApplication::translate("AppearanceSettingsPage", "Browse...", 0, QApplication::UnicodeUTF8));
        select_background_blur_label->setText(QApplication::translate("AppearanceSettingsPage", "Select blur radius:", 0, QApplication::UnicodeUTF8));
        background_blur_radius_label->setText(QApplication::translate("AppearanceSettingsPage", "0px", 0, QApplication::UnicodeUTF8));
        moodbar_group->setTitle(QApplication::translate("AppearanceSettingsPage", "Moodbars", 0, QApplication::UnicodeUTF8));
        moodbar_show->setText(QApplication::translate("AppearanceSettingsPage", "Show a moodbar in the track progress bar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AppearanceSettingsPage", "Moodbar style", 0, QApplication::UnicodeUTF8));
        moodbar_save->setText(QApplication::translate("AppearanceSettingsPage", "Save .mood files in your music library", 0, QApplication::UnicodeUTF8));
        moodbar_calculate->setText(QApplication::translate("AppearanceSettingsPage", "Disable moodbar generation", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AppearanceSettingsPage: public Ui_AppearanceSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPEARANCESETTINGSPAGE_H
