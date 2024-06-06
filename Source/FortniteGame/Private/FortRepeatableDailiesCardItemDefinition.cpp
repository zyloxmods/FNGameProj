#include "FortRepeatableDailiesCardItemDefinition.h"

UFortRepeatableDailiesCardItemDefinition::UFortRepeatableDailiesCardItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    FillCount = 0;
    ItemType = EFortItemType::RepeatableDailiesCard;
}

