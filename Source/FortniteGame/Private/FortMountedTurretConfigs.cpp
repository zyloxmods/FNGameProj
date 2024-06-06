#include "FortMountedTurretConfigs.h"

UFortMountedTurretConfigs::UFortMountedTurretConfigs() {
    CameraShakeAmplitudeMin = 1;
    CameraShakeAmplitudeMax = 1;
    CameraShakeNormalizedSpeed = 1;
    CameraShakeSpeedCurvePow = 1;
    AimInterpSpeed = 1;
    InitialCameraInterpSpeed = 1;
    InitialCameraLerpTime = 1;
    MaxYawPerSecondThreshold = 1;
    MaxPitchPerSecondThreshold = 1;
    PitchConstraintAngleOffset = 1;
    bConstrainVerticalRotationOnly = true;
    PedalCyclesPerFullTurn = 1;
    bWeaponIgnoresMountedTurretBase = 0;
}

