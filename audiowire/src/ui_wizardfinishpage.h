/********************************************************************************
** Form generated from reading UI file 'wizardfinishpage.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZARDFINISHPAGE_H
#define UI_WIZARDFINISHPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartPlaylistWizardFinishPage
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *name;
    QWidget *dynamic_container;
    QVBoxLayout *verticalLayout;
    QCheckBox *dynamic;
    QLabel *label_2;

    void setupUi(QWidget *SmartPlaylistWizardFinishPage)
    {
        if (SmartPlaylistWizardFinishPage->objectName().isEmpty())
            SmartPlaylistWizardFinishPage->setObjectName(QString::fromUtf8("SmartPlaylistWizardFinishPage"));
        SmartPlaylistWizardFinishPage->resize(583, 370);
        formLayout = new QFormLayout(SmartPlaylistWizardFinishPage);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(SmartPlaylistWizardFinishPage);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        name = new QLineEdit(SmartPlaylistWizardFinishPage);
        name->setObjectName(QString::fromUtf8("name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, name);

        dynamic_container = new QWidget(SmartPlaylistWizardFinishPage);
        dynamic_container->setObjectName(QString::fromUtf8("dynamic_container"));
        verticalLayout = new QVBoxLayout(dynamic_container);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        dynamic = new QCheckBox(dynamic_container);
        dynamic->setObjectName(QString::fromUtf8("dynamic"));

        verticalLayout->addWidget(dynamic);

        label_2 = new QLabel(dynamic_container);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);
        label_2->setIndent(24);

        verticalLayout->addWidget(label_2);


        formLayout->setWidget(1, QFormLayout::SpanningRole, dynamic_container);


        retranslateUi(SmartPlaylistWizardFinishPage);

        QMetaObject::connectSlotsByName(SmartPlaylistWizardFinishPage);
    } // setupUi

    void retranslateUi(QWidget *SmartPlaylistWizardFinishPage)
    {
        SmartPlaylistWizardFinishPage->setWindowTitle(QApplication::translate("SmartPlaylistWizardFinishPage", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SmartPlaylistWizardFinishPage", "Name", 0, QApplication::UnicodeUTF8));
        dynamic->setText(QApplication::translate("SmartPlaylistWizardFinishPage", "Use dynamic mode", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SmartPlaylistWizardFinishPage", "In dynamic mode new tracks will be chosen and added to the playlist every time a song finishes.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SmartPlaylistWizardFinishPage: public Ui_SmartPlaylistWizardFinishPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZARDFINISHPAGE_H
