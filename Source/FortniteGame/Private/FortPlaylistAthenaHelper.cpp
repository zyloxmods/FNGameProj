#include "FortPlaylistAthenaHelper.h"

bool UFortPlaylistAthenaHelper::IsPlaygroundModePlaylist(const UFortPlaylistAthena* Playlist) {
    return false;
}

bool UFortPlaylistAthenaHelper::IsGamePhaseNotificationSkipped(const UFortPlaylistAthena* Playlist, EAthenaGamePhaseStep GamePhaseToSkip) {
    return false;
}

bool UFortPlaylistAthenaHelper::IsCreativeModePlaylist(const UFortPlaylistAthena* Playlist) {
    return false;
}

bool UFortPlaylistAthenaHelper::IsCreativeLTMPlaylist(const UFortPlaylistAthena* Playlist) {
    return false;
}

EFortPlaylistType UFortPlaylistAthenaHelper::GetPlaylistType(const UFortPlaylistAthena* Playlist) {
    return EFortPlaylistType::Default;
}

UFortPlaylistAthenaHelper::UFortPlaylistAthenaHelper() {
}

