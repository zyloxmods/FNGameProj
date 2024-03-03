#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortGameplayEffectExecutionCalculation.h"
#include "FortCurieElementExecution.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortCurieElementExecution : public UFortGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ElementToApply;
    
public:
    UFortCurieElementExecution();
};

