#include "FortMountedTurretConfigs.h"

UFortMountedTurretConfigs::UFortMountedTurretConfigs() {
    this->CameraShakeAmplitudeMin = 1;
    this->CameraShakeAmplitudeMax = 1;
    this->CameraShakeNormalizedSpeed = 1;
    this->CameraShakeSpeedCurvePow = 1;
    this->AimInterpSpeed = 1;
    this->InitialCameraInterpSpeed = 1;
    this->InitialCameraLerpTime = 1;
    this->MaxYawPerSecondThreshold = 1;
    this->MaxPitchPerSecondThreshold = 1;
    this->PitchConstraintAngleOffset = 1;
    this->bConstrainVerticalRotationOnly = true;
    this->PedalCyclesPerFullTurn = 1;
    this->bWeaponIgnoresMountedTurretBase = 0;
}

