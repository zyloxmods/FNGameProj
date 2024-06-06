#include "FortAthenaNpcEvaluator_FollowPatrolPath.h"

UFortAthenaNpcEvaluator_FollowPatrolPath::UFortAthenaNpcEvaluator_FollowPatrolPath() {
    FollowPatrolPathKeyName = TEXT("AIEvaluator_FollowPatrolPath_ExecutionStatus");
    FollowPatrolPathMovementStateKeyName = TEXT("AIEvaluator_FollowPatrolPath_MovementState");
    FollowPatrolPathDestinationKeyName = TEXT("AIEvaluator_FollowPatrolPath_Destination");
    ChanceToTakeABreak = 1;
    BreakDurationMin = 1;
    BreakDurationMax = 1;
}

