#include "FortAthenaAIBotEvaluator_AvoidThreat.h"

UFortAthenaAIBotEvaluator_AvoidThreat::UFortAthenaAIBotEvaluator_AvoidThreat() {
    AvoidThreatKeyName = TEXT("AIEvaluator_AvoidThreat_ExecutionStatus");
    AvoidThreatMovementStateKeyName = TEXT("AIEvaluator_AvoidThreat_MovementState");
    AvoidThreatDestinationKeyName = TEXT("AIEvaluator_AvoidThreat_Destination");
    CurrentProjectileAvoiding = NULL;
    CacheEMDigestedSkillSet = NULL;
}

