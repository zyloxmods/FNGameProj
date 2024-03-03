#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "SetNextMontageSectionSimpleDelegateDelegate.h"
#include "FortAbilityTask_SetNextMontageSectionAndWait.generated.h"

class UAnimMontage;
class UFortAbilityTask_SetNextMontageSectionAndWait;
class UGameplayAbility;

UCLASS(Blueprintable)
class UFortAbilityTask_SetNextMontageSectionAndWait : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetNextMontageSectionSimpleDelegate OnComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetNextMontageSectionSimpleDelegate OnInterrupted;
    
    UFortAbilityTask_SetNextMontageSectionAndWait();
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_SetNextMontageSectionAndWait* SetNextMontageSectionAndWait(UGameplayAbility* OwningAbility, UAnimMontage* PlayingMontage, FName NextMontageSection);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
};

