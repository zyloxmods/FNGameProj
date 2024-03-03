#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayTagContainer.h"
#include "EFortGameplayAbilityMontageSectionToPlay.h"
#include "EFortSharedAnimationState.h"
#include "FortGameplayAbilityMontageInfo.h"
#include "WaitTargetSelectionDelegateDelegate.h"
#include "FortAbilityTask_PlayAnimWaitTarget.generated.h"

class UAnimMontage;
class UFortAbilityTask_PlayAnimWaitTarget;
class UGameplayAbility;

UCLASS(Blueprintable, NotPlaceable)
class UFortAbilityTask_PlayAnimWaitTarget : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitTargetSelectionDelegate Triggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitTargetSelectionDelegate Cancelled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitTargetSelectionDelegate Completed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayAbilityMontageInfo MontageInfo;
    
public:
    UFortAbilityTask_PlayAnimWaitTarget();
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_PlayAnimWaitTarget* PlayAnimWithMontageInfoAndWaitForTrigger(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FFortGameplayAbilityMontageInfo& NewMontageInfo, EFortSharedAnimationState AnimState);
    
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_PlayAnimWaitTarget* PlayAnimWaitTarget(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* MontageToPlay, EFortSharedAnimationState AnimState, EFortGameplayAbilityMontageSectionToPlay SectionToPlay, FName OverrideSection);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDataCancelledCallback();
    
};

