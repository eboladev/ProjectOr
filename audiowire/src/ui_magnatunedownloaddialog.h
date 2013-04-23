/********************************************************************************
** Form generated from reading UI file 'magnatunedownloaddialog.ui'
**
** Created: Tue Apr 23 15:28:22 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGNATUNEDOWNLOADDIALOG_H
#define UI_MAGNATUNEDOWNLOADDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MagnatuneDownloadDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTreeWidget *albums;
    QWidget *options;
    QFormLayout *formLayout;
    QLabel *label_2;
    QComboBox *format;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *directory;
    QPushButton *browse;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *MagnatuneDownloadDialog)
    {
        if (MagnatuneDownloadDialog->objectName().isEmpty())
            MagnatuneDownloadDialog->setObjectName(QString::fromUtf8("MagnatuneDownloadDialog"));
        MagnatuneDownloadDialog->resize(502, 330);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/providers/magnatune.png"), QSize(), QIcon::Normal, QIcon::Off);
        MagnatuneDownloadDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(MagnatuneDownloadDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(MagnatuneDownloadDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        albums = new QTreeWidget(MagnatuneDownloadDialog);
        albums->setObjectName(QString::fromUtf8("albums"));
        albums->setSelectionMode(QAbstractItemView::NoSelection);
        albums->setRootIsDecorated(false);
        albums->setAllColumnsShowFocus(true);
        albums->header()->setVisible(false);

        verticalLayout->addWidget(albums);

        options = new QWidget(MagnatuneDownloadDialog);
        options->setObjectName(QString::fromUtf8("options"));
        formLayout = new QFormLayout(options);
        formLayout->setContentsMargins(0, 0, 0, 0);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(options);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        format = new QComboBox(options);
        format->setObjectName(QString::fromUtf8("format"));

        formLayout->setWidget(0, QFormLayout::FieldRole, format);

        label_3 = new QLabel(options);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        directory = new QLineEdit(options);
        directory->setObjectName(QString::fromUtf8("directory"));

        horizontalLayout->addWidget(directory);

        browse = new QPushButton(options);
        browse->setObjectName(QString::fromUtf8("browse"));

        horizontalLayout->addWidget(browse);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);


        verticalLayout->addWidget(options);

        button_box = new QDialogButtonBox(MagnatuneDownloadDialog);
        button_box->setObjectName(QString::fromUtf8("button_box"));
        button_box->setOrientation(Qt::Horizontal);
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Close|QDialogButtonBox::Ok);

        verticalLayout->addWidget(button_box);

        QWidget::setTabOrder(albums, format);
        QWidget::setTabOrder(format, directory);
        QWidget::setTabOrder(directory, browse);
        QWidget::setTabOrder(browse, button_box);

        retranslateUi(MagnatuneDownloadDialog);
        QObject::connect(button_box, SIGNAL(accepted()), MagnatuneDownloadDialog, SLOT(accept()));
        QObject::connect(button_box, SIGNAL(rejected()), MagnatuneDownloadDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MagnatuneDownloadDialog);
    } // setupUi

    void retranslateUi(QDialog *MagnatuneDownloadDialog)
    {
        MagnatuneDownloadDialog->setWindowTitle(QApplication::translate("MagnatuneDownloadDialog", "Magnatune Download", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MagnatuneDownloadDialog", "You are about to download the following albums", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = albums->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("MagnatuneDownloadDialog", "Progress", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("MagnatuneDownloadDialog", "Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MagnatuneDownloadDialog", "Format", 0, QApplication::UnicodeUTF8));
        format->clear();
        format->insertItems(0, QStringList()
         << QApplication::translate("MagnatuneDownloadDialog", "Ogg Vorbis", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MagnatuneDownloadDialog", "FLAC", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MagnatuneDownloadDialog", "WAV", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MagnatuneDownloadDialog", "VBR MP3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MagnatuneDownloadDialog", "128k MP3", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("MagnatuneDownloadDialog", "Directory", 0, QApplication::UnicodeUTF8));
        browse->setText(QApplication::translate("MagnatuneDownloadDialog", "Browse...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MagnatuneDownloadDialog: public Ui_MagnatuneDownloadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGNATUNEDOWNLOADDIALOG_H
