#include "FortPlayerAnimInstance.h"


void UFortPlayerAnimInstance::HandleBeginSkydiving() {
}

float UFortPlayerAnimInstance::GetRelativeAngle(float MovementAngle, EFortCardinalDirection Direction, bool bMirrorBackside) const {
    return 0.0f;
}

EFortCardinalDirection UFortPlayerAnimInstance::GetCardinalDirectionFromAngle(float Angle, float DeadZoneAngle) const {
    return EFortCardinalDirection::North;
}

void UFortPlayerAnimInstance::AnimNotify_StopFireFX(const UAnimNotify* Notify) {
}

void UFortPlayerAnimInstance::AnimNotify_SkydiveAdditiveEnd(const UAnimNotify* Notify) {
}

void UFortPlayerAnimInstance::AnimNotify_PlayWeaponInspect(const UAnimNotify* Notify) {
}

void UFortPlayerAnimInstance::AnimNotify_PlaySecondaryFireFX(const UAnimNotify* Notify) {
}

void UFortPlayerAnimInstance::AnimNotify_PlayFireFX(const UAnimNotify* Notify) {
}

UFortPlayerAnimInstance::UFortPlayerAnimInstance() {
    this->DeltaTime = 0.00f;
    this->FortPlayerPawn = NULL;
    this->BodyType = (EFortCustomBodyType)0;
    this->AnimBodyType = EFortPlayerAnimBodyType::Small;
    this->Gender = EFortCustomGender::Invalid;
    this->FallAnimDuration = 0.00f;
    this->FallPlayRate = 0.00f;
    this->FortPlayerPawnAthena = NULL;
    this->JogStartSpeedWarpingAlpha = 0.00f;
    this->SlopeWarpingAlpha = 0.00f;
    this->DBNOSlopeWarpingAlpha = 0.00f;
    this->DBNOTurnPlayRate = 0.00f;
    this->ADSToNonADSBlendTime = 0.00f;
    this->NonADSToADSBlendTime = 0.00f;
    this->RightHandIKAlpha = 0.00f;
    this->LeftHandIKAlpha = 0.00f;
    this->LeftHandFKAlpha = 0.00f;
    this->bEnableHandIK = true;
    this->SnapWeapon_LHandAlpha = 0.00f;
    this->LegIKAlpha = 0.00f;
    this->bIsSlopeSliding = false;
    this->SlopeSlidingPitch = 0.00f;
    this->SlopeSlidingRoll = 0.00f;
    this->JumpAdditiveLayerAlpha = 0.00f;
    this->JumpAdditiveLeanAlpha = 0.00f;
    this->DisableArmsHeadAdditiveCurveAlpha = 0.00f;
    this->DisableIKRootAdditiveCurveAlpha = 0.00f;
    this->DisableUpperBodyAdditiveMeshSpaceCurveAlpha = 0.00f;
    this->AimPitchAdjustment = 0.00f;
    this->AimYawAdjustment = 0.00f;
    this->MaxAimYawAdjustment = 88.00f;
    this->MaxPitch = 88.00f;
    this->MaxYaw = 88.00f;
    this->ReticleAimDistance = 300.00f;
    this->AimAdjustmentInterpSpeed = 12.00f;
    this->AimTwistCorrectionExponent = 4.00f;
    this->AimDriverDownwardPitchCorrectionScale = -0.75f;
    this->AimDriverUpwardPitchCorrectionScale = -0.75f;
    this->WeaponAimingFreezeCurveName = TEXT("WeaponAimingFreeze");
    this->ConsumableOffsetPose = NULL;
    this->bAimWeaponTowardsReticle = false;
    this->bDebugWeaponAiming = false;
    this->bCachedPawnTransform = false;
    this->bHasValidWeaponMuzzleSocket = false;
    this->bUseCustomFloorOffset = false;
    this->bPlayConsumableOffsetPose = false;
    this->bIsOnGround = false;
    this->bIsTargeting = false;
    this->bPlayUpperBodyTargeting = false;
    this->bPlayingRootMotion = false;
    this->bIsStunned = false;
    this->bIsMontagePlaying = false;
    this->bIsPlayingMeleeAnim = false;
    this->bIsGoingCommando = false;
    this->bWasRelaxedLevel1 = false;
    this->bTempIsRelaxedLevel1 = false;
    this->bIsCrouching = false;
    this->bIsCrouchMoving = false;
    this->bIsCrouchSprinting = false;
    this->bUsingHoverboard = false;
    this->bIsSprinting = false;
    this->bIsAccelerating2D = false;
    this->bIsMoving2D = false;
    this->bIsAboveMinimumLocomotionSpeed = false;
    this->bIsBackpedaling = false;
    this->bShouldWalkRightFootFwd = false;
    this->bShouldPlayJogStartTransition = false;
    this->bShouldPlayJogStopTransition = false;
    this->bShouldPlayJogPivotTransition = false;
    this->bStartTransitionActive = false;
    this->bStopTransitionActive = false;
    this->bPivotTransitionActive = false;
    this->bShouldPlayPostPivotTransition = false;
    this->bShouldEarlyOutStartState = false;
    this->bShouldEarlyOutStopState = false;
    this->bShouldEarlyOutPivotState = false;
    this->bIsDBNO = false;
    this->bIsUsingJetpack = false;
    this->bIsUsingRemoteControlPawn = false;
    this->bIsInVehicle = false;
    this->bIsInShoppingCart = false;
    this->bIsShoppingCartFrontPassenger = false;
    this->bIsShoppingCartSidePassenger = false;
    this->bIsInCannon = false;
    this->bHasFacialAnimationData = false;
    this->bStopJogDoOnceTriggered = false;
    this->bStartJogDoOnceTriggered = false;
    this->bPivotTransitionDoOnceTriggered = true;
    this->bPostPivotTransitionDoOnceTriggered = false;
    this->bIsFallingSlow = false;
    this->bIsFloatingHigher = false;
    this->bIsFloatingHigherInAir = false;
    this->bIsBalloonInAir = false;
    this->bHasBalloons = false;
    this->bIsGhost = false;
    this->bHasIcyFeet = false;
    this->bIsMovingAndInMotionEmote = false;
    this->bIsPlayingEmote = false;
    this->bIsGrappleRopeActive = false;
    this->BuildingState = EFortBuildingState::Placement;
    this->TargetingWeight = 0.00f;
    this->MeleeTwistCurveValue = 0.00f;
    this->JumpUpperBodyBlendWeight = 0.00f;
    this->RightArmMaskWeight = 0.00f;
    this->LeftArmMaskWeight = 0.00f;
    this->UpperBodyNoAdditivesMaskWeight = 0.00f;
    this->LocomotionAdditiveAlpha = 0.00f;
    this->LocalAccelYawAngle = 0.00f;
    this->LocalAccelYawAngleLastTick = 0.00f;
    this->LocalAccelDeltaYawAngle = 0.00f;
    this->MaxSpeed = 0.00f;
    this->VelocityZ = 0.00f;
    this->Speed2D = 0.00f;
    this->LocalVelocityYawAngle = 0.00f;
    this->LocalVelocityYawAngleMinusJogBlendSpaceRotation = 0.00f;
    this->LocalVelocityYawAngleMinusMeleeTwist = 0.00f;
    this->LocalAccelVelocityYawDelta = 0.00f;
    this->SpeedAdjustedPlayRate = 0.00f;
    this->LeanAdditiveAlpha = 0.00f;
    this->LeanAngle = 0.00f;
    this->SprintYawAngle = 0.00f;
    this->LocomotionTransitionAdditiveAlpha = 0.00f;
    this->StartStateWeight = 0.00f;
    this->StartStateRotationMultiplier = 0.00f;
    this->StartAnimDeltaAngleNorth = 0.00f;
    this->StartAnimDeltaAngleEast = 0.00f;
    this->StartAnimDeltaAngleSouth = 0.00f;
    this->StartAnimDeltaAngleWest = 0.00f;
    this->StopStateRotationMultiplier = 0.00f;
    this->StopStateWeight = 0.00f;
    this->StopAnimDeltaAngle = 0.00f;
    this->JogPrePivotTimer = 0.00f;
    this->PivotStateWeight = 0.00f;
    this->PrePivotAnimDeltaAngle = 0.00f;
    this->PostPivotAnimDeltaAngle = 0.00f;
    this->TransitionPlayRate = 0.00f;
    this->YawDeltaCurrentTick = 0.00f;
    this->YawDeltaLastTick = 0.00f;
    this->YawDeltaSmoothed = 0.00f;
    this->AbsYawDeltaSmoothed = 0.00f;
    this->PawnToVehicleDeltaYawAngleDegrees = 0.00f;
    this->LastPawnToVehicleDeltaYawAngleDegrees = 0.00f;
    this->WeaponCoreAnim = EFortWeaponCoreAnimation::MAX;
    this->WeaponAnimSet = NULL;
    this->PreviousFrameLocomotionCardinalDirection = EFortCardinalDirection::North;
    this->LocomotionCardinalDirection = EFortCardinalDirection::North;
    this->StartTransitionInitialDirection = EFortCardinalDirection::North;
    this->StopCardinalDirection = EFortCardinalDirection::North;
    this->PrePivotCardinalDirection = EFortCardinalDirection::North;
    this->PostPivotCardinalDirection = EFortCardinalDirection::North;
    this->TargetingSpeed = 12.00f;
    this->JumpUpperBodyBlendSpeed = 12.00f;
    this->TargetingWeightInLocomotion = 0.00f;
    this->MinimumLocomotionSpeed = 6.00f;
    this->BackpedalSpeedThresholdAngle = 108.00f;
    this->SpeedAdjustedPlayratePivotSpeed = 4.00f;
    this->AuthoredCrouchSprintSpeed = 200.00f;
    this->AuthoredCrouchWalkSpeed = 200.00f;
    this->AuthoredCrouchJogSpeed = 200.00f;
    this->AuthoredSprintSpeed = 600.00f;
    this->AuthoredWalkSpeed = 150.00f;
    this->AuthoredJogBwdSpeed = 250.00f;
    this->AuthoredJogFwdSpeed = 365.00f;
    this->AuthoredJogStrafeSpeed = 365.00f;
    this->LeanFadeInSpeed = 6.00f;
    this->LeanFadeOutSpeed = 8.00f;
    this->LeanAngleMultiplier = 3.40f;
    this->LeanAngleBackpedalMultiplier = 0.30f;
    this->SprintYawAngleInterpSpeed = 12.00f;
    this->SprintYawAngleFadeOutSpeed = 10.00f;
    this->LocomotionDeadZoneAngle = 6.00f;
    this->StartStateRotationFadeInSpeed = 5.00f;
    this->StopStateRotationFadeOutSpeed = 3.00f;
    this->JogPivotTimeToPivot = 0.12f;
    this->PostPivotAnimInterpSpeed = 4.00f;
    this->MaxAllowedPivotRotation = 55.00f;
    this->MeleeTwistCurveValueName = TEXT("MeleeTwist");
    this->MeleeAnimCurveValueName = TEXT("MeleeAnim");
    this->AdditiveLayerCurveValueName = TEXT("AdditiveLayer");
    this->MaskRightArmCurveValueName = TEXT("MaskRightArm");
    this->StartAnimCurveValueName = TEXT("StartAnim");
    this->StopAnimCurveValueName = TEXT("StopAnim");
    this->PivotAnimCurveValueName = TEXT("PivotAnim");
    this->bEnableAdditiveLayer = true;
    this->bShouldDisableJogTransitions = false;
    this->bIsShieldUp = false;
    this->bIsJumpBoosting = false;
    this->bIsRelaxedLevel1AndNotJumpBoosting = false;
    this->bPlayWeaponInspect = false;
    this->bInterruptWeaponInspect = false;
    this->bInterruptWeaponInspectNoBlend = false;
    this->bPlayRelaxedEntry = false;
    this->bInterruptRelaxedEntryNoBlend = false;
    this->HeadTrackingReticleSocketName = TEXT("Glasses");
    this->HeadTrackingReticleSocketLookAtAxis = EAxis::Y;
    this->HeadTrackingReticleInterpSpeed = 12.00f;
    this->HeadTrackingReticlePitchAlpha = 0.50f;
    this->HeadTrackingReticleAimDistance = 100.00f;
    this->HeadTrackingReticleAimDistanceDownsights = 60.00f;
    this->IdlePelvisOffsetAlpha = 0.00f;
    this->PawnLOD = 0;
    this->WeaponInspectDelayTimeRemaining = 0.00f;
    this->MinDelayBetweenWeaponInspects = 0.00f;
    this->DisabledFullBodySprintTimeRemaining = 0.00f;
    this->bIsFullBodySprintTransitionDisabled = false;
    this->bTransition_FullBody_Sprinting = false;
    this->bTransition_FullBody_Stunned = false;
    this->bTransition_FullBody_DBNOMove = false;
    this->bTransition_FullBody_DBNOTurn = false;
    this->bTransition_Fullbody_LaunchpadTakeOff = false;
    this->bEarlyOut_Lowerbody_Turns = false;
    this->bTransition_LowerBody_Shuffle = false;
    this->bTransition_LowerBody_Movement = false;
    this->bTransition_LocomotionAdditive_CrouchTurning = false;
    this->bLocomotion_Idles_to_Turns = false;
    this->bFullBodyAdditives_NewFallAdditive_to_BalloonLoop = false;
}

