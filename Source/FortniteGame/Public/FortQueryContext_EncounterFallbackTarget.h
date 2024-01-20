#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "FortQueryContext_EncounterFallbackTarget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortQueryContext_EncounterFallbackTarget : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UFortQueryContext_EncounterFallbackTarget();
};

