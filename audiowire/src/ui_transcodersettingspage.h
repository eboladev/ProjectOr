/********************************************************************************
** Form generated from reading UI file 'transcodersettingspage.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODERSETTINGSPAGE_H
#define UI_TRANSCODERSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "transcoder/transcoderoptionsaac.h"
#include "transcoder/transcoderoptionsflac.h"
#include "transcoder/transcoderoptionsmp3.h"
#include "transcoder/transcoderoptionsspeex.h"
#include "transcoder/transcoderoptionsvorbis.h"
#include "transcoder/transcoderoptionswma.h"

QT_BEGIN_NAMESPACE

class Ui_TranscoderSettingsPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_18;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_20;
    TranscoderOptionsMP3 *transcoding_mp3;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_25;
    TranscoderOptionsVorbis *transcoding_vorbis;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_24;
    TranscoderOptionsFlac *transcoding_flac;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_23;
    TranscoderOptionsSpeex *transcoding_speex;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_22;
    TranscoderOptionsAAC *transcoding_aac;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_21;
    TranscoderOptionsWma *transcoding_wma;

    void setupUi(QWidget *TranscoderSettingsPage)
    {
        if (TranscoderSettingsPage->objectName().isEmpty())
            TranscoderSettingsPage->setObjectName(QString::fromUtf8("TranscoderSettingsPage"));
        TranscoderSettingsPage->resize(400, 300);
        verticalLayout = new QVBoxLayout(TranscoderSettingsPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_18 = new QLabel(TranscoderSettingsPage);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setWordWrap(true);

        verticalLayout->addWidget(label_18);

        tabWidget = new QTabWidget(TranscoderSettingsPage);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_20 = new QVBoxLayout(tab);
        verticalLayout_20->setSpacing(0);
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        transcoding_mp3 = new TranscoderOptionsMP3(tab);
        transcoding_mp3->setObjectName(QString::fromUtf8("transcoding_mp3"));

        verticalLayout_20->addWidget(transcoding_mp3);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_25 = new QVBoxLayout(tab_2);
        verticalLayout_25->setSpacing(0);
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        transcoding_vorbis = new TranscoderOptionsVorbis(tab_2);
        transcoding_vorbis->setObjectName(QString::fromUtf8("transcoding_vorbis"));

        verticalLayout_25->addWidget(transcoding_vorbis);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_24 = new QVBoxLayout(tab_3);
        verticalLayout_24->setSpacing(0);
        verticalLayout_24->setContentsMargins(0, 0, 0, 0);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        transcoding_flac = new TranscoderOptionsFlac(tab_3);
        transcoding_flac->setObjectName(QString::fromUtf8("transcoding_flac"));

        verticalLayout_24->addWidget(transcoding_flac);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_23 = new QVBoxLayout(tab_4);
        verticalLayout_23->setSpacing(0);
        verticalLayout_23->setContentsMargins(0, 0, 0, 0);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        transcoding_speex = new TranscoderOptionsSpeex(tab_4);
        transcoding_speex->setObjectName(QString::fromUtf8("transcoding_speex"));

        verticalLayout_23->addWidget(transcoding_speex);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        verticalLayout_22 = new QVBoxLayout(tab_5);
        verticalLayout_22->setSpacing(0);
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        transcoding_aac = new TranscoderOptionsAAC(tab_5);
        transcoding_aac->setObjectName(QString::fromUtf8("transcoding_aac"));

        verticalLayout_22->addWidget(transcoding_aac);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        verticalLayout_21 = new QVBoxLayout(tab_6);
        verticalLayout_21->setSpacing(0);
        verticalLayout_21->setContentsMargins(0, 0, 0, 0);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        transcoding_wma = new TranscoderOptionsWma(tab_6);
        transcoding_wma->setObjectName(QString::fromUtf8("transcoding_wma"));

        verticalLayout_21->addWidget(transcoding_wma);

        tabWidget->addTab(tab_6, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(TranscoderSettingsPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TranscoderSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *TranscoderSettingsPage)
    {
        TranscoderSettingsPage->setWindowTitle(QApplication::translate("TranscoderSettingsPage", "Transcoding", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("TranscoderSettingsPage", "These settings are used in the \"Transcode Music\" dialog, and when converting music before copying it to a device.", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("TranscoderSettingsPage", "MP3", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("TranscoderSettingsPage", "Vorbis", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("TranscoderSettingsPage", "FLAC", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("TranscoderSettingsPage", "Speex", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("TranscoderSettingsPage", "AAC", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("TranscoderSettingsPage", "WMA", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TranscoderSettingsPage: public Ui_TranscoderSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODERSETTINGSPAGE_H
