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
    bIsLobbyTimerPaused = false;
    MatchmakingLevel = 0;
    CachedMissionGeneratorCDO = NULL;
    MissionGeneratorDetailsRequirement = ELobbyMissionGeneratorDetailsRequirement::Unknown;
    bWorldRecordLoaded = false;
}

