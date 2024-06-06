#include "MountedWeaponInfo.h"

FMountedWeaponInfo::FMountedWeaponInfo() {
    ThirdPersonDistanceCorrection = 1;
    ThirdPersonDistanceCorrectionPawn = 1;
    bDamageStartFromWeaponTowardFocus = false;
    bTargetSourceFromVehicleMuzzle = false;
    MinReticleAlphaForAimInterpolation = 1;
    MinAimAngleDiffForReticleAlpha = 1;
    MaxAimAngleDiffForReticleAlpha = 1;
    bNeedsVehicleAttachment = false;
    AttachAttemptCount = 0;
}

