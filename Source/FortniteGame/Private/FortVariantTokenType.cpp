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

UFortVariantTokenType::UFortVariantTokenType() {
    this->ProfileType = EItemProfileType::Athena;
    this->cosmetic_item = NULL;
    this->bAutoEquipVariant = true;
    this->bMarkItemUnseen = true;
    this->bCreateGiftbox = false;
    ItemType = EFortItemType::CosmeticVariantToken;
}

