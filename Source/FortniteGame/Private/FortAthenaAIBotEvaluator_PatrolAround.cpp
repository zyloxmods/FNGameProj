#include "FortAthenaAIBotEvaluator_PatrolAround.h"

UFortAthenaAIBotEvaluator_PatrolAround::UFortAthenaAIBotEvaluator_PatrolAround() {
    PatrolDestinationName = TEXT("AIEvaluator_Patrol_Destination");
    CacheAthenaGameMode = NULL;
    CacheMovementDigestedSkillSet = NULL;
}

