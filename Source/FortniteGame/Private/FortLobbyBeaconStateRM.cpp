#include "FortLobbyBeaconStateRM.h"
#include "Net/UnrealNetwork.h"

void AFortLobbyBeaconStateRM::OnRep_LobbyTimeRemaining() {
}

void AFortLobbyBeaconStateRM::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortLobbyBeaconStateRM, LobbyTimeRemaining);
}

AFortLobbyBeaconStateRM::AFortLobbyBeaconStateRM() {
    LobbyTimeRemaining = 0;
}

