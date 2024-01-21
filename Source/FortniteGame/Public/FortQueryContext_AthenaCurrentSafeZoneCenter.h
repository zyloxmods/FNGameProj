#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "FortQueryContext_AthenaCurrentSafeZoneCenter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortQueryContext_AthenaCurrentSafeZoneCenter : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UFortQueryContext_AthenaCurrentSafeZoneCenter();
};

