#include "FortMissionPlacementActorItem.h"

FFortMissionPlacementActorItem::FFortMissionPlacementActorItem() {
    PlacementQuery = NULL;
    NumLocationsToFind = 0;
    bSpawnActorAutomatically = false;
    bShouldReserveLocations = false;
    bSnapToGrid = false;
    bAdjustPlacementForFloors = false;
    bDontCreateSpawnRiftsNearby = false;
}

