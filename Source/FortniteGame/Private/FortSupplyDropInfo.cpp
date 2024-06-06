#include "FortSupplyDropInfo.h"

UFortSupplyDropInfo::UFortSupplyDropInfo() {
    SupplyDropClass = NULL;
    SpawnType = ESupplyDropSpawnType::SafeZoneDriven;
    bIgnoreBlueprintOverrides = false;
    bShouldDrawCompassIcon = false;
    ItemTrackType = ESupplyDropItemTrackType::SpecialActors;
    GamePhaseToSpawn = EAthenaGamePhase::None;
    SafeZoneIndexToSpawn = 0;
    bShouldMaintainItemCount = true;
}

