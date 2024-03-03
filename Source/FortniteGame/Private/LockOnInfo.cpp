#include "LockOnInfo.h"

FLockOnInfo::FLockOnInfo() {
    this->State = ELockOnState::NoTarget;
    this->TargetAcquisitionTime = 1;
    this->TargetLockOnTime = 1;
    this->TargetOutOfSightTime = 1;
    this->CooldownStartTime = 1;
}

