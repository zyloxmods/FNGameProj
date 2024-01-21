#include "FortFXSkeletonMeshComponent.h"

void UFortFXSkeletonMeshComponent::SetSource(USkeletalMeshComponent* InMeshComponent) {
}

UFortFXSkeletonMeshComponent::UFortFXSkeletonMeshComponent() {
    this->AwakenFadeInTime = 0.00f;
    this->AwakenDuration = 0.00f;
    this->AwakenFadeOutTime = 0.00f;
    this->BuildingHitFadeInTime = 0.00f;
    this->BuildingHitDuration = 0.00f;
    this->BuildingHitFadeOutTime = 0.00f;
    this->SourceMeshComponent = NULL;
}

