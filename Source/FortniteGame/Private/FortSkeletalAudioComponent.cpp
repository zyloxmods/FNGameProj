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
    AudioAssetBank = NULL;
    bShouldIgnoreDilation = false;
    InterpSpeed = 1;
    bShouldAttachOneShots = false;
    SkeletalMesh = NULL;
}

