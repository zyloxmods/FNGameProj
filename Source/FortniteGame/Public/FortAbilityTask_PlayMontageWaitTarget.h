#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayTagContainer.h"
#include "EFortAbilityTargetDataPolicy.h"
#include "EFortGameplayAbilityMontageSectionToPlay.h"
#include "FortCharacterPartMontageInfo.h"
#include "FortGameplayAbilityMontageInfo.h"
#include "WaitTargetSelectionDelegateDelegate.h"
#include "FortAbilityTask_PlayMontageWaitTarget.generated.h"

class UAnimMontage;
class UFortAbilityTask_PlayMontageWaitTarget;
class UGameplayAbility;

UCLASS(Blueprintable, NotPlaceable)
class UFortAbilityTask_PlayMontageWaitTarget : public UAbilityTask {
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
    UFortAbilityTask_PlayMontageWaitTarget();
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_PlayMontageWaitTarget* PlayMontageWithCharPartsWait(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* MontageToPlay, TArray<FFortCharacterPartMontageInfo> CharacterPartMontages, float AnimPlayRate, EFortGameplayAbilityMontageSectionToPlay SectionToPlay, FName OverrideSection, float AnimRootMotionTranslationScale, EFortAbilityTargetDataPolicy TargetDataPolicy);
    
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_PlayMontageWaitTarget* PlayMontageWaitTarget(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* MontageToPlay, float AnimPlayRate, EFortGameplayAbilityMontageSectionToPlay SectionToPlay, FName OverrideSection, float AnimRootMotionTranslationScale, EFortAbilityTargetDataPolicy TargetDataPolicy);
    
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_PlayMontageWaitTarget* PlayMontageInfoAndWaitForTrigger(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FFortGameplayAbilityMontageInfo& NewMontageInfo, EFortAbilityTargetDataPolicy TargetDataPolicy);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDataCancelledCallback();
    
    UFUNCTION(BlueprintCallable)
    void EnableScalingWithRateOfFire();
    
};

