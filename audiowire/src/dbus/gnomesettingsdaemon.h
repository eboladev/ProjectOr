/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -m -p dbus/gnomesettingsdaemon /home/mystte/rendu/audiowire-dev/src/dbus/org.gnome.SettingsDaemon.MediaKeys.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef GNOMESETTINGSDAEMON_H_1366756078
#define GNOMESETTINGSDAEMON_H_1366756078

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.gnome.SettingsDaemon.MediaKeys
 */
class OrgGnomeSettingsDaemonMediaKeysInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.gnome.SettingsDaemon.MediaKeys"; }

public:
    OrgGnomeSettingsDaemonMediaKeysInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgGnomeSettingsDaemonMediaKeysInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> GrabMediaPlayerKeys(const QString &application, uint time)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(application) << QVariant::fromValue(time);
        return asyncCallWithArgumentList(QLatin1String("GrabMediaPlayerKeys"), argumentList);
    }

    inline QDBusPendingReply<> ReleaseMediaPlayerKeys(const QString &application)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(application);
        return asyncCallWithArgumentList(QLatin1String("ReleaseMediaPlayerKeys"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void MediaPlayerKeyPressed(const QString &in0, const QString &in1);
};

#endif
