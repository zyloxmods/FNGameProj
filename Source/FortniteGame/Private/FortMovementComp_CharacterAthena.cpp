#include "FortMovementComp_CharacterAthena.h"

UFortMovementComp_CharacterAthena::UFortMovementComp_CharacterAthena() {
    this->JumpPenalties.AddDefaulted(5);
    this->JumpPenaltyResetTime = 1;
    this->NetworkSkipSkyDivingCollisionForPawnLOD = 0;
    this->MaxAccelerationFlying = 1;
}

