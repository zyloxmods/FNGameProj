#include "FortAthenaAIBotEvaluator_EvasiveManeuvers.h"

void UFortAthenaAIBotEvaluator_EvasiveManeuvers::OnMoveCompleted(FAIRequestID RequestId, TEnumAsByte<EPathFollowingResult::Type> MovementResult) {
}

UFortAthenaAIBotEvaluator_EvasiveManeuvers::UFortAthenaAIBotEvaluator_EvasiveManeuvers() {
    this->WithinEvasiveManeuversDistance = 1500.00f;
    this->bRestrictEvasiveManeuversWithinDistance = false;
    this->CrouchExecutionStatusName = TEXT("AIEvaluator_Crouch_ExecutionStatus");
    this->JumpExecutionStatusName = TEXT("AIEvaluator_Jump_ExecutionStatus");
    this->DestinationKeyName = TEXT("AIEvaluator_EvasiveManeuvers_Destination");
    this->DesireToCrouch = 1.00f;
    this->DesireToJump = 1.00f;
    this->DesireToWalk = 1.00f;
    this->EvasiveManeuverDistanceMax = 450.00f;
    this->EvasiveManeuverDistanceMin = 100.00f;
    this->CrouchTimeMax = 5.00f;
    this->CrouchTimeMin = 2.50f;
    this->SideStepTimeMax = 5.00f;
    this->SideStepTimeMin = 2.50f;
}

