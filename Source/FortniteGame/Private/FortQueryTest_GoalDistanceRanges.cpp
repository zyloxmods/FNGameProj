#include "FortQueryTest_GoalDistanceRanges.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UFortQueryTest_GoalDistanceRanges::UFortQueryTest_GoalDistanceRanges() {
    this->DistanceMode = EDistanceMode::DistItemToContext;
    this->DistanceTo = UEnvQueryContext_Querier::StaticClass();
    this->ScreeningTestMode = EEnvTestDistance::Distance3D;
    this->TestMode = EEnvTestDistance::Distance3D;
}

