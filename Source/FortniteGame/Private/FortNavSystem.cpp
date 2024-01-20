#include "FortNavSystem.h"

void UFortNavSystem::OnNavDataRegistered(ANavigationData* NavData) {
}

bool UFortNavSystem::IsNavmeshInRadiusInitialized(UObject* WorldContext, const FVector& TestLocation, float TestRadius) {
    return false;
}

UFortNavSystem::UFortNavSystem() {
    this->NamedNavmeshes.AddDefaulted(2);
    this->bAllowAutoRebuild = true;
    this->bRebuildOnInitialUnlock = true;
    this->bUsesStreamedInNavLevel = false;
    this->bUseStaticMeshLinks = false;
    this->bUseStaticWorldLinksDown = true;
    this->bUseStaticWorldLinksUp = true;
    this->bUseJumpLinkActors = true;
    this->DirtyAreasUpdateFreqInactive = 0.20f;
    this->NavGraphData = NULL;
}

