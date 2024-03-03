#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "GameplayTagContainer.h"
#include "TargetSelectionContinuousDelegateDelegate.h"
#include "FortAbilityTask_TargetSelectionContinuous.generated.h"

class UFortAbilityTask_TargetSelectionContinuous;
class UGameplayAbility;

UCLASS(Blueprintable, NotPlaceable)
class UFortAbilityTask_TargetSelectionContinuous : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetSelectionContinuousDelegate Targeted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetSelectionContinuousDelegate Cancelled;
    
    UFortAbilityTask_TargetSelectionContinuous();
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_TargetSelectionContinuous* DoTargetSelectionContinuous(UGameplayAbility* OwningAbility, FName TaskInstanceName, FGameplayTag ApplicationTag);
    
};

