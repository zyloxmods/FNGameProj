#include "FortSchematicItem.h"

bool UFortSchematicItem::IsBulkCraftable() const {
    return false;
}

FRecipe UFortSchematicItem::GetSchematicRecipe() const {
    return FRecipe{};
}

int32 UFortSchematicItem::GetSchematicQuantityProduced() const {
    return 0;
}

int32 UFortSchematicItem::GetRequiredTeamLevelToCraft() const {
    return 0;
}

UFortSchematicItem::UFortSchematicItem() {
    Refundable = false;
    refund_legacy_item = false;
    bGrantedByAbility = false;
    RequiredTeamLevel = 0;
}

