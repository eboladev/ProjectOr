/********************************************************************************
** Form generated from reading UI file 'visualisationoverlay.ui'
**
** Created: Tue Apr 23 15:28:24 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUALISATIONOVERLAY_H
#define UI_VISUALISATIONOVERLAY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VisualisationOverlay
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *song_title;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolButton *previous;
    QToolButton *play_pause;
    QToolButton *stop;
    QToolButton *next;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *settings;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *VisualisationOverlay)
    {
        if (VisualisationOverlay->objectName().isEmpty())
            VisualisationOverlay->setObjectName(QString::fromUtf8("VisualisationOverlay"));
        VisualisationOverlay->resize(523, 302);
        VisualisationOverlay->setStyleSheet(QString::fromUtf8("VisualisationOverlay {\n"
"  background-color: transparent;\n"
"}\n"
"\n"
"#frame {\n"
"  background-color: rgba(96, 59, 25, 70%);\n"
"  border-top-left-radius: 10px;\n"
"  border-top-right-radius: 10px;\n"
"  border-color: rgba(145, 89, 38, 100%);\n"
"  border-width: 4px 4px 0px 4px;\n"
"  border-style: solid;\n"
"}\n"
"\n"
"#song_title {\n"
"  font-weight: bold;\n"
"  font-size: 20px;\n"
"  color: #feae65;\n"
"}\n"
"\n"
"QToolButton {\n"
"  background: transparent;\n"
"  border: none;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(VisualisationOverlay);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 210, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        frame = new QFrame(VisualisationOverlay);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        song_title = new QLabel(frame);
        song_title->setObjectName(QString::fromUtf8("song_title"));
        song_title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(song_title);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        widget = new QWidget(frame);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        previous = new QToolButton(widget);
        previous->setObjectName(QString::fromUtf8("previous"));
        previous->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(previous);

        play_pause = new QToolButton(widget);
        play_pause->setObjectName(QString::fromUtf8("play_pause"));
        play_pause->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(play_pause);

        stop = new QToolButton(widget);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(stop);

        next = new QToolButton(widget);
        next->setObjectName(QString::fromUtf8("next"));
        next->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(next);

        horizontalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        settings = new QToolButton(widget);
        settings->setObjectName(QString::fromUtf8("settings"));
        settings->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(settings);


        horizontalLayout_2->addWidget(widget);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addWidget(frame);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(VisualisationOverlay);

        QMetaObject::connectSlotsByName(VisualisationOverlay);
    } // setupUi

    void retranslateUi(QWidget *VisualisationOverlay)
    {
        VisualisationOverlay->setWindowTitle(QApplication::translate("VisualisationOverlay", "Form", 0, QApplication::UnicodeUTF8));
        song_title->setText(QApplication::translate("VisualisationOverlay", "Clementine", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        settings->setToolTip(QApplication::translate("VisualisationOverlay", "Visualizations Settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class VisualisationOverlay: public Ui_VisualisationOverlay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUALISATIONOVERLAY_H
