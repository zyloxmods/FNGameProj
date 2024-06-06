#include "ProjectileHomingData.h"

FProjectileHomingData::FProjectileHomingData() {
    HomingStyle = EFortHomingStyle::None;
    MinTurnSpeed = 1;
    MaxTurnSpeed = 1;
    RampTimeFromMinToMaxTurnSpeed = 1;
    LockTargetDistanceThreshold = 1;
    RandomSeed = 0;
    ResetTurnSpeedTimer = false;
}

