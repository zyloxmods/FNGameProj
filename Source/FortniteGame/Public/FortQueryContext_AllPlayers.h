#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "FortQueryContext_AllPlayers.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortQueryContext_AllPlayers : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UFortQueryContext_AllPlayers();
};

