#include "FortChaseCameraHelper.h"

FFortChaseCameraHelper::FFortChaseCameraHelper() {
    this->CameraToPivotAlphaInterpSpeed = 0.00f;
    this->CameraCollisionSphereRadius = 0.00f;
    this->PivotLocationInterpSpeed = 0.00f;
    this->PivotRotationInterpSpeed = 0.00f;
    this->AutoFollowMode = EThirdPersonAutoFollowMode::Off;
    this->CameraTruckRate = 0.00f;
    this->AutoFollowPitch = 0.00f;
    this->LazyAutoFollowPitchMin = 0.00f;
    this->LazyAutoFollowPitchMax = 0.00f;
}

