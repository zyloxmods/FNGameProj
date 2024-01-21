#include "FortProjectileMovementComponent.h"
#include "Net/UnrealNetwork.h"

void UFortProjectileMovementComponent::SetHomingTurnSpeedMin(float NewHomingTurnSpeedMin) {
}

void UFortProjectileMovementComponent::SetHomingTurnSpeedMax(float NewHomingTurnSpeedMax) {
}

void UFortProjectileMovementComponent::SetHomingTimeUntilMaxTurnSpeed(float NewTimeUntilMax) {
}

void UFortProjectileMovementComponent::SetHomingTargetPosition(const FVector& HomingTargetPosition) {
}

void UFortProjectileMovementComponent::SetHomingTargetOffset(const FVector& NewHomingOffset) {
}

void UFortProjectileMovementComponent::SetHomingTarget(AActor* HomingTarget) {
}

void UFortProjectileMovementComponent::SetHomingStyle(EFortHomingStyle NewHomingStyle, bool ResetHomingTurnSpeedTimer) {
}

void UFortProjectileMovementComponent::SetHomingLockTargetDistanceThreshold(float NewDistanceThreshold) {
}

void UFortProjectileMovementComponent::SetHomingLaserTargetDistance(float NewDistance) {
}

void UFortProjectileMovementComponent::SetDesiredDirection(const FVector& Direction) {
}

void UFortProjectileMovementComponent::SetAccelerationMagnitude(const float InAccelerationMagnitude) {
}

void UFortProjectileMovementComponent::OnRep_HomingData() {
}

EFortHomingStyle UFortProjectileMovementComponent::GetInitalHomingStyle() const {
    return EFortHomingStyle::None;
}

void UFortProjectileMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortProjectileMovementComponent, HomingData);
    DOREPLIFETIME(UFortProjectileMovementComponent, DesiredDirection);
    DOREPLIFETIME(UFortProjectileMovementComponent, AccelerationMagnitude);
}

UFortProjectileMovementComponent::UFortProjectileMovementComponent() {
    this->InitialHomingStyle = EFortHomingStyle::None;
    this->HomingLaserTargetDistance = 50000.00f;
    this->bHasHomedTowardTarget = false;
    this->HomingTravelTime = 0.00f;
    this->AccelerationMagnitude = 0.00f;
}

