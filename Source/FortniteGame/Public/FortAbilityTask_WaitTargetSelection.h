#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayTagContainer.h"
#include "WaitTargetSelectionDelegateDelegate.h"
#include "FortAbilityTask_WaitTargetSelection.generated.h"

class UFortAbilityTask_WaitTargetSelection;
class UGameplayAbility;

UCLASS(Blueprintable, NotPlaceable)
class UFortAbilityTask_WaitTargetSelection : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitTargetSelectionDelegate Targeted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitTargetSelectionDelegate Cancelled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceTargetingOnServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InstantTargetTag;
    
public:
    UFortAbilityTask_WaitTargetSelection();
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_WaitTargetSelection* WaitTargetSelection(UGameplayAbility* OwningAbility, FName TaskInstanceName, FGameplayTag InApplicationTag, bool NewBForceTargetingOnServer);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDataCancelledCallback();
    
};

