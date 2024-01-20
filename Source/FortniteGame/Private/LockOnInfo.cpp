#include "LockOnInfo.h"

FLockOnInfo::FLockOnInfo() {
    this->State = ELockOnState::NoTarget;
    this->TargetAcquisitionTime = 0.00f;
    this->TargetLockOnTime = 0.00f;
    this->TargetOutOfSightTime = 0.00f;
    this->CooldownStartTime = 0.00f;
}

