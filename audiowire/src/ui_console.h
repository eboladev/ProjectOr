/********************************************************************************
** Form generated from reading UI file 'console.ui'
**
** Created: Tue Apr 23 15:28:24 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLE_H
#define UI_CONSOLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Console
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTextBrowser *output;
    QHBoxLayout *horizontalLayout;
    QLineEdit *query;
    QPushButton *run;

    void setupUi(QDialog *Console)
    {
        if (Console->objectName().isEmpty())
            Console->setObjectName(QString::fromUtf8("Console"));
        Console->resize(545, 347);
        gridLayout = new QGridLayout(Console);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        output = new QTextBrowser(Console);
        output->setObjectName(QString::fromUtf8("output"));

        verticalLayout->addWidget(output);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        query = new QLineEdit(Console);
        query->setObjectName(QString::fromUtf8("query"));

        horizontalLayout->addWidget(query);

        run = new QPushButton(Console);
        run->setObjectName(QString::fromUtf8("run"));

        horizontalLayout->addWidget(run);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        QWidget::setTabOrder(query, run);
        QWidget::setTabOrder(run, output);

        retranslateUi(Console);

        QMetaObject::connectSlotsByName(Console);
    } // setupUi

    void retranslateUi(QDialog *Console)
    {
        Console->setWindowTitle(QApplication::translate("Console", "Console", 0, QApplication::UnicodeUTF8));
        run->setText(QApplication::translate("Console", "Run", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Console: public Ui_Console {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLE_H
