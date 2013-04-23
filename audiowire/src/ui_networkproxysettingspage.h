/********************************************************************************
** Form generated from reading UI file 'networkproxysettingspage.ui'
**
** Created: Tue Apr 23 15:28:24 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKPROXYSETTINGSPAGE_H
#define UI_NETWORKPROXYSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetworkProxySettingsPage
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *proxy_system;
    QRadioButton *proxy_direct;
    QRadioButton *proxy_manual;
    QWidget *proxy_manual_container;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *proxy_type;
    QLineEdit *proxy_hostname;
    QLabel *label_15;
    QSpinBox *proxy_port;
    QGroupBox *proxy_auth;
    QFormLayout *formLayout_7;
    QLabel *label_16;
    QLineEdit *proxy_username;
    QLabel *label_17;
    QLineEdit *proxy_password;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QWidget *NetworkProxySettingsPage)
    {
        if (NetworkProxySettingsPage->objectName().isEmpty())
            NetworkProxySettingsPage->setObjectName(QString::fromUtf8("NetworkProxySettingsPage"));
        NetworkProxySettingsPage->resize(400, 300);
        verticalLayout = new QVBoxLayout(NetworkProxySettingsPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        proxy_system = new QRadioButton(NetworkProxySettingsPage);
        proxy_system->setObjectName(QString::fromUtf8("proxy_system"));
        proxy_system->setChecked(true);

        verticalLayout->addWidget(proxy_system);

        proxy_direct = new QRadioButton(NetworkProxySettingsPage);
        proxy_direct->setObjectName(QString::fromUtf8("proxy_direct"));

        verticalLayout->addWidget(proxy_direct);

        proxy_manual = new QRadioButton(NetworkProxySettingsPage);
        proxy_manual->setObjectName(QString::fromUtf8("proxy_manual"));

        verticalLayout->addWidget(proxy_manual);

        proxy_manual_container = new QWidget(NetworkProxySettingsPage);
        proxy_manual_container->setObjectName(QString::fromUtf8("proxy_manual_container"));
        proxy_manual_container->setEnabled(false);
        verticalLayout_5 = new QVBoxLayout(proxy_manual_container);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(24, -1, -1, -1);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        proxy_type = new QComboBox(proxy_manual_container);
        proxy_type->setObjectName(QString::fromUtf8("proxy_type"));

        horizontalLayout_5->addWidget(proxy_type);

        proxy_hostname = new QLineEdit(proxy_manual_container);
        proxy_hostname->setObjectName(QString::fromUtf8("proxy_hostname"));

        horizontalLayout_5->addWidget(proxy_hostname);

        label_15 = new QLabel(proxy_manual_container);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_5->addWidget(label_15);

        proxy_port = new QSpinBox(proxy_manual_container);
        proxy_port->setObjectName(QString::fromUtf8("proxy_port"));
        proxy_port->setMaximum(65535);
        proxy_port->setValue(8080);

        horizontalLayout_5->addWidget(proxy_port);


        verticalLayout_5->addLayout(horizontalLayout_5);

        proxy_auth = new QGroupBox(proxy_manual_container);
        proxy_auth->setObjectName(QString::fromUtf8("proxy_auth"));
        proxy_auth->setCheckable(true);
        proxy_auth->setChecked(false);
        formLayout_7 = new QFormLayout(proxy_auth);
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        formLayout_7->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_16 = new QLabel(proxy_auth);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_16);

        proxy_username = new QLineEdit(proxy_auth);
        proxy_username->setObjectName(QString::fromUtf8("proxy_username"));

        formLayout_7->setWidget(0, QFormLayout::FieldRole, proxy_username);

        label_17 = new QLabel(proxy_auth);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_7->setWidget(1, QFormLayout::LabelRole, label_17);

        proxy_password = new QLineEdit(proxy_auth);
        proxy_password->setObjectName(QString::fromUtf8("proxy_password"));
        proxy_password->setEchoMode(QLineEdit::Password);

        formLayout_7->setWidget(1, QFormLayout::FieldRole, proxy_password);


        verticalLayout_5->addWidget(proxy_auth);


        verticalLayout->addWidget(proxy_manual_container);

        verticalSpacer_5 = new QSpacerItem(20, 36, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);


        retranslateUi(NetworkProxySettingsPage);
        QObject::connect(proxy_manual, SIGNAL(toggled(bool)), proxy_manual_container, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(NetworkProxySettingsPage);
    } // setupUi

    void retranslateUi(QWidget *NetworkProxySettingsPage)
    {
        NetworkProxySettingsPage->setWindowTitle(QApplication::translate("NetworkProxySettingsPage", "Network Proxy", 0, QApplication::UnicodeUTF8));
        proxy_system->setText(QApplication::translate("NetworkProxySettingsPage", "Use the system proxy settings", 0, QApplication::UnicodeUTF8));
        proxy_direct->setText(QApplication::translate("NetworkProxySettingsPage", "Direct internet connection", 0, QApplication::UnicodeUTF8));
        proxy_manual->setText(QApplication::translate("NetworkProxySettingsPage", "Manual proxy configuration", 0, QApplication::UnicodeUTF8));
        proxy_type->clear();
        proxy_type->insertItems(0, QStringList()
         << QApplication::translate("NetworkProxySettingsPage", "HTTP proxy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NetworkProxySettingsPage", "SOCKS proxy", 0, QApplication::UnicodeUTF8)
        );
        label_15->setText(QApplication::translate("NetworkProxySettingsPage", "Port", 0, QApplication::UnicodeUTF8));
        proxy_auth->setTitle(QApplication::translate("NetworkProxySettingsPage", "Use authentication", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("NetworkProxySettingsPage", "Username", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("NetworkProxySettingsPage", "Password", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NetworkProxySettingsPage: public Ui_NetworkProxySettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKPROXYSETTINGSPAGE_H
