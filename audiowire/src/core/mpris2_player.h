/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -m -a core/mpris2_player -c Mpris2Player -i core/mpris2.h -l mpris::Mpris2 /home/mystte/rendu/audiowire-dev/src/dbus/org.mpris.MediaPlayer2.Player.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef MPRIS2_PLAYER_H_1366756078
#define MPRIS2_PLAYER_H_1366756078

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "core/mpris2.h"
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;

/*
 * Adaptor class for interface org.mpris.MediaPlayer2.Player
 */
class Mpris2Player: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.mpris.MediaPlayer2.Player")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.mpris.MediaPlayer2.Player\">\n"
"    <method name=\"Next\"/>\n"
"    <method name=\"Previous\"/>\n"
"    <method name=\"Pause\"/>\n"
"    <method name=\"PlayPause\"/>\n"
"    <method name=\"Stop\"/>\n"
"    <method name=\"Play\"/>\n"
"    <method name=\"Seek\">\n"
"      <arg direction=\"in\" type=\"x\" name=\"Offset\"/>\n"
"    </method>\n"
"    <method name=\"SetPosition\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"TrackId\"/>\n"
"      <arg direction=\"in\" type=\"x\" name=\"Position\"/>\n"
"    </method>\n"
"    <method name=\"OpenUri\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"Uri\"/>\n"
"    </method>\n"
"    <signal name=\"Seeked\">\n"
"      <arg type=\"x\" name=\"Position\"/>\n"
"    </signal>\n"
"    <property access=\"read\" type=\"s\" name=\"PlaybackStatus\"/>\n"
"    <property access=\"readwrite\" type=\"s\" name=\"LoopStatus\"/>\n"
"    <property access=\"readwrite\" type=\"d\" name=\"Rate\"/>\n"
"    <property access=\"readwrite\" type=\"b\" name=\"Shuffle\"/>\n"
"    <property access=\"read\" type=\"a{sv}\" name=\"Metadata\">\n"
"      <annotation value=\"QVariantMap\" name=\"com.trolltech.QtDBus.QtTypeName\"/>\n"
"    </property>\n"
"    <property access=\"readwrite\" type=\"d\" name=\"Volume\"/>\n"
"    <property access=\"read\" type=\"x\" name=\"Position\"/>\n"
"    <property access=\"read\" type=\"d\" name=\"MinimumRate\"/>\n"
"    <property access=\"read\" type=\"d\" name=\"MaximumRate\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"CanGoNext\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"CanGoPrevious\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"CanPlay\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"CanPause\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"CanSeek\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"CanControl\"/>\n"
"  </interface>\n"
        "")
public:
    Mpris2Player(mpris::Mpris2 *parent);
    virtual ~Mpris2Player();

    inline mpris::Mpris2 *parent() const
    { return static_cast<mpris::Mpris2 *>(QObject::parent()); }

public: // PROPERTIES
    Q_PROPERTY(bool CanControl READ canControl)
    bool canControl() const;

    Q_PROPERTY(bool CanGoNext READ canGoNext)
    bool canGoNext() const;

    Q_PROPERTY(bool CanGoPrevious READ canGoPrevious)
    bool canGoPrevious() const;

    Q_PROPERTY(bool CanPause READ canPause)
    bool canPause() const;

    Q_PROPERTY(bool CanPlay READ canPlay)
    bool canPlay() const;

    Q_PROPERTY(bool CanSeek READ canSeek)
    bool canSeek() const;

    Q_PROPERTY(QString LoopStatus READ loopStatus WRITE setLoopStatus)
    QString loopStatus() const;
    void setLoopStatus(const QString &value);

    Q_PROPERTY(double MaximumRate READ maximumRate)
    double maximumRate() const;

    Q_PROPERTY(QVariantMap Metadata READ metadata)
    QVariantMap metadata() const;

    Q_PROPERTY(double MinimumRate READ minimumRate)
    double minimumRate() const;

    Q_PROPERTY(QString PlaybackStatus READ playbackStatus)
    QString playbackStatus() const;

    Q_PROPERTY(qlonglong Position READ position)
    qlonglong position() const;

    Q_PROPERTY(double Rate READ rate WRITE setRate)
    double rate() const;
    void setRate(double value);

    Q_PROPERTY(bool Shuffle READ shuffle WRITE setShuffle)
    bool shuffle() const;
    void setShuffle(bool value);

    Q_PROPERTY(double Volume READ volume WRITE setVolume)
    double volume() const;
    void setVolume(double value);

public Q_SLOTS: // METHODS
    void Next();
    void OpenUri(const QString &Uri);
    void Pause();
    void Play();
    void PlayPause();
    void Previous();
    void Seek(qlonglong Offset);
    void SetPosition(const QDBusObjectPath &TrackId, qlonglong Position);
    void Stop();
Q_SIGNALS: // SIGNALS
    void Seeked(qlonglong Position);
};

#endif
