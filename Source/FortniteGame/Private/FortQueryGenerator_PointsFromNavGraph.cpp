#include "FortQueryGenerator_PointsFromNavGraph.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UFortQueryGenerator_PointsFromNavGraph::UFortQueryGenerator_PointsFromNavGraph() {
    ExploreAngleDot = 1;
    bLimitExplorationDirection = false;
    bOnlyFlatSurface = true;
    bUseParameterizedDirection = false;
    bUseHeightCheck = true;
    bFilterAllowTerrain = true;
    bFilterAllowBuildings = false;
    bFilterAllowDropdown = false;
    bFilterAllowClimbup = true;
    bFilterAllowSmash = true;
    PathDistanceFilterOperator = EFortPointsFromNavGraphGoalPathDistanceFilterOperator::AllGoalsInRange;
    GenerateAround = UEnvQueryContext_Querier::StaticClass();
}

