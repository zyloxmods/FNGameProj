#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CumulativeFrameTimeWithoutSleepLimits.h"
#include "EFortGameplayState.h"
#include "FortGameModeBase.h"
#include "QuickBarData.h"
#include "Templates/SubclassOf.h"
#include "FortGameMode.generated.h"

class AFortGameSession;
class AFortMissionGenerationManager;
class AFortMissionManager;
class AFortPlayerControllerGameplay;
class AFortTeamInfo;
class APawn;
class UBuildingFlushManager;
class UFortAwardItemDefinition;
class UFortGameDeathPenalty;
class UFortSharedMissionLists;
class UMatchHeartbeatManager;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AFortGameMode : public AFortGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDisableCloudStorage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bTravelInitiated: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CurrentWUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CurrentBucketId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentPlaylistId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CurrentPlaylistName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString MatchmakingRegionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString MatchmakingLinkCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CurrentZoneInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ZoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPlayersInvincible: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKickIdlers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxIdleTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoScoreKickTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableNotifications;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableReplicationGraph;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortGameDeathPenalty> DefaultDeathPenaltyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGameDeathPenalty* DeathPenaltyData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGameDeathPenalty* DeathPenaltyDataOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameSession* FortGameSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameModeSessionString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsAutomatedTest: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APawn> DefaultPawnClassStringRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortMissionManager> MissionManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameModeGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContainersForceTossLoot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideRotationOnRestartPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortGameplayState PendingTimerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDBNOEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWorldIsReady: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bTheaterDataIsReady: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TheaterSlot;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameplayServerHitchThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementTimeDiscrepancyHitchCooldown;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbilityRefireHitchCooldown;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckWeaponTracesForPlayerBuiltWalls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMatchHeartbeatManager* MatchHeartbeatManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortAwardItemDefinition*> ActiveAwards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameContextTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSharedMissionLists* SharedMissionLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortTeamInfo> TeamInfoClass;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<double> FrameTimeOvershootHistogramBucketsMs;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<double> SleepTimeOvershootHistogramBucketsMs;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<double> FrameTimeWithoutSleepHistogramBucketsMs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCumulativeFrameTimeWithoutSleepLimits> CumulativeFrameTimeWithoutSleepLimits;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<double> GameNetDriverTickFlushTimeHistogramBucketsMs;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<double> DemoNetDriverTickFlushTimeHistogramBucketsMs;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<double> ActorsStarvedByClassTimeHistogramBuckets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> StarvedActorClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortMissionGenerationManager* MissionGenerationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBuildingFlushManager* FlushManager;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysFlushMMREndZoneEvents;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideQuickBars;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuickBarData QuickBarDefinitions[3];
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerControllerGameplay*> ConnectedPlayerControllers;
    
public:
    AFortGameMode();
    UFUNCTION(BlueprintCallable)
    void OnEndOfDay();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpReservations() const;
    
};

