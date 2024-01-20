#include "FortTrackMovementComponent.h"
#include "Net/UnrealNetwork.h"

void UFortTrackMovementComponent::OnRep_ReplicatedTrackMovement() {
}

bool UFortTrackMovementComponent::IsReverseDirection() const {
    return false;
}

AFortTrack* UFortTrackMovementComponent::GetTrack() const {
    return NULL;
}

USplineComponent* UFortTrackMovementComponent::GetSpline() const {
    return NULL;
}

float UFortTrackMovementComponent::GetDistanceAlongSpline() const {
    return 0.0f;
}

void UFortTrackMovementComponent::FlipDirection() {
}

void UFortTrackMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortTrackMovementComponent, TrackVelocity);
    DOREPLIFETIME(UFortTrackMovementComponent, ReplicatedTrackMovement);
}

UFortTrackMovementComponent::UFortTrackMovementComponent() {
    this->OptionalEditorPlacedTrack = NULL;
    this->SplineLocationOffsetZ = 104.00f;
    this->DiscoverSplineFrequency = 2.00f;
    this->TrackVelocity = 256.00f;
    this->bReverseYawWhenReversedOnSpline = true;
    this->ClientPredictionSpeedModifier = 1.00f;
}

