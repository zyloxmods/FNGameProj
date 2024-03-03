#include "FortAthenaAIBotUnstuckDigestedSkillSet.h"

UFortAthenaAIBotUnstuckDigestedSkillSet::UFortAthenaAIBotUnstuckDigestedSkillSet() {
    this->bCanTeleportWhenStuck = true;
    this->bCanTeleportWhenStuckWithPlayerAround = true;
    this->MaxDistanceSqToPlayerToTeleport = 1;
    this->PlayerToPhoebeAngleVisibilityConeToTeleport = 1;
    this->TimeBetweenPartialPathToConsiderPathStuck = 1;
    this->ConsecutivePartialPathCountToConsiderPathStuck = 0;
    this->DistanceSqBetweenBlockedPathToConsiderPathStuck = 1;
    this->DistanceBetweenSampleToConsiderPathStuckInWater = 1;
    this->TimeBetweenSampleToConsiderPathStuckInWater = 1;
    this->DistanceBetweenSampleToConsiderPathStuckOnGround = 1;
    this->TimeBetweenSampleToConsiderPathStuckOnGround = 1;
    this->ConsecutiveBlockedPathCountToConsiderPathStuck = 0;
    this->MaxSafeZoneIndexToAllowTeleport = 0;
}

