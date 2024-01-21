#include "FortCameraMode_ThirdPerson.h"

UFortCameraMode_ThirdPerson::UFortCameraMode_ThirdPerson() {
    this->FOV = 90.00f;
    this->CrucibleFOV = -1.00f;
    this->CameraSpaceForwardDistance = 0.00f;
    this->bClampCameraPitch = false;
    this->bClampCameraYaw = false;
    this->CameraPitchMin = -89.90f;
    this->CameraPitchMax = 89.90f;
    this->CameraYawMin = -189.90f;
    this->CameraYawMax = 189.90f;
    this->CameraOrigin = ECameraOrigin::ViewTargetTransform;
    this->ViewTargetAlignmentFlipInterpDuration = 0.50f;
    this->bSupportsShoulderSwap = true;
    this->PenetrationBlendInTime = 0.10f;
    this->PenetrationBlendOutTime = 0.15f;
    this->bPreventPenetration = true;
    this->bDoPredictiveAvoidance = true;
    this->CollisionPushOutDistance = 2.00f;
    this->HidePawnPenetrationPercent = 0.00f;
    this->BlendAlpha = 0.00f;
    this->PenetrationAvoidanceFeelers.AddDefaulted(7);
    this->SafeLocToAimLineBlockedPct = 0.00f;
    this->AimLineToDesiredPosBlockedPct = 0.00f;
    this->LastDrawDebugTime = -340282346638528859811704183484516925440.00f;
    this->ViewTargetAlignmentFlipInterpTime = 0.00f;
    this->IgnoreActorForCameraPenetration = NULL;
    this->bWasInVehicle = false;
    this->PreviousIgnoreActorForCameraPenetration = NULL;
}

