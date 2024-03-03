#include "FortAthenaMutator_SpawningPolicyBase.h"

AFortAthenaMutator_SpawningPolicyBase::AFortAthenaMutator_SpawningPolicyBase() {
    this->CachedSpecialActorIdx = 0;
    this->SpawnFailureLockoutTime = 1;
    this->GamePhaseToStartSpawning = EAthenaGamePhase::None;
    this->bShouldCenterGroundCheckAtFoundLocation = true;
    this->bShouldMaintainItemCount = true;
    this->bAllowedDespawnToMaintainItemCount = false;
    this->bWaitForNavmeshToBeLoaded = true;
    this->ItemDataRemovalQueryPending = NULL;
}

