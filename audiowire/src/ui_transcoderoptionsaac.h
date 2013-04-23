/********************************************************************************
** Form generated from reading UI file 'transcoderoptionsaac.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEROPTIONSAAC_H
#define UI_TRANSCODEROPTIONSAAC_H

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

class Ui_TranscoderOptionsAAC
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSlider *bitrate_slider;
    QSpinBox *bitrate_spinbox;
    QLabel *label_2;
    QComboBox *profile;
    QCheckBox *tns;
    QCheckBox *midside;
    QLabel *label_3;
    QComboBox *shortctl;

    void setupUi(QWidget *TranscoderOptionsAAC)
    {
        if (TranscoderOptionsAAC->objectName().isEmpty())
            TranscoderOptionsAAC->setObjectName(QString::fromUtf8("TranscoderOptionsAAC"));
        TranscoderOptionsAAC->resize(480, 344);
        formLayout = new QFormLayout(TranscoderOptionsAAC);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(TranscoderOptionsAAC);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bitrate_slider = new QSlider(TranscoderOptionsAAC);
        bitrate_slider->setObjectName(QString::fromUtf8("bitrate_slider"));
        bitrate_slider->setMinimum(8);
        bitrate_slider->setMaximum(320);
        bitrate_slider->setValue(128);
        bitrate_slider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(bitrate_slider);

        bitrate_spinbox = new QSpinBox(TranscoderOptionsAAC);
        bitrate_spinbox->setObjectName(QString::fromUtf8("bitrate_spinbox"));
        bitrate_spinbox->setMinimum(8);
        bitrate_spinbox->setMaximum(320);
        bitrate_spinbox->setSingleStep(8);
        bitrate_spinbox->setValue(128);

        horizontalLayout->addWidget(bitrate_spinbox);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        label_2 = new QLabel(TranscoderOptionsAAC);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        profile = new QComboBox(TranscoderOptionsAAC);
        profile->setObjectName(QString::fromUtf8("profile"));

        formLayout->setWidget(1, QFormLayout::FieldRole, profile);

        tns = new QCheckBox(TranscoderOptionsAAC);
        tns->setObjectName(QString::fromUtf8("tns"));

        formLayout->setWidget(4, QFormLayout::SpanningRole, tns);

        midside = new QCheckBox(TranscoderOptionsAAC);
        midside->setObjectName(QString::fromUtf8("midside"));
        midside->setChecked(true);

        formLayout->setWidget(5, QFormLayout::SpanningRole, midside);

        label_3 = new QLabel(TranscoderOptionsAAC);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        shortctl = new QComboBox(TranscoderOptionsAAC);
        shortctl->setObjectName(QString::fromUtf8("shortctl"));

        formLayout->setWidget(2, QFormLayout::FieldRole, shortctl);

        QWidget::setTabOrder(bitrate_slider, bitrate_spinbox);
        QWidget::setTabOrder(bitrate_spinbox, profile);
        QWidget::setTabOrder(profile, shortctl);
        QWidget::setTabOrder(shortctl, tns);
        QWidget::setTabOrder(tns, midside);

        retranslateUi(TranscoderOptionsAAC);
        QObject::connect(bitrate_slider, SIGNAL(valueChanged(int)), bitrate_spinbox, SLOT(setValue(int)));
        QObject::connect(bitrate_spinbox, SIGNAL(valueChanged(int)), bitrate_slider, SLOT(setValue(int)));

        profile->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TranscoderOptionsAAC);
    } // setupUi

    void retranslateUi(QWidget *TranscoderOptionsAAC)
    {
        TranscoderOptionsAAC->setWindowTitle(QApplication::translate("TranscoderOptionsAAC", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TranscoderOptionsAAC", "Bitrate", 0, QApplication::UnicodeUTF8));
        bitrate_spinbox->setSuffix(QApplication::translate("TranscoderOptionsAAC", " kbps", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TranscoderOptionsAAC", "Profile", 0, QApplication::UnicodeUTF8));
        profile->clear();
        profile->insertItems(0, QStringList()
         << QApplication::translate("TranscoderOptionsAAC", "Main profile (MAIN)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TranscoderOptionsAAC", "Low complexity profile (LC)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TranscoderOptionsAAC", "Scalable sampling rate profile (SSR)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TranscoderOptionsAAC", "Long term prediction profile (LTP)", 0, QApplication::UnicodeUTF8)
        );
        tns->setText(QApplication::translate("TranscoderOptionsAAC", "Use temporal noise shaping", 0, QApplication::UnicodeUTF8));
        midside->setText(QApplication::translate("TranscoderOptionsAAC", "Allow mid/side encoding", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TranscoderOptionsAAC", "Block type", 0, QApplication::UnicodeUTF8));
        shortctl->clear();
        shortctl->insertItems(0, QStringList()
         << QApplication::translate("TranscoderOptionsAAC", "Normal block type", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TranscoderOptionsAAC", "No short blocks", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TranscoderOptionsAAC", "No long blocks", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class TranscoderOptionsAAC: public Ui_TranscoderOptionsAAC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEROPTIONSAAC_H
