#include "FortAthenaNpcPatrollingComponent.h"

void UFortAthenaNpcPatrollingComponent::SetPatrolPath(const AFortAthenaPatrolPath* NewPatrolPath) {
}

UFortAthenaNpcPatrollingComponent::UFortAthenaNpcPatrollingComponent() {
    bCanPropagatePatrollingProgression = false;
    CachedBotController = NULL;
    PatrolPath = NULL;
}

