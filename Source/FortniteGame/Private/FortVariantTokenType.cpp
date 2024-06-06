#include "FortVariantTokenType.h"

FGameplayTag UFortVariantTokenType::GetVariantNameTag() const {
    return FGameplayTag{};
}

FGameplayTag UFortVariantTokenType::GetVariantChannelTag() const {
    return FGameplayTag{};
}

UFortItemDefinition* UFortVariantTokenType::GetCosmeticItem() const {
    return NULL;
}

UFortVariantTokenType::UFortVariantTokenType(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    ProfileType = EItemProfileType::Common;
    cosmetic_item = NULL;
    bAutoEquipVariant = true;
    bMarkItemUnseen = true;
    bCreateGiftbox = false;
}

