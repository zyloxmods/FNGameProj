#include "FortLobbyBeaconStatePvP.h"
#include "Net/UnrealNetwork.h"

void AFortLobbyBeaconStatePvP::OnRep_PvPLobbyTimeRemaining() {
}

void AFortLobbyBeaconStatePvP::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortLobbyBeaconStatePvP, PvPLobbyTimeRemaining);
}

AFortLobbyBeaconStatePvP::AFortLobbyBeaconStatePvP() {
    this->PvPLobbyTimeLimit = 120;
    this->PvPLobbyTimeRemaining = 120;
}

