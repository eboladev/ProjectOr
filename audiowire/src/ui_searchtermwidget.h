/********************************************************************************
** Form generated from reading UI file 'searchtermwidget.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHTERMWIDGET_H
#define UI_SEARCHTERMWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QTimeEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "widgets/ratingwidget.h"

QT_BEGIN_NAMESPACE

class Ui_SmartPlaylistSearchTermWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QFrame *container;
    QHBoxLayout *horizontalLayout;
    QComboBox *field;
    QComboBox *op;
    QStackedWidget *value_stack;
    QWidget *page_text;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *value_text;
    QWidget *page_rating;
    QVBoxLayout *verticalLayout_6;
    RatingWidget *value_rating;
    QWidget *page_time;
    QVBoxLayout *verticalLayout_5;
    QTimeEdit *value_time;
    QWidget *page_number;
    QVBoxLayout *verticalLayout_3;
    QSpinBox *value_number;
    QWidget *page_date;
    QVBoxLayout *verticalLayout_4;
    QDateEdit *value_date;
    QWidget *page_date_numeric;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *value_date_numeric;
    QComboBox *date_type;
    QWidget *page_date_relative;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *value_date_numeric1;
    QLabel *label;
    QSpinBox *value_date_numeric2;
    QComboBox *date_type_relative;
    QLabel *label_2;
    QToolButton *remove;

    void setupUi(QWidget *SmartPlaylistSearchTermWidget)
    {
        if (SmartPlaylistSearchTermWidget->objectName().isEmpty())
            SmartPlaylistSearchTermWidget->setObjectName(QString::fromUtf8("SmartPlaylistSearchTermWidget"));
        SmartPlaylistSearchTermWidget->resize(640, 38);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SmartPlaylistSearchTermWidget->sizePolicy().hasHeightForWidth());
        SmartPlaylistSearchTermWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(SmartPlaylistSearchTermWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(SmartPlaylistSearchTermWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        container = new QFrame(frame);
        container->setObjectName(QString::fromUtf8("container"));
        horizontalLayout = new QHBoxLayout(container);
#ifndef Q_OS_MAC
        horizontalLayout->setSpacing(6);
#endif
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        field = new QComboBox(container);
        field->setObjectName(QString::fromUtf8("field"));

        horizontalLayout->addWidget(field);

        op = new QComboBox(container);
        op->setObjectName(QString::fromUtf8("op"));

        horizontalLayout->addWidget(op);

        value_stack = new QStackedWidget(container);
        value_stack->setObjectName(QString::fromUtf8("value_stack"));
        page_text = new QWidget();
        page_text->setObjectName(QString::fromUtf8("page_text"));
        verticalLayout_2 = new QVBoxLayout(page_text);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        value_text = new QLineEdit(page_text);
        value_text->setObjectName(QString::fromUtf8("value_text"));

        verticalLayout_2->addWidget(value_text);

        value_stack->addWidget(page_text);
        page_rating = new QWidget();
        page_rating->setObjectName(QString::fromUtf8("page_rating"));
        verticalLayout_6 = new QVBoxLayout(page_rating);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        value_rating = new RatingWidget(page_rating);
        value_rating->setObjectName(QString::fromUtf8("value_rating"));

        verticalLayout_6->addWidget(value_rating);

        value_stack->addWidget(page_rating);
        page_time = new QWidget();
        page_time->setObjectName(QString::fromUtf8("page_time"));
        verticalLayout_5 = new QVBoxLayout(page_time);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        value_time = new QTimeEdit(page_time);
        value_time->setObjectName(QString::fromUtf8("value_time"));
        value_time->setDisplayFormat(QString::fromUtf8("mm:ss"));

        verticalLayout_5->addWidget(value_time);

        value_stack->addWidget(page_time);
        page_number = new QWidget();
        page_number->setObjectName(QString::fromUtf8("page_number"));
        verticalLayout_3 = new QVBoxLayout(page_number);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        value_number = new QSpinBox(page_number);
        value_number->setObjectName(QString::fromUtf8("value_number"));
        value_number->setMaximum(1000000);

        verticalLayout_3->addWidget(value_number);

        value_stack->addWidget(page_number);
        page_date = new QWidget();
        page_date->setObjectName(QString::fromUtf8("page_date"));
        verticalLayout_4 = new QVBoxLayout(page_date);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        value_date = new QDateEdit(page_date);
        value_date->setObjectName(QString::fromUtf8("value_date"));
        value_date->setCalendarPopup(true);

        verticalLayout_4->addWidget(value_date);

        value_stack->addWidget(page_date);
        page_date_numeric = new QWidget();
        page_date_numeric->setObjectName(QString::fromUtf8("page_date_numeric"));
        horizontalLayout_3 = new QHBoxLayout(page_date_numeric);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, 0);
        value_date_numeric = new QSpinBox(page_date_numeric);
        value_date_numeric->setObjectName(QString::fromUtf8("value_date_numeric"));
        value_date_numeric->setMinimum(1);
        value_date_numeric->setMaximum(999);

        horizontalLayout_3->addWidget(value_date_numeric);

        date_type = new QComboBox(page_date_numeric);
        date_type->setObjectName(QString::fromUtf8("date_type"));

        horizontalLayout_3->addWidget(date_type);

        value_stack->addWidget(page_date_numeric);
        page_date_relative = new QWidget();
        page_date_relative->setObjectName(QString::fromUtf8("page_date_relative"));
        horizontalLayout_4 = new QHBoxLayout(page_date_relative);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, 0);
        value_date_numeric1 = new QSpinBox(page_date_relative);
        value_date_numeric1->setObjectName(QString::fromUtf8("value_date_numeric1"));
        value_date_numeric1->setMinimum(0);
        value_date_numeric1->setMaximum(999);
        value_date_numeric1->setValue(1);

        horizontalLayout_4->addWidget(value_date_numeric1);

        label = new QLabel(page_date_relative);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label);

        value_date_numeric2 = new QSpinBox(page_date_relative);
        value_date_numeric2->setObjectName(QString::fromUtf8("value_date_numeric2"));
        value_date_numeric2->setMinimum(1);
        value_date_numeric2->setMaximum(999);
        value_date_numeric2->setValue(2);

        horizontalLayout_4->addWidget(value_date_numeric2);

        date_type_relative = new QComboBox(page_date_relative);
        date_type_relative->setObjectName(QString::fromUtf8("date_type_relative"));

        horizontalLayout_4->addWidget(date_type_relative);

        label_2 = new QLabel(page_date_relative);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_2);

        value_stack->addWidget(page_date_relative);

        horizontalLayout->addWidget(value_stack);


        horizontalLayout_2->addWidget(container);

        remove = new QToolButton(frame);
        remove->setObjectName(QString::fromUtf8("remove"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(remove->sizePolicy().hasHeightForWidth());
        remove->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(remove);


        verticalLayout->addWidget(frame);


        retranslateUi(SmartPlaylistSearchTermWidget);

        QMetaObject::connectSlotsByName(SmartPlaylistSearchTermWidget);
    } // setupUi

    void retranslateUi(QWidget *SmartPlaylistSearchTermWidget)
    {
        SmartPlaylistSearchTermWidget->setWindowTitle(QApplication::translate("SmartPlaylistSearchTermWidget", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SmartPlaylistSearchTermWidget", "and", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SmartPlaylistSearchTermWidget", "ago", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SmartPlaylistSearchTermWidget: public Ui_SmartPlaylistSearchTermWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHTERMWIDGET_H
