#include "ProjectileMovementDrunkConfig.h"

FProjectileMovementDrunkConfig::FProjectileMovementDrunkConfig() {
    this->DrunkSpeedScaleCurve = NULL;
    this->DrunkGravityScaleCurve = NULL;
    this->InitialDelay = 1;
    this->Duration = 1;
    this->DirectionChangeRate = 1;
    this->TurnAngle = 1;
    this->MinPitch = 1;
    this->TurnAngleClamp = 1;
}

