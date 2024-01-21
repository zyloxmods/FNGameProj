#include "MountedWeaponInfo.h"

FMountedWeaponInfo::FMountedWeaponInfo() {
    this->ThirdPersonDistanceCorrection = 0.00f;
    this->ThirdPersonDistanceCorrectionPawn = 0.00f;
    this->bDamageStartFromWeaponTowardFocus = false;
    this->bTargetSourceFromVehicleMuzzle = false;
    this->MinReticleAlphaForAimInterpolation = 0.00f;
    this->MinAimAngleDiffForReticleAlpha = 0.00f;
    this->MaxAimAngleDiffForReticleAlpha = 0.00f;
    this->bNeedsVehicleAttachment = false;
    this->AttachAttemptCount = 0;
}

