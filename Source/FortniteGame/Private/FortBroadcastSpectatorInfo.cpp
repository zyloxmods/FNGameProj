#include "FortBroadcastSpectatorInfo.h"
#include "Net/UnrealNetwork.h"

void AFortBroadcastSpectatorInfo::OnRep_TotalNumTeams() {
}

void AFortBroadcastSpectatorInfo::OnRep_TotalNumPlayers() {
}

void AFortBroadcastSpectatorInfo::OnRep_PerPlayerInfo() {
}

void AFortBroadcastSpectatorInfo::HandleTeamInfosSet() {
}

void AFortBroadcastSpectatorInfo::HandlePlayerAdded(APlayerController* AddedPlayer) {
}

void AFortBroadcastSpectatorInfo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortBroadcastSpectatorInfo, TotalNumPlayers);
    DOREPLIFETIME(AFortBroadcastSpectatorInfo, TotalNumTeams);
    DOREPLIFETIME(AFortBroadcastSpectatorInfo, TeamPrivateInfos);
    DOREPLIFETIME(AFortBroadcastSpectatorInfo, PerPlayerInfo);
}

AFortBroadcastSpectatorInfo::AFortBroadcastSpectatorInfo() {
    this->TotalNumPlayers = 0;
    this->TotalNumTeams = 0;
}

