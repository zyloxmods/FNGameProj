#include "FortLobbyBeaconPlayerStatePvP.h"
#include "Net/UnrealNetwork.h"

void AFortLobbyBeaconPlayerStatePvP::OnRep_bReadiedUp() {
}

void AFortLobbyBeaconPlayerStatePvP::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortLobbyBeaconPlayerStatePvP, bReadiedUp);
}

AFortLobbyBeaconPlayerStatePvP::AFortLobbyBeaconPlayerStatePvP() {
    this->bReadiedUp = false;
}

