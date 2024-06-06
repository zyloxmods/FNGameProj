#include "FortAthenaAIBotEvaluator_DanceOnKill.h"

UFortAthenaAIBotEvaluator_DanceOnKill::UFortAthenaAIBotEvaluator_DanceOnKill() {
    LastKillPositionKeyName = TEXT("AIEvaluator_Global_LastKillPosition");
    LastKillTimeKeyName = TEXT("AIEvaluator_Global_LastKillTime");
    LastKillWasABotKeyName = TEXT("AIEvaluator_Global_LastKillVictimWasABot");
    PlayEmoteExecutionStatusKeyName = TEXT("AIEvaluator_PlayEmote_ExecutionStatus");
    CacheEmoteDigestedSkillSet = NULL;
}

