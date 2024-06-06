#include "FortAthenaAIBotEvaluator_Investigate.h"

UFortAthenaAIBotEvaluator_Investigate::UFortAthenaAIBotEvaluator_Investigate() {
    LastKnownPositionName = TEXT("AIEvaluator_Global_LastKnownPosition");
    DestinationKeyName = TEXT("AIEvaluator_Investigate_Destination");
    MoveToDestinationKeyName = TEXT("AIEvaluator_Investigate_MoveToDestination");
    AggressivenessName = TEXT("AIEvaluator_Global_Aggressiveness");
    InvestigatingSupportingActor = NULL;
    UnderminingBuildingActor = NULL;
    BlacklistReachingTarget = NULL;
    CacheMovementDigestedSkillSet = NULL;
}

