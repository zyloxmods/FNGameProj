#include "AthenaSpectatorUIContext.h"

void UAthenaSpectatorUIContext::OnPlayerStateAdded(AFortPlayerStateAthena* FPSA) {
}

void UAthenaSpectatorUIContext::OnPlayerControllerSet() {
}

void UAthenaSpectatorUIContext::OnPlayerBecameRelevant(AFortPlayerState* FPS) {
}

void UAthenaSpectatorUIContext::OnPlayerBecameIrrelevant(AFortPlayerState* FPS) {
}

void UAthenaSpectatorUIContext::OnPawnForReplayRelevancyChanged(AFortPawn* InPawnForReplayRelevancy) {
}

void UAthenaSpectatorUIContext::OnGameStateSet(AFortGameState* InGameState) {
}

void UAthenaSpectatorUIContext::OnFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatorPC, AFortPlayerState* NewFollowedPlayer) {
}

TMap<uint8, UAthenaRemoteSquadViewData*> UAthenaSpectatorUIContext::GetSquadDataMap() const {
    return TMap<uint8, UAthenaRemoteSquadViewData*>();
}

TMap<FUniqueNetIdRepl, UAthenaRemotePlayerViewData*> UAthenaSpectatorUIContext::GetPlayerDataMap() const {
    return TMap<FUniqueNetIdRepl, UAthenaRemotePlayerViewData*>();
}

UAthenaRemotePlayerViewData* UAthenaSpectatorUIContext::GetPlayerData(const FUniqueNetIdRepl PlayerUID) const {
    return NULL;
}

bool UAthenaSpectatorUIContext::GetPipMode() const {
    return false;
}

UAthenaRemotePlayerViewData* UAthenaSpectatorUIContext::GetFollowedPlayerData() const {
    return NULL;
}

UAthenaSpectatorUIContext::UAthenaSpectatorUIContext() {
    this->SpectatingPC = NULL;
}

