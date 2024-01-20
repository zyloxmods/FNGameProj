#include "FortAthenaHoverCarMovementComponent.h"
#include "Net/UnrealNetwork.h"

void UFortAthenaHoverCarMovementComponent::ServerUpdateAthenaState_Implementation(float InThrottleInput, float InSteeringInput, const FVector InForwardVectorTarget) {
}
bool UFortAthenaHoverCarMovementComponent::ServerUpdateAthenaState_Validate(float InThrottleInput, float InSteeringInput, const FVector InForwardVectorTarget) {
    return true;
}

void UFortAthenaHoverCarMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAthenaHoverCarMovementComponent, ReplicatedAthenaState);
}

UFortAthenaHoverCarMovementComponent::UFortAthenaHoverCarMovementComponent() {
}

