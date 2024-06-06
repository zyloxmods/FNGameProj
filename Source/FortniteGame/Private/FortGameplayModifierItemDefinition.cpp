#include "FortGameplayModifierItemDefinition.h"

bool UFortGameplayModifierItemDefinition::IsHiddenInUI() const {
    return false;
}

UFortGameplayModifierItemDefinition::UFortGameplayModifierItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    bHiddenInUI = false;
    ItemType = EFortItemType::GameplayModifier;
}

