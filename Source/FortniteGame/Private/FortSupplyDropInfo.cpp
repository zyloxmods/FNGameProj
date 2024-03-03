#include "FortSupplyDropInfo.h"

UFortSupplyDropInfo::UFortSupplyDropInfo() {
    this->SupplyDropClass = NULL;
    this->SpawnType = ESupplyDropSpawnType::SafeZoneDriven;
    this->bIgnoreBlueprintOverrides = false;
    this->bShouldDrawCompassIcon = false;
    this->ItemTrackType = ESupplyDropItemTrackType::SpecialActors;
    this->GamePhaseToSpawn = EAthenaGamePhase::None;
    this->SafeZoneIndexToSpawn = 0;
    this->bShouldMaintainItemCount = true;
}

