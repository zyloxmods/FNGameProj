#include "FortGameSessionDedicatedAthena.h"

void AFortGameSessionDedicatedAthena::HandlePlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}

void AFortGameSessionDedicatedAthena::HandleExitingSpawningStartup() {
}

void AFortGameSessionDedicatedAthena::HandleAllPlaylistLevelsVisible() {
}

AFortGameSessionDedicatedAthena::AFortGameSessionDedicatedAthena() {
    this->bDownloadEventsAfterHotfixCheck = true;
    this->ReconnectToMMSDelay = 10.00f;
    this->MaxReconnectToMMSDelay = 300.00f;
    this->MMSVersionCompatability = TEXT("*");
    this->MMSTicketURLServer = TEXT("/api/game/v2/matchmakingservice/ticket/session/`id");
    this->MMSPingInterval = 30.00f;
    this->FullMeshRetryDelay = 10.00f;
    this->MeshNetworkGCTimerRate = 120.00f;
}

