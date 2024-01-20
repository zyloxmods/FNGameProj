#include "FortLOSComponent.h"
#include "Net/UnrealNetwork.h"

void UFortLOSComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortLOSComponent, bHasBeenFound);
}

UFortLOSComponent::UFortLOSComponent() {
    this->LOSMaxDistance = 4000.00f;
    this->FOVInDegrees = 90.00f;
    this->TimeBetweenChecks = 1.25f;
    this->bStopAfterHasBeenFound = true;
    this->bDistanceCheckOnly = false;
    this->bHasBeenFound = false;
}

