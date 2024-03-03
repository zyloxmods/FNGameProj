#include "FortAthenaAIBotEvaluator_FreeFalling.h"

UFortAthenaAIBotEvaluator_FreeFalling::UFortAthenaAIBotEvaluator_FreeFalling() {
    this->DiveExecutionStatusKeyName = TEXT("AIEvaluator_Dive_ExecutionStatus");
    this->DiveDestinationKeyName = TEXT("AIEvaluator_Dive_Destination");
    this->GlideExecutionStatusKeyName = TEXT("AIEvaluator_Glide_ExecutionStatus");
    this->GlideDestinationKeyName = TEXT("AIEvaluator_Glide_Destination");
    this->JumpOffBusDestinationName = TEXT("AIEvaluator_JumpOffBus_Destination");
    this->bRandomlySelectFreeFallingMode = false;
    this->FreeFallingMode = EFreeFallingMode::Idle;
    this->MaxOffsetRangeFromNearestAlly = 1;
    this->bShouldRecomputeDestinationWhenTowardNearestAlly = false;
    this->bShouldSearchAllyInSquad = true;
    this->bShouldSearchAllyInTeam = true;
    this->bGlideAllowed = true;
    this->NearestAlly = NULL;
    this->CacheMovementDigestedSkillSet = NULL;
}

