#include "FortAthenaAIBotEvaluator_CharacterLaunched.h"

UFortAthenaAIBotEvaluator_CharacterLaunched::UFortAthenaAIBotEvaluator_CharacterLaunched() {
    this->CharacterLaunchedExecutionStatusKeyName = TEXT("AIEvaluator_CharacterLaunched_ExecutionStatus");
    this->SteerDirectionKeyName = TEXT("AIEvaluator_CharacterLaunched_SteerDirection");
    this->CachedMovementSkillSet = NULL;
}

