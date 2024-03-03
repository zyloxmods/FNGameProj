#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Info.h"
#include "AsyncTaskResult.h"
#include "EAthenaGamePhase.h"
#include "EVolumeState.h"
#include "EVolumeValidityResult.h"
#include "EvaluationResult.h"
#include "FortVolumeActiveUsers.h"
#include "OnClientEnterVolumeDelegate.h"
#include "OnClientExitVolumeDelegate.h"
#include "OnClientVolumeRestrictionStateChangedDelegate.h"
#include "OnVolumeStateChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "VolumePlayerStateInfo.h"
#include "FortVolumeManager.generated.h"

class AActor;
class ABuildingFoundation;
class AController;
class AFortMinigame;
class AFortMinigameSettingsBuilding;
class AFortPawn;
class AFortPlayerController;
class AFortPlayerPawn;
class AFortVolume;
class AFortVolumeManager;
class APawn;
class APlayerState;
class UActorComponent;
class UAsyncOverlapQueue;
class UAsyncTraceQueue;
class UCreativeAssetCostDirectory;
class UDataTable;
class UFortCreativeGeneralThrottleManager;
class UFortPlaysetItemDefinition;
class ULevelSaveRecord;
class UObject;
class UPrimitiveComponent;
class UWorld;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, MinimalAPI, Config=Game)
class AFortVolumeManager : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClientEnterVolume OnClientEnterVolume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClientExitVolume OnClientExitVolume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVolumeStateChanged OnVolumeStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortVolume*> VolumeObjects;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortVolumeActiveUsers VolumeActivePlayers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCreativeAssetCostDirectory> AssetCostDirectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BlackListClassesTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BlackListObjectsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<TSoftClassPtr<UObject>> BlackListClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<TSoftObjectPtr<UObject>> BlackListObjects;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bInSpawningStartup: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVolumePlayerStateInfo> PendingPlayers;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAsyncOverlapQueue* OverlapQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAsyncTraceQueue* TraceQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCreativeGeneralThrottleManager* FortCreativeGeneralThrottleManager;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClientVolumeRestrictionStateChanged OnClientVolumeUGCViewableStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClientVolumeRestrictionStateChanged OnServerVolumeUGCViewableStateChanged;
    
    AFortVolumeManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WillVolumeDeleteAfterActorSpawn(AFortVolume* Volume) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool VolumeContainsUser(const APlayerState* PlayerState, const AFortVolume* Volume) const;
    
    UFUNCTION(BlueprintCallable)
    void UpdatePublishWatermarkFlagForVolume(AFortVolume* Volume);
    
private:
    UFUNCTION(BlueprintCallable)
    void TryActivateQueuedVolumes(EAthenaGamePhase GamePhase);
    
public:
    UFUNCTION(BlueprintCallable)
    AFortVolume* SpawnVolume(TSubclassOf<AFortVolume> VolumeActor, UFortPlaysetItemDefinition* Playset, FVector Location, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool ShouldSpawnActor(UWorld* WorldContext, TSubclassOf<AActor> ActorClass, const FVector& Location, const FRotator& Rotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowPublishWatermarkForVolume(AFortVolume* Volume, FString& CreatorName, FString& CreativeMnemonic, FText& Title) const;
    
    UFUNCTION(BlueprintCallable)
    void ResetVolumeAndLevelRecord(AFortVolume* Volume, AFortPlayerController* RequestingFortPC);
    
private:
    UFUNCTION(BlueprintCallable)
    void ResaveBuildingFoundationActorFromHealthChange(AActor* Actor, float NewHealth);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResaveActorWithVolume(AActor* Actor, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void ResaveActor(AActor* Actor);
    
private:
    UFUNCTION(BlueprintCallable)
    void RemovePawnNotRespawningInsideVolume(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBuildingFoundationActorFromSave(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
public:
    UFUNCTION(BlueprintCallable)
    void MinigameExitReadOnlyForVolume(AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void IncrementUserIslandLoading();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleVolumeStateChanged(EVolumeState NewState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandleVolumeReset(AFortVolume* VolumeResetting);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerPawnPossessed(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void HandleBuildingFoundationLoaded(ABuildingFoundation* LoadedFoundation);
    
    UFUNCTION(BlueprintCallable)
    void HandleActorHealthChanged(AActor* Actor, float NewHealth);
    
    UFUNCTION(BlueprintCallable)
    void HandleActorExitedVolume(AActor* Actor, UActorComponent* ActorComponent, APawn* InstigatorPawn, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandleActorEnteredVolume(AActor* Actor, UActorComponent* ActorComponent, APawn* InstigatorPawn, AFortVolume* Volume);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVolumesForLocation(FVector Location, TArray<AFortVolume*>& Volumes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVolumesForActor(const AActor* Actor, TArray<AFortVolume*>& Volumes, const bool bUseActorBounds) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetVolumeManager(const UObject* WorldContextObject, AFortVolumeManager*& OutVolumeManager, EVolumeValidityResult& OutIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortVolume* GetVolumeForPlayerState(const APlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable)
    AFortVolume* GetVolumeForLocationWithComponent(FVector Location, const TSubclassOf<UActorComponent>& ComponentType, TArray<UActorComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortVolume* GetVolumeForLocation(FVector Location) const;
    
    UFUNCTION(BlueprintCallable)
    AFortVolume* GetVolumeForActorWithComponent(const AActor* Actor, const TSubclassOf<UActorComponent>& ComponentType, TArray<UActorComponent*>& OutComponents, const bool bUseActorBounds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortVolume* GetVolumeForActor(const AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable)
    static AFortMinigameSettingsBuilding* GetSettingsActorForVolume(const AFortVolume* ContextVolume);
    
    UFUNCTION(BlueprintCallable)
    static AFortMinigameSettingsBuilding* GetSettingsActor(const AActor* ContextActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortMinigame* GetMinigameFromVolume(const AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable)
    static AFortMinigame* GetMinigameForVolume(const AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    static AFortMinigame* GetMinigameForPlayerState(const APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APlayerState*> GetAllPlayerStatesInVolume(AFortVolume* Volume) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AController*> GetAllPlayersInVolume(AFortVolume* Volume) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void FinishedSpawningCurrentLevelRecord(const FAsyncTaskResult& Result);
    
public:
    UFUNCTION(BlueprintCallable)
    void EnterReadOnlyForVolume(AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    FEvaluationResult DoesThermometerHaveBudgetForActor(const AActor* InstigatorActor, AActor* TestActor, const FVector& Location, const FRotator& Rotation) const;
    
    UFUNCTION(BlueprintCallable)
    void DecrementUserIslandLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanCreatePlayset(AFortPlayerPawn* Thrower, const FVector& StartLocation, const FRotator& PlaysetRotation, UFortPlaysetItemDefinition* NewPlayset);
    
private:
    UFUNCTION(BlueprintCallable)
    void AttemptAddToVolumeAfterDelay(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable)
    bool AreIslandsLoading() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyLevelSaveToWorld(ULevelSaveRecord* SaveToSpawnFrom, const bool bComplexShouldSpawn);
    
private:
    UFUNCTION(BlueprintCallable)
    void AddOrRemovePawnAfterVehicleChange(AFortPlayerPawn* FortPawn, AActor* NewVehicle, AActor* OldVehicle);
    
    UFUNCTION(BlueprintCallable)
    void AddOrRemovePawn(AFortPawn* FortPawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ActorsAreInSameVolume(const AActor* Left, const AActor* Right) const;
    
};

