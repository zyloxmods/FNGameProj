#include "FortAthenaAIBotEvaluator_AvoidThreat.h"

UFortAthenaAIBotEvaluator_AvoidThreat::UFortAthenaAIBotEvaluator_AvoidThreat() {
    this->AvoidThreatKeyName = TEXT("AIEvaluator_AvoidThreat_ExecutionStatus");
    this->AvoidThreatMovementStateKeyName = TEXT("AIEvaluator_AvoidThreat_MovementState");
    this->AvoidThreatDestinationKeyName = TEXT("AIEvaluator_AvoidThreat_Destination");
    this->CurrentProjectileAvoiding = NULL;
    this->CacheEMDigestedSkillSet = NULL;
}

