#include "FortAthenaAIBotEvaluator_FreeFalling.h"

UFortAthenaAIBotEvaluator_FreeFalling::UFortAthenaAIBotEvaluator_FreeFalling() {
    DiveExecutionStatusKeyName = TEXT("AIEvaluator_Dive_ExecutionStatus");
    DiveDestinationKeyName = TEXT("AIEvaluator_Dive_Destination");
    GlideExecutionStatusKeyName = TEXT("AIEvaluator_Glide_ExecutionStatus");
    GlideDestinationKeyName = TEXT("AIEvaluator_Glide_Destination");
    JumpOffBusDestinationName = TEXT("AIEvaluator_JumpOffBus_Destination");
    bRandomlySelectFreeFallingMode = false;
    FreeFallingMode = EFreeFallingMode::Idle;
    MaxOffsetRangeFromNearestAlly = 1;
    bShouldRecomputeDestinationWhenTowardNearestAlly = false;
    bShouldSearchAllyInSquad = true;
    bShouldSearchAllyInTeam = true;
    bGlideAllowed = true;
    NearestAlly = NULL;
    CacheMovementDigestedSkillSet = NULL;
}

