#include "FortAthenaAIBotEvaluator_EvasiveManeuvers.h"

void UFortAthenaAIBotEvaluator_EvasiveManeuvers::OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult) {
}

UFortAthenaAIBotEvaluator_EvasiveManeuvers::UFortAthenaAIBotEvaluator_EvasiveManeuvers() {
    CrouchExecutionStatusName = TEXT("AIEvaluator_Crouch_ExecutionStatus");
    JumpExecutionStatusName = TEXT("AIEvaluator_Jump_ExecutionStatus");
    DodgeName = TEXT("AIEvaluator_Dodge_ExecutionStatus");
    DestinationKeyName = TEXT("AIEvaluator_Dodge_Destination");
    bDoCrouching = true;
    bDoDodging = true;
    bDoJumping = true;
    bDoJumpingDistanceCheck = true;
    CacheEMDigestedSkillSet = NULL;
}

