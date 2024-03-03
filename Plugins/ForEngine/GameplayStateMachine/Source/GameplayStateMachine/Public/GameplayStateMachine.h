#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ActiveGameplayStateData.h"
#include "GameplayState.h"
#include "GameplayStateSettings.h"
#include "GameplayStateMachine.generated.h"

class UGameplayStateMachineManager;
class UGameplayStateMachineSubsystem;

UCLASS(Abstract, Blueprintable)
class GAMEPLAYSTATEMACHINE_API UGameplayStateMachine : public UGameplayState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StateMachineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPubliclyBroadcast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPersistDelegatesOnUnregistration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveGameplayStateData, meta=(AllowPrivateAccess=true))
    FActiveGameplayStateData ActiveGameplayStateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayStateSettings> GameplayStateSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InitialGameplayStateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGameplayStateMachineManager* StateMachineManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameplayStateMachineSubsystem* StateMachineSubSystem;
    
public:
    UGameplayStateMachine();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetState(const FGameplayTag& InStateId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveGameplayStateData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetStateMachineId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameplayState* GetActiveStateObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetActiveStateId() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EvaluateStateTransition();
    
};

