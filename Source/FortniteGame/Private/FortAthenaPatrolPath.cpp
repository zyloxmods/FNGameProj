#include "FortAthenaPatrolPath.h"

void AFortAthenaPatrolPath::OnCurrentPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}

void AFortAthenaPatrolPath::GetPatrolPoints(TArray<AFortAthenaPatrolPoint*>& OutPatrolPoints) const {
}

AFortAthenaPatrolPath::AFortAthenaPatrolPath() {
    Mode = EPatrollingMode::BackAndForth;
    bUseRandomStartupPatrolPoint = false;
    bUseRandomStartupDirection = false;
    bLeashEnabled = true;
    LeashWidth = 1;
    LeashHeight = 1;
    RadialLeashLocationActorOverride = NULL;
    RadialLeashInnerRadiusOverride = 1;
    RadialLeashOuterRadiusOverride = 1;
    MaxConcurrentUsage = 0;
    CurrentConcurrentUsage = 0;
    DebugLinkWidthSelected = 1;
    DebugLinkWidthNotSelected = 1;
}

