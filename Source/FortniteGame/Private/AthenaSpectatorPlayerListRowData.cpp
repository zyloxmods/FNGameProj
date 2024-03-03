#include "AthenaSpectatorPlayerListRowData.h"

void UAthenaSpectatorPlayerListRowData::SetKills(AFortPlayerStateAthena* PS, int32 InKills) {
}

AFortPlayerStateAthena* UAthenaSpectatorPlayerListRowData::GetPlayerState() {
    return NULL;
}

UAthenaSpectatorPlayerListRowData::UAthenaSpectatorPlayerListRowData() {
    this->Rank = 0;
    this->TeamNumber = 0;
    this->PlayerName = TEXT("PlayerName");
    this->Kills = 0;
    this->IsRecordingPlayer = false;
    this->IsSpectatorTarget = false;
    this->PlayerState = NULL;
}

