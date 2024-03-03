#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "BuildingGameplayActor.h"
#include "ESpawnPointState.h"
#include "Templates/SubclassOf.h"
#include "InfiltrationCarryObjectSpawnPoint.generated.h"

class AActor;
class AFortWaterBodyActor;
class UFortWaterInteractionComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AInfiltrationCarryObjectSpawnPoint : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    ESpawnPointState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat IsSpawnPointEnabledFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CachedSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* CachedIntelActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> IntelClassToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
public:
    AInfiltrationCarryObjectSpawnPoint();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ServerOnIntelDownloaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ServerOnIntelCaptured();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ServerOnActive_CarryObjectOutOfRange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ServerOnActive_CarryObjectInRange();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState(ESpawnPointState OldState);
    
    UFUNCTION(BlueprintCallable)
    void OnHeldObjectThrownLanded();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldObjectThrown();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldObjectPlaced();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldObjectPickedUp();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldObjectDropped();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldObjectDestroy();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterWater(AFortWaterBodyActor* WaterBody, UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetIntelActor() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClientOnIntelDownloaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClientOnIntelCaptured();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClientOnActive_CarryObjectOutOfRange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClientOnActive_CarryObjectInRange();
    
};

