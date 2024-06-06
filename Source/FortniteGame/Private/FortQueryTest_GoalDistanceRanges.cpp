#include "FortQueryTest_GoalDistanceRanges.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UFortQueryTest_GoalDistanceRanges::UFortQueryTest_GoalDistanceRanges() {
    DistanceMode = EDistanceMode::DistItemToContext;
    DistanceTo = UEnvQueryContext_Querier::StaticClass();
    ScreeningTestMode = EEnvTestDistance::Distance3D;
    TestMode = EEnvTestDistance::Distance3D;
}

