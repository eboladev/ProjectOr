/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Apr 23 15:28:24 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "analyzers/analyzercontainer.h"
#include "playlist/playlistcontainer.h"
#include "playlist/playlistsequence.h"
#include "widgets/fancytabwidget.h"
#include "widgets/multiloadingindicator.h"
#include "widgets/nowplayingwidget.h"
#include "widgets/sliderwidget.h"
#include "widgets/trackslider.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_previous_track;
    QAction *action_play_pause;
    QAction *action_stop;
    QAction *action_next_track;
    QAction *action_quit;
    QAction *action_stop_after_this_track;
    QAction *action_love;
    QAction *action_ban;
    QAction *action_clear_playlist;
    QAction *action_edit_track;
    QAction *action_renumber_tracks;
    QAction *action_selection_set_value;
    QAction *action_edit_value;
    QAction *action_configure;
    QAction *action_about;
    QAction *action_shuffle;
    QAction *action_add_file;
    QAction *action_add_stream;
    QAction *action_open_media;
    QAction *action_open_cd;
    QAction *action_cover_manager;
    QAction *action_rain;
    QAction *action_hypnotoad;
    QAction *action_enterprise;
    QAction *action_kittens;
    QAction *action_console;
    QAction *action_shuffle_mode;
    QAction *action_repeat_mode;
    QAction *action_remove_from_playlist;
    QAction *action_equalizer;
    QAction *action_transcode;
    QAction *action_add_folder;
    QAction *action_jump;
    QAction *action_new_playlist;
    QAction *action_save_playlist;
    QAction *action_load_playlist;
    QAction *action_next_playlist;
    QAction *action_previous_playlist;
    QAction *action_update_library;
    QAction *action_visualisations;
    QAction *action_queue_manager;
    QAction *action_about_qt;
    QAction *action_mute;
    QAction *action_full_library_scan;
    QAction *action_auto_complete_tags;
    QAction *action_toggle_scrobbling;
    QAction *action_add_podcast;
    QAction *action_remove_duplicates;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_8;
    QSplitter *splitter;
    QWidget *sidebar_layout;
    QVBoxLayout *verticalLayout_4;
    FancyTabWidget *tabs;
    NowPlayingWidget *now_playing;
    QWidget *playlist_layout;
    QVBoxLayout *verticalLayout_7;
    PlaylistContainer *playlist;
    QHBoxLayout *horizontalLayout_4;
    QFrame *line_6;
    QWidget *player_controls_container;
    QVBoxLayout *player_controls_layout;
    QFrame *player_controls;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *clear_playlist_button;
    QFrame *line_3;
    QToolButton *back_button;
    QToolButton *pause_play_button;
    QToolButton *stop_button;
    QToolButton *forward_button;
    QWidget *last_fm_controls;
    QHBoxLayout *horizontalLayout_3;
    QFrame *lastfm_line;
    QToolButton *love_button;
    QToolButton *ban_button;
    QFrame *line;
    AnalyzerContainer *analyzer;
    QSpacerItem *horizontalSpacer;
    QFrame *line_4;
    Amarok::VolumeSlider *volume;
    QWidget *status_bar;
    QVBoxLayout *status_bar_layout;
    QFrame *status_bar_line;
    QWidget *status_bar_internal;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *status_bar_stack;
    MultiLoadingIndicator *multi_loading_indicator;
    QWidget *playlist_summary_page;
    QVBoxLayout *playlist_summary_layout;
    QLabel *playlist_summary;
    QFrame *line_5;
    PlaylistSequence *playlist_sequence;
    QFrame *line_2;
    QToolButton *scrobbling_button;
    TrackSlider *track_slider;
    QMenuBar *menuBar;
    QMenu *menu_music;
    QMenu *menu_playlist;
    QMenu *menu_help;
    QMenu *menu_extras;
    QMenu *menu_tools;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1131, 685);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_previous_track = new QAction(MainWindow);
        action_previous_track->setObjectName(QString::fromUtf8("action_previous_track"));
        action_play_pause = new QAction(MainWindow);
        action_play_pause->setObjectName(QString::fromUtf8("action_play_pause"));
        action_stop = new QAction(MainWindow);
        action_stop->setObjectName(QString::fromUtf8("action_stop"));
        action_stop->setEnabled(false);
        action_next_track = new QAction(MainWindow);
        action_next_track->setObjectName(QString::fromUtf8("action_next_track"));
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName(QString::fromUtf8("action_quit"));
        action_quit->setMenuRole(QAction::QuitRole);
        action_stop_after_this_track = new QAction(MainWindow);
        action_stop_after_this_track->setObjectName(QString::fromUtf8("action_stop_after_this_track"));
        action_love = new QAction(MainWindow);
        action_love->setObjectName(QString::fromUtf8("action_love"));
        action_love->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/last.fm/love.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_love->setIcon(icon1);
        action_ban = new QAction(MainWindow);
        action_ban->setObjectName(QString::fromUtf8("action_ban"));
        action_ban->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/last.fm/ban.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_ban->setIcon(icon2);
        action_clear_playlist = new QAction(MainWindow);
        action_clear_playlist->setObjectName(QString::fromUtf8("action_clear_playlist"));
        action_edit_track = new QAction(MainWindow);
        action_edit_track->setObjectName(QString::fromUtf8("action_edit_track"));
        action_renumber_tracks = new QAction(MainWindow);
        action_renumber_tracks->setObjectName(QString::fromUtf8("action_renumber_tracks"));
        action_selection_set_value = new QAction(MainWindow);
        action_selection_set_value->setObjectName(QString::fromUtf8("action_selection_set_value"));
        action_edit_value = new QAction(MainWindow);
        action_edit_value->setObjectName(QString::fromUtf8("action_edit_value"));
        action_configure = new QAction(MainWindow);
        action_configure->setObjectName(QString::fromUtf8("action_configure"));
        action_configure->setMenuRole(QAction::PreferencesRole);
        action_about = new QAction(MainWindow);
        action_about->setObjectName(QString::fromUtf8("action_about"));
        action_about->setMenuRole(QAction::AboutRole);
        action_shuffle = new QAction(MainWindow);
        action_shuffle->setObjectName(QString::fromUtf8("action_shuffle"));
        action_add_file = new QAction(MainWindow);
        action_add_file->setObjectName(QString::fromUtf8("action_add_file"));
        action_add_stream = new QAction(MainWindow);
        action_add_stream->setObjectName(QString::fromUtf8("action_add_stream"));
        action_open_media = new QAction(MainWindow);
        action_open_media->setObjectName(QString::fromUtf8("action_open_media"));
        action_open_cd = new QAction(MainWindow);
        action_open_cd->setObjectName(QString::fromUtf8("action_open_cd"));
        action_cover_manager = new QAction(MainWindow);
        action_cover_manager->setObjectName(QString::fromUtf8("action_cover_manager"));
        action_rain = new QAction(MainWindow);
        action_rain->setObjectName(QString::fromUtf8("action_rain"));
        action_rain->setCheckable(true);
        action_hypnotoad = new QAction(MainWindow);
        action_hypnotoad->setObjectName(QString::fromUtf8("action_hypnotoad"));
        action_hypnotoad->setCheckable(true);
        action_enterprise = new QAction(MainWindow);
        action_enterprise->setObjectName(QString::fromUtf8("action_enterprise"));
        action_enterprise->setCheckable(true);
        action_kittens = new QAction(MainWindow);
        action_kittens->setObjectName(QString::fromUtf8("action_kittens"));
        action_kittens->setCheckable(true);
        action_console = new QAction(MainWindow);
        action_console->setObjectName(QString::fromUtf8("action_console"));
        action_shuffle_mode = new QAction(MainWindow);
        action_shuffle_mode->setObjectName(QString::fromUtf8("action_shuffle_mode"));
        action_repeat_mode = new QAction(MainWindow);
        action_repeat_mode->setObjectName(QString::fromUtf8("action_repeat_mode"));
        action_remove_from_playlist = new QAction(MainWindow);
        action_remove_from_playlist->setObjectName(QString::fromUtf8("action_remove_from_playlist"));
        action_equalizer = new QAction(MainWindow);
        action_equalizer->setObjectName(QString::fromUtf8("action_equalizer"));
        action_transcode = new QAction(MainWindow);
        action_transcode->setObjectName(QString::fromUtf8("action_transcode"));
        action_add_folder = new QAction(MainWindow);
        action_add_folder->setObjectName(QString::fromUtf8("action_add_folder"));
        action_jump = new QAction(MainWindow);
        action_jump->setObjectName(QString::fromUtf8("action_jump"));
        action_new_playlist = new QAction(MainWindow);
        action_new_playlist->setObjectName(QString::fromUtf8("action_new_playlist"));
        action_save_playlist = new QAction(MainWindow);
        action_save_playlist->setObjectName(QString::fromUtf8("action_save_playlist"));
        action_load_playlist = new QAction(MainWindow);
        action_load_playlist->setObjectName(QString::fromUtf8("action_load_playlist"));
        action_next_playlist = new QAction(MainWindow);
        action_next_playlist->setObjectName(QString::fromUtf8("action_next_playlist"));
        action_previous_playlist = new QAction(MainWindow);
        action_previous_playlist->setObjectName(QString::fromUtf8("action_previous_playlist"));
        action_update_library = new QAction(MainWindow);
        action_update_library->setObjectName(QString::fromUtf8("action_update_library"));
        action_visualisations = new QAction(MainWindow);
        action_visualisations->setObjectName(QString::fromUtf8("action_visualisations"));
        action_queue_manager = new QAction(MainWindow);
        action_queue_manager->setObjectName(QString::fromUtf8("action_queue_manager"));
        action_about_qt = new QAction(MainWindow);
        action_about_qt->setObjectName(QString::fromUtf8("action_about_qt"));
        action_about_qt->setMenuRole(QAction::AboutQtRole);
        action_mute = new QAction(MainWindow);
        action_mute->setObjectName(QString::fromUtf8("action_mute"));
        action_mute->setCheckable(true);
        action_full_library_scan = new QAction(MainWindow);
        action_full_library_scan->setObjectName(QString::fromUtf8("action_full_library_scan"));
        action_auto_complete_tags = new QAction(MainWindow);
        action_auto_complete_tags->setObjectName(QString::fromUtf8("action_auto_complete_tags"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/providers/musicbrainz.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_auto_complete_tags->setIcon(icon3);
        action_toggle_scrobbling = new QAction(MainWindow);
        action_toggle_scrobbling->setObjectName(QString::fromUtf8("action_toggle_scrobbling"));
        action_add_podcast = new QAction(MainWindow);
        action_add_podcast->setObjectName(QString::fromUtf8("action_add_podcast"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/providers/podcast16.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_add_podcast->setIcon(icon4);
        action_remove_duplicates = new QAction(MainWindow);
        action_remove_duplicates->setObjectName(QString::fromUtf8("action_remove_duplicates"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_8 = new QVBoxLayout(centralWidget);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        sidebar_layout = new QWidget(splitter);
        sidebar_layout->setObjectName(QString::fromUtf8("sidebar_layout"));
        verticalLayout_4 = new QVBoxLayout(sidebar_layout);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        tabs = new FancyTabWidget(sidebar_layout);
        tabs->setObjectName(QString::fromUtf8("tabs"));

        verticalLayout_4->addWidget(tabs);

        now_playing = new NowPlayingWidget(sidebar_layout);
        now_playing->setObjectName(QString::fromUtf8("now_playing"));

        verticalLayout_4->addWidget(now_playing);

        splitter->addWidget(sidebar_layout);
        playlist_layout = new QWidget(splitter);
        playlist_layout->setObjectName(QString::fromUtf8("playlist_layout"));
        verticalLayout_7 = new QVBoxLayout(playlist_layout);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        playlist = new PlaylistContainer(playlist_layout);
        playlist->setObjectName(QString::fromUtf8("playlist"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(playlist->sizePolicy().hasHeightForWidth());
        playlist->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(playlist);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        line_6 = new QFrame(playlist_layout);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_6);

        player_controls_container = new QWidget(playlist_layout);
        player_controls_container->setObjectName(QString::fromUtf8("player_controls_container"));
        player_controls_layout = new QVBoxLayout(player_controls_container);
        player_controls_layout->setSpacing(0);
        player_controls_layout->setContentsMargins(0, 0, 0, 0);
        player_controls_layout->setObjectName(QString::fromUtf8("player_controls_layout"));
        player_controls = new QFrame(player_controls_container);
        player_controls->setObjectName(QString::fromUtf8("player_controls"));
        player_controls->setFrameShape(QFrame::NoFrame);
        horizontalLayout_2 = new QHBoxLayout(player_controls);
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        clear_playlist_button = new QToolButton(player_controls);
        clear_playlist_button->setObjectName(QString::fromUtf8("clear_playlist_button"));
        clear_playlist_button->setIconSize(QSize(22, 22));
        clear_playlist_button->setAutoRaise(true);

        horizontalLayout_2->addWidget(clear_playlist_button);

        line_3 = new QFrame(player_controls);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_3);

        back_button = new QToolButton(player_controls);
        back_button->setObjectName(QString::fromUtf8("back_button"));
        back_button->setIconSize(QSize(22, 22));
        back_button->setAutoRaise(true);

        horizontalLayout_2->addWidget(back_button);

        pause_play_button = new QToolButton(player_controls);
        pause_play_button->setObjectName(QString::fromUtf8("pause_play_button"));
        pause_play_button->setIconSize(QSize(22, 22));
        pause_play_button->setAutoRaise(true);

        horizontalLayout_2->addWidget(pause_play_button);

        stop_button = new QToolButton(player_controls);
        stop_button->setObjectName(QString::fromUtf8("stop_button"));
        stop_button->setEnabled(false);
        stop_button->setIconSize(QSize(22, 22));
        stop_button->setPopupMode(QToolButton::MenuButtonPopup);
        stop_button->setAutoRaise(true);

        horizontalLayout_2->addWidget(stop_button);

        forward_button = new QToolButton(player_controls);
        forward_button->setObjectName(QString::fromUtf8("forward_button"));
        forward_button->setIconSize(QSize(22, 22));
        forward_button->setAutoRaise(true);

        horizontalLayout_2->addWidget(forward_button);

        last_fm_controls = new QWidget(player_controls);
        last_fm_controls->setObjectName(QString::fromUtf8("last_fm_controls"));
        horizontalLayout_3 = new QHBoxLayout(last_fm_controls);
        horizontalLayout_3->setSpacing(1);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lastfm_line = new QFrame(last_fm_controls);
        lastfm_line->setObjectName(QString::fromUtf8("lastfm_line"));
        lastfm_line->setFrameShape(QFrame::VLine);
        lastfm_line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(lastfm_line);

        love_button = new QToolButton(last_fm_controls);
        love_button->setObjectName(QString::fromUtf8("love_button"));
        love_button->setIconSize(QSize(22, 22));
        love_button->setAutoRaise(true);

        horizontalLayout_3->addWidget(love_button);

        ban_button = new QToolButton(last_fm_controls);
        ban_button->setObjectName(QString::fromUtf8("ban_button"));
        ban_button->setIconSize(QSize(22, 22));
        ban_button->setAutoRaise(true);

        horizontalLayout_3->addWidget(ban_button);


        horizontalLayout_2->addWidget(last_fm_controls);

        line = new QFrame(player_controls);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        analyzer = new AnalyzerContainer(player_controls);
        analyzer->setObjectName(QString::fromUtf8("analyzer"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(analyzer->sizePolicy().hasHeightForWidth());
        analyzer->setSizePolicy(sizePolicy1);
        analyzer->setMinimumSize(QSize(0, 36));

        horizontalLayout_2->addWidget(analyzer);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        line_4 = new QFrame(player_controls);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_4);

        volume = new Amarok::VolumeSlider(player_controls);
        volume->setObjectName(QString::fromUtf8("volume"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(volume->sizePolicy().hasHeightForWidth());
        volume->setSizePolicy(sizePolicy2);
        volume->setMaximum(100);
        volume->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(volume);


        player_controls_layout->addWidget(player_controls);

        status_bar = new QWidget(player_controls_container);
        status_bar->setObjectName(QString::fromUtf8("status_bar"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(status_bar->sizePolicy().hasHeightForWidth());
        status_bar->setSizePolicy(sizePolicy3);
        status_bar_layout = new QVBoxLayout(status_bar);
        status_bar_layout->setSpacing(0);
        status_bar_layout->setContentsMargins(0, 0, 0, 0);
        status_bar_layout->setObjectName(QString::fromUtf8("status_bar_layout"));
        status_bar_line = new QFrame(status_bar);
        status_bar_line->setObjectName(QString::fromUtf8("status_bar_line"));
        status_bar_line->setFrameShape(QFrame::HLine);
        status_bar_line->setFrameShadow(QFrame::Sunken);

        status_bar_layout->addWidget(status_bar_line);

        status_bar_internal = new QWidget(status_bar);
        status_bar_internal->setObjectName(QString::fromUtf8("status_bar_internal"));
        sizePolicy3.setHeightForWidth(status_bar_internal->sizePolicy().hasHeightForWidth());
        status_bar_internal->setSizePolicy(sizePolicy3);
        horizontalLayout = new QHBoxLayout(status_bar_internal);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        status_bar_stack = new QStackedWidget(status_bar_internal);
        status_bar_stack->setObjectName(QString::fromUtf8("status_bar_stack"));
        multi_loading_indicator = new MultiLoadingIndicator();
        multi_loading_indicator->setObjectName(QString::fromUtf8("multi_loading_indicator"));
        status_bar_stack->addWidget(multi_loading_indicator);
        playlist_summary_page = new QWidget();
        playlist_summary_page->setObjectName(QString::fromUtf8("playlist_summary_page"));
        playlist_summary_layout = new QVBoxLayout(playlist_summary_page);
        playlist_summary_layout->setSpacing(0);
        playlist_summary_layout->setContentsMargins(0, 0, 0, 0);
        playlist_summary_layout->setObjectName(QString::fromUtf8("playlist_summary_layout"));
        playlist_summary = new QLabel(playlist_summary_page);
        playlist_summary->setObjectName(QString::fromUtf8("playlist_summary"));
        playlist_summary->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        playlist_summary_layout->addWidget(playlist_summary);

        status_bar_stack->addWidget(playlist_summary_page);

        horizontalLayout->addWidget(status_bar_stack);

        line_5 = new QFrame(status_bar_internal);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_5);

        playlist_sequence = new PlaylistSequence(status_bar_internal);
        playlist_sequence->setObjectName(QString::fromUtf8("playlist_sequence"));

        horizontalLayout->addWidget(playlist_sequence);

        line_2 = new QFrame(status_bar_internal);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        scrobbling_button = new QToolButton(status_bar_internal);
        scrobbling_button->setObjectName(QString::fromUtf8("scrobbling_button"));
        scrobbling_button->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(scrobbling_button->sizePolicy().hasHeightForWidth());
        scrobbling_button->setSizePolicy(sizePolicy4);
        scrobbling_button->setIconSize(QSize(16, 16));
        scrobbling_button->setAutoRaise(true);

        horizontalLayout->addWidget(scrobbling_button);

        track_slider = new TrackSlider(status_bar_internal);
        track_slider->setObjectName(QString::fromUtf8("track_slider"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(10);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(track_slider->sizePolicy().hasHeightForWidth());
        track_slider->setSizePolicy(sizePolicy5);

        horizontalLayout->addWidget(track_slider);


        status_bar_layout->addWidget(status_bar_internal);


        player_controls_layout->addWidget(status_bar);


        horizontalLayout_4->addWidget(player_controls_container);


        verticalLayout_7->addLayout(horizontalLayout_4);

        splitter->addWidget(playlist_layout);

        verticalLayout_8->addWidget(splitter);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1131, 23));
        menu_music = new QMenu(menuBar);
        menu_music->setObjectName(QString::fromUtf8("menu_music"));
        menu_playlist = new QMenu(menuBar);
        menu_playlist->setObjectName(QString::fromUtf8("menu_playlist"));
        menu_help = new QMenu(menuBar);
        menu_help->setObjectName(QString::fromUtf8("menu_help"));
        menu_extras = new QMenu(menuBar);
        menu_extras->setObjectName(QString::fromUtf8("menu_extras"));
        menu_tools = new QMenu(menuBar);
        menu_tools->setObjectName(QString::fromUtf8("menu_tools"));
        MainWindow->setMenuBar(menuBar);

        playlist->addAction(action_edit_track);
        playlist->addAction(action_edit_value);
        menuBar->addAction(menu_music->menuAction());
        menuBar->addAction(menu_playlist->menuAction());
        menuBar->addAction(menu_tools->menuAction());
        menuBar->addAction(menu_extras->menuAction());
        menuBar->addAction(menu_help->menuAction());
        menu_music->addAction(action_open_media);
        menu_music->addAction(action_open_cd);
        menu_music->addAction(action_add_podcast);
        menu_music->addSeparator();
        menu_music->addAction(action_previous_track);
        menu_music->addAction(action_play_pause);
        menu_music->addAction(action_stop);
        menu_music->addAction(action_next_track);
        menu_music->addSeparator();
        menu_music->addAction(action_mute);
        menu_music->addSeparator();
        menu_music->addAction(action_love);
        menu_music->addAction(action_ban);
        menu_music->addSeparator();
        menu_music->addAction(action_quit);
        menu_playlist->addAction(action_add_file);
        menu_playlist->addAction(action_add_folder);
        menu_playlist->addAction(action_add_stream);
        menu_playlist->addSeparator();
        menu_playlist->addAction(action_shuffle_mode);
        menu_playlist->addAction(action_repeat_mode);
        menu_playlist->addSeparator();
        menu_playlist->addAction(action_new_playlist);
        menu_playlist->addAction(action_save_playlist);
        menu_playlist->addAction(action_load_playlist);
        menu_playlist->addSeparator();
        menu_playlist->addAction(action_jump);
        menu_playlist->addAction(action_clear_playlist);
        menu_playlist->addAction(action_shuffle);
        menu_playlist->addAction(action_remove_duplicates);
        menu_help->addAction(action_about);
        menu_help->addAction(action_about_qt);
        menu_help->addSeparator();
        menu_extras->addAction(action_rain);
        menu_extras->addAction(action_hypnotoad);
        menu_extras->addAction(action_enterprise);
        menu_extras->addAction(action_kittens);
        menu_extras->addAction(action_console);
        menu_extras->addSeparator();
        menu_tools->addAction(action_cover_manager);
        menu_tools->addAction(action_queue_manager);
        menu_tools->addAction(action_equalizer);
        menu_tools->addAction(action_visualisations);
        menu_tools->addAction(action_transcode);
        menu_tools->addSeparator();
        menu_tools->addAction(action_update_library);
        menu_tools->addAction(action_full_library_scan);
        menu_tools->addSeparator();
        menu_tools->addAction(action_configure);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Clementine", 0, QApplication::UnicodeUTF8));
        action_previous_track->setText(QApplication::translate("MainWindow", "Previous track", 0, QApplication::UnicodeUTF8));
        action_previous_track->setShortcut(QApplication::translate("MainWindow", "F5", 0, QApplication::UnicodeUTF8));
        action_play_pause->setText(QApplication::translate("MainWindow", "Play", 0, QApplication::UnicodeUTF8));
        action_play_pause->setShortcut(QApplication::translate("MainWindow", "F6", 0, QApplication::UnicodeUTF8));
        action_stop->setText(QApplication::translate("MainWindow", "Stop", 0, QApplication::UnicodeUTF8));
        action_stop->setShortcut(QApplication::translate("MainWindow", "F7", 0, QApplication::UnicodeUTF8));
        action_next_track->setText(QApplication::translate("MainWindow", "Next track", 0, QApplication::UnicodeUTF8));
        action_next_track->setShortcut(QApplication::translate("MainWindow", "F8", 0, QApplication::UnicodeUTF8));
        action_quit->setText(QApplication::translate("MainWindow", "&Quit", 0, QApplication::UnicodeUTF8));
        action_quit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        action_stop_after_this_track->setText(QApplication::translate("MainWindow", "Stop after this track", 0, QApplication::UnicodeUTF8));
        action_stop_after_this_track->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+V", 0, QApplication::UnicodeUTF8));
        action_love->setText(QApplication::translate("MainWindow", "Love", 0, QApplication::UnicodeUTF8));
        action_love->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", 0, QApplication::UnicodeUTF8));
        action_ban->setText(QApplication::translate("MainWindow", "Ban", 0, QApplication::UnicodeUTF8));
        action_ban->setShortcut(QApplication::translate("MainWindow", "Ctrl+B", 0, QApplication::UnicodeUTF8));
        action_clear_playlist->setText(QApplication::translate("MainWindow", "Clear playlist", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_clear_playlist->setToolTip(QApplication::translate("MainWindow", "Clear playlist", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_clear_playlist->setShortcut(QApplication::translate("MainWindow", "Ctrl+K", 0, QApplication::UnicodeUTF8));
        action_edit_track->setText(QApplication::translate("MainWindow", "Edit track information...", 0, QApplication::UnicodeUTF8));
        action_edit_track->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        action_renumber_tracks->setText(QApplication::translate("MainWindow", "Renumber tracks in this order...", 0, QApplication::UnicodeUTF8));
        action_selection_set_value->setText(QApplication::translate("MainWindow", "Set value for all selected tracks...", 0, QApplication::UnicodeUTF8));
        action_edit_value->setText(QApplication::translate("MainWindow", "Edit tag...", 0, QApplication::UnicodeUTF8));
        action_edit_value->setShortcut(QApplication::translate("MainWindow", "F2", 0, QApplication::UnicodeUTF8));
        action_configure->setText(QApplication::translate("MainWindow", "Preferences...", 0, QApplication::UnicodeUTF8));
        action_configure->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        action_about->setText(QApplication::translate("MainWindow", "About Clementine...", 0, QApplication::UnicodeUTF8));
        action_about->setShortcut(QApplication::translate("MainWindow", "F1", 0, QApplication::UnicodeUTF8));
        action_shuffle->setText(QApplication::translate("MainWindow", "Shuffle playlist", 0, QApplication::UnicodeUTF8));
        action_shuffle->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", 0, QApplication::UnicodeUTF8));
        action_add_file->setText(QApplication::translate("MainWindow", "Add file...", 0, QApplication::UnicodeUTF8));
        action_add_file->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+A", 0, QApplication::UnicodeUTF8));
        action_add_stream->setText(QApplication::translate("MainWindow", "Add stream...", 0, QApplication::UnicodeUTF8));
        action_add_stream->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        action_open_media->setText(QApplication::translate("MainWindow", "Open file...", 0, QApplication::UnicodeUTF8));
        action_open_cd->setText(QApplication::translate("MainWindow", "Open &audio CD...", 0, QApplication::UnicodeUTF8));
        action_cover_manager->setText(QApplication::translate("MainWindow", "Cover Manager", 0, QApplication::UnicodeUTF8));
        action_rain->setText(QApplication::translate("MainWindow", "Rain", "Label for button to enable/disable rain background sound.", QApplication::UnicodeUTF8));
        action_hypnotoad->setText(QApplication::translate("MainWindow", "All Glory to the Hypnotoad!", "Label for button to enable/disable Hypnotoad background sound.", QApplication::UnicodeUTF8));
        action_enterprise->setText(QApplication::translate("MainWindow", "Make it so!", "Label for button to enable/disable Enterprise background sound.", QApplication::UnicodeUTF8));
        action_kittens->setText(QApplication::translate("MainWindow", "Kittens", "Label for buton to enable/disable kittens in the now playing widget", QApplication::UnicodeUTF8));
        action_console->setText(QApplication::translate("MainWindow", "Console", 0, QApplication::UnicodeUTF8));
        action_shuffle_mode->setText(QApplication::translate("MainWindow", "&Shuffle mode", 0, QApplication::UnicodeUTF8));
        action_repeat_mode->setText(QApplication::translate("MainWindow", "&Repeat mode", 0, QApplication::UnicodeUTF8));
        action_remove_from_playlist->setText(QApplication::translate("MainWindow", "Remove from playlist", 0, QApplication::UnicodeUTF8));
        action_equalizer->setText(QApplication::translate("MainWindow", "Equalizer", 0, QApplication::UnicodeUTF8));
        action_transcode->setText(QApplication::translate("MainWindow", "Transcode Music", 0, QApplication::UnicodeUTF8));
        action_add_folder->setText(QApplication::translate("MainWindow", "Add folder...", 0, QApplication::UnicodeUTF8));
        action_jump->setText(QApplication::translate("MainWindow", "Jump to the currently playing track", 0, QApplication::UnicodeUTF8));
        action_jump->setShortcut(QApplication::translate("MainWindow", "Ctrl+J", 0, QApplication::UnicodeUTF8));
        action_new_playlist->setText(QApplication::translate("MainWindow", "New playlist", 0, QApplication::UnicodeUTF8));
        action_new_playlist->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        action_save_playlist->setText(QApplication::translate("MainWindow", "Save playlist...", 0, QApplication::UnicodeUTF8));
        action_save_playlist->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        action_load_playlist->setText(QApplication::translate("MainWindow", "Load playlist...", 0, QApplication::UnicodeUTF8));
        action_load_playlist->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+O", 0, QApplication::UnicodeUTF8));
        action_next_playlist->setText(QApplication::translate("MainWindow", "Go to next playlist tab", 0, QApplication::UnicodeUTF8));
        action_previous_playlist->setText(QApplication::translate("MainWindow", "Go to previous playlist tab", 0, QApplication::UnicodeUTF8));
        action_update_library->setText(QApplication::translate("MainWindow", "Update changed library folders", 0, QApplication::UnicodeUTF8));
        action_visualisations->setText(QApplication::translate("MainWindow", "Visualizations", 0, QApplication::UnicodeUTF8));
        action_queue_manager->setText(QApplication::translate("MainWindow", "Queue Manager", 0, QApplication::UnicodeUTF8));
        action_about_qt->setText(QApplication::translate("MainWindow", "About Qt...", 0, QApplication::UnicodeUTF8));
        action_mute->setText(QApplication::translate("MainWindow", "Mute", 0, QApplication::UnicodeUTF8));
        action_mute->setShortcut(QApplication::translate("MainWindow", "Ctrl+M", 0, QApplication::UnicodeUTF8));
        action_full_library_scan->setText(QApplication::translate("MainWindow", "Do a full library rescan", 0, QApplication::UnicodeUTF8));
        action_auto_complete_tags->setText(QApplication::translate("MainWindow", "Complete tags automatically...", 0, QApplication::UnicodeUTF8));
        action_auto_complete_tags->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", 0, QApplication::UnicodeUTF8));
        action_toggle_scrobbling->setText(QApplication::translate("MainWindow", "Toggle scrobbling", 0, QApplication::UnicodeUTF8));
        action_add_podcast->setText(QApplication::translate("MainWindow", "Add podcast...", 0, QApplication::UnicodeUTF8));
        action_remove_duplicates->setText(QApplication::translate("MainWindow", "Remove duplicates from playlist", 0, QApplication::UnicodeUTF8));
        scrobbling_button->setText(QString());
        menu_music->setTitle(QApplication::translate("MainWindow", "&Music", 0, QApplication::UnicodeUTF8));
        menu_playlist->setTitle(QApplication::translate("MainWindow", "&Playlist", 0, QApplication::UnicodeUTF8));
        menu_help->setTitle(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
        menu_extras->setTitle(QApplication::translate("MainWindow", "&Extras", 0, QApplication::UnicodeUTF8));
        menu_tools->setTitle(QApplication::translate("MainWindow", "&Tools", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
