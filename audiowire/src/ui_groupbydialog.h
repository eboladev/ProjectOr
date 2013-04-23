/********************************************************************************
** Form generated from reading UI file 'groupbydialog.ui'
**
** Created: Tue Apr 23 15:28:22 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPBYDIALOG_H
#define UI_GROUPBYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GroupByDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *first;
    QLabel *label_2;
    QComboBox *second;
    QLabel *label_3;
    QComboBox *third;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *GroupByDialog)
    {
        if (GroupByDialog->objectName().isEmpty())
            GroupByDialog->setObjectName(QString::fromUtf8("GroupByDialog"));
        GroupByDialog->resize(354, 236);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        GroupByDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(GroupByDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(GroupByDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        verticalLayout->addWidget(label_4);

        groupBox = new QGroupBox(GroupByDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        first = new QComboBox(groupBox);
        first->setObjectName(QString::fromUtf8("first"));

        formLayout->setWidget(0, QFormLayout::FieldRole, first);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        second = new QComboBox(groupBox);
        second->setObjectName(QString::fromUtf8("second"));

        formLayout->setWidget(1, QFormLayout::FieldRole, second);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        third = new QComboBox(groupBox);
        third->setObjectName(QString::fromUtf8("third"));

        formLayout->setWidget(2, QFormLayout::FieldRole, third);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        button_box = new QDialogButtonBox(GroupByDialog);
        button_box->setObjectName(QString::fromUtf8("button_box"));
        button_box->setOrientation(Qt::Horizontal);
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        verticalLayout->addWidget(button_box);

        QWidget::setTabOrder(first, second);
        QWidget::setTabOrder(second, third);
        QWidget::setTabOrder(third, button_box);

        retranslateUi(GroupByDialog);
        QObject::connect(button_box, SIGNAL(accepted()), GroupByDialog, SLOT(accept()));
        QObject::connect(button_box, SIGNAL(rejected()), GroupByDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GroupByDialog);
    } // setupUi

    void retranslateUi(QDialog *GroupByDialog)
    {
        GroupByDialog->setWindowTitle(QApplication::translate("GroupByDialog", "Library advanced grouping", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("GroupByDialog", "You can change the way the songs in the library are organised.", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("GroupByDialog", "Group Library by...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GroupByDialog", "First level", 0, QApplication::UnicodeUTF8));
        first->clear();
        first->insertItems(0, QStringList()
         << QApplication::translate("GroupByDialog", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "Album", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "Artist", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "Album artist", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "Composer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "File type", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "Genre", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "Year", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "Year - Album", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("GroupByDialog", "Second level", 0, QApplication::UnicodeUTF8));
        second->clear();
        second->insertItems(0, QStringList()
         << QApplication::translate("GroupByDialog", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "Album", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "Artist", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "Album artist", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "Composer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "File type", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "Genre", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "Year", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "Year - Album", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("GroupByDialog", "Third level", 0, QApplication::UnicodeUTF8));
        third->clear();
        third->insertItems(0, QStringList()
         << QApplication::translate("GroupByDialog", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "Album", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "Artist", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "Album artist", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "Composer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "File type", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "Genre", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "Year", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("GroupByDialog", "Year - Album", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class GroupByDialog: public Ui_GroupByDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPBYDIALOG_H
