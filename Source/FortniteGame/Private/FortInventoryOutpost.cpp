#include "FortInventoryOutpost.h"
#include "Net/UnrealNetwork.h"

void AFortInventoryOutpost::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortInventoryOutpost, bHasUnavailableItems);
}

AFortInventoryOutpost::AFortInventoryOutpost() {
    bHasUnavailableItems = false;
}

