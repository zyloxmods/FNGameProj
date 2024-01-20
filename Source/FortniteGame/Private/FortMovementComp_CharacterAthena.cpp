#include "FortMovementComp_CharacterAthena.h"

UFortMovementComp_CharacterAthena::UFortMovementComp_CharacterAthena() {
    this->JumpPenalties.AddDefaulted(5);
    this->JumpPenaltyResetTime = 1.00f;
    this->NetworkSmoothingThrottleProxyUpdateForPawnLOD = 0;
    this->NetworkSkipSkyDivingCollisionForPawnLOD = 2;
    this->NetworkSmoothingViewAngleThreshold = 45.00f;
    this->NetworkSmoothingViewAngleThresholdSmall = 12.00f;
    this->NetworkSmoothingNoThrottleWithinDistanceInMeters = 10.00f;
    this->MaxAccelerationFlying = 1000.00f;
}

