#include "FortAthenaAIBotEvaluator_Warmup.h"

UFortAthenaAIBotEvaluator_Warmup::UFortAthenaAIBotEvaluator_Warmup() {
    this->WarmupPlayEmoteExecutionStatusKeyName = TEXT("AIEvaluator_WarmupPlayEmote_ExecutionStatus");
    this->WarmupLootAndShootExecutionStatusKeyName = TEXT("AIEvaluator_WarmupLootAndShoot_ExecutionStatus");
    this->WarmupIdleExecutionStatusKeyName = TEXT("AIEvaluator_WarmupIdle_ExecutionStatus");
    this->CacheWarmupDigestedSkillSet = NULL;
}

