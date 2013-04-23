/********************************************************************************
** Form generated from reading UI file 'organiseerrordialog.ui'
**
** Created: Tue Apr 23 15:28:24 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORGANISEERRORDIALOG_H
#define UI_ORGANISEERRORDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OrganiseErrorDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *icon;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *list;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OrganiseErrorDialog)
    {
        if (OrganiseErrorDialog->objectName().isEmpty())
            OrganiseErrorDialog->setObjectName(QString::fromUtf8("OrganiseErrorDialog"));
        OrganiseErrorDialog->resize(779, 355);
        horizontalLayout = new QHBoxLayout(OrganiseErrorDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        icon = new QLabel(OrganiseErrorDialog);
        icon->setObjectName(QString::fromUtf8("icon"));

        verticalLayout_2->addWidget(icon);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(OrganiseErrorDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        list = new QListWidget(OrganiseErrorDialog);
        list->setObjectName(QString::fromUtf8("list"));

        verticalLayout->addWidget(list);

        buttonBox = new QDialogButtonBox(OrganiseErrorDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(OrganiseErrorDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), OrganiseErrorDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OrganiseErrorDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OrganiseErrorDialog);
    } // setupUi

    void retranslateUi(QDialog *OrganiseErrorDialog)
    {
        Q_UNUSED(OrganiseErrorDialog);
    } // retranslateUi

};

namespace Ui {
    class OrganiseErrorDialog: public Ui_OrganiseErrorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORGANISEERRORDIALOG_H
