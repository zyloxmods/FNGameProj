#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "FortQueryContext_EncounterQueryActor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortQueryContext_EncounterQueryActor : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UFortQueryContext_EncounterQueryActor();
};

