#include "FortDefenderItemDefinition.h"

FGameplayTag UFortDefenderItemDefinition::GetDefenderSubtypeTag() const {
    return FGameplayTag{};
}

EFortDefenderSubtype UFortDefenderItemDefinition::GetDefenderSubtype() const {
    return EFortDefenderSubtype::AssaultRifle;
}

UFortDefenderItemDefinition::UFortDefenderItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    ItemType = EFortItemType::Defender;
}

