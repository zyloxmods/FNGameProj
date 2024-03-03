#include "FortAthenaBTService_Jump.h"

UFortAthenaBTService_Jump::UFortAthenaBTService_Jump() {
    this->JumpExecutionStatusName = TEXT("AIEvaluator_Jump_ExecutionStatus");
    this->CrouchExecutionStatusName = TEXT("AIEvaluator_Crouch_ExecutionStatus");
    this->JumpInputReleaseDelay = 1;
}

