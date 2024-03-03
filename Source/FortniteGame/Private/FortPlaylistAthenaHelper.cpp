#include "FortPlaylistAthenaHelper.h"

bool UFortPlaylistAthenaHelper::ShouldReturnToMatchmakingOriginOnMatchEnd(const UFortPlaylistAthena* Playlist) {
    return false;
}

bool UFortPlaylistAthenaHelper::ShouldEnterSpawningStartup(const UFortPlaylistAthena* Playlist) {
    return false;
}

bool UFortPlaylistAthenaHelper::IsPlaygroundModePlaylist(const UFortPlaylistAthena* Playlist) {
    return false;
}

bool UFortPlaylistAthenaHelper::IsLargePreviewDisabledOnMobile(const UFortPlaylistAthena* Playlist) {
    return false;
}

bool UFortPlaylistAthenaHelper::IsGuidedTutorialPlaylist(const UFortPlaylistAthena* Playlist) {
    return false;
}

bool UFortPlaylistAthenaHelper::IsGamePhaseNotificationSkipped(const UFortPlaylistAthena* Playlist, EAthenaGamePhaseStep GamePhaseToSkip) {
    return false;
}

bool UFortPlaylistAthenaHelper::IsCreativeUtilitySpawningAllowedPlaylist(const UFortPlaylistAthena* Playlist) {
    return false;
}

bool UFortPlaylistAthenaHelper::IsCreativeModePlaylist(const UFortPlaylistAthena* Playlist) {
    return false;
}

bool UFortPlaylistAthenaHelper::IsCreativeMMPlaylist(const UFortPlaylistAthena* Playlist) {
    return false;
}

bool UFortPlaylistAthenaHelper::IsCreativeLTMPlaylist(const UFortPlaylistAthena* Playlist) {
    return false;
}

bool UFortPlaylistAthenaHelper::IsBattleLabModePlaylist(const UFortPlaylistAthena* Playlist) {
    return false;
}

bool UFortPlaylistAthenaHelper::IsAnyCreativePlaylist(const UFortPlaylistAthena* Playlist) {
    return false;
}

bool UFortPlaylistAthenaHelper::HasCreativeTag(const UFortPlaylistAthena* Playlist) {
    return false;
}

EFortPlaylistType UFortPlaylistAthenaHelper::GetPlaylistType(const UFortPlaylistAthena* Playlist) {
    return EFortPlaylistType::Default;
}

float UFortPlaylistAthenaHelper::GetEndGameReturnToMatchmakingOriginDelay(const UFortPlaylistAthena* Playlist) {
    return 0.0f;
}

UFortPlaylistAthenaHelper::UFortPlaylistAthenaHelper() {
}

