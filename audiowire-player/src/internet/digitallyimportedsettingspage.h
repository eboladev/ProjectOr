/* This file is part of Clementine.
   Copyright 2010, David Sansome <me@davidsansome.com>

   Clementine is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   Clementine is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with Clementine.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef DIGITALLYIMPORTEDSETTINGSPAGE_H
#define DIGITALLYIMPORTEDSETTINGSPAGE_H

#include "ui/settingspage.h"

class DigitallyImportedClient;
class Ui_DigitallyImportedSettingsPage;

class QNetworkReply;

class DigitallyImportedSettingsPage : public SettingsPage {
  Q_OBJECT

public:
  DigitallyImportedSettingsPage(SettingsDialog* dialog);
  ~DigitallyImportedSettingsPage();

  void Load();
  void Save();

private slots:
  void Login();
  void Logout();

  void LoginFinished(QNetworkReply* reply);

private:
  void UpdateLoginState(const QString& listen_hash, const QString& name,
                        const QDateTime& expires);

private:
  Ui_DigitallyImportedSettingsPage* ui_;

  DigitallyImportedClient* client_;
};

#endif // DIGITALLYIMPORTEDSETTINGSPAGE_H
