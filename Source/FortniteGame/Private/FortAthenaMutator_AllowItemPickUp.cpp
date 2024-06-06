#include "FortAthenaMutator_AllowItemPickUp.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_AllowItemPickUp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_AllowItemPickUp, bAllowItemPickUp);
}

AFortAthenaMutator_AllowItemPickUp::AFortAthenaMutator_AllowItemPickUp() {
    bAllowItemPickUp = true;
}

