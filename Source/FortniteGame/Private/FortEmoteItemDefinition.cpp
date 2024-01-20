#include "FortEmoteItemDefinition.h"

FText UFortEmoteItemDefinition::GetCommandName() const {
    return FText::GetEmpty();
}

UFortEmoteItemDefinition::UFortEmoteItemDefinition() {
    ItemType = EFortItemType::Emote;
}

