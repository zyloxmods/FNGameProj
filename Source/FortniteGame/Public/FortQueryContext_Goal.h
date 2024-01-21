#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "FortQueryContext_Goal.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortQueryContext_Goal : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UFortQueryContext_Goal();
};

