#include "MountedWeaponInfo.h"

FMountedWeaponInfo::FMountedWeaponInfo() {
    this->ThirdPersonDistanceCorrection = 1;
    this->ThirdPersonDistanceCorrectionPawn = 1;
    this->bDamageStartFromWeaponTowardFocus = false;
    this->bTargetSourceFromVehicleMuzzle = false;
    this->MinReticleAlphaForAimInterpolation = 1;
    this->MinAimAngleDiffForReticleAlpha = 1;
    this->MaxAimAngleDiffForReticleAlpha = 1;
    this->bNeedsVehicleAttachment = false;
    this->AttachAttemptCount = 0;
}

