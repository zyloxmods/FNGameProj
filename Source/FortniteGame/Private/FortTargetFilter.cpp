#include "FortTargetFilter.h"

FFortTargetFilter::FFortTargetFilter() {
    this->ActorTypeFilter = EFortTargetSelectionFilter::Damageable;
    this->ActorClassFilter = NULL;
    this->bExcludeInstigator = false;
    this->bUseTrapsOwningPawnAsInstigator = false;
    this->bExcludeRequester = false;
    this->bExcludeAllAttachedToInstigator = false;
    this->bExcludeAthenaVehicleOfInstigator = false;
    this->bExcludeAllAttachedToRequester = false;
    this->bExcludePawnFriends = false;
    this->bExcludeFriendlyAI = false;
    this->bExcludeAllAI = false;
    this->bExcludePawnEnemies = false;
    this->bExcludeNonPawnFriends = false;
    this->bExcludeNonPawnEnemies = false;
    this->bConsiderFriendlyFireWhenExcludingFriends = false;
    this->bExcludeDBNOPawns = false;
    this->bExcludeWaterVolumes = false;
    this->bExcludeWaterBodies = false;
    this->bExcludeAthenaVehicleOccupiedBySource = false;
    this->bExcludeAthenaVehicleUnoccupied = false;
    this->bExcludeAthenaVehicleOccupied = false;
    this->bExcludeAthenaVehicleFromObstructionChecks = false;
    this->bExcludeWithoutNavigationCorridor = false;
    this->bExcludeNonPlayerBuiltPieces = false;
    this->bExcludePlayerBuiltPieces = false;
    this->bExcludeNonBGABuildings = false;
    this->bExcludeNonBlockingHits = false;
    this->bExcludeProjectiles = false;
    this->bTraceComplexCollision = false;
    this->bExcludeLandscape = false;
    this->bConsiderPhysicsPawnsAsNonPlayerPawns = false;
}

