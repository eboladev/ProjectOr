/********************************************************************************
** Form generated from reading UI file 'visualisationselector.ui'
**
** Created: Tue Apr 23 15:28:24 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUALISATIONSELECTOR_H
#define UI_VISUALISATIONSELECTOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VisualisationSelector
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *mode;
    QLabel *label_2;
    QSpinBox *delay;
    QListView *list;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *VisualisationSelector)
    {
        if (VisualisationSelector->objectName().isEmpty())
            VisualisationSelector->setObjectName(QString::fromUtf8("VisualisationSelector"));
        VisualisationSelector->resize(595, 475);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        VisualisationSelector->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(VisualisationSelector);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(VisualisationSelector);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        mode = new QComboBox(VisualisationSelector);
        mode->setObjectName(QString::fromUtf8("mode"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mode);

        label_2 = new QLabel(VisualisationSelector);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        delay = new QSpinBox(VisualisationSelector);
        delay->setObjectName(QString::fromUtf8("delay"));
        delay->setMinimum(2);
        delay->setMaximum(120);
        delay->setValue(15);

        formLayout->setWidget(1, QFormLayout::FieldRole, delay);


        verticalLayout->addLayout(formLayout);

        list = new QListView(VisualisationSelector);
        list->setObjectName(QString::fromUtf8("list"));
        list->setEnabled(false);
        list->setAlternatingRowColors(true);
        list->setSelectionBehavior(QAbstractItemView::SelectRows);
        list->setUniformItemSizes(true);

        verticalLayout->addWidget(list);

        buttonBox = new QDialogButtonBox(VisualisationSelector);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(mode, delay);
        QWidget::setTabOrder(delay, list);
        QWidget::setTabOrder(list, buttonBox);

        retranslateUi(VisualisationSelector);
        QObject::connect(buttonBox, SIGNAL(accepted()), VisualisationSelector, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VisualisationSelector, SLOT(reject()));

        QMetaObject::connectSlotsByName(VisualisationSelector);
    } // setupUi

    void retranslateUi(QDialog *VisualisationSelector)
    {
        VisualisationSelector->setWindowTitle(QApplication::translate("VisualisationSelector", "Select visualizations", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("VisualisationSelector", "Visualization mode", 0, QApplication::UnicodeUTF8));
        mode->clear();
        mode->insertItems(0, QStringList()
         << QApplication::translate("VisualisationSelector", "Random visualization", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("VisualisationSelector", "Choose from the list", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("VisualisationSelector", "Delay between visualizations", 0, QApplication::UnicodeUTF8));
        delay->setSuffix(QApplication::translate("VisualisationSelector", " seconds", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VisualisationSelector: public Ui_VisualisationSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUALISATIONSELECTOR_H
