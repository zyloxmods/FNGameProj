#include "FortChaseCameraHelper.h"

FFortChaseCameraHelper::FFortChaseCameraHelper() {
    this->CameraToPivotAlphaInterpSpeed = 1;
    this->CameraCollisionSphereRadius = 1;
    this->PivotLocationInterpSpeed = 1;
    this->PivotRotationInterpSpeed = 1;
    this->AutoFollowMode = EThirdPersonAutoFollowMode::Off;
    this->CameraTruckRate = 1;
    this->AutoFollowPitch = 1;
    this->LazyAutoFollowPitchMin = 1;
    this->LazyAutoFollowPitchMax = 1;
}

