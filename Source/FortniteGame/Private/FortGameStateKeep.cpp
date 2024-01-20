#include "FortGameStateKeep.h"
#include "Net/UnrealNetwork.h"

void AFortGameStateKeep::OnRep_PermaniteBoundariesInfo() {
}

void AFortGameStateKeep::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortGameStateKeep, PermaniteBoundariesData);
}

AFortGameStateKeep::AFortGameStateKeep() {
}

