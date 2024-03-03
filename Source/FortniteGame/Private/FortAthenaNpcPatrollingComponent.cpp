#include "FortAthenaNpcPatrollingComponent.h"

void UFortAthenaNpcPatrollingComponent::SetPatrolPath(const AFortAthenaPatrolPath* NewPatrolPath) {
}

UFortAthenaNpcPatrollingComponent::UFortAthenaNpcPatrollingComponent() {
    this->bCanPropagatePatrollingProgression = false;
    this->CachedBotController = NULL;
    this->PatrolPath = NULL;
}

