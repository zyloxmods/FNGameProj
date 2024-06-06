#include "FortCardPackItem.h"

bool UFortCardPackItem::IsChoicePack() const {
    return false;
}

void UFortCardPackItem::GetChoices(TArray<UFortAccountItemDefinition*>& Choices) const {
}

void UFortCardPackItem::GetChoiceItems(TArray<UFortItem*>& ChoiceAttributes) const {
}

bool UFortCardPackItem::CanStoreOpen() const {
    return false;
}

UFortCardPackItem::UFortCardPackItem() {
    is_loot_tier_overridden = false;
    override_loot_tier = 0;
}

