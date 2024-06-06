#include "FortAthenaAIBotEvaluator_Warmup.h"

UFortAthenaAIBotEvaluator_Warmup::UFortAthenaAIBotEvaluator_Warmup() {
    WarmupPlayEmoteExecutionStatusKeyName = TEXT("AIEvaluator_WarmupPlayEmote_ExecutionStatus");
    WarmupLootAndShootExecutionStatusKeyName = TEXT("AIEvaluator_WarmupLootAndShoot_ExecutionStatus");
    WarmupIdleExecutionStatusKeyName = TEXT("AIEvaluator_WarmupIdle_ExecutionStatus");
    CacheWarmupDigestedSkillSet = NULL;
}

