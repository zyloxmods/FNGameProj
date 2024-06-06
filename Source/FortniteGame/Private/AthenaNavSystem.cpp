#include "AthenaNavSystem.h"

void UAthenaNavSystem::UnregisterNavGenerationObserver(USceneComponent* Component) {
}

void UAthenaNavSystem::RegisterNavGenerationObserver(USceneComponent* Component, FOnNavGenerationFinished Event) {
}

bool UAthenaNavSystem::IsInitialNavigationLockActive(UObject* WorldContextObject) {
    return false;
}

UAthenaNavSystem::UAthenaNavSystem() {
    bUseNavDataSetVariants = false;
    bUseBuildingGridAsNavigableSpace = false;
    bMarkBuildingFoundationDirty = false;
    bSupportRuntimeNavmeshDisabling = true;
    NavGenerationObserverCheckInterval = 1;
}

