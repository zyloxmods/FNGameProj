#include "FortAthenaPatrolPath.h"

void AFortAthenaPatrolPath::OnCurrentPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}

void AFortAthenaPatrolPath::GetPatrolPoints(TArray<AFortAthenaPatrolPoint*>& OutPatrolPoints) const {
}

AFortAthenaPatrolPath::AFortAthenaPatrolPath() {
    this->Mode = EPatrollingMode::BackAndForth;
    this->bUseRandomStartupPatrolPoint = false;
    this->bUseRandomStartupDirection = false;
    this->bLeashEnabled = true;
    this->LeashWidth = 1;
    this->LeashHeight = 1;
    this->RadialLeashLocationActorOverride = NULL;
    this->RadialLeashInnerRadiusOverride = 1;
    this->RadialLeashOuterRadiusOverride = 1;
    this->MaxConcurrentUsage = 0;
    this->CurrentConcurrentUsage = 0;
    this->DebugLinkWidthSelected = 1;
    this->DebugLinkWidthNotSelected = 1;
}

