#include "FortAthenaNpcEvaluator_FollowPatrolPath.h"

UFortAthenaNpcEvaluator_FollowPatrolPath::UFortAthenaNpcEvaluator_FollowPatrolPath() {
    this->FollowPatrolPathKeyName = TEXT("AIEvaluator_FollowPatrolPath_ExecutionStatus");
    this->FollowPatrolPathMovementStateKeyName = TEXT("AIEvaluator_FollowPatrolPath_MovementState");
    this->FollowPatrolPathDestinationKeyName = TEXT("AIEvaluator_FollowPatrolPath_Destination");
    this->ChanceToTakeABreak = 1;
    this->BreakDurationMin = 1;
    this->BreakDurationMax = 1;
}

