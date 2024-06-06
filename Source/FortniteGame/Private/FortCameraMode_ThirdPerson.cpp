#include "FortCameraMode_ThirdPerson.h"

UFortCameraMode_ThirdPerson::UFortCameraMode_ThirdPerson() {
    FOV = 1;
    CameraSpaceForwardDistance = 1;
    bClampCameraPitch = false;
    bClampCameraYaw = false;
    CameraPitchMin = 1;
    CameraPitchMax = 1;
    CameraYawMin = 1;
    CameraYawMax = 1;
    CameraOrigin = ECameraOrigin::ViewTargetTransform;
    ViewTargetAlignmentFlipInterpDuration = 1;
    bScaleViewOffsetByViewTargetScale = true;
    bSupportsShoulderSwap = true;
    PenetrationBlendInTime = 1;
    PenetrationBlendOutTime = 1;
    bPreventPenetration = true;
    bDoPredictiveAvoidance = true;
    CollisionPushOutDistance = 1;
    HidePawnPenetrationPercent = 1;
    BlendAlpha = 1;
    PenetrationAvoidanceFeelers.AddDefaulted(7);
    SafeLocToAimLineBlockedPct = 1;
    AimLineToDesiredPosBlockedPct = 1;
    LastDrawDebugTime = 1;
    ViewTargetAlignmentFlipInterpTime = 1;
    CachedPitchLimitMin = 1;
    CachedPitchLimitMax = 1;
    CachedYawLimitMin = 1;
    CachedYawLimitMax = 1;
    bLastViewTargetValidGroupEmoteLookTarget = false;
    IgnoreActorForCameraPenetration = NULL;
    bWasInVehicle = false;
    PreviousIgnoreActorForCameraPenetration = NULL;
}

