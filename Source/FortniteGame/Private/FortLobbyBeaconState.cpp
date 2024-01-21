#include "FortLobbyBeaconState.h"
#include "Net/UnrealNetwork.h"

void AFortLobbyBeaconState::OnRep_MissionGeneratorDetailsRequirement() {
}

void AFortLobbyBeaconState::OnRep_MissionGeneratorClassPath() {
}

void AFortLobbyBeaconState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortLobbyBeaconState, MatchmakingLevel);
    DOREPLIFETIME(AFortLobbyBeaconState, MissionGeneratorClassPath);
    DOREPLIFETIME(AFortLobbyBeaconState, MissionGeneratorDetailsRequirement);
}

AFortLobbyBeaconState::AFortLobbyBeaconState() {
    this->MatchmakingLevel = 0;
    this->CachedMissionGeneratorCDO = NULL;
    this->MissionGeneratorDetailsRequirement = ELobbyMissionGeneratorDetailsRequirement::Unknown;
    this->bWorldRecordLoaded = false;
}

