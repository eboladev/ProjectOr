/********************************************************************************
** Form generated from reading UI file 'transcoderoptionsdialog.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEROPTIONSDIALOG_H
#define UI_TRANSCODEROPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TranscoderOptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TranscoderOptionsDialog)
    {
        if (TranscoderOptionsDialog->objectName().isEmpty())
            TranscoderOptionsDialog->setObjectName(QString::fromUtf8("TranscoderOptionsDialog"));
        TranscoderOptionsDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(TranscoderOptionsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        buttonBox = new QDialogButtonBox(TranscoderOptionsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TranscoderOptionsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TranscoderOptionsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TranscoderOptionsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TranscoderOptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *TranscoderOptionsDialog)
    {
        TranscoderOptionsDialog->setWindowTitle(QApplication::translate("TranscoderOptionsDialog", "Transcoding options", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TranscoderOptionsDialog: public Ui_TranscoderOptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEROPTIONSDIALOG_H
