#include "FortQueryTest_GoalActorDot.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Item.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UFortQueryTest_GoalActorDot::UFortQueryTest_GoalActorDot() {
    this->LineATo = UEnvQueryContext_Querier::StaticClass();
    this->LineBTo = UEnvQueryContext_Item::StaticClass();
    this->TestMode = EFortTestGoalActorDot::Dot3D;
    this->bAbsoluteValue = false;
}

