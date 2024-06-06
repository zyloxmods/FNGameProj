#include "ProjectileMovementDrunkConfig.h"

FProjectileMovementDrunkConfig::FProjectileMovementDrunkConfig() {
    DrunkSpeedScaleCurve = NULL;
    DrunkGravityScaleCurve = NULL;
    InitialDelay = 1;
    Duration = 1;
    DirectionChangeRate = 1;
    TurnAngle = 1;
    MinPitch = 1;
    TurnAngleClamp = 1;
}

