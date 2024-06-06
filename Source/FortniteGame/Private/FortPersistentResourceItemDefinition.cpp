#include "FortPersistentResourceItemDefinition.h"

bool UFortPersistentResourceItemDefinition::IsEventItem() const {
    return false;
}

UFortPersistentResourceItemDefinition::UFortPersistentResourceItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    bIsEventItem = false;
    ItemType = EFortItemType::AccountResource;
}

