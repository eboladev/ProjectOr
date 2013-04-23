/********************************************************************************
** Form generated from reading UI file 'librarysettingspage.ui'
**
** Created: Tue Apr 23 15:28:22 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARYSETTINGSPAGE_H
#define UI_LIBRARYSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LibrarySettingsPage
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QListView *list;
    QVBoxLayout *verticalLayout;
    QPushButton *add;
    QPushButton *remove;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *startup_scan;
    QCheckBox *monitor;
    QLabel *label_2;
    QLineEdit *cover_art_patterns;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *auto_open;
    QCheckBox *pretty_covers;
    QCheckBox *show_dividers;

    void setupUi(QWidget *LibrarySettingsPage)
    {
        if (LibrarySettingsPage->objectName().isEmpty())
            LibrarySettingsPage->setObjectName(QString::fromUtf8("LibrarySettingsPage"));
        LibrarySettingsPage->resize(509, 395);
        verticalLayout_3 = new QVBoxLayout(LibrarySettingsPage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(LibrarySettingsPage);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        list = new QListView(LibrarySettingsPage);
        list->setObjectName(QString::fromUtf8("list"));
        list->setIconSize(QSize(16, 16));
        list->setUniformItemSizes(true);

        horizontalLayout->addWidget(list);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        add = new QPushButton(LibrarySettingsPage);
        add->setObjectName(QString::fromUtf8("add"));
        add->setFlat(false);

        verticalLayout->addWidget(add);

        remove = new QPushButton(LibrarySettingsPage);
        remove->setObjectName(QString::fromUtf8("remove"));

        verticalLayout->addWidget(remove);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        groupBox_2 = new QGroupBox(LibrarySettingsPage);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        startup_scan = new QCheckBox(groupBox_2);
        startup_scan->setObjectName(QString::fromUtf8("startup_scan"));

        verticalLayout_4->addWidget(startup_scan);

        monitor = new QCheckBox(groupBox_2);
        monitor->setObjectName(QString::fromUtf8("monitor"));

        verticalLayout_4->addWidget(monitor);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        cover_art_patterns = new QLineEdit(groupBox_2);
        cover_art_patterns->setObjectName(QString::fromUtf8("cover_art_patterns"));

        verticalLayout_4->addWidget(cover_art_patterns);


        verticalLayout_3->addWidget(groupBox_2);

        groupBox = new QGroupBox(LibrarySettingsPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        auto_open = new QCheckBox(groupBox);
        auto_open->setObjectName(QString::fromUtf8("auto_open"));

        verticalLayout_2->addWidget(auto_open);

        pretty_covers = new QCheckBox(groupBox);
        pretty_covers->setObjectName(QString::fromUtf8("pretty_covers"));

        verticalLayout_2->addWidget(pretty_covers);

        show_dividers = new QCheckBox(groupBox);
        show_dividers->setObjectName(QString::fromUtf8("show_dividers"));

        verticalLayout_2->addWidget(show_dividers);


        verticalLayout_3->addWidget(groupBox);

        QWidget::setTabOrder(list, add);
        QWidget::setTabOrder(add, remove);

        retranslateUi(LibrarySettingsPage);

        QMetaObject::connectSlotsByName(LibrarySettingsPage);
    } // setupUi

    void retranslateUi(QWidget *LibrarySettingsPage)
    {
        LibrarySettingsPage->setWindowTitle(QApplication::translate("LibrarySettingsPage", "Music Library", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LibrarySettingsPage", "These folders will be scanned for music to make up your library", 0, QApplication::UnicodeUTF8));
        add->setText(QApplication::translate("LibrarySettingsPage", "Add new folder...", 0, QApplication::UnicodeUTF8));
        remove->setText(QApplication::translate("LibrarySettingsPage", "Remove folder", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("LibrarySettingsPage", "Automatic updating", 0, QApplication::UnicodeUTF8));
        startup_scan->setText(QApplication::translate("LibrarySettingsPage", "Update the library when Clementine starts", 0, QApplication::UnicodeUTF8));
        monitor->setText(QApplication::translate("LibrarySettingsPage", "Monitor the library for changes", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("LibrarySettingsPage", "Preferred album art filenames (comma separated)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cover_art_patterns->setToolTip(QApplication::translate("LibrarySettingsPage", "When looking for album art Clementine will first look for picture files that contain one of these words.\n"
"If there are no matches then it will use the largest image in the directory.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("LibrarySettingsPage", "Display options", 0, QApplication::UnicodeUTF8));
        auto_open->setText(QApplication::translate("LibrarySettingsPage", "Automatically open single categories in the library tree", 0, QApplication::UnicodeUTF8));
        pretty_covers->setText(QApplication::translate("LibrarySettingsPage", "Show cover art in library", 0, QApplication::UnicodeUTF8));
        show_dividers->setText(QApplication::translate("LibrarySettingsPage", "Show dividers", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LibrarySettingsPage: public Ui_LibrarySettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARYSETTINGSPAGE_H
