#include "FortAthenaAIBotLootingDigestedSkillSet.h"

UFortAthenaAIBotLootingDigestedSkillSet::UFortAthenaAIBotLootingDigestedSkillSet() {
    this->ThresholdDistanceToSwitchLootItem = 1;
    this->ThresholdDistanceSquaredToRescanForBetterLoot = 1;
    this->ThresholdTimeToRescanForBetterLoot = 1;
    this->LootStateEvaluationRadiusSq = 1;
    this->MinLootDurationPerPOI = 1;
    this->MaxLootDurationPerPOI = 1;
    this->LootPickupInteractionTime = 1;
    this->LootPickupInteractionDeviationTime = 1;
    this->Distance2DScore = 1;
    this->HeightScore = 1;
    this->ThreatMaxScore = 1;
    this->PrioritizeWeaponScore = 1;
    this->PoiSelectionDistanceScore = 1;
    this->PoiSelectionBotPresenceScore = 1;
}

