#include "FortAthenaNpcEvaluator_Patrolling.h"

UFortAthenaNpcEvaluator_Patrolling::UFortAthenaNpcEvaluator_Patrolling() {
    this->PatrollingKeyName = TEXT("AIEvaluator_Patrolling_ExecutionStatus");
    this->PatrollingMovementStateKeyName = TEXT("AIEvaluator_Patrolling_MovementState");
    this->PatrollingDestinationKeyName = TEXT("AIEvaluator_Patrolling_Destination");
    this->DynamicBlueprintStatusKeyName = TEXT("AIEvaluator_DynamicBlueprint_ExecutionStatus");
    this->DynamicBlueprintActorKeyName = TEXT("AIEvaluator_DynamicBlueprint_Actor");
    this->PatrollingShouldMoveKeyName = TEXT("AIEvaluator_Patrolling_ShouldMove");
    this->DistanceToTestPoint = 1;
    this->bCanDisablePatrolling = true;
    this->CachedNpcPatrollingComponent = NULL;
}

