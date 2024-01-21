#include "FortQueryTest_GoalDistance.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UFortQueryTest_GoalDistance::UFortQueryTest_GoalDistance() {
    this->DistanceMode = EDistanceMode::DistItemToContext;
    this->DistanceTo = UEnvQueryContext_Querier::StaticClass();
    this->TestMode = EEnvTestDistance::Distance3D;
}

