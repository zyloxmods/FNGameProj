#include "FortMissionPlacementItemLookupData.h"

FFortMissionPlacementItemLookupData::FFortMissionPlacementItemLookupData() {
    this->ActorToPlace = NULL;
    this->ActorToUseForSpawnLocation = NULL;
    this->SpawnedActor = NULL;
    this->bDontCreateSpawnRiftsNearby = false;
    this->bShouldFreeLocationsOnDeath = false;
}

