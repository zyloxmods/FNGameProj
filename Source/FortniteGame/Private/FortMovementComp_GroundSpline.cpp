#include "FortMovementComp_GroundSpline.h"
#include "Net/UnrealNetwork.h"

void UFortMovementComp_GroundSpline::TeleportToDistanceOnSpline(USplineComponent* NewTravelSpline, float Distance) {
}

void UFortMovementComp_GroundSpline::SetTargetSpeeds(const FGroundSplineSpeedData& NewTargetSpeeds) {
}

void UFortMovementComp_GroundSpline::SetSpline(USplineComponent* NewTravelSpline, float NewDistanceOnSpline) {
}

void UFortMovementComp_GroundSpline::SetAbilitySystemComponent(UAbilitySystemComponent* NewAbilitySystemComponent) {
}

void UFortMovementComp_GroundSpline::OnRep_ReplicatedTargetSpeeds() {
}

void UFortMovementComp_GroundSpline::OnRep_ReplicatedSplineLocationData() {
}

bool UFortMovementComp_GroundSpline::GetTransformAtDistanceOnSpline(FTransform& OutTransform, float Distance) const {
    return false;
}

FGroundSplineSpeedData UFortMovementComp_GroundSpline::GetTargetSpeeds() const {
    return FGroundSplineSpeedData{};
}

float UFortMovementComp_GroundSpline::GetSplineDistance() const {
    return 0.0f;
}

USplineComponent* UFortMovementComp_GroundSpline::GetSpline() const {
    return NULL;
}

FGroundSplineSpeedData UFortMovementComp_GroundSpline::GetCurrentSpeeds() const {
    return FGroundSplineSpeedData{};
}

void UFortMovementComp_GroundSpline::ClientOnlySnapToServerLocationAndSpeed() {
}

void UFortMovementComp_GroundSpline::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortMovementComp_GroundSpline, bTickGroundSplineMovement);
    DOREPLIFETIME(UFortMovementComp_GroundSpline, ReplicatedSplineLocationData);
    DOREPLIFETIME(UFortMovementComp_GroundSpline, ReplicatedTargetSpeeds);
}

UFortMovementComp_GroundSpline::UFortMovementComp_GroundSpline() {
    this->SplineLocationOffsetZ = 1;
    this->bOffsetZIsAbsolute = false;
    this->bTickGroundSplineMovement = false;
    this->NumberOfMoveRetriesPerTick = 0;
    this->ClimbSpeedPercent = 1;
    this->PitchSpeed = 1;
    this->PitchThreshold = 1;
    this->PitchThresholdSmoothing = 1;
    this->LinearJerk = 1;
    this->YawJerk = 1;
    this->GroundCheckFrequency = 1;
    this->GroundCheckDistance = 1;
    this->AttemptUnstickMinimumAngleDegrees = 1;
    this->PawnPushTime = 1;
    this->ClientImmediatelySnapToReplicatedLocationTime = 1;
    this->ClientImmediatelySnapToReplicatedLocationDistanceMinimumSquared = 1;
    this->PawnPushForceMultiplier = 1;
    this->GameplayEffectClassDestroyBuildings = NULL;
    this->SplineDistanceReplicationRecoveryPercent = 1;
    this->SplineDistanceReplicationRecoveryMinDistancePerSecond = 1;
    this->SpeedTimeReplicationRecoveryPercent = 1;
    this->AbilitySystemComponent = NULL;
}

