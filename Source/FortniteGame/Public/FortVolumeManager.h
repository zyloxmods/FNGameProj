#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Info.h"
#include "AsyncTaskResult.h"
#include "EAthenaGamePhase.h"
#include "EVolumeState.h"
#include "EVolumeValidityResult.h"
#include "FortCreativeBudgetClientData.h"
#include "FortVolumeActiveUsers.h"
#include "OnActorEnterExitVolumeDelegate.h"
#include "OnClientEnterVolumeDelegate.h"
#include "OnClientExitVolumeDelegate.h"
#include "OnVolumeStateChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "VolumePlayerStateInfo.h"
#include "FortVolumeManager.generated.h"

class AActor;
class AController;
class AFortMinigame;
class AFortPlayerController;
class AFortPlayerPawn;
class AFortVolume;
class AFortVolumeManager;
class APawn;
class APlayerState;
class UAsyncOverlapQueue;
class UDataTable;
class UFortPlaysetItemDefinition;
class ULevelSaveRecord;
class UObject;
class UPrimitiveComponent;
class UWorld;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortVolumeManager : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClientEnterVolume OnClientEnterVolume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClientExitVolume OnClientExitVolume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorEnterExitVolume PreActorEnterVolume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorEnterExitVolume PostActorEnterVolume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorEnterExitVolume PreActorExitVolume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorEnterExitVolume PostActorExitVolume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVolumeStateChanged OnVolumeStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortVolume*> VolumeObjects;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortVolumeActiveUsers VolumeActivePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ClientBudgetData, meta=(AllowPrivateAccess=true))
    FFortCreativeBudgetClientData ClientBudgetData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BlackListClassesTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BlackListObjectsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> BlackListClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> BlackListObjects;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bInSpawningStartup: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVolumePlayerStateInfo> PendingPlayers;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAsyncOverlapQueue* OverlapQueue;
    
    AFortVolumeManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WillVolumeDeleteAfterActorSpawn(AFortVolume* Volume) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool VolumeContainsUser(APlayerState* PlayerState, AFortVolume* Volume) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateVolumeLevelStreams();
    
public:
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
    
    UFUNCTION(BlueprintCallable)
    void ResaveActorWithVolume(AActor* Actor, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void ResaveActor(AActor* Actor);
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveDeadBuildingActor(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ClientBudgetData();
    
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
    void HandleOnActorSpawned(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void HandleActorHealthChanged(AActor* Actor, float NewHealth);
    
    UFUNCTION(BlueprintCallable)
    void HandleActorExitedVolume(AActor* Actor, UPrimitiveComponent* ActorComponent, APawn* InstigatorPawn, AFortVolume* Volume);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleActorEnteredVolume(AActor* Actor, UPrimitiveComponent* ActorComponent, APawn* InstigatorPawn, AFortVolume* Volume);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleActorEndPlay(AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVolumesForLocation(FVector Location, TArray<AFortVolume*>& Volumes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVolumesForActor(AActor* Actor, TArray<AFortVolume*>& Volumes) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetVolumeManager(const UObject* WorldContextObject, AFortVolumeManager*& OutVolumeManager, EVolumeValidityResult& OutIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortVolume* GetVolumeForPlayerState(const APlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortVolume* GetVolumeForLocation(FVector Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortVolume* GetVolumeForActor(const AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable)
    static AFortMinigame* GetMinigameForVolume(const AFortVolume* Volume);
    
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
    void DecrementUserIslandLoading();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanCreatePlayset(AFortPlayerPawn* Thrower, const FVector& StartLocation, const FRotator& PlaysetRotation, UFortPlaysetItemDefinition* NewPlayset);
    
    UFUNCTION(BlueprintCallable)
    bool AreIslandsLoading() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyLevelSaveToWorld(ULevelSaveRecord* SaveToSpawnFrom, const bool bComplexShouldSpawn);
    
};

