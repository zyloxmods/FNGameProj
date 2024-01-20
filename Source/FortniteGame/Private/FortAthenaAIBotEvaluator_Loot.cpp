#include "FortAthenaAIBotEvaluator_Loot.h"

void UFortAthenaAIBotEvaluator_Loot::LootDestroyed(AActor* LootActorDestroyed) {
}

UFortAthenaAIBotEvaluator_Loot::UFortAthenaAIBotEvaluator_Loot() {
    this->LootDestinationKeyName = TEXT("AIEvaluator_Loot_Destination");
    this->LootObjectKeyName = TEXT("AIEvaluator_Loot_Object");
    this->LootTypeKeyName = TEXT("AIEvaluator_Loot_Type");
    this->LootScanDistanceThreshold = 500.00f;
    this->LootScanDistanceTimeThreshold = 2.00f;
    this->CachedServerManager = NULL;
    this->CurrentLootActor = NULL;
}

