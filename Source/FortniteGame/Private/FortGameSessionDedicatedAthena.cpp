#include "FortGameSessionDedicatedAthena.h"

void AFortGameSessionDedicatedAthena::HandlePlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}

void AFortGameSessionDedicatedAthena::HandleExitingSpawningStartup() {
}

void AFortGameSessionDedicatedAthena::HandleAllPlaylistLevelsVisible() {
}

AFortGameSessionDedicatedAthena::AFortGameSessionDedicatedAthena() {
    this->bDownloadEventsAfterHotfixCheck = true;
    this->ReconnectToMMSDelay = 1;
    this->MaxReconnectToMMSDelay = 1;
    this->MMSVersionCompatability = TEXT("*");
    this->MMSTicketURLServer = TEXT("/api/game/v2/matchmakingservice/ticket/session/`id");
    this->MMSPingInterval = 1;
    this->QueryUserMode = 0;
    this->bAutoConnectToMMS = true;
    this->bEnableMMSBackfill = true;
    this->bDisableBackfillDuringGracefulShutdown = true;
    this->PostBackfillAssignmentUpdateDelay = 1;
    this->bEnableWaitingForMatchAssignmentTimeout = true;
    this->WaitingForMatchAssignmentRestartDelay = 1;
    this->FullMeshRetryDelay = 1;
    this->MeshNetworkGCTimerRate = 1;
}

