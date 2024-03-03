#include "AthenaLeaderboardData.h"

FAthenaLeaderboardData::FAthenaLeaderboardData() {
    this->Playlist = EFortAthenaPlaylist::AthenaSolo;
    this->InputType = ECommonInputType::MouseAndKeyboard;
    this->bExcludePlaylistNames = false;
}

