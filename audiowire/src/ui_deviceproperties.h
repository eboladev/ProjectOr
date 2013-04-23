/********************************************************************************
** Form generated from reading UI file 'deviceproperties.ui'
**
** Created: Tue Apr 23 15:28:22 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICEPROPERTIES_H
#define UI_DEVICEPROPERTIES_H

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
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "widgets/busyindicator.h"
#include "widgets/freespacebar.h"

QT_BEGIN_NAMESPACE

class Ui_DeviceProperties
{
public:
    QVBoxLayout *verticalLayout_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *name;
    QLabel *label;
    QListWidget *icon;
    FreeSpaceBar *free_space_bar;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *hardware_info_stack;
    QWidget *hardware_info_not_connected_page;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QWidget *hardware_info_page;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *hardware_info;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_9;
    QStackedWidget *formats_stack;
    QWidget *formats_page;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *supported_formats_container;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QListWidget *supported_formats;
    QLabel *label_3;
    QRadioButton *transcode_off;
    QRadioButton *transcode_unsupported;
    QRadioButton *transcode_all;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QComboBox *transcode_format;
    QSpacerItem *verticalSpacer;
    QWidget *formats_page_not_connected;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *open_device;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *formats_page_loading;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_3;
    BusyIndicator *label_8;
    QLabel *label_9;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DeviceProperties)
    {
        if (DeviceProperties->objectName().isEmpty())
            DeviceProperties->setObjectName(QString::fromUtf8("DeviceProperties"));
        DeviceProperties->resize(514, 488);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        DeviceProperties->setWindowIcon(icon1);
        verticalLayout_5 = new QVBoxLayout(DeviceProperties);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        tabWidget = new QTabWidget(DeviceProperties);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        name = new QLineEdit(tab);
        name->setObjectName(QString::fromUtf8("name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, name);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        icon = new QListWidget(tab);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        icon->setIconSize(QSize(48, 48));
        icon->setMovement(QListView::Static);
        icon->setFlow(QListView::LeftToRight);
        icon->setProperty("isWrapping", QVariant(false));
        icon->setSpacing(5);
        icon->setViewMode(QListView::IconMode);
        icon->setUniformItemSizes(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, icon);

        free_space_bar = new FreeSpaceBar(tab);
        free_space_bar->setObjectName(QString::fromUtf8("free_space_bar"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, free_space_bar);


        verticalLayout_4->addLayout(formLayout);

        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        hardware_info_stack = new QStackedWidget(groupBox);
        hardware_info_stack->setObjectName(QString::fromUtf8("hardware_info_stack"));
        hardware_info_not_connected_page = new QWidget();
        hardware_info_not_connected_page->setObjectName(QString::fromUtf8("hardware_info_not_connected_page"));
        verticalLayout = new QVBoxLayout(hardware_info_not_connected_page);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_6 = new QLabel(hardware_info_not_connected_page);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_6->setWordWrap(true);

        verticalLayout->addWidget(label_6);

        hardware_info_stack->addWidget(hardware_info_not_connected_page);
        hardware_info_page = new QWidget();
        hardware_info_page->setObjectName(QString::fromUtf8("hardware_info_page"));
        verticalLayout_3 = new QVBoxLayout(hardware_info_page);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        hardware_info = new QTableWidget(hardware_info_page);
        if (hardware_info->columnCount() < 2)
            hardware_info->setColumnCount(2);
        hardware_info->setObjectName(QString::fromUtf8("hardware_info"));
        hardware_info->setEditTriggers(QAbstractItemView::NoEditTriggers);
        hardware_info->setSelectionMode(QAbstractItemView::NoSelection);
        hardware_info->setCornerButtonEnabled(false);
        hardware_info->setColumnCount(2);
        hardware_info->horizontalHeader()->setVisible(false);
        hardware_info->horizontalHeader()->setStretchLastSection(true);
        hardware_info->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(hardware_info);

        hardware_info_stack->addWidget(hardware_info_page);

        verticalLayout_2->addWidget(hardware_info_stack);


        verticalLayout_4->addWidget(groupBox);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_9 = new QVBoxLayout(tab_2);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        formats_stack = new QStackedWidget(tab_2);
        formats_stack->setObjectName(QString::fromUtf8("formats_stack"));
        formats_page = new QWidget();
        formats_page->setObjectName(QString::fromUtf8("formats_page"));
        verticalLayout_7 = new QVBoxLayout(formats_page);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        supported_formats_container = new QGroupBox(formats_page);
        supported_formats_container->setObjectName(QString::fromUtf8("supported_formats_container"));
        verticalLayout_6 = new QVBoxLayout(supported_formats_container);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_5 = new QLabel(supported_formats_container);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_6->addWidget(label_5);

        supported_formats = new QListWidget(supported_formats_container);
        supported_formats->setObjectName(QString::fromUtf8("supported_formats"));
        supported_formats->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout_6->addWidget(supported_formats);


        verticalLayout_7->addWidget(supported_formats_container);

        label_3 = new QLabel(formats_page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        verticalLayout_7->addWidget(label_3);

        transcode_off = new QRadioButton(formats_page);
        transcode_off->setObjectName(QString::fromUtf8("transcode_off"));

        verticalLayout_7->addWidget(transcode_off);

        transcode_unsupported = new QRadioButton(formats_page);
        transcode_unsupported->setObjectName(QString::fromUtf8("transcode_unsupported"));
        transcode_unsupported->setChecked(true);

        verticalLayout_7->addWidget(transcode_unsupported);

        transcode_all = new QRadioButton(formats_page);
        transcode_all->setObjectName(QString::fromUtf8("transcode_all"));

        verticalLayout_7->addWidget(transcode_all);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(formats_page);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        transcode_format = new QComboBox(formats_page);
        transcode_format->setObjectName(QString::fromUtf8("transcode_format"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(transcode_format->sizePolicy().hasHeightForWidth());
        transcode_format->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(transcode_format);


        verticalLayout_7->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 183, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        formats_stack->addWidget(formats_page);
        formats_page_not_connected = new QWidget();
        formats_page_not_connected->setObjectName(QString::fromUtf8("formats_page_not_connected"));
        verticalLayout_8 = new QVBoxLayout(formats_page_not_connected);
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_7 = new QLabel(formats_page_not_connected);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setWordWrap(true);

        verticalLayout_8->addWidget(label_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        open_device = new QPushButton(formats_page_not_connected);
        open_device->setObjectName(QString::fromUtf8("open_device"));

        horizontalLayout_2->addWidget(open_device);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_8->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 309, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        formats_stack->addWidget(formats_page_not_connected);
        formats_page_loading = new QWidget();
        formats_page_loading->setObjectName(QString::fromUtf8("formats_page_loading"));
        verticalLayout_10 = new QVBoxLayout(formats_page_loading);
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_8 = new BusyIndicator(formats_page_loading);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_3->addWidget(label_8);

        label_9 = new QLabel(formats_page_loading);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_9);


        verticalLayout_10->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 358, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_3);

        formats_stack->addWidget(formats_page_loading);

        verticalLayout_9->addWidget(formats_stack);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_5->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(DeviceProperties);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_5->addWidget(buttonBox);

        QWidget::setTabOrder(name, icon);
        QWidget::setTabOrder(icon, hardware_info);
        QWidget::setTabOrder(hardware_info, tabWidget);
        QWidget::setTabOrder(tabWidget, supported_formats);
        QWidget::setTabOrder(supported_formats, transcode_format);
        QWidget::setTabOrder(transcode_format, buttonBox);

        retranslateUi(DeviceProperties);
        QObject::connect(buttonBox, SIGNAL(accepted()), DeviceProperties, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DeviceProperties, SLOT(reject()));

        tabWidget->setCurrentIndex(0);
        hardware_info_stack->setCurrentIndex(1);
        formats_stack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DeviceProperties);
    } // setupUi

    void retranslateUi(QDialog *DeviceProperties)
    {
        DeviceProperties->setWindowTitle(QApplication::translate("DeviceProperties", "Device Properties", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DeviceProperties", "Name", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DeviceProperties", "Icon", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("DeviceProperties", "Hardware information", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("DeviceProperties", "Hardware information is only available while the device is connected.", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DeviceProperties", "Information", 0, QApplication::UnicodeUTF8));
        supported_formats_container->setTitle(QApplication::translate("DeviceProperties", "Supported formats", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("DeviceProperties", "This device supports the following file formats:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DeviceProperties", "Clementine can automatically convert the music you copy to this device into a format that it can play.", 0, QApplication::UnicodeUTF8));
        transcode_off->setText(QApplication::translate("DeviceProperties", "Do not convert any music", 0, QApplication::UnicodeUTF8));
        transcode_unsupported->setText(QApplication::translate("DeviceProperties", "Convert any music that the device can't play", 0, QApplication::UnicodeUTF8));
        transcode_all->setText(QApplication::translate("DeviceProperties", "Convert all music", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DeviceProperties", "Preferred format", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("DeviceProperties", "This device must be connected and opened before Clementine can see what file formats it supports.", 0, QApplication::UnicodeUTF8));
        open_device->setText(QApplication::translate("DeviceProperties", "Open device", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("DeviceProperties", "Querying device...", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("DeviceProperties", "File formats", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DeviceProperties: public Ui_DeviceProperties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICEPROPERTIES_H
