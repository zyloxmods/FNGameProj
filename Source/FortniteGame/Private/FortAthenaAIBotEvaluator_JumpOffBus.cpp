#include "FortAthenaAIBotEvaluator_JumpOffBus.h"

UFortAthenaAIBotEvaluator_JumpOffBus::UFortAthenaAIBotEvaluator_JumpOffBus() {
    this->JumpOffBusDestinationName = TEXT("AIEvaluator_JumpOffBus_Destination");
    this->JumpOffBusDestinationVolumeKeyName = TEXT("AIEvaluator_POINavigation_NextPOI");
    this->BusDroppingVolume = NULL;
    this->CachedAthenaGameState = NULL;
    this->CacheMovementDigestedSkillSet = NULL;
}

