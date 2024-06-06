#include "BuildingTrap_WaypointDispenser.h"
#include "Templates/SubclassOf.h"

ABuildingTrapFloor_Waypoint* ABuildingTrap_WaypointDispenser::BP_SpawnWaypointActor(TSubclassOf<ABuildingTrapFloor_Waypoint> Class, FTransform SpawnTransform) {
    return NULL;
}

ABuildingTrap_WaypointDispenser::ABuildingTrap_WaypointDispenser() {
    WaypointTypeIndex = 0;
}

