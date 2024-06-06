#include "FortAthenaNpcEvaluator_Patrolling.h"

UFortAthenaNpcEvaluator_Patrolling::UFortAthenaNpcEvaluator_Patrolling() {
    PatrollingKeyName = TEXT("AIEvaluator_Patrolling_ExecutionStatus");
    PatrollingMovementStateKeyName = TEXT("AIEvaluator_Patrolling_MovementState");
    PatrollingDestinationKeyName = TEXT("AIEvaluator_Patrolling_Destination");
    DynamicBlueprintStatusKeyName = TEXT("AIEvaluator_DynamicBlueprint_ExecutionStatus");
    DynamicBlueprintActorKeyName = TEXT("AIEvaluator_DynamicBlueprint_Actor");
    PatrollingShouldMoveKeyName = TEXT("AIEvaluator_Patrolling_ShouldMove");
    DistanceToTestPoint = 1;
    bCanDisablePatrolling = true;
    CachedNpcPatrollingComponent = NULL;
}

