#include "FortAthenaAIBotEvaluator_PatrolAround.h"

UFortAthenaAIBotEvaluator_PatrolAround::UFortAthenaAIBotEvaluator_PatrolAround() {
    this->PatrolDestinationName = TEXT("AIEvaluator_Patrol_Destination");
    this->CacheAthenaGameMode = NULL;
    this->CacheMovementDigestedSkillSet = NULL;
}

