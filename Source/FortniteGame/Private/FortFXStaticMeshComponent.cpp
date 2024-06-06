#include "FortFXStaticMeshComponent.h"

void UFortFXStaticMeshComponent::SetSource(UStaticMeshComponent* InMeshComponent) {
}

UFortFXStaticMeshComponent::UFortFXStaticMeshComponent() {
    AwakenFadeInTime = 1;
    AwakenDuration = 1;
    AwakenFadeOutTime = 1;
    BuildingHitFadeInTime = 1;
    BuildingHitDuration = 1;
    BuildingHitFadeOutTime = 1;
    SourceMeshComponent = NULL;
}

