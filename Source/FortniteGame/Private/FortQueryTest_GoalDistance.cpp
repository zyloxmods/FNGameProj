#include "FortQueryTest_GoalDistance.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UFortQueryTest_GoalDistance::UFortQueryTest_GoalDistance() {
    DistanceMode = EDistanceMode::DistItemToContext;
    DistanceTo = UEnvQueryContext_Querier::StaticClass();
    TestMode = EEnvTestDistance::Distance3D;
}

