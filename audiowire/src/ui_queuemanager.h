/********************************************************************************
** Form generated from reading UI file 'queuemanager.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUEUEMANAGER_H
#define UI_QUEUEMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QueueManager
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QTreeView *list;
    QVBoxLayout *verticalLayout;
    QPushButton *move_up;
    QPushButton *move_down;
    QPushButton *remove;
    QPushButton *clear;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QueueManager)
    {
        if (QueueManager->objectName().isEmpty())
            QueueManager->setObjectName(QString::fromUtf8("QueueManager"));
        QueueManager->resize(582, 363);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        QueueManager->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(QueueManager);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        list = new QTreeView(QueueManager);
        list->setObjectName(QString::fromUtf8("list"));
        list->setAcceptDrops(true);
        list->setProperty("showDropIndicator", QVariant(true));
        list->setDragEnabled(true);
        list->setDragDropMode(QAbstractItemView::DragDrop);
        list->setDefaultDropAction(Qt::MoveAction);
        list->setAlternatingRowColors(true);
        list->setSelectionMode(QAbstractItemView::ExtendedSelection);
        list->setSelectionBehavior(QAbstractItemView::SelectRows);
        list->setRootIsDecorated(false);
        list->header()->setVisible(false);

        horizontalLayout->addWidget(list);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        move_up = new QPushButton(QueueManager);
        move_up->setObjectName(QString::fromUtf8("move_up"));
        move_up->setEnabled(false);
        move_up->setIconSize(QSize(16, 16));

        verticalLayout->addWidget(move_up);

        move_down = new QPushButton(QueueManager);
        move_down->setObjectName(QString::fromUtf8("move_down"));
        move_down->setEnabled(false);
        move_down->setIconSize(QSize(16, 16));

        verticalLayout->addWidget(move_down);

        remove = new QPushButton(QueueManager);
        remove->setObjectName(QString::fromUtf8("remove"));
        remove->setEnabled(false);

        verticalLayout->addWidget(remove);

        clear = new QPushButton(QueueManager);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setEnabled(false);
        clear->setIconSize(QSize(16, 16));

        verticalLayout->addWidget(clear);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(QueueManager);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(QueueManager);
        QObject::connect(buttonBox, SIGNAL(accepted()), QueueManager, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QueueManager, SLOT(reject()));

        QMetaObject::connectSlotsByName(QueueManager);
    } // setupUi

    void retranslateUi(QDialog *QueueManager)
    {
        QueueManager->setWindowTitle(QApplication::translate("QueueManager", "Queue Manager", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        move_up->setToolTip(QApplication::translate("QueueManager", "Move up", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        move_up->setShortcut(QApplication::translate("QueueManager", "Ctrl+Up", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        move_down->setToolTip(QApplication::translate("QueueManager", "Move down", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        move_down->setShortcut(QApplication::translate("QueueManager", "Ctrl+Down", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        remove->setToolTip(QApplication::translate("QueueManager", "Remove", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        remove->setText(QString());
#ifndef QT_NO_TOOLTIP
        clear->setToolTip(QApplication::translate("QueueManager", "Clear", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        clear->setShortcut(QApplication::translate("QueueManager", "Ctrl+K", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QueueManager: public Ui_QueueManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUEUEMANAGER_H
