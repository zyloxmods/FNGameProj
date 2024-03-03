#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "OnAnimBPReadyDelegate.h"
#include "FortAbilityTask_WaitAnimBPOverride.generated.h"

class AFortPlayerPawn;
class UAnimInstance;
class UFortAbilityTask_WaitAnimBPOverride;
class UFortGadgetItemDefinition;
class UGameplayAbility;

UCLASS(Blueprintable)
class UFortAbilityTask_WaitAnimBPOverride : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimBPReady OnReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> AnimInstanceWaitingFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortGadgetItemDefinition> GadgetItemDefWaitingFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* FortPlayerPawn;
    
    UFortAbilityTask_WaitAnimBPOverride();
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_WaitAnimBPOverride* WaitAnimBPOverrideReady(UGameplayAbility* OwningAbility, TSoftClassPtr<UAnimInstance> AnimInstance, TSoftObjectPtr<UFortGadgetItemDefinition> GadgetItemDef);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnAnimBPCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedCharacterCustomizationCallback(AFortPlayerPawn* InPawn);
    
};

