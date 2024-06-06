#include "AthenaSpectatorPlayerListRowData.h"

void UAthenaSpectatorPlayerListRowData::SetKills(AFortPlayerStateAthena* PS, int32 InKills) {
}

AFortPlayerStateAthena* UAthenaSpectatorPlayerListRowData::GetPlayerState() {
    return NULL;
}

UAthenaSpectatorPlayerListRowData::UAthenaSpectatorPlayerListRowData() {
    Rank = 0;
    TeamNumber = 0;
    PlayerName = TEXT("PlayerName");
    Kills = 0;
    IsRecordingPlayer = false;
    IsSpectatorTarget = false;
    PlayerState = NULL;
}

