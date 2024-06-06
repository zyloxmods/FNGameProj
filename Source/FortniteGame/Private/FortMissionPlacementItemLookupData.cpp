#include "FortMissionPlacementItemLookupData.h"

FFortMissionPlacementItemLookupData::FFortMissionPlacementItemLookupData() {
    ActorToPlace = NULL;
    ActorToUseForSpawnLocation = NULL;
    SpawnedActor = NULL;
    bDontCreateSpawnRiftsNearby = false;
    bShouldFreeLocationsOnDeath = false;
}

