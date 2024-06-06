#include "FortEmoteItemDefinition.h"

FText UFortEmoteItemDefinition::GetCommandName() const {
    return FText::GetEmpty();
}

UFortEmoteItemDefinition::UFortEmoteItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    ItemType = EFortItemType::Emote;
}

