#include "FortChaseCameraHelper.h"

FFortChaseCameraHelper::FFortChaseCameraHelper() {
    CameraToPivotAlphaInterpSpeed = 1;
    CameraCollisionSphereRadius = 1;
    PivotLocationInterpSpeed = 1;
    PivotRotationInterpSpeed = 1;
    AutoFollowMode = EThirdPersonAutoFollowMode::Off;
    CameraTruckRate = 1;
    AutoFollowPitch = 1;
    LazyAutoFollowPitchMin = 1;
    LazyAutoFollowPitchMax = 1;
}

