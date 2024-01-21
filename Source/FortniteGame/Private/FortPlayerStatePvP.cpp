#include "FortPlayerStatePvP.h"
#include "Net/UnrealNetwork.h"

void AFortPlayerStatePvP::OnRep_TotalQuantum(const int32 PrevTotalQuantum) {
}

void AFortPlayerStatePvP::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerStatePvP, TotalQuantum);
}

AFortPlayerStatePvP::AFortPlayerStatePvP() {
    this->TotalQuantum = 0;
}

