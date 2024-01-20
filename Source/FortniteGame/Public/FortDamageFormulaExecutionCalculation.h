#pragma once
#include "CoreMinimal.h"
#include "FortGameplayEffectExecutionCalculation.h"
#include "FortDamageFormulaExecutionCalculation.generated.h"

UCLASS(Blueprintable)
class UFortDamageFormulaExecutionCalculation : public UFortGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    UFortDamageFormulaExecutionCalculation();
};

