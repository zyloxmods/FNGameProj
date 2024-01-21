#include "FortPersistentResourceItemDefinition.h"

bool UFortPersistentResourceItemDefinition::IsEventItem() const {
    return false;
}

UFortPersistentResourceItemDefinition::UFortPersistentResourceItemDefinition() {
    this->bIsEventItem = false;
    ItemType = EFortItemType::AccountResource;
}

