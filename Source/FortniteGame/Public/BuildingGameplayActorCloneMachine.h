#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "BuildingGameplayActor.h"
#include "BuildingGameplayActorCloneMachine.generated.h"

class AFortPlayerPawn;
class AFortPlayerStart;
class USoundCue;

UCLASS(Blueprintable)
class ABuildingGameplayActorCloneMachine : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStart* CloneLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRespawnCompleteAndSelfDestructing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DelayBeforeActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DelayBeforeRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DelayBeforeSelfDestruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DelayBeforeSelfDestructWithStorm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OnDamagedNotifyPlayerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OnDestroyedNotifyPlayerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActivationServerEndTime, meta=(AllowPrivateAccess=true))
    float ActivationServerEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RespawnServerEndTime, meta=(AllowPrivateAccess=true))
    float RespawnServerEndTime;
    
public:
    ABuildingGameplayActorCloneMachine();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RespawnServerEndTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActivationServerEndTime();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCloneMachineSpawnsPlayer(AFortPlayerPawn* PlayerPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCloneMachineRespawningBegins();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCloneMachineActivationBegins();
    
};

