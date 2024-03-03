#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "Styling/SlateBrush.h"
#include "ESubGame.h"
#include "FortGameMode_InGame.h"
#include "HotfixVolumePlacement.h"
#include "ItemAndCount.h"
#include "NotifyPlayerLoginDelegate.h"
#include "OnHandleMatchHasStartedDelegate.h"
#include "OnHandleZonePeriodicReportDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortGameModeZone.generated.h"

class ABuildingSMActor;
class AFortAIDirector;
class AFortAIGoalManager;
class AFortMission;
class AFortPlayerStartupController;
class AFortVisibilityManager;
class UFortBuildingOctreeManager;
class UFortPetManager;
class UFortTaggedActorsManager;
class UGameplayEffect;

UCLASS(Blueprintable, NonTransient)
class AFortGameModeZone : public AFortGameMode_InGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotifyPlayerLogin OnPlayerLogin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSpawnAllStuff: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDisableAI: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInitBeaconAtInitGame: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideAIDirectorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingSMActor* ActiveSpawnPad;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableVoiceChat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReplayStreamerOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAIDirector* AIDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAIGoalManager* AIGoalManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndOfZoneRemainTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortTaggedActorsManager* TaggedActorsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortBuildingOctreeManager* BuildingOctreeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAllSocketsInSpawnPad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSpectateAfterDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceSpectateAfterDeathRegardlessOfRespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SpectateAfterDeath_DelayFirst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpectateAfterDeath_DelayRepeating;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHotfixVolumePlacement> HotfixBehaviorVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortVisibilityManager> VisibilityManagerClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCriticalMissionEligible;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> ZoneLootNamedWeightsMapOverride;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> XboxSubsystemNames;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPetManager* PetManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemAndCount> StartingItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowEnemyAIWorldItemLootDrops: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowEnemyAIItemCacheLootDrops: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowContainerItemCacheLootDrops: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHandleZonePeriodicReport OnHandleZonePeriodicReport;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHandleMatchHasStarted OnHandleMatchHasStarted;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrustXboxPlatformId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubGame AssociatedSubGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BluGloMiniMapIconBrushOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTryToSpawnWithinStormShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportOneHitBuildingActorRecycling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOneHitResourcesGoToOwner;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StormWindInactiveMagnitudeScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StormWindActiveMagnitudeScalar;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> PlayerStartLocationOverrides;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableLongRangeAutoPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LongRangeAutoPickupInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LongRangeAutoPickupRadius;
    
public:
    AFortGameModeZone();
    UFUNCTION(BlueprintCallable)
    void SetZoneLootNamedWeightsMapOverride(const TMap<FName, float>& NewOverrideMap);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSpawnWithinStormShield(bool bSpawnInStormShield);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerStartLocationOverrides(TArray<FVector> InPlayerStarts, AFortMission* InMission);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetJoinability(bool bMatchJoinable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyAIItemCacheLootDrops(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveSpawnPad(ABuildingSMActor* InActiveSpawnPad);
    
    UFUNCTION(BlueprintCallable)
    void ReplicateHealthAndShield();
    
    UFUNCTION(BlueprintCallable)
    void OnMorningReached();
    
    UFUNCTION(BlueprintCallable)
    void OnEveningReached();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsSpectatingAllowedAfterDeath() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsGameReadyToSelectLoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UGameplayEffect> GetTeammateReviveGameplayEffectOverride();
    
    UFUNCTION(BlueprintCallable)
    AFortPlayerStartupController* GetPlayerStartupController();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearPlayerStartLocationOverrides();
    
};

