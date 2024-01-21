#pragma once
#include "CoreMinimal.h"
#include "FortBTService_ContextOverride.h"
#include "FortBTContext_SkipNotPerceivedGoals.generated.h"

UCLASS(Blueprintable)
class UFortBTContext_SkipNotPerceivedGoals : public UFortBTService_ContextOverride {
    GENERATED_BODY()
public:
    UFortBTContext_SkipNotPerceivedGoals();
};

