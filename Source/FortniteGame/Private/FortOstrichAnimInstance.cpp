#include "FortOstrichAnimInstance.h"












void UFortOstrichAnimInstance::OnEmoteMontageStarted(UAnimMontage* EmoteMontage) {
}

void UFortOstrichAnimInstance::OnEmoteMontageBlendingOut(UAnimMontage* EmoteMontage, bool bInterrupted) {
}

void UFortOstrichAnimInstance::AnimNotify_MechBeginFire(const UAnimNotify* Notify) {
}

void UFortOstrichAnimInstance::AnimNotify_JumpEnter(const UAnimNotify* Notify) {
}

void UFortOstrichAnimInstance::AnimNotify_EmptyPoseState(const UAnimNotify* Notify) {
}

void UFortOstrichAnimInstance::AnimNotify_AnimNotify_Mech_OnCoolDown(const UAnimNotify* Notify) {
}

void UFortOstrichAnimInstance::AnimNotify_AnimNotify_AmmoHide(const UAnimNotify* Notify) {
}

void UFortOstrichAnimInstance::AnimNotify_AnimNotify_AmmoCheck(const UAnimNotify* Notify) {
}

UFortOstrichAnimInstance::UFortOstrichAnimInstance() {
    this->MechMeshSpecialMontage = NULL;
    this->bDoingSpecialEmote = false;
    this->bIsCosmeticPreview = false;
    this->bIsMoving2D = false;
    this->bWasMoving2DLastFrame = false;
    this->bIsShotgunFired = false;
    this->bIsMechBeginFired = false;
    this->bIsFallingWithDriver = false;
    this->bIsSkyTubingWithDriver = false;
    this->bIsInAirWithDriver = false;
    this->bStartTransitionTriggeredAndEnableStarts = false;
    this->MechWalkPlayRateValue = 1;
    this->MechWalkSpeedWarpingValue = 1;
    this->RocketCurveValueFloat = 1;
    this->ShotgunAmmo_SlideValue = 1;
    this->Ostrich = NULL;
    this->EmoteMeshToCopy = NULL;
    this->YawDeltaCurrentTick = 1;
    this->SlopeWarpingAlpha = 1;
    this->SlopeWarpingAlphaInterpSpeed = 1;
    this->Speed2D = 1;
    this->LocalAimYaw = 1;
    this->GunnerAimTargetDeltaYaw = 1;
    this->GunnerAimTargetDeltaPitch = 1;
    this->LocalAimCardinalDirection = EFortCardinalDirection::North;
    this->LocalAimYawDeadZoneAngle = 1;
    this->LocalVelocityYawAngle = 1;
    this->LocalVelocityYawAngleInterpolated = 1;
    this->LocalAccelerationYawAngle = 1;
    this->LocomotionCardinalDirection = EFortCardinalDirection::North;
    this->LocomotionDeadZoneAngle = 1;
    this->bIsDashing = false;
    this->bIsDashAnimDurationElapsed = false;
    this->bIsChargingJump = false;
    this->bHasDriver = false;
    this->bHasGunner = false;
    this->bIsEmoting = false;
    this->bIsOnGround = false;
    this->bIsRocketOnCoolDown = false;
    this->bShouldApplyShoulderPadsAdditive = false;
    this->bInAir = false;
    this->bShouldRightArmLookAt = false;
    this->bPassengerBootUp = false;
    this->bIsEmptyOnFirstLoad = true;
    this->bJustDidStompInAir = false;
    this->bIsStompInAir = false;
    this->bWasStompInAir = false;
    this->bShouldPlayJumpCharging = false;
    this->bHadDriver = false;
    this->bJustGotDriver = false;
    this->bJustLostDriver = false;
    this->bWasDashing = false;
    this->bStartedDash = false;
    this->bHadGunner = false;
    this->bJustGotGunner = false;
    this->bJustLostGunner = false;
    this->bShouldPlayJogStop = false;
    this->bShouldBringAmmoBack = false;
    this->bHasAnyPlayer = false;
    this->bIsOnCoolDown = false;
    this->bShouldPlayNormalJump = false;
    this->bShouldPlayChargedJump = false;
    this->bIsSkyTubing = false;
    this->bShouldPlaySkyTubingLoop = false;
    this->bStartTransitionTriggered = false;
    this->bStartEarlyOut = false;
    this->bPivotTransitionTriggered = false;
    this->bPivotEarlyOut = false;
    this->bShouldEarlyOutStompLanding = false;
    this->JumpApexLoopAlphaValue = 1;
    this->StatusStartPositionAlphaValue = 1;
    this->InMotionAlphaValue = 1;
    this->DashLeansAlphaValue = 1;
    this->ShotgunShellsAlphaValue = 1;
    this->GunnerJogBounceAlphaValue = 1;
    this->GunnerAimYawBlendIn = 1;
    this->GunnerAimYawBlendOut = 1;
    this->RightArmNoAdditiveAlphaValue = 1;
    this->BaseAdditiveAlphaValue = 1;
    this->GunnerAlphaValue = 1;
    this->JoyStickAlphaValue = 1;
    this->ShellOneAlphaValue = 1;
    this->ShellTwoAlphaValue = 1;
    this->ShellThreeAlphaValue = 1;
    this->ShellFourAlphaValue = 1;
    this->ShellsPlayRateValue = 1;
    this->RecoilAmountAlphaValue = 1;
    this->LowerBodyRecoilAdditiveAlphaValue = 1;
    this->ChargeJumpFloatValue = 1;
    this->InMotionAlphaInterpSpeed = 1;
    this->DashLeansAlphaInterpSpeed = 1;
    this->GunnerJogBounceAlphaInterpSpeed = 1;
    this->RightArmNoAdditiveInterpSpeed = 1;
    this->JoyStickAlphaInterpSpeed = 1;
    this->GunnerAlphaInterpSpeed = 1;
    this->StatusStartPositionAlphaWhemIsEmptyOnFirstLoad = 1;
    this->DashLeansAlphaWhenGunner = 1;
    this->DashLeansAlphaNoGunner = 1;
    this->ShotgunShellsAlphaWhenShotgunFires = 1;
    this->ShotgunShellsAlphaNoShotgunFiring = 1;
    this->BaseAdditiveAlphaWhenMontageIsPlaying = 1;
    this->BaseAdditiveAlphaNoMontagePlaying = 1;
    this->JoyStickAlphaWithGunner = 1;
    this->GunnerAlphaWithGunner = 1;
    this->ShellOneAlphaAmmoCountAt3 = 1;
    this->ShellTwoAlphaAmmoCountAt2 = 1;
    this->ShellThreeAlphaAmmoCountAt1 = 1;
    this->ShellFourAlphaAmmoCountAt0 = 1;
    this->ShellsPlayRateWhenNoMoreAmmoAndShouldBringAmmo = 1;
    this->RecoilAmountAlphaWhenMontagePlayingAndShotgunFires = 1;
    this->LowerBodyRecoilAdditiveAlphaWithDriver = 1;
    this->LowerBodyRecoilAdditiveAlphaNoDriver = 1;
    this->JumpApexLoopAlphaNotChargingJump = 1;
    this->JumpApexLoopAlphaWhenIsChargingJump = 1;
    this->PlayRateSpeedWarpAlpha = 1;
    this->RigidBodyAlpha = 1;
    this->MechShotgunReload = NULL;
    this->MechShotgunFireA = NULL;
    this->MechShotgunFireB = NULL;
    this->MechRocketFire = NULL;
    this->MechRocketFireSettle = NULL;
    this->ChargedJumpApexSeq = NULL;
    this->ChargedJumpFallSeq = NULL;
    this->ChargedJumpLandSeq = NULL;
    this->ChargedJumpLandPredictedSeq = NULL;
    this->NormalJumpApexSeq = NULL;
    this->NormalJumpFallSeq = NULL;
    this->NormalJumpLandSeq = NULL;
    this->NormalJumpLandPredictedSeq = NULL;
    this->JumpBaseApexSeq = NULL;
    this->JumpBaseFallSeq = NULL;
    this->JumpBaseLandSeq = NULL;
    this->JumpBaseLandPredictedSeq = NULL;
    this->bTransition_Idle_To_Movement = false;
    this->bTransition_BootUp_To_Movement = false;
    this->bTransition_Turn_To_Idle = false;
    this->bTransition_Stop_To_Idle = false;
    this->bTransition_DashLoop_To_Default = false;
    this->bTransition_DashLoop_To_DashOutro = false;
    this->NotJustGotDriverFloat = 1;
    this->IsShotgunFiredFloat = 1;
    this->UpperBodyLagMaxRecoverySpeed = 1;
    this->UpperBodyLagRecoverySmoothness = 1;
    this->UpperBodyLagRecoveryMass = 1;
    this->UpperBodyLagRecoveryDelay = 1;
    this->UpperBodyLagOffsetLimitDuringTurns = 1;
    this->UpperBodyLagOffsetLimitDuringTurnsInterpSpeed = 1;
    this->UpperBodyLagOffsetLimitWhileStill = 1;
    this->UpperBodyLagOffsetLimitWhileStillInterpSpeed = 1;
    this->CurrentUpperBodyLagRecoverySpeed = 1;
    this->TimeUntilNextUpperBodyLagRecovery = 1;
    this->CurrentUpperBodyLagOffsetLimit = 1;
    this->PivotAnimationLeft = NULL;
    this->PivotAnimationRight = NULL;
    this->PivotEarlyOutAngleThreshold = 1;
    this->PivotAnimation = NULL;
    this->PivotAnimPosition = 1;
    this->bEnableStarts = true;
    this->StartEarlyOutThresold = 1;
    this->StartAnimDistanceFromMarker = 1;
    this->ActualDistanceFromMarker = 1;
    this->StartAnimTimeElapsed = 1;
    this->StartInitialAccelYaw = 1;
    this->StartTurnDirection = 1;
    this->StartCardinalDirection = EFortCardinalDirection::North;
    this->StartAnimation = NULL;
    this->StartAnimPosition = 1;
}

