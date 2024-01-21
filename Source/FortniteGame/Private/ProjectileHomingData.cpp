#include "ProjectileHomingData.h"

FProjectileHomingData::FProjectileHomingData() {
    this->HomingStyle = EFortHomingStyle::None;
    this->MinTurnSpeed = 0.00f;
    this->MaxTurnSpeed = 0.00f;
    this->RampTimeFromMinToMaxTurnSpeed = 0.00f;
    this->LockTargetDistanceThreshold = 0.00f;
    this->ResetTurnSpeedTimer = false;
}

