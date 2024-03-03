#include "AthenaSpectatorMapPlayerListBase.h"

void UAthenaSpectatorMapPlayerListBase::OnPlayerSquadIdChanged(UAthenaRemotePlayerViewData* InPlayerData, uint8 InSquadId) {
}

void UAthenaSpectatorMapPlayerListBase::OnPlayerNameChanged(UAthenaRemotePlayerViewData* InPlayerData, const FString& InPlayerName) {
}

void UAthenaSpectatorMapPlayerListBase::OnPlayerKillScoreChanged(UAthenaRemotePlayerViewData* InPlayerData, int32 InKillScore) {
}

void UAthenaSpectatorMapPlayerListBase::OnPlayerIsInRelevancyChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bInIsInRelevancy) {
}

void UAthenaSpectatorMapPlayerListBase::OnPlayerEliminatedStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool bInIsEliminated) {
}


UAthenaSpectatorMapPlayerListBase::UAthenaSpectatorMapPlayerListBase() {
    this->Button_SortBySquadId = NULL;
    this->Button_SortByPlayerName = NULL;
    this->Button_SortByEliminations = NULL;
    this->Button_SortByEventScore = NULL;
    this->Button_SortByState = NULL;
    this->MapLayer = NULL;
}

