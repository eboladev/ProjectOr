/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created: Tue Apr 23 15:28:24 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QStackedWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QTreeWidget *list;
    QVBoxLayout *verticalLayout_3;
    QLabel *title;
    QFrame *line_2;
    QStackedWidget *stacked_widget;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(827, 768);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        SettingsDialog->setWindowIcon(icon);
        horizontalLayout_2 = new QHBoxLayout(SettingsDialog);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        list = new QTreeWidget(SettingsDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        list->setHeaderItem(__qtreewidgetitem);
        list->setObjectName(QString::fromUtf8("list"));
        list->setMaximumSize(QSize(220, 16777215));
        list->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        list->setIconSize(QSize(32, 32));
        list->setRootIsDecorated(false);
        list->setItemsExpandable(false);
        list->setExpandsOnDoubleClick(false);
        list->header()->setVisible(false);

        horizontalLayout_2->addWidget(list);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        title = new QLabel(SettingsDialog);
        title->setObjectName(QString::fromUtf8("title"));

        verticalLayout_3->addWidget(title);

        line_2 = new QFrame(SettingsDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        stacked_widget = new QStackedWidget(SettingsDialog);
        stacked_widget->setObjectName(QString::fromUtf8("stacked_widget"));

        verticalLayout_3->addWidget(stacked_widget);

        line = new QFrame(SettingsDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        horizontalLayout_2->addLayout(verticalLayout_3);

        QWidget::setTabOrder(list, buttonBox);

        retranslateUi(SettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDialog, SLOT(reject()));

        stacked_widget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Preferences", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
