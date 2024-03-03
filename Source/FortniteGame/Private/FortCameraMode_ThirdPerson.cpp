#include "FortCameraMode_ThirdPerson.h"

UFortCameraMode_ThirdPerson::UFortCameraMode_ThirdPerson() {
    this->FOV = 1;
    this->CameraSpaceForwardDistance = 1;
    this->bClampCameraPitch = false;
    this->bClampCameraYaw = false;
    this->CameraPitchMin = 1;
    this->CameraPitchMax = 1;
    this->CameraYawMin = 1;
    this->CameraYawMax = 1;
    this->CameraOrigin = ECameraOrigin::ViewTargetTransform;
    this->ViewTargetAlignmentFlipInterpDuration = 1;
    this->bScaleViewOffsetByViewTargetScale = true;
    this->bSupportsShoulderSwap = true;
    this->PenetrationBlendInTime = 1;
    this->PenetrationBlendOutTime = 1;
    this->bPreventPenetration = true;
    this->bDoPredictiveAvoidance = true;
    this->CollisionPushOutDistance = 1;
    this->HidePawnPenetrationPercent = 1;
    this->BlendAlpha = 1;
    this->PenetrationAvoidanceFeelers.AddDefaulted(7);
    this->SafeLocToAimLineBlockedPct = 1;
    this->AimLineToDesiredPosBlockedPct = 1;
    this->LastDrawDebugTime = 1;
    this->ViewTargetAlignmentFlipInterpTime = 1;
    this->CachedPitchLimitMin = 1;
    this->CachedPitchLimitMax = 1;
    this->CachedYawLimitMin = 1;
    this->CachedYawLimitMax = 1;
    this->bLastViewTargetValidGroupEmoteLookTarget = false;
    this->IgnoreActorForCameraPenetration = NULL;
    this->bWasInVehicle = false;
    this->PreviousIgnoreActorForCameraPenetration = NULL;
}

