#include "FortMountedTurretAnimInstance.h"

UFortMountedTurretAnimInstance::UFortMountedTurretAnimInstance() {
    this->MountedTurret = NULL;
    this->bIsUsingMountedTurret = false;
    this->AimingYaw = 1;
    this->AimingPitch = 1;
    this->PedalScaler = 1;
}

