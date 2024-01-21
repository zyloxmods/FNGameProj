#include "FortMountedTurretAnimInstance.h"

UFortMountedTurretAnimInstance::UFortMountedTurretAnimInstance() {
    this->MountedTurret = NULL;
    this->bIsUsingMountedTurret = false;
    this->AimingYaw = 0.00f;
    this->AimingPitch = 0.00f;
    this->PedalScaler = 0.00f;
}

