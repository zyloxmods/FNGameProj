#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIntelStateEnum.h"
#include "InfiltrationStatusComponent.generated.h"

class AFortAthenaMutator_Infiltration;
class AFortPlayerControllerAthena;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UInfiltrationStatusComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRoundResetEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMutatorReady);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsCurrentlyDefendedChanged, bool, bInRange);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIntelStateChanged, EIntelStateEnum, CurrentState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGroundTimerChanged, float, NewTimeRemaining);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIntelStateChanged OnIntelStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIsCurrentlyDefendedChanged OnIsCurrentlyDefendedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGroundTimerChanged OnGroundTimerChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRoundResetEvent OnRoundResetEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMutatorReady OnMutatorReadyEvent;
    
protected:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_CachedMutator, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortAthenaMutator_Infiltration> CachedMutator;
    
public:
    UInfiltrationStatusComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void TryExecuteMutatorReady();
    
    UFUNCTION(BlueprintCallable)
    void OnRoundReset();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CachedMutator();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerDefending(AFortPlayerControllerAthena* LocalPlayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerAttacking(AFortPlayerControllerAthena* LocalPlayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingHeldByLocalPlayer(AFortPlayerControllerAthena* LocalPlayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCurrentlyDefended() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGroundTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetDefendingTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIntelStateEnum GetCurrentIntelState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetAttackingTeam() const;
    
};

