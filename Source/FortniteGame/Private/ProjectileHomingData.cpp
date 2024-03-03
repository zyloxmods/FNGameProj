#include "ProjectileHomingData.h"

FProjectileHomingData::FProjectileHomingData() {
    this->HomingStyle = EFortHomingStyle::None;
    this->MinTurnSpeed = 1;
    this->MaxTurnSpeed = 1;
    this->RampTimeFromMinToMaxTurnSpeed = 1;
    this->LockTargetDistanceThreshold = 1;
    this->RandomSeed = 0;
    this->ResetTurnSpeedTimer = false;
}

