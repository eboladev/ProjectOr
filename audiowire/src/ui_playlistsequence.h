/********************************************************************************
** Form generated from reading UI file 'playlistsequence.ui'
**
** Created: Tue Apr 23 15:28:23 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYLISTSEQUENCE_H
#define UI_PLAYLISTSEQUENCE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlaylistSequence
{
public:
    QAction *action_repeat_off;
    QAction *action_repeat_track;
    QAction *action_repeat_album;
    QAction *action_repeat_playlist;
    QAction *action_shuffle_off;
    QAction *action_shuffle_inside_album;
    QAction *action_shuffle_all;
    QAction *action_shuffle_albums;
    QHBoxLayout *horizontalLayout;
    QToolButton *repeat;
    QToolButton *shuffle;

    void setupUi(QWidget *PlaylistSequence)
    {
        if (PlaylistSequence->objectName().isEmpty())
            PlaylistSequence->setObjectName(QString::fromUtf8("PlaylistSequence"));
        PlaylistSequence->resize(80, 37);
        PlaylistSequence->setStyleSheet(QString::fromUtf8("QToolButton, QToolButton:hover, QToolButton:pressed {\n"
"  border: 0px;\n"
"  background: transparent;\n"
"}\n"
""));
        action_repeat_off = new QAction(PlaylistSequence);
        action_repeat_off->setObjectName(QString::fromUtf8("action_repeat_off"));
        action_repeat_off->setCheckable(true);
        action_repeat_off->setChecked(true);
        action_repeat_track = new QAction(PlaylistSequence);
        action_repeat_track->setObjectName(QString::fromUtf8("action_repeat_track"));
        action_repeat_track->setCheckable(true);
        action_repeat_album = new QAction(PlaylistSequence);
        action_repeat_album->setObjectName(QString::fromUtf8("action_repeat_album"));
        action_repeat_album->setCheckable(true);
        action_repeat_playlist = new QAction(PlaylistSequence);
        action_repeat_playlist->setObjectName(QString::fromUtf8("action_repeat_playlist"));
        action_repeat_playlist->setCheckable(true);
        action_shuffle_off = new QAction(PlaylistSequence);
        action_shuffle_off->setObjectName(QString::fromUtf8("action_shuffle_off"));
        action_shuffle_off->setCheckable(true);
        action_shuffle_off->setChecked(true);
        action_shuffle_inside_album = new QAction(PlaylistSequence);
        action_shuffle_inside_album->setObjectName(QString::fromUtf8("action_shuffle_inside_album"));
        action_shuffle_inside_album->setCheckable(true);
        action_shuffle_all = new QAction(PlaylistSequence);
        action_shuffle_all->setObjectName(QString::fromUtf8("action_shuffle_all"));
        action_shuffle_all->setCheckable(true);
        action_shuffle_albums = new QAction(PlaylistSequence);
        action_shuffle_albums->setObjectName(QString::fromUtf8("action_shuffle_albums"));
        action_shuffle_albums->setCheckable(true);
        horizontalLayout = new QHBoxLayout(PlaylistSequence);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        repeat = new QToolButton(PlaylistSequence);
        repeat->setObjectName(QString::fromUtf8("repeat"));
        repeat->setIconSize(QSize(16, 16));
        repeat->setCheckable(true);
        repeat->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(repeat);

        shuffle = new QToolButton(PlaylistSequence);
        shuffle->setObjectName(QString::fromUtf8("shuffle"));
        shuffle->setIconSize(QSize(16, 16));
        shuffle->setCheckable(true);
        shuffle->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(shuffle);


        retranslateUi(PlaylistSequence);

        QMetaObject::connectSlotsByName(PlaylistSequence);
    } // setupUi

    void retranslateUi(QWidget *PlaylistSequence)
    {
        action_repeat_off->setText(QApplication::translate("PlaylistSequence", "Don't repeat", 0, QApplication::UnicodeUTF8));
        action_repeat_track->setText(QApplication::translate("PlaylistSequence", "Repeat track", 0, QApplication::UnicodeUTF8));
        action_repeat_album->setText(QApplication::translate("PlaylistSequence", "Repeat album", 0, QApplication::UnicodeUTF8));
        action_repeat_playlist->setText(QApplication::translate("PlaylistSequence", "Repeat playlist", 0, QApplication::UnicodeUTF8));
        action_shuffle_off->setText(QApplication::translate("PlaylistSequence", "Don't shuffle", 0, QApplication::UnicodeUTF8));
        action_shuffle_inside_album->setText(QApplication::translate("PlaylistSequence", "Shuffle tracks in this album", 0, QApplication::UnicodeUTF8));
        action_shuffle_all->setText(QApplication::translate("PlaylistSequence", "Shuffle all", 0, QApplication::UnicodeUTF8));
        action_shuffle_albums->setText(QApplication::translate("PlaylistSequence", "Shuffle albums", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        repeat->setToolTip(QApplication::translate("PlaylistSequence", "Repeat", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        shuffle->setToolTip(QApplication::translate("PlaylistSequence", "Shuffle", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        Q_UNUSED(PlaylistSequence);
    } // retranslateUi

};

namespace Ui {
    class PlaylistSequence: public Ui_PlaylistSequence {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYLISTSEQUENCE_H
