#include "AthenaAIController.h"

AAthenaAIController::AAthenaAIController() {
    PrimaryMeleeAttackAbilityInstance = NULL;
    PrimaryRangedAttackAbilityInstance = NULL;
    CheapFlyingNavPointHorizontalGridRatio = 1;
    CheapFlyingNavNavPointVerticalGridRatio = 1;
    bEnableCheapFlyingNavigation = false;
    bAllowBacktrackPathfinding = true;
    bIsGoalRequiredForBehavior = true;
    SecondaryGoalActor = NULL;
    AthenaPFC = NULL;
}

