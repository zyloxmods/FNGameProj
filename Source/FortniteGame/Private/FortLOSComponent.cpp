#include "FortLOSComponent.h"
#include "Net/UnrealNetwork.h"

void UFortLOSComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortLOSComponent, bHasBeenFound);
}

UFortLOSComponent::UFortLOSComponent() {
    this->LOSMaxDistance = 1;
    this->FOVInDegrees = 1;
    this->TimeBetweenChecks = 1;
    this->bStopAfterHasBeenFound = true;
    this->bDistanceCheckOnly = false;
    this->bHasBeenFound = false;
}

