#include "FortDeployableBasePickup.h"
#include "Net/UnrealNetwork.h"

void AFortDeployableBasePickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortDeployableBasePickup, AssociatedPlotOccupant);
}

AFortDeployableBasePickup::AFortDeployableBasePickup() {
}

