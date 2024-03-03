#include "AthenaAIController.h"

AAthenaAIController::AAthenaAIController() {
    this->PrimaryMeleeAttackAbilityInstance = NULL;
    this->PrimaryRangedAttackAbilityInstance = NULL;
    this->CheapFlyingNavPointHorizontalGridRatio = 1;
    this->CheapFlyingNavNavPointVerticalGridRatio = 1;
    this->bEnableCheapFlyingNavigation = false;
    this->bAllowBacktrackPathfinding = true;
    this->bIsGoalRequiredForBehavior = true;
    this->SecondaryGoalActor = NULL;
    this->AthenaPFC = NULL;
}

