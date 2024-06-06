#include "FortMovementComp_CharacterAthena.h"

UFortMovementComp_CharacterAthena::UFortMovementComp_CharacterAthena() {
    JumpPenalties.AddDefaulted(5);
    JumpPenaltyResetTime = 1;
    NetworkSkipSkyDivingCollisionForPawnLOD = 0;
    MaxAccelerationFlying = 1;
}

