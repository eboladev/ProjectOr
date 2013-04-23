/********************************************************************************
** Form generated from reading UI file 'transcoderoptionsspeex.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEROPTIONSSPEEX_H
#define UI_TRANSCODEROPTIONSSPEEX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TranscoderOptionsSpeex
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QSlider *quality_slider;
    QSpinBox *quality_spinbox;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QSlider *bitrate_slider;
    QSpinBox *bitrate_spinbox;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QSlider *abr_slider;
    QSpinBox *abr_spinbox;
    QLabel *label_3;
    QComboBox *mode;
    QCheckBox *vbr;
    QCheckBox *vad;
    QCheckBox *dtx;
    QLabel *label_5;
    QSpinBox *complexity;
    QLabel *label_6;
    QSpinBox *nframes;

    void setupUi(QWidget *TranscoderOptionsSpeex)
    {
        if (TranscoderOptionsSpeex->objectName().isEmpty())
            TranscoderOptionsSpeex->setObjectName(QString::fromUtf8("TranscoderOptionsSpeex"));
        TranscoderOptionsSpeex->resize(555, 424);
        formLayout = new QFormLayout(TranscoderOptionsSpeex);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(TranscoderOptionsSpeex);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        quality_slider = new QSlider(TranscoderOptionsSpeex);
        quality_slider->setObjectName(QString::fromUtf8("quality_slider"));
        quality_slider->setMaximum(10);
        quality_slider->setValue(8);
        quality_slider->setOrientation(Qt::Horizontal);
        quality_slider->setTickPosition(QSlider::TicksBelow);

        horizontalLayout_2->addWidget(quality_slider);

        quality_spinbox = new QSpinBox(TranscoderOptionsSpeex);
        quality_spinbox->setObjectName(QString::fromUtf8("quality_spinbox"));
        quality_spinbox->setMaximum(10);
        quality_spinbox->setValue(8);

        horizontalLayout_2->addWidget(quality_spinbox);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);

        label_2 = new QLabel(TranscoderOptionsSpeex);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bitrate_slider = new QSlider(TranscoderOptionsSpeex);
        bitrate_slider->setObjectName(QString::fromUtf8("bitrate_slider"));
        bitrate_slider->setMaximum(320);
        bitrate_slider->setSingleStep(8);
        bitrate_slider->setPageStep(32);
        bitrate_slider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(bitrate_slider);

        bitrate_spinbox = new QSpinBox(TranscoderOptionsSpeex);
        bitrate_spinbox->setObjectName(QString::fromUtf8("bitrate_spinbox"));
        bitrate_spinbox->setMinimumSize(QSize(100, 0));
        bitrate_spinbox->setMaximum(320);
        bitrate_spinbox->setSingleStep(8);

        horizontalLayout->addWidget(bitrate_spinbox);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        label_4 = new QLabel(TranscoderOptionsSpeex);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        abr_slider = new QSlider(TranscoderOptionsSpeex);
        abr_slider->setObjectName(QString::fromUtf8("abr_slider"));
        abr_slider->setMaximum(320);
        abr_slider->setSingleStep(8);
        abr_slider->setPageStep(32);
        abr_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(abr_slider);

        abr_spinbox = new QSpinBox(TranscoderOptionsSpeex);
        abr_spinbox->setObjectName(QString::fromUtf8("abr_spinbox"));
        abr_spinbox->setMinimumSize(QSize(100, 0));
        abr_spinbox->setMaximum(320);
        abr_spinbox->setSingleStep(8);

        horizontalLayout_3->addWidget(abr_spinbox);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3);

        label_3 = new QLabel(TranscoderOptionsSpeex);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        mode = new QComboBox(TranscoderOptionsSpeex);
        mode->setObjectName(QString::fromUtf8("mode"));

        formLayout->setWidget(3, QFormLayout::FieldRole, mode);

        vbr = new QCheckBox(TranscoderOptionsSpeex);
        vbr->setObjectName(QString::fromUtf8("vbr"));

        formLayout->setWidget(4, QFormLayout::SpanningRole, vbr);

        vad = new QCheckBox(TranscoderOptionsSpeex);
        vad->setObjectName(QString::fromUtf8("vad"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, vad);

        dtx = new QCheckBox(TranscoderOptionsSpeex);
        dtx->setObjectName(QString::fromUtf8("dtx"));

        formLayout->setWidget(6, QFormLayout::SpanningRole, dtx);

        label_5 = new QLabel(TranscoderOptionsSpeex);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_5);

        complexity = new QSpinBox(TranscoderOptionsSpeex);
        complexity->setObjectName(QString::fromUtf8("complexity"));
        complexity->setMaximum(10000);
        complexity->setValue(3);

        formLayout->setWidget(7, QFormLayout::FieldRole, complexity);

        label_6 = new QLabel(TranscoderOptionsSpeex);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_6);

        nframes = new QSpinBox(TranscoderOptionsSpeex);
        nframes->setObjectName(QString::fromUtf8("nframes"));
        nframes->setMaximum(10000);
        nframes->setValue(1);

        formLayout->setWidget(8, QFormLayout::FieldRole, nframes);

        QWidget::setTabOrder(quality_slider, quality_spinbox);
        QWidget::setTabOrder(quality_spinbox, bitrate_slider);
        QWidget::setTabOrder(bitrate_slider, bitrate_spinbox);
        QWidget::setTabOrder(bitrate_spinbox, abr_slider);
        QWidget::setTabOrder(abr_slider, abr_spinbox);
        QWidget::setTabOrder(abr_spinbox, mode);
        QWidget::setTabOrder(mode, vbr);
        QWidget::setTabOrder(vbr, vad);
        QWidget::setTabOrder(vad, dtx);
        QWidget::setTabOrder(dtx, complexity);
        QWidget::setTabOrder(complexity, nframes);

        retranslateUi(TranscoderOptionsSpeex);
        QObject::connect(quality_slider, SIGNAL(valueChanged(int)), quality_spinbox, SLOT(setValue(int)));
        QObject::connect(quality_spinbox, SIGNAL(valueChanged(int)), quality_slider, SLOT(setValue(int)));
        QObject::connect(bitrate_slider, SIGNAL(valueChanged(int)), bitrate_spinbox, SLOT(setValue(int)));
        QObject::connect(bitrate_spinbox, SIGNAL(valueChanged(int)), bitrate_slider, SLOT(setValue(int)));
        QObject::connect(abr_slider, SIGNAL(valueChanged(int)), abr_spinbox, SLOT(setValue(int)));
        QObject::connect(abr_spinbox, SIGNAL(valueChanged(int)), abr_slider, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(TranscoderOptionsSpeex);
    } // setupUi

    void retranslateUi(QWidget *TranscoderOptionsSpeex)
    {
        TranscoderOptionsSpeex->setWindowTitle(QApplication::translate("TranscoderOptionsSpeex", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TranscoderOptionsSpeex", "Quality", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TranscoderOptionsSpeex", "Bitrate", 0, QApplication::UnicodeUTF8));
        bitrate_spinbox->setSpecialValueText(QApplication::translate("TranscoderOptionsSpeex", "automatic", 0, QApplication::UnicodeUTF8));
        bitrate_spinbox->setSuffix(QApplication::translate("TranscoderOptionsSpeex", " kbps", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("TranscoderOptionsSpeex", "Average bitrate", 0, QApplication::UnicodeUTF8));
        abr_spinbox->setSpecialValueText(QApplication::translate("TranscoderOptionsSpeex", "disabled", 0, QApplication::UnicodeUTF8));
        abr_spinbox->setSuffix(QApplication::translate("TranscoderOptionsSpeex", " kbps", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TranscoderOptionsSpeex", "Encoding mode", 0, QApplication::UnicodeUTF8));
        mode->clear();
        mode->insertItems(0, QStringList()
         << QApplication::translate("TranscoderOptionsSpeex", "Auto", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TranscoderOptionsSpeex", "Ultra wide band (UWB)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TranscoderOptionsSpeex", "Wide band (WB)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TranscoderOptionsSpeex", "Narrow band (NB)", 0, QApplication::UnicodeUTF8)
        );
        vbr->setText(QApplication::translate("TranscoderOptionsSpeex", "Variable bit rate", 0, QApplication::UnicodeUTF8));
        vad->setText(QApplication::translate("TranscoderOptionsSpeex", "Voice activity detection", 0, QApplication::UnicodeUTF8));
        dtx->setText(QApplication::translate("TranscoderOptionsSpeex", "Discontinuous transmission", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("TranscoderOptionsSpeex", "Encoding complexity", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("TranscoderOptionsSpeex", "Frames per buffer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TranscoderOptionsSpeex: public Ui_TranscoderOptionsSpeex {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEROPTIONSSPEEX_H
