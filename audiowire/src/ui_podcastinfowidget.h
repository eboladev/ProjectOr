/********************************************************************************
** Form generated from reading UI file 'podcastinfowidget.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PODCASTINFOWIDGET_H
#define UI_PODCASTINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PodcastInfoWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *image;
    QSpacerItem *horizontalSpacer_2;
    QLabel *title;
    QLabel *description;
    QGridLayout *gridLayout;
    QLineEdit *website;
    QLabel *author_label;
    QLineEdit *owner;
    QLabel *website_label;
    QLineEdit *copyright;
    QLabel *copyright_label;
    QLineEdit *author;
    QLabel *owner_label;
    QLabel *subscribers_label;
    QLineEdit *subscribers;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PodcastInfoWidget)
    {
        if (PodcastInfoWidget->objectName().isEmpty())
            PodcastInfoWidget->setObjectName(QString::fromUtf8("PodcastInfoWidget"));
        PodcastInfoWidget->resize(398, 551);
        PodcastInfoWidget->setStyleSheet(QString::fromUtf8("#title {\n"
"	font-weight: bold;\n"
"}\n"
"\n"
"#description {\n"
"	font-size: smaller;\n"
"}\n"
"\n"
"QLineEdit {\n"
"  background: transparent;\n"
"}"));
        verticalLayout = new QVBoxLayout(PodcastInfoWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        image = new QLabel(PodcastInfoWidget);
        image->setObjectName(QString::fromUtf8("image"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(image->sizePolicy().hasHeightForWidth());
        image->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(image);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        title = new QLabel(PodcastInfoWidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setWordWrap(true);
        title->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(title);

        description = new QLabel(PodcastInfoWidget);
        description->setObjectName(QString::fromUtf8("description"));
        description->setWordWrap(true);
        description->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(description);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        website = new QLineEdit(PodcastInfoWidget);
        website->setObjectName(QString::fromUtf8("website"));
        website->setFrame(false);
        website->setReadOnly(true);

        gridLayout->addWidget(website, 4, 1, 1, 1);

        author_label = new QLabel(PodcastInfoWidget);
        author_label->setObjectName(QString::fromUtf8("author_label"));
        author_label->setProperty("field_label", QVariant(true));

        gridLayout->addWidget(author_label, 1, 0, 1, 1);

        owner = new QLineEdit(PodcastInfoWidget);
        owner->setObjectName(QString::fromUtf8("owner"));
        owner->setFrame(false);
        owner->setReadOnly(true);

        gridLayout->addWidget(owner, 2, 1, 1, 1);

        website_label = new QLabel(PodcastInfoWidget);
        website_label->setObjectName(QString::fromUtf8("website_label"));
        website_label->setProperty("field_label", QVariant(true));

        gridLayout->addWidget(website_label, 4, 0, 1, 1);

        copyright = new QLineEdit(PodcastInfoWidget);
        copyright->setObjectName(QString::fromUtf8("copyright"));
        copyright->setFrame(false);
        copyright->setReadOnly(true);

        gridLayout->addWidget(copyright, 0, 1, 1, 1);

        copyright_label = new QLabel(PodcastInfoWidget);
        copyright_label->setObjectName(QString::fromUtf8("copyright_label"));
        copyright_label->setProperty("field_label", QVariant(true));

        gridLayout->addWidget(copyright_label, 0, 0, 1, 1);

        author = new QLineEdit(PodcastInfoWidget);
        author->setObjectName(QString::fromUtf8("author"));
        author->setFrame(false);
        author->setReadOnly(true);

        gridLayout->addWidget(author, 1, 1, 1, 1);

        owner_label = new QLabel(PodcastInfoWidget);
        owner_label->setObjectName(QString::fromUtf8("owner_label"));
        owner_label->setProperty("field_label", QVariant(true));

        gridLayout->addWidget(owner_label, 2, 0, 1, 1);

        subscribers_label = new QLabel(PodcastInfoWidget);
        subscribers_label->setObjectName(QString::fromUtf8("subscribers_label"));
        subscribers_label->setProperty("field_label", QVariant(true));

        gridLayout->addWidget(subscribers_label, 3, 0, 1, 1);

        subscribers = new QLineEdit(PodcastInfoWidget);
        subscribers->setObjectName(QString::fromUtf8("subscribers"));
        subscribers->setFrame(false);
        subscribers->setReadOnly(true);

        gridLayout->addWidget(subscribers, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(PodcastInfoWidget);

        QMetaObject::connectSlotsByName(PodcastInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *PodcastInfoWidget)
    {
        PodcastInfoWidget->setWindowTitle(QApplication::translate("PodcastInfoWidget", "Form", 0, QApplication::UnicodeUTF8));
        author_label->setText(QApplication::translate("PodcastInfoWidget", "Author", 0, QApplication::UnicodeUTF8));
        website_label->setText(QApplication::translate("PodcastInfoWidget", "Website", 0, QApplication::UnicodeUTF8));
        copyright_label->setText(QApplication::translate("PodcastInfoWidget", "Copyright", 0, QApplication::UnicodeUTF8));
        owner_label->setText(QApplication::translate("PodcastInfoWidget", "Owner", 0, QApplication::UnicodeUTF8));
        subscribers_label->setText(QApplication::translate("PodcastInfoWidget", "Subscribers", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PodcastInfoWidget: public Ui_PodcastInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PODCASTINFOWIDGET_H
