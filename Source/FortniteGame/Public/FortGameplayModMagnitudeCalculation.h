#pragma once
#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "FortGameplayModMagnitudeCalculation.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortGameplayModMagnitudeCalculation : public UGameplayModMagnitudeCalculation {
    GENERATED_BODY()
public:
    UFortGameplayModMagnitudeCalculation();
};

