/********************************************************************************
** Form generated from reading UI file 'transcodelogdialog.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODELOGDIALOG_H
#define UI_TRANSCODELOGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TranscodeLogDialog
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *log;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TranscodeLogDialog)
    {
        if (TranscodeLogDialog->objectName().isEmpty())
            TranscodeLogDialog->setObjectName(QString::fromUtf8("TranscodeLogDialog"));
        TranscodeLogDialog->resize(676, 358);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        TranscodeLogDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(TranscodeLogDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        log = new QPlainTextEdit(TranscodeLogDialog);
        log->setObjectName(QString::fromUtf8("log"));
        log->setReadOnly(true);

        verticalLayout->addWidget(log);

        buttonBox = new QDialogButtonBox(TranscodeLogDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TranscodeLogDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), TranscodeLogDialog, SLOT(hide()));

        QMetaObject::connectSlotsByName(TranscodeLogDialog);
    } // setupUi

    void retranslateUi(QDialog *TranscodeLogDialog)
    {
        TranscodeLogDialog->setWindowTitle(QApplication::translate("TranscodeLogDialog", "Transcoder Log", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TranscodeLogDialog: public Ui_TranscodeLogDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODELOGDIALOG_H
