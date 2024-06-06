#include "FortLOSComponent.h"
#include "Net/UnrealNetwork.h"

void UFortLOSComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortLOSComponent, bHasBeenFound);
}

UFortLOSComponent::UFortLOSComponent() {
    LOSMaxDistance = 1;
    FOVInDegrees = 1;
    TimeBetweenChecks = 1;
    bStopAfterHasBeenFound = true;
    bDistanceCheckOnly = false;
    bHasBeenFound = false;
}

