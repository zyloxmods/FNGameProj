#include "FortAthenaMutator_AllowItemDrop.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_AllowItemDrop::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_AllowItemDrop, bAllowItemDrop);
}

AFortAthenaMutator_AllowItemDrop::AFortAthenaMutator_AllowItemDrop() {
    bAllowItemDrop = false;
}

