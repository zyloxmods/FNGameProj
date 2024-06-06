#include "FortGameSessionDedicatedAthena.h"

void AFortGameSessionDedicatedAthena::HandlePlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}

void AFortGameSessionDedicatedAthena::HandleExitingSpawningStartup() {
}

void AFortGameSessionDedicatedAthena::HandleAllPlaylistLevelsVisible() {
}

AFortGameSessionDedicatedAthena::AFortGameSessionDedicatedAthena() {
    bDownloadEventsAfterHotfixCheck = true;
    ReconnectToMMSDelay = 1;
    MaxReconnectToMMSDelay = 1;
    MMSVersionCompatability = TEXT("*");
    MMSTicketURLServer = TEXT("/api/game/v2/matchmakingservice/ticket/session/`id");
    MMSPingInterval = 1;
    QueryUserMode = 0;
    bAutoConnectToMMS = true;
    bEnableMMSBackfill = true;
    bDisableBackfillDuringGracefulShutdown = true;
    PostBackfillAssignmentUpdateDelay = 1;
    bEnableWaitingForMatchAssignmentTimeout = true;
    WaitingForMatchAssignmentRestartDelay = 1;
    FullMeshRetryDelay = 1;
    MeshNetworkGCTimerRate = 1;
}

