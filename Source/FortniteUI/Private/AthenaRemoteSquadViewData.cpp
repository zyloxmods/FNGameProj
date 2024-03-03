#include "AthenaRemoteSquadViewData.h"

void UAthenaRemoteSquadViewData::HandlePlayerPlaceChanged(UAthenaRemotePlayerViewData* InPlayerData, int32 InPlace) {
}

void UAthenaRemoteSquadViewData::HandlePlayerKillscoreChanged(UAthenaRemotePlayerViewData* InPlayerData, int32 InKillScore) {
}

void UAthenaRemoteSquadViewData::HandlePlayerDeadStateChanged(UAthenaRemotePlayerViewData* InPlayerData, bool InEliminated) {
}

int32 UAthenaRemoteSquadViewData::GetSquadID() const {
    return 0;
}

FLinearColor UAthenaRemoteSquadViewData::GetSquadColor() const {
    return FLinearColor{};
}

TArray<UAthenaRemotePlayerViewData*> UAthenaRemoteSquadViewData::GetPlayerDatas() const {
    return TArray<UAthenaRemotePlayerViewData*>();
}

int32 UAthenaRemoteSquadViewData::GetPlace() const {
    return 0;
}

UFortMinigameTeamIdentification* UAthenaRemoteSquadViewData::GetMinigameTeamId() const {
    return NULL;
}

int32 UAthenaRemoteSquadViewData::GetKillScore() const {
    return 0;
}

bool UAthenaRemoteSquadViewData::GetIsEliminated() const {
    return false;
}

UAthenaRemoteSquadViewData::UAthenaRemoteSquadViewData() {
}

