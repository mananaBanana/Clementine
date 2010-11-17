/* This file is part of Clementine.

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

#ifndef QUERYPLAYLISTGENERATOR_H
#define QUERYPLAYLISTGENERATOR_H

#include "playlistgenerator.h"
#include "smartplaylistsearch.h"

class QueryPlaylistGenerator : public PlaylistGenerator {
public:
  QueryPlaylistGenerator();

  QString type() const { return "Query"; }

  void Load(const SmartPlaylistSearch& search);
  void Load(const QByteArray& data);
  QByteArray Save() const;

  PlaylistItemList Generate();

private:
  SmartPlaylistSearch search_;
};

#endif // QUERYPLAYLISTGENERATOR_H
