#pragma once
#include "CoreMinimal.h"
#include "FortGameplayAbility.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayTagContainer.h"
#include "FortGameplayAbility_Mantis.generated.h"

class UAbilityTask_PlayMontageAndWait;
class UFortAbilityTask_ApplyRootMotionMantisForce;
class UFortMantisPawnComponent;

UCLASS(Blueprintable)
class UFortGameplayAbility_Mantis : public UFortGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMantisPawnComponent* MantisPawnComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityTask_PlayMontageAndWait* MontageTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAbilityTask_ApplyRootMotionMantisForce* RootMotionTask;
    
public:
    UFortGameplayAbility_Mantis();
protected:
    UFUNCTION(BlueprintCallable)
    void OnMontageFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageCancelled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMantisTechniqueHit(const FGameplayAbilityTargetDataHandle& TargetDataHandle, FGameplayTag ApplicationTag);
    
};

