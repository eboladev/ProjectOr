/********************************************************************************
** Form generated from reading UI file 'lastfmstationdialog.ui'
**
** Created: Tue Apr 23 15:28:24 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LASTFMSTATIONDIALOG_H
#define UI_LASTFMSTATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LastFMStationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QComboBox *type;
    QLineEdit *content;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LastFMStationDialog)
    {
        if (LastFMStationDialog->objectName().isEmpty())
            LastFMStationDialog->setObjectName(QString::fromUtf8("LastFMStationDialog"));
        LastFMStationDialog->resize(407, 126);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/last.fm/as.png"), QSize(), QIcon::Normal, QIcon::Off);
        LastFMStationDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(LastFMStationDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(LastFMStationDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        type = new QComboBox(LastFMStationDialog);
        type->setObjectName(QString::fromUtf8("type"));

        horizontalLayout->addWidget(type);

        content = new QLineEdit(LastFMStationDialog);
        content->setObjectName(QString::fromUtf8("content"));

        horizontalLayout->addWidget(content);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(LastFMStationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(LastFMStationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LastFMStationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LastFMStationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LastFMStationDialog);
    } // setupUi

    void retranslateUi(QDialog *LastFMStationDialog)
    {
        LastFMStationDialog->setWindowTitle(QApplication::translate("LastFMStationDialog", "Play Artist or Tag", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LastFMStationDialog", "Enter an <b>artist</b> or <b>tag</b> to start listening to Last.fm radio.", 0, QApplication::UnicodeUTF8));
        type->clear();
        type->insertItems(0, QStringList()
         << QApplication::translate("LastFMStationDialog", "Artist", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LastFMStationDialog", "Tag", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LastFMStationDialog", "Custom", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class LastFMStationDialog: public Ui_LastFMStationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LASTFMSTATIONDIALOG_H
