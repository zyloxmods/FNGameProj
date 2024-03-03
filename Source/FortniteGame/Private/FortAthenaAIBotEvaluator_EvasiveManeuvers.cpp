#include "FortAthenaAIBotEvaluator_EvasiveManeuvers.h"

void UFortAthenaAIBotEvaluator_EvasiveManeuvers::OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult) {
}

UFortAthenaAIBotEvaluator_EvasiveManeuvers::UFortAthenaAIBotEvaluator_EvasiveManeuvers() {
    this->CrouchExecutionStatusName = TEXT("AIEvaluator_Crouch_ExecutionStatus");
    this->JumpExecutionStatusName = TEXT("AIEvaluator_Jump_ExecutionStatus");
    this->DodgeName = TEXT("AIEvaluator_Dodge_ExecutionStatus");
    this->DestinationKeyName = TEXT("AIEvaluator_Dodge_Destination");
    this->bDoCrouching = true;
    this->bDoDodging = true;
    this->bDoJumping = true;
    this->bDoJumpingDistanceCheck = true;
    this->CacheEMDigestedSkillSet = NULL;
}

