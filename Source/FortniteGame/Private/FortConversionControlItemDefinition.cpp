#include "FortConversionControlItemDefinition.h"

bool UFortConversionControlItemDefinition::GetTierFromSacrificePoints(int32 SacrificePoints, EFortRarity& CalculatedTier) const {
    return false;
}

FText UFortConversionControlItemDefinition::GetRewardName() const {
    return FText::GetEmpty();
}

int32 UFortConversionControlItemDefinition::GetRequiredItemQuantity(int32 SacrificePoints) const {
    return 0;
}

UFortAccountItemDefinition* UFortConversionControlItemDefinition::GetRequiredItemDefinition() const {
    return NULL;
}

FGameplayTagContainer UFortConversionControlItemDefinition::GetRequiredCatalysts() const {
    return FGameplayTagContainer{};
}

int32 UFortConversionControlItemDefinition::GetPointsForTier(EFortRarity InTier) const {
    return 0;
}

EFortRarity UFortConversionControlItemDefinition::GetMaxConversionTier() const {
    return EFortRarity::Common;
}

EFortRarity UFortConversionControlItemDefinition::GetFirstConversionTier() const {
    return EFortRarity::Common;
}

UFortConversionControlItemDefinition::UFortConversionControlItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    bConsumedOnConversion = false;
    ItemType = EFortItemType::ConversionControl;
}

