/********************************************************************************
** Form generated from reading UI file 'edittagdialog.ui'
**
** Created: Tue Apr 23 15:28:24 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTAGDIALOG_H
#define UI_EDITTAGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "widgets/busyindicator.h"
#include "widgets/lineedit.h"
#include "widgets/ratingwidget.h"

QT_BEGIN_NAMESPACE

class Ui_EditTagDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QListWidget *song_list;
    QTabWidget *tab_widget;
    QWidget *summary_tab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *art;
    QVBoxLayout *verticalLayout;
    QTextEdit *summary;
    QHBoxLayout *horizontalLayout;
    QPushButton *summary_art_button;
    QPushButton *playcount_reset;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QGridLayout *gridLayout_3;
    QLabel *length_label;
    QLabel *length;
    QLabel *playcount_label;
    QLabel *playcount;
    QLabel *bpm_label;
    QLabel *bpm;
    QLabel *skipcount_label;
    QLabel *skipcount;
    QLabel *bitrate_label;
    QLabel *bitrate;
    QLabel *lastplayed_label;
    QLabel *lastplayed;
    QLabel *samplerate_label;
    QLabel *samplerate;
    QLabel *score_label;
    QLabel *score;
    QLabel *filesize_label;
    QLabel *filesize;
    QLabel *rating_label;
    RatingWidget *rating;
    QLabel *filetype_label;
    QLabel *filetype;
    QLabel *mtime_label;
    QLabel *mtime;
    QLabel *ctime_label;
    QLabel *ctime;
    QLabel *filename_label;
    QLineEdit *filename;
    QSpacerItem *verticalSpacer_2;
    QWidget *tags_tab;
    QGridLayout *gridLayout;
    QLabel *title_label;
    LineEdit *title;
    QLabel *track_label;
    SpinBox *track;
    QLabel *artist_label;
    LineEdit *artist;
    QLabel *disc_label;
    SpinBox *disc;
    QLabel *album_label;
    LineEdit *album;
    QLabel *year_label;
    SpinBox *year;
    QLabel *albumartist_label;
    LineEdit *albumartist;
    QLabel *composer_label;
    LineEdit *composer;
    QLabel *genre_label;
    LineEdit *genre;
    QLabel *comment_label;
    TextEdit *comment;
    QPushButton *fetch_tag;
    BusyIndicator *loading_label;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *EditTagDialog)
    {
        if (EditTagDialog->objectName().isEmpty())
            EditTagDialog->setObjectName(QString::fromUtf8("EditTagDialog"));
        EditTagDialog->resize(863, 635);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        EditTagDialog->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(EditTagDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        splitter = new QSplitter(EditTagDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        song_list = new QListWidget(splitter);
        song_list->setObjectName(QString::fromUtf8("song_list"));
        song_list->setSelectionMode(QAbstractItemView::ExtendedSelection);
        splitter->addWidget(song_list);
        tab_widget = new QTabWidget(splitter);
        tab_widget->setObjectName(QString::fromUtf8("tab_widget"));
        summary_tab = new QWidget();
        summary_tab->setObjectName(QString::fromUtf8("summary_tab"));
        verticalLayout_2 = new QVBoxLayout(summary_tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        art = new QLabel(summary_tab);
        art->setObjectName(QString::fromUtf8("art"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(art->sizePolicy().hasHeightForWidth());
        art->setSizePolicy(sizePolicy);
        art->setMinimumSize(QSize(124, 124));
        art->setFrameShape(QFrame::StyledPanel);
        art->setAlignment(Qt::AlignCenter);
        art->setMargin(2);

        horizontalLayout_2->addWidget(art);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        summary = new QTextEdit(summary_tab);
        summary->setObjectName(QString::fromUtf8("summary"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(summary->sizePolicy().hasHeightForWidth());
        summary->setSizePolicy(sizePolicy1);
        summary->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"  background: transparent;\n"
"}"));
        summary->setFrameShape(QFrame::NoFrame);
        summary->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(summary);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        summary_art_button = new QPushButton(summary_tab);
        summary_art_button->setObjectName(QString::fromUtf8("summary_art_button"));
        sizePolicy.setHeightForWidth(summary_art_button->sizePolicy().hasHeightForWidth());
        summary_art_button->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(summary_art_button);

        playcount_reset = new QPushButton(summary_tab);
        playcount_reset->setObjectName(QString::fromUtf8("playcount_reset"));
        sizePolicy.setHeightForWidth(playcount_reset->sizePolicy().hasHeightForWidth());
        playcount_reset->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(playcount_reset);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        line = new QFrame(summary_tab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(18);
        length_label = new QLabel(summary_tab);
        length_label->setObjectName(QString::fromUtf8("length_label"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(length_label->sizePolicy().hasHeightForWidth());
        length_label->setSizePolicy(sizePolicy2);
        length_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(length_label, 0, 0, 1, 1);

        length = new QLabel(summary_tab);
        length->setObjectName(QString::fromUtf8("length"));
        sizePolicy2.setHeightForWidth(length->sizePolicy().hasHeightForWidth());
        length->setSizePolicy(sizePolicy2);
        length->setMinimumSize(QSize(150, 0));
        length->setBaseSize(QSize(150, 0));
        length->setWordWrap(true);
        length->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(length, 0, 1, 1, 1);

        playcount_label = new QLabel(summary_tab);
        playcount_label->setObjectName(QString::fromUtf8("playcount_label"));
        sizePolicy2.setHeightForWidth(playcount_label->sizePolicy().hasHeightForWidth());
        playcount_label->setSizePolicy(sizePolicy2);
        playcount_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(playcount_label, 0, 2, 1, 1);

        playcount = new QLabel(summary_tab);
        playcount->setObjectName(QString::fromUtf8("playcount"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(playcount->sizePolicy().hasHeightForWidth());
        playcount->setSizePolicy(sizePolicy3);
        playcount->setWordWrap(true);
        playcount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(playcount, 0, 3, 1, 1);

        bpm_label = new QLabel(summary_tab);
        bpm_label->setObjectName(QString::fromUtf8("bpm_label"));
        sizePolicy2.setHeightForWidth(bpm_label->sizePolicy().hasHeightForWidth());
        bpm_label->setSizePolicy(sizePolicy2);
        bpm_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(bpm_label, 1, 0, 1, 1);

        bpm = new QLabel(summary_tab);
        bpm->setObjectName(QString::fromUtf8("bpm"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(bpm->sizePolicy().hasHeightForWidth());
        bpm->setSizePolicy(sizePolicy4);
        bpm->setBaseSize(QSize(0, 0));
        bpm->setWordWrap(true);
        bpm->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(bpm, 1, 1, 1, 1);

        skipcount_label = new QLabel(summary_tab);
        skipcount_label->setObjectName(QString::fromUtf8("skipcount_label"));
        sizePolicy2.setHeightForWidth(skipcount_label->sizePolicy().hasHeightForWidth());
        skipcount_label->setSizePolicy(sizePolicy2);
        skipcount_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(skipcount_label, 1, 2, 1, 1);

        skipcount = new QLabel(summary_tab);
        skipcount->setObjectName(QString::fromUtf8("skipcount"));
        skipcount->setWordWrap(true);
        skipcount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(skipcount, 1, 3, 1, 1);

        bitrate_label = new QLabel(summary_tab);
        bitrate_label->setObjectName(QString::fromUtf8("bitrate_label"));
        sizePolicy2.setHeightForWidth(bitrate_label->sizePolicy().hasHeightForWidth());
        bitrate_label->setSizePolicy(sizePolicy2);
        bitrate_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(bitrate_label, 2, 0, 1, 1);

        bitrate = new QLabel(summary_tab);
        bitrate->setObjectName(QString::fromUtf8("bitrate"));
        sizePolicy4.setHeightForWidth(bitrate->sizePolicy().hasHeightForWidth());
        bitrate->setSizePolicy(sizePolicy4);
        bitrate->setBaseSize(QSize(0, 0));
        bitrate->setWordWrap(true);
        bitrate->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(bitrate, 2, 1, 1, 1);

        lastplayed_label = new QLabel(summary_tab);
        lastplayed_label->setObjectName(QString::fromUtf8("lastplayed_label"));
        sizePolicy2.setHeightForWidth(lastplayed_label->sizePolicy().hasHeightForWidth());
        lastplayed_label->setSizePolicy(sizePolicy2);
        lastplayed_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(lastplayed_label, 2, 2, 1, 1);

        lastplayed = new QLabel(summary_tab);
        lastplayed->setObjectName(QString::fromUtf8("lastplayed"));
        lastplayed->setWordWrap(true);
        lastplayed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(lastplayed, 2, 3, 1, 1);

        samplerate_label = new QLabel(summary_tab);
        samplerate_label->setObjectName(QString::fromUtf8("samplerate_label"));
        sizePolicy2.setHeightForWidth(samplerate_label->sizePolicy().hasHeightForWidth());
        samplerate_label->setSizePolicy(sizePolicy2);
        samplerate_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(samplerate_label, 3, 0, 1, 1);

        samplerate = new QLabel(summary_tab);
        samplerate->setObjectName(QString::fromUtf8("samplerate"));
        sizePolicy4.setHeightForWidth(samplerate->sizePolicy().hasHeightForWidth());
        samplerate->setSizePolicy(sizePolicy4);
        samplerate->setWordWrap(true);
        samplerate->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(samplerate, 3, 1, 1, 1);

        score_label = new QLabel(summary_tab);
        score_label->setObjectName(QString::fromUtf8("score_label"));
        sizePolicy2.setHeightForWidth(score_label->sizePolicy().hasHeightForWidth());
        score_label->setSizePolicy(sizePolicy2);
        score_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(score_label, 3, 2, 1, 1);

        score = new QLabel(summary_tab);
        score->setObjectName(QString::fromUtf8("score"));
        score->setWordWrap(true);
        score->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(score, 3, 3, 1, 1);

        filesize_label = new QLabel(summary_tab);
        filesize_label->setObjectName(QString::fromUtf8("filesize_label"));
        sizePolicy2.setHeightForWidth(filesize_label->sizePolicy().hasHeightForWidth());
        filesize_label->setSizePolicy(sizePolicy2);
        filesize_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(filesize_label, 4, 0, 1, 1);

        filesize = new QLabel(summary_tab);
        filesize->setObjectName(QString::fromUtf8("filesize"));
        sizePolicy4.setHeightForWidth(filesize->sizePolicy().hasHeightForWidth());
        filesize->setSizePolicy(sizePolicy4);
        filesize->setWordWrap(true);
        filesize->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(filesize, 4, 1, 1, 1);

        rating_label = new QLabel(summary_tab);
        rating_label->setObjectName(QString::fromUtf8("rating_label"));
        sizePolicy2.setHeightForWidth(rating_label->sizePolicy().hasHeightForWidth());
        rating_label->setSizePolicy(sizePolicy2);
        rating_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(rating_label, 4, 2, 1, 1);

        rating = new RatingWidget(summary_tab);
        rating->setObjectName(QString::fromUtf8("rating"));
        sizePolicy2.setHeightForWidth(rating->sizePolicy().hasHeightForWidth());
        rating->setSizePolicy(sizePolicy2);
        rating->setMinimumSize(QSize(0, 0));

        gridLayout_3->addWidget(rating, 4, 3, 1, 1);

        filetype_label = new QLabel(summary_tab);
        filetype_label->setObjectName(QString::fromUtf8("filetype_label"));
        sizePolicy2.setHeightForWidth(filetype_label->sizePolicy().hasHeightForWidth());
        filetype_label->setSizePolicy(sizePolicy2);
        filetype_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(filetype_label, 6, 0, 1, 1);

        filetype = new QLabel(summary_tab);
        filetype->setObjectName(QString::fromUtf8("filetype"));
        sizePolicy3.setHeightForWidth(filetype->sizePolicy().hasHeightForWidth());
        filetype->setSizePolicy(sizePolicy3);
        filetype->setWordWrap(true);
        filetype->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(filetype, 6, 1, 1, 3);

        mtime_label = new QLabel(summary_tab);
        mtime_label->setObjectName(QString::fromUtf8("mtime_label"));
        sizePolicy2.setHeightForWidth(mtime_label->sizePolicy().hasHeightForWidth());
        mtime_label->setSizePolicy(sizePolicy2);
        mtime_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(mtime_label, 7, 0, 1, 1);

        mtime = new QLabel(summary_tab);
        mtime->setObjectName(QString::fromUtf8("mtime"));
        mtime->setWordWrap(true);
        mtime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(mtime, 7, 1, 1, 3);

        ctime_label = new QLabel(summary_tab);
        ctime_label->setObjectName(QString::fromUtf8("ctime_label"));
        sizePolicy2.setHeightForWidth(ctime_label->sizePolicy().hasHeightForWidth());
        ctime_label->setSizePolicy(sizePolicy2);
        ctime_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(ctime_label, 8, 0, 1, 1);

        ctime = new QLabel(summary_tab);
        ctime->setObjectName(QString::fromUtf8("ctime"));
        ctime->setWordWrap(true);
        ctime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(ctime, 8, 1, 1, 3);

        filename_label = new QLabel(summary_tab);
        filename_label->setObjectName(QString::fromUtf8("filename_label"));
        filename_label->setProperty("field_label", QVariant(true));

        gridLayout_3->addWidget(filename_label, 5, 0, 1, 1);

        filename = new QLineEdit(summary_tab);
        filename->setObjectName(QString::fromUtf8("filename"));
        filename->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  background: transparent;\n"
"}"));
        filename->setFrame(false);
        filename->setReadOnly(true);

        gridLayout_3->addWidget(filename, 5, 1, 1, 3);


        verticalLayout_2->addLayout(gridLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        tab_widget->addTab(summary_tab, QString());
        tags_tab = new QWidget();
        tags_tab->setObjectName(QString::fromUtf8("tags_tab"));
        gridLayout = new QGridLayout(tags_tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        title_label = new QLabel(tags_tab);
        title_label->setObjectName(QString::fromUtf8("title_label"));

        gridLayout->addWidget(title_label, 0, 0, 1, 1);

        title = new LineEdit(tags_tab);
        title->setObjectName(QString::fromUtf8("title"));
        title->setProperty("has_reset_button", QVariant(true));
        title->setProperty("has_clear_button", QVariant(false));

        gridLayout->addWidget(title, 0, 1, 1, 1);

        track_label = new QLabel(tags_tab);
        track_label->setObjectName(QString::fromUtf8("track_label"));

        gridLayout->addWidget(track_label, 0, 2, 1, 1);

        track = new SpinBox(tags_tab);
        track->setObjectName(QString::fromUtf8("track"));
        track->setMaximum(9999);
        track->setProperty("has_clear_button", QVariant(false));
        track->setProperty("has_reset_button", QVariant(true));

        gridLayout->addWidget(track, 0, 3, 1, 1);

        artist_label = new QLabel(tags_tab);
        artist_label->setObjectName(QString::fromUtf8("artist_label"));

        gridLayout->addWidget(artist_label, 1, 0, 1, 1);

        artist = new LineEdit(tags_tab);
        artist->setObjectName(QString::fromUtf8("artist"));
        artist->setProperty("has_reset_button", QVariant(true));
        artist->setProperty("has_clear_button", QVariant(false));

        gridLayout->addWidget(artist, 1, 1, 1, 1);

        disc_label = new QLabel(tags_tab);
        disc_label->setObjectName(QString::fromUtf8("disc_label"));

        gridLayout->addWidget(disc_label, 1, 2, 1, 1);

        disc = new SpinBox(tags_tab);
        disc->setObjectName(QString::fromUtf8("disc"));
        disc->setMaximum(9999);
        disc->setProperty("has_clear_button", QVariant(false));
        disc->setProperty("has_reset_button", QVariant(true));

        gridLayout->addWidget(disc, 1, 3, 1, 1);

        album_label = new QLabel(tags_tab);
        album_label->setObjectName(QString::fromUtf8("album_label"));

        gridLayout->addWidget(album_label, 2, 0, 1, 1);

        album = new LineEdit(tags_tab);
        album->setObjectName(QString::fromUtf8("album"));
        album->setProperty("has_reset_button", QVariant(true));
        album->setProperty("has_clear_button", QVariant(false));

        gridLayout->addWidget(album, 2, 1, 1, 1);

        year_label = new QLabel(tags_tab);
        year_label->setObjectName(QString::fromUtf8("year_label"));

        gridLayout->addWidget(year_label, 2, 2, 1, 1);

        year = new SpinBox(tags_tab);
        year->setObjectName(QString::fromUtf8("year"));
        year->setMaximum(9999);
        year->setProperty("has_clear_button", QVariant(false));
        year->setProperty("has_reset_button", QVariant(true));

        gridLayout->addWidget(year, 2, 3, 1, 1);

        albumartist_label = new QLabel(tags_tab);
        albumartist_label->setObjectName(QString::fromUtf8("albumartist_label"));

        gridLayout->addWidget(albumartist_label, 3, 0, 1, 1);

        albumartist = new LineEdit(tags_tab);
        albumartist->setObjectName(QString::fromUtf8("albumartist"));
        albumartist->setProperty("has_reset_button", QVariant(true));
        albumartist->setProperty("has_clear_button", QVariant(false));

        gridLayout->addWidget(albumartist, 3, 1, 1, 1);

        composer_label = new QLabel(tags_tab);
        composer_label->setObjectName(QString::fromUtf8("composer_label"));

        gridLayout->addWidget(composer_label, 4, 0, 1, 1);

        composer = new LineEdit(tags_tab);
        composer->setObjectName(QString::fromUtf8("composer"));
        composer->setProperty("has_reset_button", QVariant(true));
        composer->setProperty("has_clear_button", QVariant(false));

        gridLayout->addWidget(composer, 4, 1, 1, 1);

        genre_label = new QLabel(tags_tab);
        genre_label->setObjectName(QString::fromUtf8("genre_label"));

        gridLayout->addWidget(genre_label, 5, 0, 1, 1);

        genre = new LineEdit(tags_tab);
        genre->setObjectName(QString::fromUtf8("genre"));
        genre->setProperty("has_reset_button", QVariant(true));
        genre->setProperty("has_clear_button", QVariant(false));

        gridLayout->addWidget(genre, 5, 1, 1, 1);

        comment_label = new QLabel(tags_tab);
        comment_label->setObjectName(QString::fromUtf8("comment_label"));

        gridLayout->addWidget(comment_label, 7, 0, 1, 1);

        comment = new TextEdit(tags_tab);
        comment->setObjectName(QString::fromUtf8("comment"));
        comment->setProperty("has_reset_button", QVariant(true));
        comment->setProperty("has_clear_button", QVariant(false));

        gridLayout->addWidget(comment, 7, 1, 1, 3);

        fetch_tag = new QPushButton(tags_tab);
        fetch_tag->setObjectName(QString::fromUtf8("fetch_tag"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/providers/musicbrainz.png"), QSize(), QIcon::Normal, QIcon::Off);
        fetch_tag->setIcon(icon1);
        fetch_tag->setIconSize(QSize(38, 22));

        gridLayout->addWidget(fetch_tag, 6, 1, 1, 1);

        tab_widget->addTab(tags_tab, QString());
        splitter->addWidget(tab_widget);

        verticalLayout_3->addWidget(splitter);

        loading_label = new BusyIndicator(EditTagDialog);
        loading_label->setObjectName(QString::fromUtf8("loading_label"));

        verticalLayout_3->addWidget(loading_label);

        button_box = new QDialogButtonBox(EditTagDialog);
        button_box->setObjectName(QString::fromUtf8("button_box"));
        button_box->setStandardButtons(QDialogButtonBox::Discard|QDialogButtonBox::Save);

        verticalLayout_3->addWidget(button_box);

#ifndef QT_NO_SHORTCUT
        title_label->setBuddy(title);
        track_label->setBuddy(track);
        artist_label->setBuddy(artist);
        disc_label->setBuddy(disc);
        album_label->setBuddy(album);
        year_label->setBuddy(year);
        albumartist_label->setBuddy(albumartist);
        composer_label->setBuddy(composer);
        genre_label->setBuddy(genre);
        comment_label->setBuddy(comment);
#endif // QT_NO_SHORTCUT

        retranslateUi(EditTagDialog);
        QObject::connect(button_box, SIGNAL(accepted()), EditTagDialog, SLOT(accept()));
        QObject::connect(button_box, SIGNAL(rejected()), EditTagDialog, SLOT(reject()));

        tab_widget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EditTagDialog);
    } // setupUi

    void retranslateUi(QDialog *EditTagDialog)
    {
        EditTagDialog->setWindowTitle(QApplication::translate("EditTagDialog", "Edit track information", 0, QApplication::UnicodeUTF8));
        art->setText(QString());
        summary_art_button->setText(QApplication::translate("EditTagDialog", "Change cover art", 0, QApplication::UnicodeUTF8));
        playcount_reset->setText(QApplication::translate("EditTagDialog", "Reset play counts", 0, QApplication::UnicodeUTF8));
        length_label->setText(QApplication::translate("EditTagDialog", "Length", 0, QApplication::UnicodeUTF8));
        playcount_label->setText(QApplication::translate("EditTagDialog", "Play count", 0, QApplication::UnicodeUTF8));
        bpm_label->setText(QApplication::translate("EditTagDialog", "BPM", 0, QApplication::UnicodeUTF8));
        skipcount_label->setText(QApplication::translate("EditTagDialog", "Skip count", 0, QApplication::UnicodeUTF8));
        bitrate_label->setText(QApplication::translate("EditTagDialog", "Bit rate", 0, QApplication::UnicodeUTF8));
        lastplayed_label->setText(QApplication::translate("EditTagDialog", "Last played", 0, QApplication::UnicodeUTF8));
        samplerate_label->setText(QApplication::translate("EditTagDialog", "Sample rate", 0, QApplication::UnicodeUTF8));
        score_label->setText(QApplication::translate("EditTagDialog", "Score", 0, QApplication::UnicodeUTF8));
        filesize_label->setText(QApplication::translate("EditTagDialog", "File size", 0, QApplication::UnicodeUTF8));
        rating_label->setText(QApplication::translate("EditTagDialog", "Rating", 0, QApplication::UnicodeUTF8));
        filetype_label->setText(QApplication::translate("EditTagDialog", "File type", 0, QApplication::UnicodeUTF8));
        filetype->setText(QString());
        mtime_label->setText(QApplication::translate("EditTagDialog", "Date modified", 0, QApplication::UnicodeUTF8));
        ctime_label->setText(QApplication::translate("EditTagDialog", "Date created", 0, QApplication::UnicodeUTF8));
        filename_label->setText(QApplication::translate("EditTagDialog", "File name", 0, QApplication::UnicodeUTF8));
        tab_widget->setTabText(tab_widget->indexOf(summary_tab), QApplication::translate("EditTagDialog", "Summary", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("EditTagDialog", "Title", 0, QApplication::UnicodeUTF8));
        track_label->setText(QApplication::translate("EditTagDialog", "Track", 0, QApplication::UnicodeUTF8));
        artist_label->setText(QApplication::translate("EditTagDialog", "Artist", 0, QApplication::UnicodeUTF8));
        disc_label->setText(QApplication::translate("EditTagDialog", "Disc", 0, QApplication::UnicodeUTF8));
        album_label->setText(QApplication::translate("EditTagDialog", "Album", 0, QApplication::UnicodeUTF8));
        year_label->setText(QApplication::translate("EditTagDialog", "Year", 0, QApplication::UnicodeUTF8));
        albumartist_label->setText(QApplication::translate("EditTagDialog", "Album artist", 0, QApplication::UnicodeUTF8));
        composer_label->setText(QApplication::translate("EditTagDialog", "Composer", 0, QApplication::UnicodeUTF8));
        genre_label->setText(QApplication::translate("EditTagDialog", "Genre", 0, QApplication::UnicodeUTF8));
        comment_label->setText(QApplication::translate("EditTagDialog", "Comment", 0, QApplication::UnicodeUTF8));
        fetch_tag->setText(QApplication::translate("EditTagDialog", "Complete tags automatically", 0, QApplication::UnicodeUTF8));
        tab_widget->setTabText(tab_widget->indexOf(tags_tab), QApplication::translate("EditTagDialog", "Edit tags", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditTagDialog: public Ui_EditTagDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTAGDIALOG_H
