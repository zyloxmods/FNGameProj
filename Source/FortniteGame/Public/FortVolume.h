#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "AttributeSet.h"
#include "GameplayVolume.h"
#include "AsyncTaskCallbackDelegateDelegate.h"
#include "EFortVolumeType.h"
#include "EVolumeShape.h"
#include "EVolumeState.h"
#include "FortMutatorOwner.h"
#include "FortVolumeAccessor.h"
#include "OnActorEnterExitVolumeDelegate.h"
#include "OnRestrictionEnabledChangedDelegate.h"
#include "OnShowHUDMessageDelegate.h"
#include "OnShowPublishWatermarkChangedDelegate.h"
#include "OnVolumePerformanceMetricsUpdatedDelegate.h"
#include "Templates/SubclassOf.h"
#include "VolumeActorStats.h"
#include "FortVolume.generated.h"

class AActor;
class AAthenaNavInvokerBox;
class AController;
class AFortAthenaCreativePortal;
class AFortCreativeTimerObjective;
class AFortGameplayMutator;
class AFortMissionStormShield;
class AFortPlayerController;
class AFortPlayerPawn;
class AFortPlayerPawnAthena;
class APlayerState;
class UAsyncTaskQueue;
class UFortPlaysetItemDefinition;
class UFortVolumeObjectTrackingComponent;
class UPrimitiveComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class AFortVolume : public AGameplayVolume, public IFortMutatorOwner, public IFortVolumeAccessor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnApplySaveToWorld);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BlockingCubeFaceOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BlockingCubeFaceTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BlockingCubeFaceThree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BlockingCubeFaceFour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_ObjectTrackingComponent, meta=(AllowPrivateAccess=true))
    UFortVolumeObjectTrackingComponent* ObjectTrackingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlaysetItemDefinition* OverridePlayset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bNeverAllowSaving: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bShowPublishWatermark, meta=(AllowPrivateAccess=true))
    uint8 bShowPublishWatermark: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDestroyingActors: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceBoundsToBlock: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAsyncTaskCallbackDelegate OnFinishVolumeClear;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat IsHotfixablyEnabled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentPlayset, meta=(AllowPrivateAccess=true))
    UFortPlaysetItemDefinition* CurrentPlayset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVolumeActorStats ActorStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortAthenaCreativePortal*> LinkedPortals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DeferredDestroyActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VolumeState, meta=(AllowPrivateAccess=true))
    EVolumeState VolumeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAsyncTaskQueue* TaskQueue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnVolumePerformanceMetricsUpdated OnVolumePerformanceMetricsUpdatedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AIGroupEncounterID;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActiveAI;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAthenaNavInvokerBox> NavInvokerClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAthenaNavInvokerBox* NavigationInvokerBox;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortMissionStormShield*> StormShields;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortCreativeTimerObjective*> TimerObjectives;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnActorEnterExitVolume OnActorEnter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnActorEnterExitVolume OnActorExit;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnShowHUDMessage OnShowHUDMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowPublishWatermarkChanged OnShowPublishWatermarkChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVolumeShape BoundsShape;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BoundsCollisionSetting, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionEnabled::Type> BoundsCollisionSetting;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRestrictionEnabledChanged OnUserGeneratedContentRestrictionChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UserGeneratedContentRestrictions, meta=(AllowPrivateAccess=true))
    bool bUserGeneratedContentRestricted;
    
public:
    AFortVolume();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPlayset(UFortPlaysetItemDefinition* NewPlayset);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockingVolumeCollision(const TEnumAsByte<ECollisionEnabled::Type> CollisionSetting);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClearVolume();
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveAthenaPawnWhenDied(AFortPlayerPawnAthena* FortPlayerPawnAthena);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActorWhenEndPlay(AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActorWhenDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActorFromEndOverlap(AActor* MyActor, AActor* ActorToRemove);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VolumeState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UserGeneratedContentRestrictions();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectTrackingComponent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentPlayset();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bShowPublishWatermark();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BoundsCollisionSetting();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadOnly() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerAllowedInVolume(AFortPlayerController* NewUser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasVolumeBoundsBlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUserGeneratedContentRestricted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetStaticMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPlayersInVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortVolumeType GetFortVolumeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPlaysetItemDefinition* GetCurrentPlayset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetActorsWithinVolumeByClass(TSubclassOf<AActor> ActorClass) const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyVolume();
    
private:
    UFUNCTION(BlueprintCallable)
    void DeferredDestroy_Helper();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnFinishClear_Internal();
    
    UFUNCTION(BlueprintCallable)
    void AddSelfToVolumeManager();
    
    UFUNCTION(BlueprintCallable)
    void AddOrRemovePawnAfterVehicleChange(AFortPlayerPawn* FortPawn, AActor* NewVehicle, AActor* OldVehicle);
    
    UFUNCTION(BlueprintCallable)
    void AddActorFromBeginOverlap(AActor* MyActor, AActor* ActorToAdd);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddActor(AActor* ActorToAdd);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void RemoveMutatorFromList(AFortGameplayMutator* Mutator) override PURE_VIRTUAL(RemoveMutatorFromList,);
    
    UFUNCTION()
    void GetMutatorsForContextActor(TArray<AFortGameplayMutator*>& OutMutators, const AActor* ContextActor) const override PURE_VIRTUAL(GetMutatorsForContextActor,);
    
    UFUNCTION()
    void GetMutatorRelevantPlayers(TArray<APlayerState*>& OutPlayers) const override PURE_VIRTUAL(GetMutatorRelevantPlayers,);
    
    UFUNCTION()
    void AddMutatorToList(AFortGameplayMutator* Mutator) override PURE_VIRTUAL(AddMutatorToList,);
    
};

