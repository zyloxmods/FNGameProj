#include "FortFXSkeletonMeshComponent.h"

void UFortFXSkeletonMeshComponent::SetSource(USkeletalMeshComponent* InMeshComponent) {
}

UFortFXSkeletonMeshComponent::UFortFXSkeletonMeshComponent() {
    this->AwakenFadeInTime = 1;
    this->AwakenDuration = 1;
    this->AwakenFadeOutTime = 1;
    this->BuildingHitFadeInTime = 1;
    this->BuildingHitDuration = 1;
    this->BuildingHitFadeOutTime = 1;
    this->SourceMeshComponent = NULL;
}

