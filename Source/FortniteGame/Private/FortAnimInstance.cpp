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
    this->bUpdateAllPawnProperties = true;
    this->VelocityLerpAlpha = 1;
    this->MinSpeed2DThreshold = 1;
    this->PawnSpeed2D = 1;
    this->PawnVelocityZ = 1;
    this->PawnMovementDirectionAzimuth = 1;
    this->PawnMovementDirectionElevation = 1;
    this->bIsJumping = false;
    this->bIsFalling = false;
    this->bShouldPredictLanding = false;
    this->bLandingPredicted = false;
    this->PredictedFallTimeLeft = 1;
    this->FallLookAheadSubStepping = 1;
    this->FallLookAheadMaxIterations = 0;
    this->bDebugLandPrediction = false;
    this->bRecordJumpPositions = false;
    this->bIsRecordingJump = false;
    this->RecordJumpFrameCount = 0;
    this->AimPitch = 1;
    this->AimYaw = 1;
    this->TimeForRecentlyFired = 1;
    this->TimeToReachRelaxedLevel1 = 1;
    this->TimeToReachRelaxedLevel2 = 1;
    this->MinTimeAfterFiredBeforeWallRelaxed = 1;
    this->bRecentlyFired = false;
    this->bIsRelaxedLevel1 = false;
    this->bIsRelaxedLevel2 = false;
    this->bIsWeaponLoweredNearWall = false;
    this->bExitedRelaxedThisUpdate = false;
    this->bLowerWeaponNearWallDuringTargeting = true;
    this->RelaxedLevelTimeCounter = 1;
    this->SavedWeaponLastFireTime = 1;
    this->RequestedRelaxedState = EAnimRelaxedState::None;
    this->bClothEnabled = false;
    this->bAnimDynamicsEnabled = false;
    this->bRigidBodyEnabled = false;
    this->bEnableAdditiveLayer = false;
}

