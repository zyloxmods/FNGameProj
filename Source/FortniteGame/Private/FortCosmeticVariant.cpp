#include "FortCosmeticVariant.h"

FText UFortCosmeticVariant::GetVariantUnlockRequirement(FGameplayTag InVariantTag) const {
    return FText::GetEmpty();
}

FText UFortCosmeticVariant::GetVariantText(FGameplayTag InVariantTag) const {
    return FText::GetEmpty();
}

FText UFortCosmeticVariant::GetVariantChannelText() const {
    return FText::GetEmpty();
}

FGameplayTagContainer UFortCosmeticVariant::GetAllVariantTags() const {
    return FGameplayTagContainer{};
}

UFortCosmeticVariant::UFortCosmeticVariant() {
}

