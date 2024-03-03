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
    this->LandHardSoundFallSpeedThreshold = 1;
    this->LandSoundFallSpeedThreshold = 1;
    this->PushBumpedPawnClass = NULL;
    this->NetworkSmoothingVisibilityThreshold = 1;
    this->NetworkSmoothingThrottleProxyUpdateForPawnLOD = 0;
    this->NetworkSmoothingViewAngleThreshold = 1;
    this->NetworkSmoothingViewAngleThresholdSmall = 1;
    this->NetworkSmoothingNoThrottleWithinDistanceInMeters = 1;
    this->PlayerLodRequiredForFloorCheckWhenRendered = 0;
    this->AILodRequiredForFloorCheckWhenRendered = EFortAILODLevel::MIN;
    this->VelocityBasedStrafeCurve = NULL;
    this->VelocityBasedTurnCurve = NULL;
    this->VelocityBasedBackupCurve = NULL;
    this->bWasUsingVelocityBasedTurnCurve = false;
    this->RotationYawRateToRestore = 1;
    this->FallingSlopeSafeSlideAngleCached = 1;
    this->FallingSlopeSafeSlideNormalZ = 1;
    this->bComputeWaterSplineDataOnSimulatedMovement = false;
    this->SkydivingMaxSmoothUpdateDistanceScale = 1;
    this->SlideTimeUntilReset = 1;
    this->SlideIfVelocityLessThanZ = 1;
    this->GravityCeilingRelation = 0;
    this->CurrentZiplineVelocityDirection = 1;
    this->GracePeriodToConnectToZipline = 1;
    this->FallingStartedZ = 1;
    this->bTriggeredFallingFeedbackSinceLanded = false;
    this->bUpdatesFloorWhenNotInFullSimulation = false;
    this->bUpdatesFloorWhenNotInFullSimulationOnlyOnNetUpdate = false;
}

