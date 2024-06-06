#include "FortAthenaBTService_Revive.h"

UFortAthenaBTService_Revive::UFortAthenaBTService_Revive() {
    ReviveTargetKeyName = TEXT("AIEvaluator_Revive_Target");
    ExecutionStatusName = TEXT("AIEvaluator_Revive_ExecutionStatus");
    MoveToPathMovementStateName = TEXT("AIEvaluator_Revive_MovementState");
    InteractionExecutionStatusName = TEXT("AIEvaluator_Revive_InteractionExecutionStatus");
    InteractionContextInfoName = TEXT("AIEvaluator_Revive_InteractionContextInfo");
}

