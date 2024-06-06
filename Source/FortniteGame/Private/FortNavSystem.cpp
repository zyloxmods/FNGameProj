#include "FortNavSystem.h"

void UFortNavSystem::OnNavDataRegistered(ANavigationData* NavData) {
}

bool UFortNavSystem::IsNavmeshInRadiusInitialized(UObject* WorldContext, const FVector& TestLocation, float TestRadius) {
    return false;
}

UFortNavSystem::UFortNavSystem() {
    NamedNavmeshes.AddDefaulted(2);
    bAllowAutoRebuild = true;
    bRebuildOnInitialUnlock = true;
    bUsesStreamedInNavLevel = false;
    bUseStaticMeshLinks = false;
    bUseStaticWorldLinksDown = true;
    bUseStaticWorldLinksUp = true;
    bUseJumpLinkActors = true;
    bGenerateWallClimbLinks = true;
    DirtyAreasUpdateFreqInactive = 1;
    NavGraphData = NULL;
}

