#include "DestinationTrackerPawnComponent.h"
#include "Net/UnrealNetwork.h"

void UDestinationTrackerPawnComponent::OnRep_Destination() {
}

bool UDestinationTrackerPawnComponent::HasDestination() const {
    return false;
}

float UDestinationTrackerPawnComponent::GetDistanceSquared() const {
    return 0.0f;
}

FRotator UDestinationTrackerPawnComponent::GetDirection() const {
    return FRotator{};
}

FVector UDestinationTrackerPawnComponent::GetDestination() const {
    return FVector{};
}

void UDestinationTrackerPawnComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDestinationTrackerPawnComponent, Destination);
}

UDestinationTrackerPawnComponent::UDestinationTrackerPawnComponent() {
    DistanceSquared = 1;
}

