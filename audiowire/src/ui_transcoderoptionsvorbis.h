/********************************************************************************
** Form generated from reading UI file 'transcoderoptionsvorbis.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEROPTIONSVORBIS_H
#define UI_TRANSCODEROPTIONSVORBIS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TranscoderOptionsVorbis
{
public:
    QFormLayout *formLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QSlider *quality_slider;
    QSpinBox *quality_spinbox;
    QCheckBox *managed;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QSlider *bitrate_slider;
    QSpinBox *bitrate_spinbox;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QSlider *min_bitrate_slider;
    QSpinBox *min_bitrate_spinbox;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QSlider *max_bitrate_slider;
    QSpinBox *max_bitrate_spinbox;

    void setupUi(QWidget *TranscoderOptionsVorbis)
    {
        if (TranscoderOptionsVorbis->objectName().isEmpty())
            TranscoderOptionsVorbis->setObjectName(QString::fromUtf8("TranscoderOptionsVorbis"));
        TranscoderOptionsVorbis->resize(400, 300);
        formLayout_2 = new QFormLayout(TranscoderOptionsVorbis);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label = new QLabel(TranscoderOptionsVorbis);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        quality_slider = new QSlider(TranscoderOptionsVorbis);
        quality_slider->setObjectName(QString::fromUtf8("quality_slider"));
        quality_slider->setMinimum(-1);
        quality_slider->setMaximum(10);
        quality_slider->setValue(3);
        quality_slider->setOrientation(Qt::Horizontal);
        quality_slider->setTickPosition(QSlider::TicksBelow);

        horizontalLayout_4->addWidget(quality_slider);

        quality_spinbox = new QSpinBox(TranscoderOptionsVorbis);
        quality_spinbox->setObjectName(QString::fromUtf8("quality_spinbox"));
        quality_spinbox->setMinimum(-1);
        quality_spinbox->setMaximum(10);
        quality_spinbox->setValue(3);

        horizontalLayout_4->addWidget(quality_spinbox);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, horizontalLayout_4);

        managed = new QCheckBox(TranscoderOptionsVorbis);
        managed->setObjectName(QString::fromUtf8("managed"));

        formLayout_2->setWidget(1, QFormLayout::SpanningRole, managed);

        widget = new QWidget(TranscoderOptionsVorbis);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setEnabled(false);
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(32, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bitrate_slider = new QSlider(widget);
        bitrate_slider->setObjectName(QString::fromUtf8("bitrate_slider"));
        bitrate_slider->setMaximum(250);
        bitrate_slider->setValue(128);
        bitrate_slider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(bitrate_slider);

        bitrate_spinbox = new QSpinBox(widget);
        bitrate_spinbox->setObjectName(QString::fromUtf8("bitrate_spinbox"));
        bitrate_spinbox->setMaximum(250);
        bitrate_spinbox->setValue(128);

        horizontalLayout->addWidget(bitrate_spinbox);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        min_bitrate_slider = new QSlider(widget);
        min_bitrate_slider->setObjectName(QString::fromUtf8("min_bitrate_slider"));
        min_bitrate_slider->setMaximum(250);
        min_bitrate_slider->setValue(0);
        min_bitrate_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(min_bitrate_slider);

        min_bitrate_spinbox = new QSpinBox(widget);
        min_bitrate_spinbox->setObjectName(QString::fromUtf8("min_bitrate_spinbox"));
        min_bitrate_spinbox->setMaximum(250);
        min_bitrate_spinbox->setValue(0);

        horizontalLayout_2->addWidget(min_bitrate_spinbox);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_2);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        max_bitrate_slider = new QSlider(widget);
        max_bitrate_slider->setObjectName(QString::fromUtf8("max_bitrate_slider"));
        max_bitrate_slider->setMaximum(250);
        max_bitrate_slider->setValue(0);
        max_bitrate_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(max_bitrate_slider);

        max_bitrate_spinbox = new QSpinBox(widget);
        max_bitrate_spinbox->setObjectName(QString::fromUtf8("max_bitrate_spinbox"));
        max_bitrate_spinbox->setMaximum(250);
        max_bitrate_spinbox->setValue(0);

        horizontalLayout_3->addWidget(max_bitrate_spinbox);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3);


        formLayout_2->setWidget(2, QFormLayout::SpanningRole, widget);

        QWidget::setTabOrder(quality_slider, quality_spinbox);
        QWidget::setTabOrder(quality_spinbox, managed);
        QWidget::setTabOrder(managed, bitrate_slider);
        QWidget::setTabOrder(bitrate_slider, bitrate_spinbox);
        QWidget::setTabOrder(bitrate_spinbox, min_bitrate_slider);
        QWidget::setTabOrder(min_bitrate_slider, min_bitrate_spinbox);
        QWidget::setTabOrder(min_bitrate_spinbox, max_bitrate_slider);
        QWidget::setTabOrder(max_bitrate_slider, max_bitrate_spinbox);

        retranslateUi(TranscoderOptionsVorbis);
        QObject::connect(quality_slider, SIGNAL(valueChanged(int)), quality_spinbox, SLOT(setValue(int)));
        QObject::connect(quality_spinbox, SIGNAL(valueChanged(int)), quality_slider, SLOT(setValue(int)));
        QObject::connect(bitrate_slider, SIGNAL(valueChanged(int)), bitrate_spinbox, SLOT(setValue(int)));
        QObject::connect(bitrate_spinbox, SIGNAL(valueChanged(int)), bitrate_slider, SLOT(setValue(int)));
        QObject::connect(min_bitrate_spinbox, SIGNAL(valueChanged(int)), min_bitrate_slider, SLOT(setValue(int)));
        QObject::connect(min_bitrate_slider, SIGNAL(valueChanged(int)), min_bitrate_spinbox, SLOT(setValue(int)));
        QObject::connect(max_bitrate_slider, SIGNAL(valueChanged(int)), max_bitrate_spinbox, SLOT(setValue(int)));
        QObject::connect(max_bitrate_spinbox, SIGNAL(valueChanged(int)), max_bitrate_slider, SLOT(setValue(int)));
        QObject::connect(managed, SIGNAL(toggled(bool)), widget, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(TranscoderOptionsVorbis);
    } // setupUi

    void retranslateUi(QWidget *TranscoderOptionsVorbis)
    {
        TranscoderOptionsVorbis->setWindowTitle(QApplication::translate("TranscoderOptionsVorbis", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TranscoderOptionsVorbis", "Quality", 0, QApplication::UnicodeUTF8));
        managed->setText(QApplication::translate("TranscoderOptionsVorbis", "Use bitrate management engine", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TranscoderOptionsVorbis", "Target bitrate", 0, QApplication::UnicodeUTF8));
        bitrate_spinbox->setSuffix(QApplication::translate("TranscoderOptionsVorbis", " kbps", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TranscoderOptionsVorbis", "Minimum bitrate", 0, QApplication::UnicodeUTF8));
        min_bitrate_spinbox->setSpecialValueText(QApplication::translate("TranscoderOptionsVorbis", "disabled", 0, QApplication::UnicodeUTF8));
        min_bitrate_spinbox->setSuffix(QApplication::translate("TranscoderOptionsVorbis", " kbps", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("TranscoderOptionsVorbis", "Maximum bitrate", 0, QApplication::UnicodeUTF8));
        max_bitrate_spinbox->setSpecialValueText(QApplication::translate("TranscoderOptionsVorbis", "disabled", 0, QApplication::UnicodeUTF8));
        max_bitrate_spinbox->setSuffix(QApplication::translate("TranscoderOptionsVorbis", " kbps", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TranscoderOptionsVorbis: public Ui_TranscoderOptionsVorbis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEROPTIONSVORBIS_H
