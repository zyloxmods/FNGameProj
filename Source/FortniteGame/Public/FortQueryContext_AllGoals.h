#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "FortQueryContext_AllGoals.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortQueryContext_AllGoals : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UFortQueryContext_AllGoals();
};

