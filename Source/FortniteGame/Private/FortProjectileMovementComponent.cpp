#include "FortProjectileMovementComponent.h"
#include "Net/UnrealNetwork.h"

void UFortProjectileMovementComponent::SetWaterInteractionComponent(UFortWaterInteractionComponent* WaterComponent) {
}

void UFortProjectileMovementComponent::SetVelocity(const FVector& InReplicatedVelocity) {
}

void UFortProjectileMovementComponent::SetReplicatedAutoRegisterUpdatedComponent(const bool bInReplicatedAutoRegisterUpdatedComponent) {
}

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

void UFortProjectileMovementComponent::SetHomingData(const FProjectileHomingData& NewHomingData) {
}

void UFortProjectileMovementComponent::SetDesiredDirection(const FVector& Direction) {
}

void UFortProjectileMovementComponent::SetAccelerationMagnitude(const float InAccelerationMagnitude) {
}

void UFortProjectileMovementComponent::OnRep_ReplicatedVelocity() {
}

void UFortProjectileMovementComponent::OnRep_ReplicatedAutoRegisterUpdatedComponent() {
}

void UFortProjectileMovementComponent::OnRep_HomingData() {
}

void UFortProjectileMovementComponent::OnRep_FortStopSimulatingRepData() {
}

EFortHomingStyle UFortProjectileMovementComponent::GetInitalHomingStyle() const {
    return EFortHomingStyle::None;
}

void UFortProjectileMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortProjectileMovementComponent, HomingData);
    DOREPLIFETIME(UFortProjectileMovementComponent, bReplicatedAutoRegisterUpdatedComponent);
    DOREPLIFETIME(UFortProjectileMovementComponent, DesiredDirection);
    DOREPLIFETIME(UFortProjectileMovementComponent, AccelerationMagnitude);
    DOREPLIFETIME(UFortProjectileMovementComponent, ReplicatedVelocityData);
    DOREPLIFETIME(UFortProjectileMovementComponent, FortStopSimulatingRepData);
}

UFortProjectileMovementComponent::UFortProjectileMovementComponent() {
    InitialHomingStyle = EFortHomingStyle::None;
    bHasHomedTowardTarget = false;
    bSetInitialLocAndDir = false;
    bReplicatedAutoRegisterUpdatedComponent = true;
    bReplicateStopSimulating = false;
    HomingLaserTargetDistance = 1;
    HomingTravelTime = 1;
    HomingOverrideSpeed = 1;
    AccelerationMagnitude = 1;
    WaterInteractionComponent = NULL;
}

