#include "FortAthenaMutator_SpawningPolicyBase.h"

AFortAthenaMutator_SpawningPolicyBase::AFortAthenaMutator_SpawningPolicyBase() {
    CachedSpecialActorIdx = 0;
    SpawnFailureLockoutTime = 1;
    GamePhaseToStartSpawning = EAthenaGamePhase::None;
    bShouldCenterGroundCheckAtFoundLocation = true;
    bShouldMaintainItemCount = true;
    bAllowedDespawnToMaintainItemCount = false;
    bWaitForNavmeshToBeLoaded = true;
    ItemDataRemovalQueryPending = NULL;
}

