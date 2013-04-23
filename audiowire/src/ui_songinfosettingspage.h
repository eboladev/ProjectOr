/********************************************************************************
** Form generated from reading UI file 'songinfosettingspage.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SONGINFOSETTINGSPAGE_H
#define UI_SONGINFOSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SongInfoSettingsPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_5;
    QFormLayout *formLayout_5;
    QLabel *label_11;
    QDoubleSpinBox *song_info_font_size;
    QLabel *label_12;
    QTextEdit *song_info_font_preview;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_6;
    QLabel *label_14;
    QSpinBox *song_info_timeout;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_15;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QListWidget *providers;
    QVBoxLayout *verticalLayout;
    QPushButton *up;
    QPushButton *down;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SongInfoSettingsPage)
    {
        if (SongInfoSettingsPage->objectName().isEmpty())
            SongInfoSettingsPage->setObjectName(QString::fromUtf8("SongInfoSettingsPage"));
        SongInfoSettingsPage->resize(625, 556);
        verticalLayout_2 = new QVBoxLayout(SongInfoSettingsPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_5 = new QGroupBox(SongInfoSettingsPage);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        formLayout_5 = new QFormLayout(groupBox_5);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_11);

        song_info_font_size = new QDoubleSpinBox(groupBox_5);
        song_info_font_size->setObjectName(QString::fromUtf8("song_info_font_size"));
        song_info_font_size->setDecimals(1);
        song_info_font_size->setMinimum(5);
        song_info_font_size->setMaximum(50);
        song_info_font_size->setSingleStep(0.5);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, song_info_font_size);

        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_12);

        song_info_font_preview = new QTextEdit(groupBox_5);
        song_info_font_preview->setObjectName(QString::fromUtf8("song_info_font_preview"));
        song_info_font_preview->setMaximumSize(QSize(16777215, 100));
        song_info_font_preview->setReadOnly(true);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, song_info_font_preview);


        verticalLayout_2->addWidget(groupBox_5);

        groupBox_2 = new QGroupBox(SongInfoSettingsPage);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout_6 = new QFormLayout(groupBox_2);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_14);

        song_info_timeout = new QSpinBox(groupBox_2);
        song_info_timeout->setObjectName(QString::fromUtf8("song_info_timeout"));
        song_info_timeout->setMinimum(1000);
        song_info_timeout->setMaximum(60000);
        song_info_timeout->setValue(2500);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, song_info_timeout);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_6 = new QGroupBox(SongInfoSettingsPage);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy1);
        verticalLayout_15 = new QVBoxLayout(groupBox_6);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        label = new QLabel(groupBox_6);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout_15->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        providers = new QListWidget(groupBox_6);
        providers->setObjectName(QString::fromUtf8("providers"));

        horizontalLayout->addWidget(providers);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        up = new QPushButton(groupBox_6);
        up->setObjectName(QString::fromUtf8("up"));
        up->setEnabled(false);

        verticalLayout->addWidget(up);

        down = new QPushButton(groupBox_6);
        down->setObjectName(QString::fromUtf8("down"));
        down->setEnabled(false);

        verticalLayout->addWidget(down);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_15->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox_6);


        retranslateUi(SongInfoSettingsPage);

        QMetaObject::connectSlotsByName(SongInfoSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *SongInfoSettingsPage)
    {
        SongInfoSettingsPage->setWindowTitle(QApplication::translate("SongInfoSettingsPage", "Song Information", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("SongInfoSettingsPage", "Appearance", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("SongInfoSettingsPage", "Font size", 0, QApplication::UnicodeUTF8));
        song_info_font_size->setSuffix(QApplication::translate("SongInfoSettingsPage", " pt", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("SongInfoSettingsPage", "Preview", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("SongInfoSettingsPage", "Network", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("SongInfoSettingsPage", "Timeout", 0, QApplication::UnicodeUTF8));
        song_info_timeout->setSuffix(QApplication::translate("SongInfoSettingsPage", " ms", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("SongInfoSettingsPage", "Lyrics", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SongInfoSettingsPage", "Choose the websites you want Clementine to use when searching for lyrics.", 0, QApplication::UnicodeUTF8));
        up->setText(QApplication::translate("SongInfoSettingsPage", "Move up", 0, QApplication::UnicodeUTF8));
        down->setText(QApplication::translate("SongInfoSettingsPage", "Move down", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SongInfoSettingsPage: public Ui_SongInfoSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SONGINFOSETTINGSPAGE_H
