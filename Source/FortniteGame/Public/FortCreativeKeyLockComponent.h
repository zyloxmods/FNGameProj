#pragma once
#include "CoreMinimal.h"
#include "ECreativeKeyLockState.h"
#include "FortMinigameItemContainerComponent.h"
#include "KeyDefinitionUpdatedDelegate.h"
#include "KeyLockStateChangedDelegate.h"
#include "LockEventDelegate.h"
#include "RemainingKeysChangedDelegate.h"
#include "FortCreativeKeyLockComponent.generated.h"

class APawn;
class UFortItemDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortCreativeKeyLockComponent : public UFortMinigameItemContainerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECreativeKeyLockState InitialState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeyDefinitionUpdated OnKeyDefinitionUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockEvent OnUnLocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockEvent OnLocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeyLockStateChanged OnLockStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemainingKeysChanged OnRemainingKeysUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    ECreativeKeyLockState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RequiredKeysToUnlockAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RemainingKeysToUnlock, meta=(AllowPrivateAccess=true))
    int32 RemainingKeysToUnlockAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bRequireAllKeysAtOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_KeyItemDefinition, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortItemDefinition> UnlockKeyDefinitionSoftPointer;
    
public:
    UFortCreativeKeyLockComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool Unlock(APawn* Pawn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetShouldConsumeKey(bool ShouldConsume);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRequiredKeys(int32 Amount);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRequiredAllKeysAtOne(bool Required);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetKeyItemDefinition(UFortItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Reset(bool DeferredReset);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RemainingKeysToUnlock();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_KeyItemDefinition();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState();
    
public:
    UFUNCTION(BlueprintCallable)
    bool Lock(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECreativeKeyLockState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    bool BlueprintHasKeysToInteract(APawn* Pawn);
    
};

