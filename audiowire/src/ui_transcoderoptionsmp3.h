/********************************************************************************
** Form generated from reading UI file 'transcoderoptionsmp3.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEROPTIONSMP3_H
#define UI_TRANSCODEROPTIONSMP3_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TranscoderOptionsMP3
{
public:
    QFormLayout *formLayout_2;
    QRadioButton *target_quality;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSlider *quality_slider;
    QDoubleSpinBox *quality_spinbox;
    QRadioButton *target_bitrate;
    QWidget *widget_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QSlider *bitrate_slider;
    QSpinBox *bitrate_spinbox;
    QCheckBox *cbr;
    QLabel *label_3;
    QComboBox *encoding_engine_quality;
    QCheckBox *mono;

    void setupUi(QWidget *TranscoderOptionsMP3)
    {
        if (TranscoderOptionsMP3->objectName().isEmpty())
            TranscoderOptionsMP3->setObjectName(QString::fromUtf8("TranscoderOptionsMP3"));
        TranscoderOptionsMP3->resize(557, 486);
        formLayout_2 = new QFormLayout(TranscoderOptionsMP3);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        target_quality = new QRadioButton(TranscoderOptionsMP3);
        target_quality->setObjectName(QString::fromUtf8("target_quality"));
        target_quality->setChecked(false);

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, target_quality);

        widget = new QWidget(TranscoderOptionsMP3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setEnabled(false);
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(32, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        quality_slider = new QSlider(widget);
        quality_slider->setObjectName(QString::fromUtf8("quality_slider"));
        quality_slider->setMaximum(999);
        quality_slider->setValue(400);
        quality_slider->setOrientation(Qt::Horizontal);
        quality_slider->setTickPosition(QSlider::TicksBelow);
        quality_slider->setTickInterval(100);

        horizontalLayout->addWidget(quality_slider);

        quality_spinbox = new QDoubleSpinBox(widget);
        quality_spinbox->setObjectName(QString::fromUtf8("quality_spinbox"));
        quality_spinbox->setMaximum(9.99);
        quality_spinbox->setValue(4);

        horizontalLayout->addWidget(quality_spinbox);


        horizontalLayout_2->addLayout(horizontalLayout);


        formLayout_2->setWidget(1, QFormLayout::SpanningRole, widget);

        target_bitrate = new QRadioButton(TranscoderOptionsMP3);
        target_bitrate->setObjectName(QString::fromUtf8("target_bitrate"));
        target_bitrate->setChecked(true);

        formLayout_2->setWidget(2, QFormLayout::SpanningRole, target_bitrate);

        widget_2 = new QWidget(TranscoderOptionsMP3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        formLayout = new QFormLayout(widget_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(32, 0, 0, 0);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        bitrate_slider = new QSlider(widget_2);
        bitrate_slider->setObjectName(QString::fromUtf8("bitrate_slider"));
        bitrate_slider->setMinimum(8);
        bitrate_slider->setMaximum(320);
        bitrate_slider->setValue(128);
        bitrate_slider->setOrientation(Qt::Horizontal);
        bitrate_slider->setTickPosition(QSlider::TicksBelow);
        bitrate_slider->setTickInterval(32);

        horizontalLayout_3->addWidget(bitrate_slider);

        bitrate_spinbox = new QSpinBox(widget_2);
        bitrate_spinbox->setObjectName(QString::fromUtf8("bitrate_spinbox"));
        bitrate_spinbox->setMinimum(8);
        bitrate_spinbox->setMaximum(320);
        bitrate_spinbox->setSingleStep(8);
        bitrate_spinbox->setValue(128);

        horizontalLayout_3->addWidget(bitrate_spinbox);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_3);

        cbr = new QCheckBox(widget_2);
        cbr->setObjectName(QString::fromUtf8("cbr"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, cbr);


        formLayout_2->setWidget(3, QFormLayout::SpanningRole, widget_2);

        label_3 = new QLabel(TranscoderOptionsMP3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_3);

        encoding_engine_quality = new QComboBox(TranscoderOptionsMP3);
        encoding_engine_quality->setObjectName(QString::fromUtf8("encoding_engine_quality"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, encoding_engine_quality);

        mono = new QCheckBox(TranscoderOptionsMP3);
        mono->setObjectName(QString::fromUtf8("mono"));

        formLayout_2->setWidget(5, QFormLayout::SpanningRole, mono);

        QWidget::setTabOrder(target_quality, quality_slider);
        QWidget::setTabOrder(quality_slider, quality_spinbox);
        QWidget::setTabOrder(quality_spinbox, target_bitrate);
        QWidget::setTabOrder(target_bitrate, bitrate_slider);
        QWidget::setTabOrder(bitrate_slider, bitrate_spinbox);
        QWidget::setTabOrder(bitrate_spinbox, cbr);
        QWidget::setTabOrder(cbr, encoding_engine_quality);
        QWidget::setTabOrder(encoding_engine_quality, mono);

        retranslateUi(TranscoderOptionsMP3);
        QObject::connect(bitrate_slider, SIGNAL(valueChanged(int)), bitrate_spinbox, SLOT(setValue(int)));
        QObject::connect(bitrate_spinbox, SIGNAL(valueChanged(int)), bitrate_slider, SLOT(setValue(int)));
        QObject::connect(target_quality, SIGNAL(toggled(bool)), widget, SLOT(setEnabled(bool)));
        QObject::connect(target_bitrate, SIGNAL(toggled(bool)), widget_2, SLOT(setEnabled(bool)));

        encoding_engine_quality->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TranscoderOptionsMP3);
    } // setupUi

    void retranslateUi(QWidget *TranscoderOptionsMP3)
    {
        TranscoderOptionsMP3->setWindowTitle(QApplication::translate("TranscoderOptionsMP3", "Form", 0, QApplication::UnicodeUTF8));
        target_quality->setText(QApplication::translate("TranscoderOptionsMP3", "Optimize for quality", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TranscoderOptionsMP3", "Quality", 0, QApplication::UnicodeUTF8));
        target_bitrate->setText(QApplication::translate("TranscoderOptionsMP3", "Optimize for bitrate", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TranscoderOptionsMP3", "Bitrate", 0, QApplication::UnicodeUTF8));
        bitrate_spinbox->setSuffix(QApplication::translate("TranscoderOptionsMP3", " kbps", 0, QApplication::UnicodeUTF8));
        cbr->setText(QApplication::translate("TranscoderOptionsMP3", "Constant bitrate", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TranscoderOptionsMP3", "Encoding engine quality", 0, QApplication::UnicodeUTF8));
        encoding_engine_quality->clear();
        encoding_engine_quality->insertItems(0, QStringList()
         << QApplication::translate("TranscoderOptionsMP3", "Fast", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TranscoderOptionsMP3", "Standard", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TranscoderOptionsMP3", "High", 0, QApplication::UnicodeUTF8)
        );
        mono->setText(QApplication::translate("TranscoderOptionsMP3", "Force mono encoding", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TranscoderOptionsMP3: public Ui_TranscoderOptionsMP3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEROPTIONSMP3_H
