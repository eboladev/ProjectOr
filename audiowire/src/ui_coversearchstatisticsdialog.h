/********************************************************************************
** Form generated from reading UI file 'coversearchstatisticsdialog.ui'
**
** Created: Tue Apr 23 15:28:22 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COVERSEARCHSTATISTICSDIALOG_H
#define UI_COVERSEARCHSTATISTICSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CoverSearchStatisticsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *summary;
    QFrame *details;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CoverSearchStatisticsDialog)
    {
        if (CoverSearchStatisticsDialog->objectName().isEmpty())
            CoverSearchStatisticsDialog->setObjectName(QString::fromUtf8("CoverSearchStatisticsDialog"));
        CoverSearchStatisticsDialog->resize(425, 214);
        verticalLayout = new QVBoxLayout(CoverSearchStatisticsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        summary = new QLabel(CoverSearchStatisticsDialog);
        summary->setObjectName(QString::fromUtf8("summary"));

        verticalLayout->addWidget(summary);

        details = new QFrame(CoverSearchStatisticsDialog);
        details->setObjectName(QString::fromUtf8("details"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(details->sizePolicy().hasHeightForWidth());
        details->setSizePolicy(sizePolicy);
        details->setFrameShape(QFrame::StyledPanel);
        details->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(details);

        buttonBox = new QDialogButtonBox(CoverSearchStatisticsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CoverSearchStatisticsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CoverSearchStatisticsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CoverSearchStatisticsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CoverSearchStatisticsDialog);
    } // setupUi

    void retranslateUi(QDialog *CoverSearchStatisticsDialog)
    {
        CoverSearchStatisticsDialog->setWindowTitle(QApplication::translate("CoverSearchStatisticsDialog", "Fetch completed", 0, QApplication::UnicodeUTF8));
        summary->setText(QApplication::translate("CoverSearchStatisticsDialog", "Got %1 covers out of %2 (%3 failed)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CoverSearchStatisticsDialog: public Ui_CoverSearchStatisticsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COVERSEARCHSTATISTICSDIALOG_H
