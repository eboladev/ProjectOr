/********************************************************************************
** Form generated from reading UI file 'suggestionwidget.ui'
**
** Created: Tue Apr 23 15:28:22 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUGGESTIONWIDGET_H
#define UI_SUGGESTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SuggestionWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QLabel *icon;
    QLabel *name;

    void setupUi(QWidget *SuggestionWidget)
    {
        if (SuggestionWidget->objectName().isEmpty())
            SuggestionWidget->setObjectName(QString::fromUtf8("SuggestionWidget"));
        SuggestionWidget->resize(464, 110);
        horizontalLayout_2 = new QHBoxLayout(SuggestionWidget);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        icon = new QLabel(SuggestionWidget);
        icon->setObjectName(QString::fromUtf8("icon"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(icon->sizePolicy().hasHeightForWidth());
        icon->setSizePolicy(sizePolicy);
        icon->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_2->addWidget(icon);

        name = new QLabel(SuggestionWidget);
        name->setObjectName(QString::fromUtf8("name"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy1);
        name->setCursor(QCursor(Qt::PointingHandCursor));
        name->setWordWrap(true);

        horizontalLayout_2->addWidget(name);


        retranslateUi(SuggestionWidget);

        QMetaObject::connectSlotsByName(SuggestionWidget);
    } // setupUi

    void retranslateUi(QWidget *SuggestionWidget)
    {
        SuggestionWidget->setWindowTitle(QApplication::translate("SuggestionWidget", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SuggestionWidget: public Ui_SuggestionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUGGESTIONWIDGET_H
