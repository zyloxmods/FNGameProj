#include "FortOutpostItemDefinition.h"

FText UFortOutpostItemDefinition::GetLongDescription() const {
    return FText::GetEmpty();
}

UFortOutpostItemDefinition::UFortOutpostItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    TheaterIndex = 0;
    ItemType = EFortItemType::Outpost;
}

