#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "FortQueryGenerator_AssignmentGoal.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortQueryGenerator_AssignmentGoal : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UFortQueryGenerator_AssignmentGoal();
};

