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
    MechMeshSpecialMontage = NULL;
    bDoingSpecialEmote = false;
    bIsCosmeticPreview = false;
    bIsMoving2D = false;
    bWasMoving2DLastFrame = false;
    bIsShotgunFired = false;
    bIsMechBeginFired = false;
    bIsFallingWithDriver = false;
    bIsSkyTubingWithDriver = false;
    bIsInAirWithDriver = false;
    bStartTransitionTriggeredAndEnableStarts = false;
    MechWalkPlayRateValue = 1;
    MechWalkSpeedWarpingValue = 1;
    RocketCurveValueFloat = 1;
    ShotgunAmmo_SlideValue = 1;
    Ostrich = NULL;
    EmoteMeshToCopy = NULL;
    YawDeltaCurrentTick = 1;
    SlopeWarpingAlpha = 1;
    SlopeWarpingAlphaInterpSpeed = 1;
    Speed2D = 1;
    LocalAimYaw = 1;
    GunnerAimTargetDeltaYaw = 1;
    GunnerAimTargetDeltaPitch = 1;
    LocalAimCardinalDirection = EFortCardinalDirection::North;
    LocalAimYawDeadZoneAngle = 1;
    LocalVelocityYawAngle = 1;
    LocalVelocityYawAngleInterpolated = 1;
    LocalAccelerationYawAngle = 1;
    LocomotionCardinalDirection = EFortCardinalDirection::North;
    LocomotionDeadZoneAngle = 1;
    bIsDashing = false;
    bIsDashAnimDurationElapsed = false;
    bIsChargingJump = false;
    bHasDriver = false;
    bHasGunner = false;
    bIsEmoting = false;
    bIsOnGround = false;
    bIsRocketOnCoolDown = false;
    bShouldApplyShoulderPadsAdditive = false;
    bInAir = false;
    bShouldRightArmLookAt = false;
    bPassengerBootUp = false;
    bIsEmptyOnFirstLoad = true;
    bJustDidStompInAir = false;
    bIsStompInAir = false;
    bWasStompInAir = false;
    bShouldPlayJumpCharging = false;
    bHadDriver = false;
    bJustGotDriver = false;
    bJustLostDriver = false;
    bWasDashing = false;
    bStartedDash = false;
    bHadGunner = false;
    bJustGotGunner = false;
    bJustLostGunner = false;
    bShouldPlayJogStop = false;
    bShouldBringAmmoBack = false;
    bHasAnyPlayer = false;
    bIsOnCoolDown = false;
    bShouldPlayNormalJump = false;
    bShouldPlayChargedJump = false;
    bIsSkyTubing = false;
    bShouldPlaySkyTubingLoop = false;
    bStartTransitionTriggered = false;
    bStartEarlyOut = false;
    bPivotTransitionTriggered = false;
    bPivotEarlyOut = false;
    bShouldEarlyOutStompLanding = false;
    JumpApexLoopAlphaValue = 1;
    StatusStartPositionAlphaValue = 1;
    InMotionAlphaValue = 1;
    DashLeansAlphaValue = 1;
    ShotgunShellsAlphaValue = 1;
    GunnerJogBounceAlphaValue = 1;
    GunnerAimYawBlendIn = 1;
    GunnerAimYawBlendOut = 1;
    RightArmNoAdditiveAlphaValue = 1;
    BaseAdditiveAlphaValue = 1;
    GunnerAlphaValue = 1;
    JoyStickAlphaValue = 1;
    ShellOneAlphaValue = 1;
    ShellTwoAlphaValue = 1;
    ShellThreeAlphaValue = 1;
    ShellFourAlphaValue = 1;
    ShellsPlayRateValue = 1;
    RecoilAmountAlphaValue = 1;
    LowerBodyRecoilAdditiveAlphaValue = 1;
    ChargeJumpFloatValue = 1;
    InMotionAlphaInterpSpeed = 1;
    DashLeansAlphaInterpSpeed = 1;
    GunnerJogBounceAlphaInterpSpeed = 1;
    RightArmNoAdditiveInterpSpeed = 1;
    JoyStickAlphaInterpSpeed = 1;
    GunnerAlphaInterpSpeed = 1;
    StatusStartPositionAlphaWhemIsEmptyOnFirstLoad = 1;
    DashLeansAlphaWhenGunner = 1;
    DashLeansAlphaNoGunner = 1;
    ShotgunShellsAlphaWhenShotgunFires = 1;
    ShotgunShellsAlphaNoShotgunFiring = 1;
    BaseAdditiveAlphaWhenMontageIsPlaying = 1;
    BaseAdditiveAlphaNoMontagePlaying = 1;
    JoyStickAlphaWithGunner = 1;
    GunnerAlphaWithGunner = 1;
    ShellOneAlphaAmmoCountAt3 = 1;
    ShellTwoAlphaAmmoCountAt2 = 1;
    ShellThreeAlphaAmmoCountAt1 = 1;
    ShellFourAlphaAmmoCountAt0 = 1;
    ShellsPlayRateWhenNoMoreAmmoAndShouldBringAmmo = 1;
    RecoilAmountAlphaWhenMontagePlayingAndShotgunFires = 1;
    LowerBodyRecoilAdditiveAlphaWithDriver = 1;
    LowerBodyRecoilAdditiveAlphaNoDriver = 1;
    JumpApexLoopAlphaNotChargingJump = 1;
    JumpApexLoopAlphaWhenIsChargingJump = 1;
    PlayRateSpeedWarpAlpha = 1;
    RigidBodyAlpha = 1;
    MechShotgunReload = NULL;
    MechShotgunFireA = NULL;
    MechShotgunFireB = NULL;
    MechRocketFire = NULL;
    MechRocketFireSettle = NULL;
    ChargedJumpApexSeq = NULL;
    ChargedJumpFallSeq = NULL;
    ChargedJumpLandSeq = NULL;
    ChargedJumpLandPredictedSeq = NULL;
    NormalJumpApexSeq = NULL;
    NormalJumpFallSeq = NULL;
    NormalJumpLandSeq = NULL;
    NormalJumpLandPredictedSeq = NULL;
    JumpBaseApexSeq = NULL;
    JumpBaseFallSeq = NULL;
    JumpBaseLandSeq = NULL;
    JumpBaseLandPredictedSeq = NULL;
    bTransition_Idle_To_Movement = false;
    bTransition_BootUp_To_Movement = false;
    bTransition_Turn_To_Idle = false;
    bTransition_Stop_To_Idle = false;
    bTransition_DashLoop_To_Default = false;
    bTransition_DashLoop_To_DashOutro = false;
    NotJustGotDriverFloat = 1;
    IsShotgunFiredFloat = 1;
    UpperBodyLagMaxRecoverySpeed = 1;
    UpperBodyLagRecoverySmoothness = 1;
    UpperBodyLagRecoveryMass = 1;
    UpperBodyLagRecoveryDelay = 1;
    UpperBodyLagOffsetLimitDuringTurns = 1;
    UpperBodyLagOffsetLimitDuringTurnsInterpSpeed = 1;
    UpperBodyLagOffsetLimitWhileStill = 1;
    UpperBodyLagOffsetLimitWhileStillInterpSpeed = 1;
    CurrentUpperBodyLagRecoverySpeed = 1;
    TimeUntilNextUpperBodyLagRecovery = 1;
    CurrentUpperBodyLagOffsetLimit = 1;
    PivotAnimationLeft = NULL;
    PivotAnimationRight = NULL;
    PivotEarlyOutAngleThreshold = 1;
    PivotAnimation = NULL;
    PivotAnimPosition = 1;
    bEnableStarts = true;
    StartEarlyOutThresold = 1;
    StartAnimDistanceFromMarker = 1;
    ActualDistanceFromMarker = 1;
    StartAnimTimeElapsed = 1;
    StartInitialAccelYaw = 1;
    StartTurnDirection = 1;
    StartCardinalDirection = EFortCardinalDirection::North;
    StartAnimation = NULL;
    StartAnimPosition = 1;
}

