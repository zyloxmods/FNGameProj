#include "FortOutpostItemDefinition.h"

FText UFortOutpostItemDefinition::GetLongDescription() const {
    return FText::GetEmpty();
}

UFortOutpostItemDefinition::UFortOutpostItemDefinition() {
    this->TheaterIndex = 0;
    this->ItemType = EFortItemType::Outpost;
}

