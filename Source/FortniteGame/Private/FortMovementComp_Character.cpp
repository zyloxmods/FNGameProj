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

UFortMovementComp_Character::UFortMovementComp_Character() {
    this->LandHardSoundFallSpeedThreshold = 1400.00f;
    this->LandSoundFallSpeedThreshold = 600.00f;
    this->PushBumpedPawnClass = NULL;
    this->NetworkSmoothingVisibilityThreshold = 0.25f;
    this->PlayerLodRequiredForFloorCheckWhenRendered = 0;
    this->AILodRequiredForFloorCheckWhenRendered = EFortAILODLevel::AboveNormal;
    this->VelocityBasedStrafeCurve = NULL;
    this->VelocityBasedTurnCurve = NULL;
    this->VelocityBasedBackupCurve = NULL;
    this->bWasUsingVelocityBasedTurnCurve = false;
    this->RotationYawRateToRestore = 0.00f;
    this->FallingSlopeSafeSlideAngleCached = 0.00f;
    this->FallingSlopeSafeSlideNormalZ = 0.00f;
    this->SkydivingMaxSmoothUpdateDistanceScale = 3.00f;
    this->SlideTimeUntilReset = 0.10f;
    this->SlideIfVelocityLessThanZ = -400.00f;
    this->GravityCeilingRelation = -1;
    this->CurrentZiplineVelocityDirection = 0.00f;
    this->GracePeriodToConnectToZipline = 0.00f;
    this->FallingStartedZ = 0.00f;
    this->bTriggeredFallingFeedbackSinceLanded = false;
    this->bUpdatesFloorWhenNotInFullSimulation = false;
    this->bUpdatesFloorWhenNotInFullSimulationOnlyOnNetUpdate = false;
}

