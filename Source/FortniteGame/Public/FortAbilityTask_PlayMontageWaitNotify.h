#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "GameplayTagContainer.h"
#include "PlayMontageWaitNotifyDelegateDelegate.h"
#include "FortAbilityTask_PlayMontageWaitNotify.generated.h"

class UAnimMontage;
class UAnimSequenceBase;
class UFortAbilityTask_PlayMontageWaitNotify;
class UGameplayAbility;

UCLASS(Blueprintable, NotPlaceable)
class UFortAbilityTask_PlayMontageWaitNotify : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayMontageWaitNotifyDelegate OnCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayMontageWaitNotifyDelegate OnBlendOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayMontageWaitNotifyDelegate OnInterrupted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayMontageWaitNotifyDelegate OnCancelled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayMontageWaitNotifyDelegate OnNotifyBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayMontageWaitNotifyDelegate OnNotifyEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageToPlay;
    
public:
    UFortAbilityTask_PlayMontageWaitNotify();
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_PlayMontageWaitNotify* PlayMontageAndWaitNotify(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* NewMontageToPlay, float PlayRate, FName StartSection, bool bStopWhenAbilityEnds, float RootMotionTranslationScale);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMontageNotifyEnd(UAnimSequenceBase* Animation, FGameplayTag NotifyTag);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageNotifyBegin(UAnimSequenceBase* Animation, FGameplayTag NotifyTag);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityCancelled();
    
};

