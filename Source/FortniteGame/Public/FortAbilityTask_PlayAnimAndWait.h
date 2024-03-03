#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "AnimWaitSimpleDelegateDelegate.h"
#include "EFortSharedAnimationState.h"
#include "FortGameplayAbilityMontageInfo.h"
#include "FortAbilityTask_PlayAnimAndWait.generated.h"

class UAnimMontage;
class UFortAbilityTask_PlayAnimAndWait;
class UGameplayAbility;

UCLASS(Blueprintable, NotPlaceable)
class UFortAbilityTask_PlayAnimAndWait : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimWaitSimpleDelegate OnCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimWaitSimpleDelegate OnBlendOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimWaitSimpleDelegate OnInterrupted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimWaitSimpleDelegate OnCancelled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayAbilityMontageInfo MontageInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortSharedAnimationState AnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopWhenAbilityEnds;
    
public:
    UFortAbilityTask_PlayAnimAndWait();
    UFUNCTION(BlueprintCallable)
    void OnAnimInterrupted();
    
    UFUNCTION(BlueprintCallable)
    void OnAnimBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_PlayAnimAndWait* CreatePlayAnimAndWaitProxy(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FFortGameplayAbilityMontageInfo& PlayMontageInfo, EFortSharedAnimationState NewAnimState, bool NewBStopWhenAbilityEnds);
    
};

