/********************************************************************************
** Form generated from reading UI file 'globalshortcutgrabber.ui'
**
** Created: Tue Apr 23 15:28:24 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLOBALSHORTCUTGRABBER_H
#define UI_GLOBALSHORTCUTGRABBER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GlobalShortcutGrabber
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *combo;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GlobalShortcutGrabber)
    {
        if (GlobalShortcutGrabber->objectName().isEmpty())
            GlobalShortcutGrabber->setObjectName(QString::fromUtf8("GlobalShortcutGrabber"));
        GlobalShortcutGrabber->resize(418, 110);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        GlobalShortcutGrabber->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(GlobalShortcutGrabber);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(GlobalShortcutGrabber);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        combo = new QLabel(GlobalShortcutGrabber);
        combo->setObjectName(QString::fromUtf8("combo"));
        combo->setTextFormat(Qt::RichText);
        combo->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(combo);

        buttonBox = new QDialogButtonBox(GlobalShortcutGrabber);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(GlobalShortcutGrabber);
        QObject::connect(buttonBox, SIGNAL(accepted()), GlobalShortcutGrabber, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GlobalShortcutGrabber, SLOT(reject()));

        QMetaObject::connectSlotsByName(GlobalShortcutGrabber);
    } // setupUi

    void retranslateUi(QDialog *GlobalShortcutGrabber)
    {
        GlobalShortcutGrabber->setWindowTitle(QApplication::translate("GlobalShortcutGrabber", "Press a key", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GlobalShortcutGrabber", "Press a key combination to use for %1...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GlobalShortcutGrabber: public Ui_GlobalShortcutGrabber {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLOBALSHORTCUTGRABBER_H
