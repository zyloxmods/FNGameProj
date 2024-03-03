#include "AthenaNavSystem.h"

void UAthenaNavSystem::UnregisterNavGenerationObserver(USceneComponent* Component) {
}

void UAthenaNavSystem::RegisterNavGenerationObserver(USceneComponent* Component, FOnNavGenerationFinished Event) {
}

bool UAthenaNavSystem::IsInitialNavigationLockActive(UObject* WorldContextObject) {
    return false;
}

UAthenaNavSystem::UAthenaNavSystem() {
    this->bUseNavDataSetVariants = false;
    this->bUseBuildingGridAsNavigableSpace = false;
    this->bMarkBuildingFoundationDirty = false;
    this->bSupportRuntimeNavmeshDisabling = true;
    this->NavGenerationObserverCheckInterval = 1;
}

