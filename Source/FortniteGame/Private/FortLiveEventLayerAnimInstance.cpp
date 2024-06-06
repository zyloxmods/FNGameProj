#include "FortLiveEventLayerAnimInstance.h"


UFortLiveEventLayerAnimInstance::UFortLiveEventLayerAnimInstance() {
    LiveEventLayerAnimBP = NULL;
    StopDirection = EFortCardinalDirection::North;
    WorldFlipAimOffsetAlpha = 1;
    Speed = 1;
    AccelerationMagnitude = 1;
    VelocityYaw = 1;
    VelocityYawLocal = 1;
    VelocityYawLocalStop = 1;
    VelocityYawLocalSmooth = 1;
    AccelerationYaw = 1;
    AccelerationYawLocal = 1;
    ControlRotationPitchLocal = 1;
    VelocityPitchDelta = 1;
    VelocityYawDelta = 1;
    ControlRotationPitchLocalDelta = 1;
    WorldTiltRoll = 1;
    WorldTiltPitch = 1;
    WorldFlipPitch = 1;
    WorldFlipRoll = 1;
    WorldFlipAlpha = 1;
    WorldTiltCameraRoll = 1;
    WorldFlipCameraRoll = 1;
    Breaststroke_Direction = 1;
    Pitch_AO_Input = 1;
    Breaststroke_AO_Yaw = 1;
    Breaststroke_AO_Pitch = 1;
    bIsWorldTilting = false;
    bIsWorldFlipping = false;
    bUseIdleNoiseTucked = false;
    bHasWorldFullyFlipped = false;
    bEnterWorldFlipGliding = false;
    bWorldFlipBeginDive = false;
    bWorldFlipReturnToGlide = false;
    bIsFloating = false;
    bIsOnGround = false;
    bUWIdleFullyBlended = true;
    bIsChangingDirection = false;
    bIsStopping = false;
    bWantsToUpdateStop = true;
    bWantsToUpdateStopDirection = true;
    bHoldBSDirection = false;
    bTransition_UWIdle_To_UWSwimStart = false;
    bTransition_UWSprintStop_To_UWSwimStart = false;
    bTransition_UWSwimStart_To_SprintStop = false;
    bTransition_UWSwimStart_To_Idle = false;
    bTransition_UWSprintLoop_To_SprintStop = false;
}

