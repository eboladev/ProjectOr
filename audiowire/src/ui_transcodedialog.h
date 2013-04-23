/********************************************************************************
** Form generated from reading UI file 'transcodedialog.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSCODEDIALOG_H
#define UI_TRANSCODEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TranscodeDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *input_group;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *files;
    QVBoxLayout *verticalLayout_2;
    QPushButton *add;
    QPushButton *remove;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *output_group;
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *format;
    QPushButton *options;
    QLabel *label_2;
    QComboBox *destination;
    QGroupBox *progress_group;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *progress_text;
    QPushButton *details;
    QProgressBar *progress_bar;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *TranscodeDialog)
    {
        if (TranscodeDialog->objectName().isEmpty())
            TranscodeDialog->setObjectName(QString::fromUtf8("TranscodeDialog"));
        TranscodeDialog->resize(499, 448);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        TranscodeDialog->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(TranscodeDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        input_group = new QGroupBox(TranscodeDialog);
        input_group->setObjectName(QString::fromUtf8("input_group"));
        horizontalLayout = new QHBoxLayout(input_group);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        files = new QTreeWidget(input_group);
        files->setObjectName(QString::fromUtf8("files"));
        files->setAlternatingRowColors(true);
        files->setSelectionMode(QAbstractItemView::ExtendedSelection);
        files->setRootIsDecorated(false);
        files->setUniformRowHeights(true);
        files->setItemsExpandable(false);
        files->setAllColumnsShowFocus(true);
        files->header()->setStretchLastSection(false);

        horizontalLayout->addWidget(files);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        add = new QPushButton(input_group);
        add->setObjectName(QString::fromUtf8("add"));

        verticalLayout_2->addWidget(add);

        remove = new QPushButton(input_group);
        remove->setObjectName(QString::fromUtf8("remove"));

        verticalLayout_2->addWidget(remove);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addWidget(input_group);

        output_group = new QGroupBox(TranscodeDialog);
        output_group->setObjectName(QString::fromUtf8("output_group"));
        formLayout = new QFormLayout(output_group);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(output_group);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        format = new QComboBox(output_group);
        format->setObjectName(QString::fromUtf8("format"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(format->sizePolicy().hasHeightForWidth());
        format->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(format);

        options = new QPushButton(output_group);
        options->setObjectName(QString::fromUtf8("options"));

        horizontalLayout_3->addWidget(options);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_3);

        label_2 = new QLabel(output_group);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        destination = new QComboBox(output_group);
        destination->setObjectName(QString::fromUtf8("destination"));

        formLayout->setWidget(1, QFormLayout::FieldRole, destination);


        verticalLayout_3->addWidget(output_group);

        progress_group = new QGroupBox(TranscodeDialog);
        progress_group->setObjectName(QString::fromUtf8("progress_group"));
        verticalLayout = new QVBoxLayout(progress_group);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        progress_text = new QLabel(progress_group);
        progress_text->setObjectName(QString::fromUtf8("progress_text"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(progress_text->sizePolicy().hasHeightForWidth());
        progress_text->setSizePolicy(sizePolicy1);
        progress_text->setTextFormat(Qt::RichText);

        horizontalLayout_2->addWidget(progress_text);

        details = new QPushButton(progress_group);
        details->setObjectName(QString::fromUtf8("details"));

        horizontalLayout_2->addWidget(details);


        verticalLayout->addLayout(horizontalLayout_2);

        progress_bar = new QProgressBar(progress_group);
        progress_bar->setObjectName(QString::fromUtf8("progress_bar"));

        verticalLayout->addWidget(progress_bar);


        verticalLayout_3->addWidget(progress_group);

        button_box = new QDialogButtonBox(TranscodeDialog);
        button_box->setObjectName(QString::fromUtf8("button_box"));
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Close);

        verticalLayout_3->addWidget(button_box);

        QWidget::setTabOrder(files, add);
        QWidget::setTabOrder(add, remove);
        QWidget::setTabOrder(remove, format);
        QWidget::setTabOrder(format, destination);
        QWidget::setTabOrder(destination, button_box);

        retranslateUi(TranscodeDialog);

        QMetaObject::connectSlotsByName(TranscodeDialog);
    } // setupUi

    void retranslateUi(QDialog *TranscodeDialog)
    {
        TranscodeDialog->setWindowTitle(QApplication::translate("TranscodeDialog", "Transcode Music", 0, QApplication::UnicodeUTF8));
        input_group->setTitle(QApplication::translate("TranscodeDialog", "Files to transcode", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = files->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("TranscodeDialog", "Directory", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("TranscodeDialog", "Filename", 0, QApplication::UnicodeUTF8));
        add->setText(QApplication::translate("TranscodeDialog", "Add...", 0, QApplication::UnicodeUTF8));
        remove->setText(QApplication::translate("TranscodeDialog", "Remove", 0, QApplication::UnicodeUTF8));
        output_group->setTitle(QApplication::translate("TranscodeDialog", "Output options", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TranscodeDialog", "Audio format", 0, QApplication::UnicodeUTF8));
        options->setText(QApplication::translate("TranscodeDialog", "Options...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TranscodeDialog", "Destination", 0, QApplication::UnicodeUTF8));
        destination->clear();
        destination->insertItems(0, QStringList()
         << QApplication::translate("TranscodeDialog", "Alongside the originals", 0, QApplication::UnicodeUTF8)
        );
        progress_group->setTitle(QApplication::translate("TranscodeDialog", "Progress", 0, QApplication::UnicodeUTF8));
        details->setText(QApplication::translate("TranscodeDialog", "Details...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TranscodeDialog: public Ui_TranscodeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSCODEDIALOG_H
