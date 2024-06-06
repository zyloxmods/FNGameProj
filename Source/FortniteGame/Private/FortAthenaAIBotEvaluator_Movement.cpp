#include "FortAthenaAIBotEvaluator_Movement.h"

UFortAthenaAIBotEvaluator_Movement::UFortAthenaAIBotEvaluator_Movement() {
    LastPartialPathTimeKeyName = TEXT("AIEvaluator_UnstuckTeleport_LastPartialPathTime");
    LastPartialPathCountKeyName = TEXT("AIEvaluator_UnstuckTeleport_LastPartialCount");
    LastBlockedPathCountKeyName = TEXT("AIEvaluator_Unstuck_LastBlockedCount");
    UnstuckInWaterExecutionStatusName = TEXT("AIEvaluator_UnstuckAvoidWater_ExecutionStatus");
    UnstuckLastBlockedByActorKeyName = TEXT("AIEvaluator_Unstuck_LastBlockingActor");
    UnstuckExecutionStatusKeyName = TEXT("AIEvaluator_Unstuck_ExecutionStatus");
    TeleportExecutionStatusKeyName = TEXT("AIEvaluator_UnstuckTeleport_ExecutionStatus");
    UndermineExecutionStatusKeyName = TEXT("AIEvaluator_Undermine_ExecutionStatus");
    UndermineTargetKeyName = TEXT("AIEvaluator_Undermine_Target");
    UndermineLocationImpactName = TEXT("AIEvaluator_Undermine_Location");
    UnstuckSkillSet = NULL;
}

