#include "CustomCharacterPartModifier.h"

void ACustomCharacterPartModifier::SetChildParticleComponentsVisible(bool bVisible) {
}

void ACustomCharacterPartModifier::SetChildMeshComponentsHidden(bool bHideChildComponents) {
}

void ACustomCharacterPartModifier::SetCharacterActiveVariant(const FGameplayTag& ChannelTag, const FGameplayTag& VariantTag) {
}


UMeshComponent* ACustomCharacterPartModifier::GetSkeletalMeshForAssociatedPlayerPawnPartType() const {
    return NULL;
}

UFXSystemComponent* ACustomCharacterPartModifier::GetIdleVFXComponent() const {
    return NULL;
}

EFortCustomPartType ACustomCharacterPartModifier::GetCharacterPartType() const {
    return EFortCustomPartType::Head;
}

void ACustomCharacterPartModifier::ForceResetParticleSystems() {
}

ACustomCharacterPartModifier::ACustomCharacterPartModifier() {
    IdleVFX = NULL;
    PartType = EFortCustomPartType::NumTypes;
}

