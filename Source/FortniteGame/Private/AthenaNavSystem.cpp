#include "AthenaNavSystem.h"

void UAthenaNavSystem::UnregisterNavGenerationObserver(USceneComponent* Component) {
}

void UAthenaNavSystem::RegisterNavGenerationObserver(USceneComponent* Component, FOnNavGenerationFinished Event) {
}

UAthenaNavSystem::UAthenaNavSystem() {
    this->bUseBuildingGridAsNavigableSpace = false;
    this->NavGenerationObserverCheckInterval = 1.00f;
    this->NavOctTreeExclusionBounds = NULL;
}

