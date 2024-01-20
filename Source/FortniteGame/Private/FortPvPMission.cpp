#include "FortPvPMission.h"
#include "Net/UnrealNetwork.h"

void AFortPvPMission::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPvPMission, WinningPlayerState);
    DOREPLIFETIME(AFortPvPMission, WinningTeam);
}

AFortPvPMission::AFortPvPMission() {
    this->WinningPlayerState = NULL;
    this->WinningTeam = NULL;
}

