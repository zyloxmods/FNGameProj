#include "AthenaSpectatorMapPlayerListBase.h"


void UAthenaSpectatorMapPlayerListBase::SetSquadIdsVisible(bool bSquadIdsVisible) {
}

void UAthenaSpectatorMapPlayerListBase::OnToggleOnlyShowMapPlayersActionExecuted(bool& bPassThrough) {
}

void UAthenaSpectatorMapPlayerListBase::OnSortByStateActionExecuted(bool& bPassThrough) {
}

void UAthenaSpectatorMapPlayerListBase::OnSortBySquadIdActionExecuted(bool& bPassThrough) {
}

void UAthenaSpectatorMapPlayerListBase::OnSortByPlayerNameActionExecuted(bool& bPassThrough) {
}

void UAthenaSpectatorMapPlayerListBase::OnSortByEliminationsActionExecuted(bool& bPassThrough) {
}

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

void UAthenaSpectatorMapPlayerListBase::OnListItemClicked(UObject* Item) {
}

ESpectatorPlayerListSortMethod UAthenaSpectatorMapPlayerListBase::GetNextSortMethod() const {
    return ESpectatorPlayerListSortMethod::SquadId;
}

UAthenaSpectatorMapPlayerListBase::UAthenaSpectatorMapPlayerListBase() {
    this->MapLayer = NULL;
}

