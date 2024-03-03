#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AutoAimConditionFailedDelegate.h"
#include "FortAbilityTask_AutoAimConditionFailed.generated.h"

class AFortPawn;
class UFortAbilityTask_AutoAimConditionFailed;
class UGameplayAbility;

UCLASS(Blueprintable)
class UFortAbilityTask_AutoAimConditionFailed : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAutoAimConditionFailed OnAutoAimConditionFailed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPawn* CachedPawn;
    
public:
    UFortAbilityTask_AutoAimConditionFailed();
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_AutoAimConditionFailed* CreateAutoAimConditionFailed(UGameplayAbility* OwningAbility);
    
};

