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
    SplineLocationOffsetZ = 1;
    bOffsetZIsAbsolute = false;
    bTickGroundSplineMovement = false;
    NumberOfMoveRetriesPerTick = 0;
    ClimbSpeedPercent = 1;
    PitchSpeed = 1;
    PitchThreshold = 1;
    PitchThresholdSmoothing = 1;
    LinearJerk = 1;
    YawJerk = 1;
    GroundCheckFrequency = 1;
    GroundCheckDistance = 1;
    AttemptUnstickMinimumAngleDegrees = 1;
    PawnPushTime = 1;
    ClientImmediatelySnapToReplicatedLocationTime = 1;
    ClientImmediatelySnapToReplicatedLocationDistanceMinimumSquared = 1;
    PawnPushForceMultiplier = 1;
    GameplayEffectClassDestroyBuildings = NULL;
    SplineDistanceReplicationRecoveryPercent = 1;
    SplineDistanceReplicationRecoveryMinDistancePerSecond = 1;
    SpeedTimeReplicationRecoveryPercent = 1;
    AbilitySystemComponent = NULL;
}

