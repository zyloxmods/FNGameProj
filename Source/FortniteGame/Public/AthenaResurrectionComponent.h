#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/OnlineReplStructs.h"
#include "CloneMachineRepData.h"
#include "MarkerID.h"
#include "AthenaResurrectionComponent.generated.h"

class ABuildingGameplayActorSpawnMachine;
class AFortPlayerStart;
class USoundCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UAthenaResurrectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerIdsForResurrection, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> PlayerIdsForResurrection;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerStart> ResurrectionLocation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMarkerID ResurrectionMachineMarkerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ClosestSpawnMachineIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FCloneMachineRepData CloneMachineRepData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NotifyPlayerDamageThrottle;
    
public:
    UAthenaResurrectionComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnInterruptResurrectionInteraction(ABuildingGameplayActorSpawnMachine* SpawnMachine);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnBeginResurrectionInteraction(ABuildingGameplayActorSpawnMachine* SpawnMachine);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerIdsForResurrection();
    
public:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientNotifyCloneMchineDestroyed(const USoundCue* DestroyedSound);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientNotifyCloneMachineUnderAttack(const USoundCue* DamageSound);
    
};

