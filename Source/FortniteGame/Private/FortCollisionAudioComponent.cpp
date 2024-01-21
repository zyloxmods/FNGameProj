#include "FortCollisionAudioComponent.h"

void UFortCollisionAudioComponent::SetCollisionSoundAtIndex(int32 Index, USoundBase* SoundToUse) {
}

void UFortCollisionAudioComponent::OnCollision(const FVector& HitLocation, const FVector& HitNormalImpulse, bool& OutResult, float& OutMagnitude) {
}

UFortCollisionAudioComponent::UFortCollisionAudioComponent() {
    this->CheckCollisionLeashInterval = 0.50f;
}

