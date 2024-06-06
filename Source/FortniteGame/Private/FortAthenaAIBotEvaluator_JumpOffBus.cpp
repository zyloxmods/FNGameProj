#include "FortAthenaAIBotEvaluator_JumpOffBus.h"

UFortAthenaAIBotEvaluator_JumpOffBus::UFortAthenaAIBotEvaluator_JumpOffBus() {
    JumpOffBusDestinationName = TEXT("AIEvaluator_JumpOffBus_Destination");
    JumpOffBusDestinationVolumeKeyName = TEXT("AIEvaluator_POINavigation_NextPOI");
    BusDroppingVolume = NULL;
    CachedAthenaGameState = NULL;
    CacheMovementDigestedSkillSet = NULL;
}

