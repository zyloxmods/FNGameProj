#include "FortAthenaAIBotSpawnerData.h"

UFortAthenaAISpawnerDataComponent_SkillsetBase* UFortAthenaAIBotSpawnerData::GetSkillSetComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_InventoryBase* UFortAthenaAIBotSpawnerData::GetInventoryComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_GameplayAbilityBase* UFortAthenaAIBotSpawnerData::GetGameplayAbilityComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_CosmeticBase* UFortAthenaAIBotSpawnerData::GetCosmeticComponent() const {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_ConstructionBase* UFortAthenaAIBotSpawnerData::GetConstructionComponent() const {
    return NULL;
}

UFortAthenaAIBotSpawnerData::UFortAthenaAIBotSpawnerData() {
    CosmeticComponent = NULL;
    GameplayAbilityComponent = NULL;
    SkillSetComponent = NULL;
    InventoryComponent = NULL;
    ConstructionComponent = NULL;
}

