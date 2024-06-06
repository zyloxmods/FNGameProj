#include "FortAnimInstance.h"

AFortAIPawn* UFortAnimInstance::TryGetFortAIPawn() {
    return NULL;
}

void UFortAnimInstance::StopMontageIncludingInactive(float InBlendOutTime, const UAnimMontage* Montage) {
}

void UFortAnimInstance::GetPreviousFrameAimPitchAndYaw(float& OutPitch, float& OutYaw) const {
}

EFortCardinalDirection UFortAnimInstance::GetCardinalDirectionFromAngle(float Angle, float DeadZoneAngle) const {
    return EFortCardinalDirection::North;
}

void UFortAnimInstance::AnimNotify_RightFootStep(const UAnimNotify* Notify) {
}

void UFortAnimInstance::AnimNotify_LeftFootStep(const UAnimNotify* Notify) {
}

UFortAnimInstance::UFortAnimInstance() {
    bUpdateAllPawnProperties = true;
    VelocityLerpAlpha = 1;
    MinSpeed2DThreshold = 1;
    PawnSpeed2D = 1;
    PawnVelocityZ = 1;
    PawnMovementDirectionAzimuth = 1;
    PawnMovementDirectionElevation = 1;
    bIsJumping = false;
    bIsFalling = false;
    bShouldPredictLanding = false;
    bLandingPredicted = false;
    PredictedFallTimeLeft = 1;
    FallLookAheadSubStepping = 1;
    FallLookAheadMaxIterations = 0;
    bDebugLandPrediction = false;
    bRecordJumpPositions = false;
    bIsRecordingJump = false;
    RecordJumpFrameCount = 0;
    AimPitch = 1;
    AimYaw = 1;
    TimeForRecentlyFired = 1;
    TimeToReachRelaxedLevel1 = 1;
    TimeToReachRelaxedLevel2 = 1;
    MinTimeAfterFiredBeforeWallRelaxed = 1;
    bRecentlyFired = false;
    bIsRelaxedLevel1 = false;
    bIsRelaxedLevel2 = false;
    bIsWeaponLoweredNearWall = false;
    bExitedRelaxedThisUpdate = false;
    bLowerWeaponNearWallDuringTargeting = true;
    RelaxedLevelTimeCounter = 1;
    SavedWeaponLastFireTime = 1;
    RequestedRelaxedState = EAnimRelaxedState::None;
    bClothEnabled = false;
    bAnimDynamicsEnabled = false;
    bRigidBodyEnabled = false;
    bEnableAdditiveLayer = false;
}

