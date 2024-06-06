#include "FortAthenaAIBotEvaluator_TrapOnPathDetected.h"

UFortAthenaAIBotEvaluator_TrapOnPathDetected::UFortAthenaAIBotEvaluator_TrapOnPathDetected() {
    CacheAimingDigestedSkillSet = NULL;
    TrapOnPathKeyName = TEXT("AIEvaluator_TrapOnPath_ExecutionStatus");
    TrapActorOnPathKeyName = TEXT("AIEvaluator_TrapOnPath_Actor");
    TargetActorName = TEXT("AIEvaluator_Global_TargetActor");
    AlertLevelName = TEXT("AIEvaluator_Global_AlertLevel");
    RangeAttackExecutionStatusName = TEXT("AIEvaluator_RangeAttack_ExecutionStatus");
    CurrentTrapTarget = NULL;
}

