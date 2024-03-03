#include "GameplayVolume.h"

void AGameplayVolume::UpdateSize(const FVector& NewScale) {
}

AGameplayVolume::AGameplayVolume() {
    this->PlayspaceClass = NULL;
    this->Playspace = NULL;
    this->BoundsComponent = NULL;
}

