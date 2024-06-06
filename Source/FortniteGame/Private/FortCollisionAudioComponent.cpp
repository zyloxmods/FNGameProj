#include "FortCollisionAudioComponent.h"

void UFortCollisionAudioComponent::SetCollisionSoundAtIndex(int32 Index, USoundBase* SoundToUse) {
}

void UFortCollisionAudioComponent::OnCollision(const FVector& HitLocation, const FVector& HitNormalImpulse, bool& OutResult, float& OutMagnitude) {
}

UFortCollisionAudioComponent::UFortCollisionAudioComponent() {
    CheckCollisionLeashInterval = 1;
}

