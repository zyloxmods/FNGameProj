#include "LockOnInfo.h"

FLockOnInfo::FLockOnInfo() {
    State = ELockOnState::NoTarget;
    TargetAcquisitionTime = 1;
    TargetLockOnTime = 1;
    TargetOutOfSightTime = 1;
    CooldownStartTime = 1;
}

