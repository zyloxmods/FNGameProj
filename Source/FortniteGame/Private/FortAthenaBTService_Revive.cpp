#include "FortAthenaBTService_Revive.h"

UFortAthenaBTService_Revive::UFortAthenaBTService_Revive() {
    this->ReviveTargetKeyName = TEXT("AIEvaluator_Revive_Target");
    this->ExecutionStatusName = TEXT("AIEvaluator_Revive_ExecutionStatus");
    this->MoveToPathMovementStateName = TEXT("AIEvaluator_Revive_MovementState");
    this->InteractionExecutionStatusName = TEXT("AIEvaluator_Revive_InteractionExecutionStatus");
    this->InteractionContextInfoName = TEXT("AIEvaluator_Revive_InteractionContextInfo");
}

