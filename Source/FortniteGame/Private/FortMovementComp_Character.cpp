#include "FortMovementComp_Character.h"

bool UFortMovementComp_Character::IsPassivelySkydiving() const {
    return false;
}

bool UFortMovementComp_Character::IsPassivelyParachuting() const {
    return false;
}

bool UFortMovementComp_Character::IsActivelyStrafingInAir() const {
    return false;
}

bool UFortMovementComp_Character::IsActivelySkydivingUpInVortex() const {
    return false;
}

bool UFortMovementComp_Character::IsActivelySkydiving() const {
    return false;
}

bool UFortMovementComp_Character::IsActivelyParachuting() const {
    return false;
}

FVector UFortMovementComp_Character::GetWaterVelocity() const {
    return FVector{};
}

FVector UFortMovementComp_Character::GetWaterSurfaceNormal() const {
    return FVector{};
}

FVector UFortMovementComp_Character::GetWaterSurfaceLocation() const {
    return FVector{};
}

float UFortMovementComp_Character::GetWaterImmersionDepth() const {
    return 0.0f;
}

FVector UFortMovementComp_Character::GetPlayerRelativeVelocityToWater() const {
    return FVector{};
}

float UFortMovementComp_Character::GetFallingStartedZ() const {
    return 0.0f;
}

UFortMovementComp_Character::UFortMovementComp_Character() {
    LandHardSoundFallSpeedThreshold = 1;
    LandSoundFallSpeedThreshold = 1;
    PushBumpedPawnClass = NULL;
    NetworkSmoothingVisibilityThreshold = 1;
    NetworkSmoothingThrottleProxyUpdateForPawnLOD = 0;
    NetworkSmoothingViewAngleThreshold = 1;
    NetworkSmoothingViewAngleThresholdSmall = 1;
    NetworkSmoothingNoThrottleWithinDistanceInMeters = 1;
    PlayerLodRequiredForFloorCheckWhenRendered = 0;
    AILodRequiredForFloorCheckWhenRendered = EFortAILODLevel::MIN;
    VelocityBasedStrafeCurve = NULL;
    VelocityBasedTurnCurve = NULL;
    VelocityBasedBackupCurve = NULL;
    bWasUsingVelocityBasedTurnCurve = false;
    RotationYawRateToRestore = 1;
    FallingSlopeSafeSlideAngleCached = 1;
    FallingSlopeSafeSlideNormalZ = 1;
    bComputeWaterSplineDataOnSimulatedMovement = false;
    SkydivingMaxSmoothUpdateDistanceScale = 1;
    SlideTimeUntilReset = 1;
    SlideIfVelocityLessThanZ = 1;
    GravityCeilingRelation = 0;
    CurrentZiplineVelocityDirection = 1;
    GracePeriodToConnectToZipline = 1;
    FallingStartedZ = 1;
    bTriggeredFallingFeedbackSinceLanded = false;
    bUpdatesFloorWhenNotInFullSimulation = false;
    bUpdatesFloorWhenNotInFullSimulationOnlyOnNetUpdate = false;
}

