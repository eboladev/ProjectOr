/********************************************************************************
** Form generated from reading UI file 'transcoderoptionswma.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEROPTIONSWMA_H
#define UI_TRANSCODEROPTIONSWMA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TranscoderOptionsWma
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSlider *bitrate_slider;
    QSpinBox *bitrate_spinbox;

    void setupUi(QWidget *TranscoderOptionsWma)
    {
        if (TranscoderOptionsWma->objectName().isEmpty())
            TranscoderOptionsWma->setObjectName(QString::fromUtf8("TranscoderOptionsWma"));
        TranscoderOptionsWma->resize(400, 300);
        formLayout = new QFormLayout(TranscoderOptionsWma);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(TranscoderOptionsWma);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bitrate_slider = new QSlider(TranscoderOptionsWma);
        bitrate_slider->setObjectName(QString::fromUtf8("bitrate_slider"));
        bitrate_slider->setMaximum(320);
        bitrate_slider->setValue(128);
        bitrate_slider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(bitrate_slider);

        bitrate_spinbox = new QSpinBox(TranscoderOptionsWma);
        bitrate_spinbox->setObjectName(QString::fromUtf8("bitrate_spinbox"));
        bitrate_spinbox->setMaximum(320);
        bitrate_spinbox->setValue(128);

        horizontalLayout->addWidget(bitrate_spinbox);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);


        retranslateUi(TranscoderOptionsWma);
        QObject::connect(bitrate_slider, SIGNAL(valueChanged(int)), bitrate_spinbox, SLOT(setValue(int)));
        QObject::connect(bitrate_spinbox, SIGNAL(valueChanged(int)), bitrate_slider, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(TranscoderOptionsWma);
    } // setupUi

    void retranslateUi(QWidget *TranscoderOptionsWma)
    {
        TranscoderOptionsWma->setWindowTitle(QApplication::translate("TranscoderOptionsWma", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TranscoderOptionsWma", "Bitrate", 0, QApplication::UnicodeUTF8));
        bitrate_spinbox->setSuffix(QApplication::translate("TranscoderOptionsWma", " kbps", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TranscoderOptionsWma: public Ui_TranscoderOptionsWma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEROPTIONSWMA_H
