#include "FortFXStaticMeshComponent.h"

void UFortFXStaticMeshComponent::SetSource(UStaticMeshComponent* InMeshComponent) {
}

UFortFXStaticMeshComponent::UFortFXStaticMeshComponent() {
    this->AwakenFadeInTime = 0.00f;
    this->AwakenDuration = 0.00f;
    this->AwakenFadeOutTime = 0.00f;
    this->BuildingHitFadeInTime = 0.00f;
    this->BuildingHitDuration = 0.00f;
    this->BuildingHitFadeOutTime = 0.00f;
    this->SourceMeshComponent = NULL;
}

