/*
Launchy: Application Launcher
Copyright (C) 2007-2010  Josh Karlin, Simon Capewell

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#pragma once

#include <QScopedPointer>
#include <QString>
class QSettings;

namespace launchy {

extern const int LAUNCHY_VERSION;
extern const char* LAUNCHY_VERSION_STRING;

extern const uint HASH_LAUNCHY;
extern const uint HASH_HISTORY;
extern const uint HASH_LAUNCHYFILE;
extern const uint LABEL_FILE;
extern const uint LABEL_AUTOSUGGEST;
extern const uint LABEL_HISTORY;

class AppBase;
class LaunchyWidget;
class Catalog;
class CatalogBuilder;
class PluginHandler;

extern QScopedPointer<AppBase> g_app;
extern QScopedPointer<LaunchyWidget> g_mainWidget;
extern QScopedPointer<QSettings> g_settings;
extern QScopedPointer<Catalog> g_catalog;
extern QScopedPointer<CatalogBuilder> g_builder;
extern QScopedPointer<PluginHandler> g_pluginHandler;
extern QString g_searchText;

}
