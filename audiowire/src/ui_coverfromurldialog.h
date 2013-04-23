/********************************************************************************
** Form generated from reading UI file 'coverfromurldialog.ui'
**
** Created: Tue Apr 23 15:28:24 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COVERFROMURLDIALOG_H
#define UI_COVERFROMURLDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include "widgets/busyindicator.h"

QT_BEGIN_NAMESPACE

class Ui_CoverFromURLDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *urlLabel;
    BusyIndicator *busy;
    QHBoxLayout *horizontalLayout;
    QLineEdit *url;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CoverFromURLDialog)
    {
        if (CoverFromURLDialog->objectName().isEmpty())
            CoverFromURLDialog->setObjectName(QString::fromUtf8("CoverFromURLDialog"));
        CoverFromURLDialog->resize(407, 126);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        CoverFromURLDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(CoverFromURLDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        urlLabel = new QLabel(CoverFromURLDialog);
        urlLabel->setObjectName(QString::fromUtf8("urlLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(urlLabel->sizePolicy().hasHeightForWidth());
        urlLabel->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(urlLabel);

        busy = new BusyIndicator(CoverFromURLDialog);
        busy->setObjectName(QString::fromUtf8("busy"));

        horizontalLayout_2->addWidget(busy);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        url = new QLineEdit(CoverFromURLDialog);
        url->setObjectName(QString::fromUtf8("url"));

        horizontalLayout->addWidget(url);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(CoverFromURLDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CoverFromURLDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CoverFromURLDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CoverFromURLDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CoverFromURLDialog);
    } // setupUi

    void retranslateUi(QDialog *CoverFromURLDialog)
    {
        CoverFromURLDialog->setWindowTitle(QApplication::translate("CoverFromURLDialog", "Load cover from URL", 0, QApplication::UnicodeUTF8));
        urlLabel->setText(QApplication::translate("CoverFromURLDialog", "Enter a URL to download a cover from the Internet:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CoverFromURLDialog: public Ui_CoverFromURLDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COVERFROMURLDIALOG_H
