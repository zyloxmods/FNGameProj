#include "FortAthenaBTTask_BotUnstuckTeleport.h"

UFortAthenaBTTask_BotUnstuckTeleport::UFortAthenaBTTask_BotUnstuckTeleport() {
    this->CanReachDestinationKeyName = TEXT("NextDestination");
    this->TeleportExecutionStatusKeyName = TEXT("AIEvaluator_UnstuckTeleport_ExecutionStatus");
    this->LastPartialPathTimeKeyName = TEXT("AIEvaluator_UnstuckTeleport_LastPartialPathTime");
    this->LastPartialPathCountKeyName = TEXT("AIEvaluator_UnstuckTeleport_LastPartialCount");
    this->UnstuckSkillSet = NULL;
}

