#pragma once
#include "CoreMinimal.h"
#include "FortGameplayEffectExecutionCalculation.h"
#include "FortActiveDurationExecutionCalculation.generated.h"

UCLASS(Blueprintable)
class UFortActiveDurationExecutionCalculation : public UFortGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    UFortActiveDurationExecutionCalculation();
};

