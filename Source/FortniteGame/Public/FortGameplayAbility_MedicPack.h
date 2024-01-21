#pragma once
#include "CoreMinimal.h"
#include "EMedicPackState.h"
#include "FortGameplayAbility.h"
#include "FortGameplayAbility_MedicPack.generated.h"

UCLASS(Blueprintable)
class UFortGameplayAbility_MedicPack : public UFortGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerCurrentState, meta=(AllowPrivateAccess=true))
    EMedicPackState ServerCurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMedicPackState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DelayRegenStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bAbilityMarkedForPendingKill, meta=(AllowPrivateAccess=true))
    bool bAbilityMarkedForPendingKill;
    
public:
    UFortGameplayAbility_MedicPack();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentState(EMedicPackState InState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerCurrentState(EMedicPackState PreviousState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bAbilityMarkedForPendingKill();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFuelIsFull();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFuelIsEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCurrentStateChanged(EMedicPackState InPreviousState, EMedicPackState InCurrentState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAbilityCanceled();
    
    UFUNCTION(BlueprintCallable)
    void HandleCurrentStateChanged(EMedicPackState InPreviousState);
    
};

