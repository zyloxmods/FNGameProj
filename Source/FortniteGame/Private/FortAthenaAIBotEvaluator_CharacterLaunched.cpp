#include "FortAthenaAIBotEvaluator_CharacterLaunched.h"

UFortAthenaAIBotEvaluator_CharacterLaunched::UFortAthenaAIBotEvaluator_CharacterLaunched() {
    CharacterLaunchedExecutionStatusKeyName = TEXT("AIEvaluator_CharacterLaunched_ExecutionStatus");
    SteerDirectionKeyName = TEXT("AIEvaluator_CharacterLaunched_SteerDirection");
    CachedMovementSkillSet = NULL;
}

