#include "FortAthenaBTTask_BotUnstuckTeleport.h"

UFortAthenaBTTask_BotUnstuckTeleport::UFortAthenaBTTask_BotUnstuckTeleport() {
    CanReachDestinationKeyName = TEXT("NextDestination");
    TeleportExecutionStatusKeyName = TEXT("AIEvaluator_UnstuckTeleport_ExecutionStatus");
    LastPartialPathTimeKeyName = TEXT("AIEvaluator_UnstuckTeleport_LastPartialPathTime");
    LastPartialPathCountKeyName = TEXT("AIEvaluator_UnstuckTeleport_LastPartialCount");
    UnstuckSkillSet = NULL;
}

