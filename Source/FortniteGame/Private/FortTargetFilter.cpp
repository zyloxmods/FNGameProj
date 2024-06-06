#include "FortTargetFilter.h"

FFortTargetFilter::FFortTargetFilter() {
    ActorTypeFilter = EFortTargetSelectionFilter::Damageable;
    ActorClassFilter = NULL;
    bExcludeInstigator = false;
    bUseTrapsOwningPawnAsInstigator = false;
    bExcludeRequester = false;
    bExcludeAllAttachedToInstigator = false;
    bExcludeAthenaVehicleOfInstigator = false;
    bExcludeAllAttachedToRequester = false;
    bExcludePawnFriends = false;
    bExcludeFriendlyAI = false;
    bExcludeAllAI = false;
    bExcludePawnEnemies = false;
    bExcludeNonPawnFriends = false;
    bExcludeNonPawnEnemies = false;
    bConsiderFriendlyFireWhenExcludingFriends = false;
    bExcludeDBNOPawns = false;
    bExcludeWaterVolumes = false;
    bExcludeWaterBodies = false;
    bExcludeAthenaVehicleOccupiedBySource = false;
    bExcludeAthenaVehicleUnoccupied = false;
    bExcludeAthenaVehicleOccupied = false;
    bExcludeAthenaVehicleFromObstructionChecks = false;
    bExcludeWithoutNavigationCorridor = false;
    bExcludeNonPlayerBuiltPieces = false;
    bExcludePlayerBuiltPieces = false;
    bExcludeNonBGABuildings = false;
    bExcludeNonBlockingHits = false;
    bExcludeProjectiles = false;
    bTraceComplexCollision = false;
    bExcludeLandscape = false;
    bConsiderPhysicsPawnsAsNonPlayerPawns = false;
}

