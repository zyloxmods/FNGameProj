#include "FortLiveEventLayerAnimInstance.h"


UFortLiveEventLayerAnimInstance::UFortLiveEventLayerAnimInstance() {
    this->LiveEventLayerAnimBP = NULL;
    this->StopDirection = EFortCardinalDirection::North;
    this->WorldFlipAimOffsetAlpha = 1;
    this->Speed = 1;
    this->AccelerationMagnitude = 1;
    this->VelocityYaw = 1;
    this->VelocityYawLocal = 1;
    this->VelocityYawLocalStop = 1;
    this->VelocityYawLocalSmooth = 1;
    this->AccelerationYaw = 1;
    this->AccelerationYawLocal = 1;
    this->ControlRotationPitchLocal = 1;
    this->VelocityPitchDelta = 1;
    this->VelocityYawDelta = 1;
    this->ControlRotationPitchLocalDelta = 1;
    this->WorldTiltRoll = 1;
    this->WorldTiltPitch = 1;
    this->WorldFlipPitch = 1;
    this->WorldFlipRoll = 1;
    this->WorldFlipAlpha = 1;
    this->WorldTiltCameraRoll = 1;
    this->WorldFlipCameraRoll = 1;
    this->Breaststroke_Direction = 1;
    this->Pitch_AO_Input = 1;
    this->Breaststroke_AO_Yaw = 1;
    this->Breaststroke_AO_Pitch = 1;
    this->bIsWorldTilting = false;
    this->bIsWorldFlipping = false;
    this->bUseIdleNoiseTucked = false;
    this->bHasWorldFullyFlipped = false;
    this->bEnterWorldFlipGliding = false;
    this->bWorldFlipBeginDive = false;
    this->bWorldFlipReturnToGlide = false;
    this->bIsFloating = false;
    this->bIsOnGround = false;
    this->bUWIdleFullyBlended = true;
    this->bIsChangingDirection = false;
    this->bIsStopping = false;
    this->bWantsToUpdateStop = true;
    this->bWantsToUpdateStopDirection = true;
    this->bHoldBSDirection = false;
    this->bTransition_UWIdle_To_UWSwimStart = false;
    this->bTransition_UWSprintStop_To_UWSwimStart = false;
    this->bTransition_UWSwimStart_To_SprintStop = false;
    this->bTransition_UWSwimStart_To_Idle = false;
    this->bTransition_UWSprintLoop_To_SprintStop = false;
}

