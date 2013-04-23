/********************************************************************************
** Form generated from reading UI file 'addstreamdialog.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTREAMDIALOG_H
#define UI_ADDSTREAMDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddStreamDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *url;
    QCheckBox *save;
    QWidget *name_container;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *name;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *AddStreamDialog)
    {
        if (AddStreamDialog->objectName().isEmpty())
            AddStreamDialog->setObjectName(QString::fromUtf8("AddStreamDialog"));
        AddStreamDialog->resize(400, 168);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddStreamDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(AddStreamDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(AddStreamDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        url = new QLineEdit(AddStreamDialog);
        url->setObjectName(QString::fromUtf8("url"));

        verticalLayout->addWidget(url);

        save = new QCheckBox(AddStreamDialog);
        save->setObjectName(QString::fromUtf8("save"));
        save->setChecked(true);

        verticalLayout->addWidget(save);

        name_container = new QWidget(AddStreamDialog);
        name_container->setObjectName(QString::fromUtf8("name_container"));
        horizontalLayout = new QHBoxLayout(name_container);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(name_container);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        name = new QLineEdit(name_container);
        name->setObjectName(QString::fromUtf8("name"));

        horizontalLayout->addWidget(name);


        verticalLayout->addWidget(name_container);

        verticalSpacer = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        button_box = new QDialogButtonBox(AddStreamDialog);
        button_box->setObjectName(QString::fromUtf8("button_box"));
        button_box->setOrientation(Qt::Horizontal);
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(button_box);

        QWidget::setTabOrder(url, save);
        QWidget::setTabOrder(save, name);
        QWidget::setTabOrder(name, button_box);

        retranslateUi(AddStreamDialog);
        QObject::connect(button_box, SIGNAL(accepted()), AddStreamDialog, SLOT(accept()));
        QObject::connect(button_box, SIGNAL(rejected()), AddStreamDialog, SLOT(reject()));
        QObject::connect(save, SIGNAL(toggled(bool)), name_container, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(AddStreamDialog);
    } // setupUi

    void retranslateUi(QDialog *AddStreamDialog)
    {
        AddStreamDialog->setWindowTitle(QApplication::translate("AddStreamDialog", "Add Stream", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddStreamDialog", "Enter the URL of an internet radio stream:", 0, QApplication::UnicodeUTF8));
        save->setText(QApplication::translate("AddStreamDialog", "Save this stream in the Internet tab", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddStreamDialog", "Give it a name:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddStreamDialog: public Ui_AddStreamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTREAMDIALOG_H
