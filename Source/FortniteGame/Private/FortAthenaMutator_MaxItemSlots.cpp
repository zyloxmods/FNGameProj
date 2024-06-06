#include "FortAthenaMutator_MaxItemSlots.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_MaxItemSlots::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_MaxItemSlots, MaxItemSlots);
}

AFortAthenaMutator_MaxItemSlots::AFortAthenaMutator_MaxItemSlots() {
    MaxItemSlots = 1;
}

