#include "FortMissionPlacementActorItem.h"

FFortMissionPlacementActorItem::FFortMissionPlacementActorItem() {
    this->PlacementQuery = NULL;
    this->NumLocationsToFind = 0;
    this->bSpawnActorAutomatically = false;
    this->bShouldReserveLocations = false;
    this->bSnapToGrid = false;
    this->bAdjustPlacementForFloors = false;
    this->bDontCreateSpawnRiftsNearby = false;
}

