/********************************************************************************
** Form generated from reading UI file 'organisedialog.ui'
**
** Created: Tue Apr 23 15:28:24 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORGANISEDIALOG_H
#define UI_ORGANISEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include "widgets/freespacebar.h"
#include "widgets/linetextedit.h"

QT_BEGIN_NAMESPACE

class Ui_OrganiseDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *destination;
    QLabel *label_2;
    QComboBox *aftercopying;
    FreeSpaceBar *free_space;
    QCheckBox *eject_after;
    QGroupBox *naming_group;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    LineTextEdit *naming;
    QToolButton *insert;
    QCheckBox *replace_the;
    QCheckBox *replace_spaces;
    QCheckBox *replace_ascii;
    QCheckBox *overwrite;
    QGroupBox *preview_group;
    QVBoxLayout *verticalLayout_3;
    QListWidget *preview;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OrganiseDialog)
    {
        if (OrganiseDialog->objectName().isEmpty())
            OrganiseDialog->setObjectName(QString::fromUtf8("OrganiseDialog"));
        OrganiseDialog->resize(588, 525);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        OrganiseDialog->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(OrganiseDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(OrganiseDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        destination = new QComboBox(OrganiseDialog);
        destination->setObjectName(QString::fromUtf8("destination"));

        formLayout->setWidget(0, QFormLayout::FieldRole, destination);

        label_2 = new QLabel(OrganiseDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        aftercopying = new QComboBox(OrganiseDialog);
        aftercopying->setObjectName(QString::fromUtf8("aftercopying"));

        formLayout->setWidget(1, QFormLayout::FieldRole, aftercopying);


        verticalLayout_2->addLayout(formLayout);

        free_space = new FreeSpaceBar(OrganiseDialog);
        free_space->setObjectName(QString::fromUtf8("free_space"));

        verticalLayout_2->addWidget(free_space);

        eject_after = new QCheckBox(OrganiseDialog);
        eject_after->setObjectName(QString::fromUtf8("eject_after"));

        verticalLayout_2->addWidget(eject_after);

        naming_group = new QGroupBox(OrganiseDialog);
        naming_group->setObjectName(QString::fromUtf8("naming_group"));
        verticalLayout = new QVBoxLayout(naming_group);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        naming = new LineTextEdit(naming_group);
        naming->setObjectName(QString::fromUtf8("naming"));
        naming->setLineWrapMode(QTextEdit::NoWrap);
        naming->setAcceptRichText(false);

        horizontalLayout->addWidget(naming);

        insert = new QToolButton(naming_group);
        insert->setObjectName(QString::fromUtf8("insert"));
        insert->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(insert);


        verticalLayout->addLayout(horizontalLayout);

        replace_the = new QCheckBox(naming_group);
        replace_the->setObjectName(QString::fromUtf8("replace_the"));

        verticalLayout->addWidget(replace_the);

        replace_spaces = new QCheckBox(naming_group);
        replace_spaces->setObjectName(QString::fromUtf8("replace_spaces"));

        verticalLayout->addWidget(replace_spaces);

        replace_ascii = new QCheckBox(naming_group);
        replace_ascii->setObjectName(QString::fromUtf8("replace_ascii"));

        verticalLayout->addWidget(replace_ascii);

        overwrite = new QCheckBox(naming_group);
        overwrite->setObjectName(QString::fromUtf8("overwrite"));

        verticalLayout->addWidget(overwrite);


        verticalLayout_2->addWidget(naming_group);

        preview_group = new QGroupBox(OrganiseDialog);
        preview_group->setObjectName(QString::fromUtf8("preview_group"));
        verticalLayout_3 = new QVBoxLayout(preview_group);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        preview = new QListWidget(preview_group);
        preview->setObjectName(QString::fromUtf8("preview"));

        verticalLayout_3->addWidget(preview);


        verticalLayout_2->addWidget(preview_group);

        buttonBox = new QDialogButtonBox(OrganiseDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        verticalLayout_2->addWidget(buttonBox);

        QWidget::setTabOrder(destination, aftercopying);
        QWidget::setTabOrder(aftercopying, eject_after);
        QWidget::setTabOrder(eject_after, naming);
        QWidget::setTabOrder(naming, insert);
        QWidget::setTabOrder(insert, replace_the);
        QWidget::setTabOrder(replace_the, replace_spaces);
        QWidget::setTabOrder(replace_spaces, replace_ascii);
        QWidget::setTabOrder(replace_ascii, overwrite);
        QWidget::setTabOrder(overwrite, preview);
        QWidget::setTabOrder(preview, buttonBox);

        retranslateUi(OrganiseDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), OrganiseDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OrganiseDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OrganiseDialog);
    } // setupUi

    void retranslateUi(QDialog *OrganiseDialog)
    {
        OrganiseDialog->setWindowTitle(QApplication::translate("OrganiseDialog", "Organise Files", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OrganiseDialog", "Destination", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("OrganiseDialog", "After copying...", 0, QApplication::UnicodeUTF8));
        aftercopying->clear();
        aftercopying->insertItems(0, QStringList()
         << QApplication::translate("OrganiseDialog", "Keep the original files", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("OrganiseDialog", "Delete the original files", 0, QApplication::UnicodeUTF8)
        );
        eject_after->setText(QApplication::translate("OrganiseDialog", "Safely remove the device after copying", 0, QApplication::UnicodeUTF8));
        naming_group->setTitle(QApplication::translate("OrganiseDialog", "Naming options", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        naming->setToolTip(QApplication::translate("OrganiseDialog", "<p>Tokens start with %, for example: %artist %album %title </p>\n"
"\n"
"<p>If you surround sections of text that contain a token with curly-braces, that section will be hidden if the token is empty.</p>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        insert->setText(QApplication::translate("OrganiseDialog", "Insert...", 0, QApplication::UnicodeUTF8));
        replace_the->setText(QApplication::translate("OrganiseDialog", "Ignore \"The\" in artist names", 0, QApplication::UnicodeUTF8));
        replace_spaces->setText(QApplication::translate("OrganiseDialog", "Replaces spaces with underscores", 0, QApplication::UnicodeUTF8));
        replace_ascii->setText(QApplication::translate("OrganiseDialog", "Restrict to ASCII characters", 0, QApplication::UnicodeUTF8));
        overwrite->setText(QApplication::translate("OrganiseDialog", "Overwrite existing files", 0, QApplication::UnicodeUTF8));
        preview_group->setTitle(QApplication::translate("OrganiseDialog", "Preview", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OrganiseDialog: public Ui_OrganiseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORGANISEDIALOG_H
