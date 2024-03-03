#include "FortSkeletalAudioComponent.h"

void UFortSkeletalAudioComponent::SetVolumeMultiplier(float Multiplier) {
}

void UFortSkeletalAudioComponent::SetSkeletalMesh(USkeletalMeshComponent* NewSkeletalMesh) {
}

void UFortSkeletalAudioComponent::SetCustomTrackedTransform(int32 Index, const FTransform& Transform) {
}

void UFortSkeletalAudioComponent::SetCanPlay(bool CanPlay) {
}

UFortSkeletalAudioComponent::UFortSkeletalAudioComponent() {
    this->AudioAssetBank = NULL;
    this->bShouldIgnoreDilation = false;
    this->InterpSpeed = 1;
    this->bShouldAttachOneShots = false;
    this->SkeletalMesh = NULL;
}

