#include "FortQueryTest_GoalActorDot.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Item.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UFortQueryTest_GoalActorDot::UFortQueryTest_GoalActorDot() {
    LineATo = UEnvQueryContext_Querier::StaticClass();
    LineBTo = UEnvQueryContext_Item::StaticClass();
    TestMode = EFortTestGoalActorDot::Dot3D;
    bAbsoluteValue = false;
}

