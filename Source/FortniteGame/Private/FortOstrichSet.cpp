#include "FortOstrichSet.h"
#include "Net/UnrealNetwork.h"

void UFortOstrichSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortOstrichSet, WalkSpeed);
    DOREPLIFETIME(UFortOstrichSet, SprintSpeed);
}

UFortOstrichSet::UFortOstrichSet() {
}

