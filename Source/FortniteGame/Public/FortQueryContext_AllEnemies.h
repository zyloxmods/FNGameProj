#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "FortQueryContext_AllEnemies.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortQueryContext_AllEnemies : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UFortQueryContext_AllEnemies();
};

