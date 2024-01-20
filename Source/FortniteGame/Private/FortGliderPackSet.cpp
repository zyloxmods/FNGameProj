#include "FortGliderPackSet.h"
#include "Net/UnrealNetwork.h"

void UFortGliderPackSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortGliderPackSet, MaxCharges);
    DOREPLIFETIME(UFortGliderPackSet, CurrentCharges);
}

UFortGliderPackSet::UFortGliderPackSet() {
}

