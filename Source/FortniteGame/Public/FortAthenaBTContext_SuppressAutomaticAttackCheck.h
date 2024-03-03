#pragma once
#include "CoreMinimal.h"
#include "FortBTService_ContextOverride.h"
#include "FortAthenaBTContext_SuppressAutomaticAttackCheck.generated.h"

UCLASS(Blueprintable)
class UFortAthenaBTContext_SuppressAutomaticAttackCheck : public UFortBTService_ContextOverride {
    GENERATED_BODY()
public:
    UFortAthenaBTContext_SuppressAutomaticAttackCheck();
};

