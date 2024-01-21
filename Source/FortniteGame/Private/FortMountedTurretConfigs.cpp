#include "FortMountedTurretConfigs.h"

UFortMountedTurretConfigs::UFortMountedTurretConfigs() {
    this->CameraShakeAmplitudeMin = 0.00f;
    this->CameraShakeAmplitudeMax = 0.40f;
    this->CameraShakeNormalizedSpeed = 70.00f;
    this->CameraShakeSpeedCurvePow = 1.00f;
    this->AimInterpSpeed = 19.00f;
    this->InitialCameraInterpSpeed = 7.00f;
    this->InitialCameraLerpTime = 0.50f;
    this->MaxYawPerSecondThreshold = 800.00f;
    this->MaxPitchPerSecondThreshold = 800.00f;
    this->PitchConstraintAngleOffset = -25.00f;
    this->bConstrainVerticalRotationOnly = true;
    this->PedalCyclesPerFullTurn = 3.00f;
    this->bWeaponIgnoresMountedTurretBase = 1;
}

