#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "AsyncTaskCallbackDelegateDelegate.h"
#include "BuildingGameplayActor.h"
#include "EVolumeState.h"
#include "FortCreativeBudgetTracker.h"
#include "FortCreativeClassInstanceTracker.h"
#include "FortMutatorOwner.h"
#include "OnActorEnterExitVolumeDelegate.h"
#include "OnVolumePerformanceMetricsUpdatedDelegate.h"
#include "Templates/SubclassOf.h"
#include "VolumeActorStats.h"
#include "FortVolume.generated.h"

class AActor;
class AAthenaNavInvokerBox;
class AFortAthenaCreativePortal;
class AFortGameplayMutator;
class AFortMissionStormShield;
class AFortPlayerController;
class APlayerState;
class UAsyncTaskQueue;
class UFortPlaysetItemDefinition;
class UPrimitiveComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class AFortVolume : public ABuildingGameplayActor, public IFortMutatorOwner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BoundsMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BlockingCubeFaceOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BlockingCubeFaceTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BlockingCubeFaceThree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BlockingCubeFaceFour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VolumeDefaultExitingTimeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExitingTimeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlaysetItemDefinition* OverridePlayset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bNeverAllowSaving: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bShowPublishWatermark: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDestroyingActors: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAsyncTaskCallbackDelegate OnFinishVolumeClear;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnActorEnterExitVolume OnActorEnterVolume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnActorEnterExitVolume OnActorExitVolume;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentPlayset, meta=(AllowPrivateAccess=true))
    UFortPlaysetItemDefinition* CurrentPlayset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVolumeActorStats ActorStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnVolumePerformanceMetricsUpdated OnVolumePerformanceMetricsUpdatedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortAthenaCreativePortal*> LinkedPortals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DeferredDestroyActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VolumeState, meta=(AllowPrivateAccess=true))
    EVolumeState VolumeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAsyncTaskQueue* TaskQueue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BudgetTracker, meta=(AllowPrivateAccess=true))
    FFortCreativeBudgetTracker BudgetTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortCreativeClassInstanceTracker TransientTracker;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AIGroupEncounterID;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActiveAI;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer VolumeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAthenaNavInvokerBox> NavInvokerClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAthenaNavInvokerBox* NavigationInvokerBox;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortMissionStormShield*> StormShields;
    
    AFortVolume();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateSize(const FVector& NewScale);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCurrentPlayset(UFortPlaysetItemDefinition* NewPlayset);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockingVolumeCollision(const TEnumAsByte<ECollisionEnabled::Type> CollisionSetting);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClearVolume();
    
    UFUNCTION(BlueprintCallable)
    void PushAllPlayersOutsideVolume();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_VolumeState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentPlayset();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_BudgetTracker();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadOnly() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerAllowedInVolume(AFortPlayerController* NewUser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPlayersInVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPlaysetItemDefinition* GetCurrentPlayset() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyVolume();
    
private:
    UFUNCTION(BlueprintCallable)
    void DeferredDestroy_Helper();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnFinishClear_Internal();
    
    UFUNCTION(BlueprintCallable)
    void BoundsMeshLeft(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void BoundsMeshEntered(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    void RemoveMutatorFromList(AFortGameplayMutator* Mutator) override PURE_VIRTUAL(RemoveMutatorFromList,);
    
    UFUNCTION()
    void GetMutatorsForContextActor(TArray<AFortGameplayMutator*>& OutMutators, const AActor* ContextActor) const override PURE_VIRTUAL(GetMutatorsForContextActor,);
    
    UFUNCTION()
    void GetMutatorRelevantPlayers(TArray<APlayerState*>& OutPlayers) const override PURE_VIRTUAL(GetMutatorRelevantPlayers,);
    
    UFUNCTION()
    void AddMutatorToList(AFortGameplayMutator* Mutator) override PURE_VIRTUAL(AddMutatorToList,);
    
};

