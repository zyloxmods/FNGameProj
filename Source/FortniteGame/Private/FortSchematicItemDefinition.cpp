#include "FortSchematicItemDefinition.h"

UFortWorldItemDefinition* UFortSchematicItemDefinition::GetResultWorldItemDefinition() const {
    return NULL;
}

FRecipe UFortSchematicItemDefinition::GetRecipe() const {
    return FRecipe{};
}

int32 UFortSchematicItemDefinition::GetQuantityProduced() const {
    return 0;
}

float UFortSchematicItemDefinition::GetCraftingTimeForCharacter(int32 Level, const AFortPlayerPawn* FortPawn) const {
    return 0.0f;
}

float UFortSchematicItemDefinition::GetCraftingTime(int32 Level) const {
    return 0.0f;
}

USoundBase* UFortSchematicItemDefinition::GetCraftingSuccessSound() const {
    return NULL;
}

UFortSchematicItemDefinition::UFortSchematicItemDefinition() {
    this->CraftingTimeRowName = TEXT("Craft_Tier_1");
    this->bUseSchematicDisplayName = false;
}

