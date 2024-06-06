#include "FortTrapItemDefinition.h"

UFortTrapItemDefinition::UFortTrapItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    bKnockBackUsingPawnDir = false;
    ItemType = EFortItemType::Trap;
}

