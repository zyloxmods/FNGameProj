#include "FortAthenaAIBotEvaluator_Movement.h"

UFortAthenaAIBotEvaluator_Movement::UFortAthenaAIBotEvaluator_Movement() {
    this->LastPartialPathTimeKeyName = TEXT("AIEvaluator_UnstuckTeleport_LastPartialPathTime");
    this->LastPartialPathCountKeyName = TEXT("AIEvaluator_UnstuckTeleport_LastPartialCount");
    this->LastBlockedPathCountKeyName = TEXT("AIEvaluator_Unstuck_LastBlockedCount");
    this->UnstuckInWaterExecutionStatusName = TEXT("AIEvaluator_UnstuckAvoidWater_ExecutionStatus");
    this->UnstuckLastBlockedByActorKeyName = TEXT("AIEvaluator_Unstuck_LastBlockingActor");
    this->UnstuckExecutionStatusKeyName = TEXT("AIEvaluator_Unstuck_ExecutionStatus");
    this->TeleportExecutionStatusKeyName = TEXT("AIEvaluator_UnstuckTeleport_ExecutionStatus");
    this->UndermineExecutionStatusKeyName = TEXT("AIEvaluator_Undermine_ExecutionStatus");
    this->UndermineTargetKeyName = TEXT("AIEvaluator_Undermine_Target");
    this->UndermineLocationImpactName = TEXT("AIEvaluator_Undermine_Location");
    this->UnstuckSkillSet = NULL;
}

