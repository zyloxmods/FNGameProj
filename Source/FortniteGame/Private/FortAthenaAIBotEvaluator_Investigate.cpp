#include "FortAthenaAIBotEvaluator_Investigate.h"

UFortAthenaAIBotEvaluator_Investigate::UFortAthenaAIBotEvaluator_Investigate() {
    this->LastKnownPositionName = TEXT("AIEvaluator_Global_LastKnownPosition");
    this->DestinationKeyName = TEXT("AIEvaluator_Investigate_Destination");
    this->MoveToDestinationKeyName = TEXT("AIEvaluator_Investigate_MoveToDestination");
    this->AggressivenessName = TEXT("AIEvaluator_Global_Aggressiveness");
    this->InvestigatingSupportingActor = NULL;
    this->UnderminingBuildingActor = NULL;
    this->BlacklistReachingTarget = NULL;
    this->CacheMovementDigestedSkillSet = NULL;
}

