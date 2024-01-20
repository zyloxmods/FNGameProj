#include "FortQueryGenerator_PointsFromNavGraph.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UFortQueryGenerator_PointsFromNavGraph::UFortQueryGenerator_PointsFromNavGraph() {
    this->ExploreAngleDot = 0.70f;
    this->bLimitExplorationDirection = false;
    this->bOnlyFlatSurface = true;
    this->bUseParameterizedDirection = false;
    this->bFilterAllowTerrain = true;
    this->bFilterAllowBuildings = false;
    this->bFilterAllowDropdown = false;
    this->bFilterAllowClimbup = true;
    this->bFilterAllowSmash = true;
    this->PathDistanceFilterOperator = EFortPointsFromNavGraphGoalPathDistanceFilterOperator::AllGoalsInRange;
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
}

