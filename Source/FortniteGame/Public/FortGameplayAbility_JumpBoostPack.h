#pragma once
#include "CoreMinimal.h"
#include "EJumpBoostPackState.h"
#include "FortGameplayAbility.h"
#include "FortGameplayAbility_JumpBoostPack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortGameplayAbility_JumpBoostPack : public UFortGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerCurrentState, meta=(AllowPrivateAccess=true))
    EJumpBoostPackState ServerCurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJumpBoostPackState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DelayRegenStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bAbilityMarkedForPendingKill, meta=(AllowPrivateAccess=true))
    bool bAbilityMarkedForPendingKill;
    
public:
    UFortGameplayAbility_JumpBoostPack();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentState(EJumpBoostPackState InState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerCurrentState(EJumpBoostPackState PreviousState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bAbilityMarkedForPendingKill();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFuelIsFull();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFuelIsEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCurrentStateChanged(EJumpBoostPackState InPreviousState, EJumpBoostPackState InCurrentState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAbilityCanceled();
    
    UFUNCTION(BlueprintCallable)
    void HandleCurrentStateChanged(EJumpBoostPackState InPreviousState);
    
};

