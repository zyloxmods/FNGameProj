#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "Engine/NetSerialization.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMeshNetworkNodeType.h"
#include "AsyncTaskResult.h"
#include "AthenaMatchStats.h"
#include "AthenaMatchTeamStats.h"
#include "AthenaQuickChatActiveEntry.h"
#include "AthenaRewardResult.h"
#include "BuildingEditAnalyticEvent.h"
#include "CreativeIslandData.h"
#include "CreativeIslandInfo.h"
#include "CreativePlotSessionData.h"
#include "CreativePublishOptions.h"
#include "EAthenaGamePhase.h"
#include "EAthenaGamePhaseStep.h"
#include "EDeathCause.h"
#include "EEndOfMatchReason.h"
#include "EFortItemType.h"
#include "EFortVolumeType.h"
#include "EMatchmakingCancelReasonV2.h"
#include "FortItemEntry.h"
#include "FortPlayerControllerZone.h"
#include "FortPlayerDeathReport.h"
#include "FortPlaysetStreamingData.h"
#include "FortUpdatedObjectiveStat.h"
#include "FortWorldMarkerData.h"
#include "ItemAndCount.h"
#include "LevelStreamRequestHandshakeState.h"
#include "OnAircraftStateChangeDelegate.h"
#include "OnCameraInStormWallChangeDelegate.h"
#include "OnCreativePermissionsChangedDelegate.h"
#include "OnCreativePlotLinkedVolumeChangedDelegate.h"
#include "OnFocalPointActorChangedDelegate.h"
#include "OnInGameContentDownloadStartedDelegate.h"
#include "OnInGameLoadScreenChangedDelegate.h"
#include "OnInGameMatchmakingCanceledDelegate.h"
#include "OnInGameMatchmakingCompleteDelegate.h"
#include "OnInGameMatchmakingErrorDelegate.h"
#include "OnInGameMatchmakingQueuedStatusUpdatedDelegate.h"
#include "OnInGameMatchmakingReadyCheckCompleteDelegate.h"
#include "OnInGameMatchmakingStartedDelegate.h"
#include "OnInGameMatchmakingStateChangedDelegate.h"
#include "OnInGamematchmakingUpdateCheckFailedDelegate.h"
#include "OnIslandEntriesChangedDelegate.h"
#include "OnItemDropSpawnedDelegate.h"
#include "OnItemDroppedDueToOverflowDelegate.h"
#include "OnLocalPlayerChangedTeamsDelegate.h"
#include "OnMCPIslandRequestFinishedDelegate.h"
#include "OnPlayerPawnEventDelegate.h"
#include "OnPreviewScreenshotCameraActivatedDelegate.h"
#include "OnSkydiveLeaderChangedDelegate.h"
#include "OnSpectatorStreamingDelegate.h"
#include "OnTalkingPlayersChangedDelegate.h"
#include "OnUsingFocalPointChangedDelegate.h"
#include "PlayerStateEncryptionKey.h"
#include "ProfileGoScenario.h"
#include "QuickBarData.h"
#include "Templates/SubclassOf.h"
#include "TimeStampedPhysicsPawnState.h"
#include "FortPlayerControllerAthena.generated.h"

class AActor;
class ACameraActor;
class AFortAthenaCreativePortal;
class AFortBroadcastRemoteClientInfo;
class AFortGameStateAthena;
class AFortGameplayMutator;
class AFortMinigame;
class AFortPhysicsPawnObject;
class AFortPlayerController;
class AFortPlayerMarkerBase;
class AFortPlayerPawn;
class AFortPlayerPawnAthena;
class AFortPlayerStartWarmup;
class AFortPlayerState;
class AFortPlayerStateAthena;
class AFortPlayerStateZone;
class AFortVolume;
class APawn;
class APlayerState;
class IFortSafeZoneInterface;
class UFortSafeZoneInterface;
class UAthenaItemWrapDefinition;
class UAthenaMarkerComponent;
class UAthenaPlayerMatchReport;
class UAthenaResurrectionComponent;
class UBuildingEditModeMetadata_Floor;
class UBuildingEditModeMetadata_Roof;
class UBuildingEditModeMetadata_Stair;
class UBuildingEditModeMetadata_Wall;
class UCreativeUserContentManager;
class UFortControllerComponent_ContextualChallenges;
class UFortControllerComponent_HeldDeviceUsage;
class UFortControllerComponent_IndicatedActorManagement;
class UFortControllerComponent_LocalizationService;
class UFortControllerComponent_MapDiscoverability;
class UFortControllerComponent_MinigameActivity;
class UFortControllerComponent_RechargeWeapons;
class UFortControllerComponent_SkydiveFeedback;
class UFortControllerComponent_ToxicityService;
class UFortCreativeDeviceButtonComponent;
class UFortCreativeObjectTrackingComponent;
class UFortCreativeRealEstatePlotItemDefinition;
class UFortGamepadSettings;
class UFortHero;
class UFortItemDefinition;
class UFortMiniMapChallengeIndicators;
class UFortMiniMapTeamIndicators;
class UFortPlayerControllerAthenaXPComponent;
class UFortPlaysetItemDefinition;
class UFortWeaponItemDefinition;
class UFortWorldItem;
class UFortWorldItemDefinition;
class UInputComponent;
class UObject;
class USoundBase;

UCLASS(Blueprintable, MinimalAPI)
class AFortPlayerControllerAthena : public AFortPlayerControllerZone {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIslandMetatdataUpdateComplete, const FString&, Error);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnBuildingQuickEditOptionChanged, const FName, QuickEditClassName, const bool, bPreviewMirrored, const uint8, PreviewRotations);
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireAbilityToWeaponSwitchTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAircraftStateChange OnAircraftStateChange;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemDropSpawned OnItemDropSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemDroppedDueToOverflow OnItemDroppedDueToOverflow;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativePermissionsChanged OnCreativePermissionsChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* SwappingItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WinScreenDelayTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipPlayWinEffects;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPlayersCreditOnLeave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FocalPoint, meta=(AllowPrivateAccess=true))
    AActor* FocalPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize FocalPointOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float FocalPointFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FocalPointDuration;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUsingFocalPointChanged OnUsingFocalPointChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocalPointActorChanged OnFocalPointActorChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSkydiveLeaderChanged OnSkydiveLeaderChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SkydiveLeaderManualCameraTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator InterpolatedSkydiveFollowerViewRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SkydiveLeader, meta=(AllowPrivateAccess=true))
    AFortPlayerState* SkydiveLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TrackedVictimsShared, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* LastDownedVictim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TrackedVictimsShared, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* LastElimVictim;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraInStormWallChange OnCameraInStormWallChangeDelegate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeaveDisconnectedPawnsInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* DisconnectedPawn;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* PreviousPawn;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDeferredFireInputs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplicateViewTargetInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasHadValidPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bClientNotifiedOfWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bClientNotifiedOfTeamWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bClientNotifiedOfLoss;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> PlayersTalking;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTalkingPlayersChanged TalkingPlayersChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHighlightRecordingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlaceDangerMarkerWhenTargeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDeferringStartRecordingHighlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString HighlightGroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CachedHighlightCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HighlightFirstKillTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HighlightKillMultiple;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 HighlightDownMultiple;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighlightKillCooldown;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighlightKillRewindTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnCamera_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnCamera_HoldPositionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RespawnCamera_InitialLocOffset_InAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RespawnCamera_InitialLocOffset_OnGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RespawnCamera_InitialRotOffset_InAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RespawnCamera_InitialRotOffset_OnGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bNextRespawnInAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName RespawnCameraBehavior;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumNumberOfPawnsToSearchForEmoteMusic;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickupSwapHoldTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNewPickupSwapLogic;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpectatorLevelStreamDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnLevelStreamDistance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpectatorStreaming SpectatorStreamingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInGameLoadScreenChanged InGameLoadScreenChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalPlayerChangedTeams OnLocalPlayerChangedTeams;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLevelStreamRequestHandshakeState LevelStreamRequestHandshakeState;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativePlotLinkedVolumeChanged OnCreativePlotLinkedVolumeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerPawnEvent OnClientLeaveIsland;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMCPIslandRequestFinished OnMakeNewCreativePlotFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMCPIslandRequestFinished OnDestroyCreativePlotFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMCPIslandRequestFinished OnRestoreCreativePlotFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMCPIslandRequestFinished OnDuplicateCreativePlotFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIslandEntriesChanged OnIslandEntriesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMCPIslandRequestFinished OnUpdateCreativePlotName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMCPIslandRequestFinished OnUpdateCreativeDescriptionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* RespawnCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDelayedTeleporting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBlockTeleporting;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MaxPlotCount;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInGameMatchmakingStarted InGameMatchmakingReadyCheckStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInGameMatchmakingReadyCheckComplete InGameMatchmakingReadyCheckComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInGameMatchmakingReadyCheckComplete InGameMatchmakingReadyCheckCanceled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInGameMatchmakingStarted InGameMatchmakingStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInGameMatchmakingComplete InGameMatchmakingComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInGameMatchmakingStateChanged InGameMatchmakingStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInGameMatchmakingQueuedStatusUpdated InGameMatchmakingQueuedStatusUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInGameMatchmakingError InGameMatchmakingError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInGameMatchmakingCanceled OnInGameMatchmakingCanceled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInGamematchmakingUpdateCheckFailed OnInGameMatchmakingUpdateCheckFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInGameContentDownloadStarted OnInGameContentDownloadStarted;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoInGameMatchmaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AudioOnExitAircraft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AudioOnExitAircraftHornDoppler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinQuickChatCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuickChatOffCooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bMarkedAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CreativeIslands, meta=(AllowPrivateAccess=true))
    TArray<FCreativeIslandData> CreativeIslands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString LastUsedSavePlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsAllowedToPublish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortGamepadSettings> GamepadSettingsAssetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MapCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapCursorSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapCursorSpeedGamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TeamMemberIndicatorColor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMatchStatsForPlayerSent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAddedBookProgressStatsToGamemode;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSentMatchEndedQuestProgress;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuickBarData QuickBarDefinitions[3];
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableBroadcastRemoteClientInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortBroadcastRemoteClientInfo* BroadcastRemoteClientInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortHero* StrongMyHero;
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UObject>> ClientGameWorldHolds;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndMatchHeartbeatTimerDelay;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double EndMatchHeartbeatTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStartWarmup* WarmupPlayerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* FullScreenMapInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* FullScreenScoreboardInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* CurrentFullscreenInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* GameChannelRecommendationInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* SubscriptionNudgeInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* BattleLabInputComponent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUseTrapPicker;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoubleTapEditTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaPlayerMatchReport* MatchReport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBuildingEditModeMetadata_Wall*> QuickEditWallPatterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBuildingEditModeMetadata_Floor*> QuickEditFloorPatterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBuildingEditModeMetadata_Roof*> QuickEditRoofPatterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBuildingEditModeMetadata_Stair*> QuickEditStairsPatterns;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBuildingQuickEditOptionChanged OnBuildingQuickEditOptionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMiniMapTeamIndicators> MinimapIndicatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMiniMapChallengeIndicators> MinimapChallengeIndicatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMiniMapChallengeIndicators* MinimapChallengeIndicators;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableInGameChallengeLocationIndicators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortPlayerMarkerBase> SquadMarkerActorClass;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BuildingsCreated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BuildingsEdited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BuildingsRepaired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BuildingsUpgraded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BuildingActionDoneLastAtTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBuildingEditAnalyticEvent> BuildingAnalyticsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeStartedTrackingBuildingAnalytics;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CreativePlotLinkedVolume, meta=(AllowPrivateAccess=true))
    AFortVolume* CreativePlotLinkedVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCreativePlotSessionData CreativePlotSessionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortAthenaCreativePortal* OwnedPortal;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FItemAndCount> CachedPurchasedItems;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UFortPlaysetItemDefinition* CurrentPlayset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestructedBuildingInGridTimeoutOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ClientRespawnText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ClientRebootingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ClientIslandTravelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ClientTravelToCreativeHubText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortVolume*> VolumesLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortVolume*> VolumesUnloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMarkerComponent* MarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaResurrectionComponent* ResurrectionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortControllerComponent_HeldDeviceUsage* HeldDeviceUsageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayerControllerAthenaXPComponent* XPComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortControllerComponent_MapDiscoverability* DiscoverabilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortControllerComponent_SkydiveFeedback* SkydiveFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortControllerComponent_ContextualChallenges* ContextualChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortControllerComponent_IndicatedActorManagement* IndicatedActorManagementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortControllerComponent_LocalizationService* LocalizationServiceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortControllerComponent_ToxicityService* ToxicityServiceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortControllerComponent_RechargeWeapons* RechargingWeaponsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortControllerComponent_MinigameActivity* MinigameActivityComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SightWeatherCapRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TimeSinceLastCreativeSpawn;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreSignifanceBasedCustomDepthRendering;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UCreativeUserContentManager* CreativeUserContentManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UFortCreativeObjectTrackingComponent* CreativeObjectTrackingComponent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreviewScreenshotCameraActivated OnPreviewScreenshotCameraActivated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItem* CreativeItemToRemoveWhenAddingInventoryItem;
    
public:
    AFortPlayerControllerAthena();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void WriteCreateBuildingAnalytics();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void UpdateUGCRestrictedForVolume(AFortVolume* Volume, bool bRestricted);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateRichPresenceTimer();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void UpdateCreativePlotName(const FString& IslandId, const FString& Locale, const FString& Title);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void UpdateCreativePlotData(AFortVolume* VolumeToPublish, FCreativeIslandInfo MyInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void UpdateCreativeIslandDescriptionTags(const FString& IslandId, const FString& Locale, const TArray<FString>& DescriptionTags);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void TellServer_ClientReceivedPlaysetDataForVolume(FFortPlaysetStreamingData PlaysetData, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void StopRecordingHighlights();
    
    UFUNCTION(BlueprintCallable)
    void StartRespawnLoading();
    
    UFUNCTION(BlueprintCallable)
    void StartMatchmakingByLinkCode(const FString& LinkCode);
    
    UFUNCTION(BlueprintCallable)
    void StartCreativeMatchmakingReadyCheck(const FString& LinkCode, bool& OutDidStartMatchmakingImmediately);
    
    UFUNCTION(BlueprintCallable)
    void ShowHighlightSummary();
    
    UFUNCTION(BlueprintCallable)
    void SetupClientRespawnTimerAndLocation(FVector RespawnLoc, FRotator RespawnRot, FVector OldPlayerLocation, bool bCalculateRespawnData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetFocalPointWithDuration(AActor* InFocalPoint, FVector InFocalPointOffset, float InFocalPointFOV, float InDuration);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetFocalPoint(AActor* InFocalPoint, FVector InFocalPointOffset, float InFocalPointFOV);
    
    UFUNCTION(BlueprintCallable)
    void SetCanStreamBuildingFoundationsIn(bool bCanStream);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateUserCameraPreview();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUpdateSkydiveLocation(const FString& LocationStr, const FVector& Location);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateLevelStreamingHandshakeData(const bool bClientLevelStreamingState);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerTryFindPlotItemForDefinition(UFortCreativeRealEstatePlotItemDefinition* PlotDefinition);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerToggleAutoRestartMinigame();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerTickForDoneTeleporting(AFortAthenaCreativePortal* Portal);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerThankBusDriverCheck();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerThankBusDriver();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerTeleportViaCreativePortal(int32 PortalIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTeleportToPlaygroundLobbyIsland();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTeleportToPlaygroundIslandDock();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStopWaitLTMLoading();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStopSavingCreativePlot();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartUnloadingVolume(AFortVolume* VolumeToUnload);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartMinigame();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartLoadingVolume(AFortVolume* VolumeToLoad);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartInteractWithIslandPortal(AFortAthenaCreativePortal* Portal);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpawnCreativeSupplyDrop(FVector position, TSubclassOf<AActor> InSupplyDropClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSimulateLevelUp(int32 ClientSimulatedLevel);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetTeam(uint8 InTeam);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetStreamingTestStreamingLevels(bool streaming);
    
    UFUNCTION(BlueprintCallable)
    void ServerSetRespawnData(FVector RespawnLoc, FRotator RespawnRot, float RespawnCameraDist);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetReceiveEmailSignups(bool bSignUp);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayset(UFortPlaysetItemDefinition* NewPlayset);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetOnCreativePortalLoadedDelegate(int32 PortalIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetMinigameClassSlot(uint8 InClassSlotIndex);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendSquadFriend(AFortPlayerStateAthena* FriendInSquad);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSelectMutatorItem(AFortGameplayMutator* Mutator, int32 ItemIndex, int32 PayloadData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSaveIslandCheckpoint(AFortAthenaCreativePortal* Portal);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRestartMinigame();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRespondToAbandonMatch(bool bAbandon);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerResetCurrentVolumeWithoutTeleport();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerResetCameraPreviewToDefaultLocation();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestObjectTrackingDetails(const AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestNewSkydiveLeader();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReloadCreativePlot();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReleasePortal();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerPlaySquadQuickChatMessage(FAthenaQuickChatActiveEntry ChatEntry, FUniqueNetIdRepl SenderID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyOstrichShieldOvercharge();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyOstrichSelfDestruct();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyClientReachedMaxWaitingTimeForDeviceReplication();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerMarkSkydiveLocationsComplete();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerLookedAtFocalPoint();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerLoadPlotForPortalFromMnemonic(AFortAthenaCreativePortal* Portal, const FString& Mnemonic);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerLoadPlotForPortal(AFortAthenaCreativePortal* Portal, const FString& PlotItemId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerLoadIslandCheckpoint(AFortAthenaCreativePortal* Portal);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerInsertExtraStreamingTestSkydiveStates();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerGiveCreativeItem(const FFortItemEntry& CreativeItem, const FGuid& ItemToRemoveGuid);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerGenerateMockMatchReport();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEndUnloadingVolume(AFortVolume* VolumeToUnload);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEndMinigame(bool bAbandon);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEndLoadingVolume(AFortVolume* VolumeToLoad);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEnableAnonymousMode();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEnableAnonymousCharacterMode();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDBNOReviveStarted(AFortPlayerPawnAthena* DBNOPawn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDBNOReviveInterrupted(AFortPlayerPawnAthena* DBNOPawn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCreateProfileGoCollectionForSublevels(const FString& SublevelSearchString, int32 GridStepsX, int32 GridStepsY, int32 RotationSteps, int32 Quad);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClientIsReadyToRespawn();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClearSkydiveLeader();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClaimPortal();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBroadcastDeviceButtonComponentClickedDelegate(const UFortCreativeDeviceButtonComponent* DeviceButtonComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBeginEndPreview(bool bInBegin);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerApplyOverrideWrapToVehicle(const TSoftObjectPtr<UAthenaItemWrapDefinition>& ItemWrap);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerApplyOverrideWrapToItem(const FGuid& Guid, const TSoftObjectPtr<UAthenaItemWrapDefinition>& ItemWrap);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddToCachedPurchased(UFortItemDefinition* ItemDefinition, int32 Count);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddSimulatedXp(float XpAmmount, const FText& Source, FGameplayTag MetaData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SendPhysicsBallHitToServer(AFortPhysicsPawnObject* PhysicsObject, const float ClientPing, APawn* HittingPawn, const FVector VelocityOfHitter, const FVector HitNormal, const FTimeStampedPhysicsPawnState ClientBallState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SendClientPhysicsBallStateToServer(AFortPhysicsPawnObject* PhysicsObject, const float ClientPing, const FTimeStampedPhysicsPawnState ClientBallState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RevokeCreativeTool();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void RestoreCreativePlot(const FString& IslandId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RespawnTurnCameraBackOn();
    
public:
    UFUNCTION(BlueprintCallable)
    void RespawnPlayerAfterDeath(bool bEnterSkydiving);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ResetMyCurrentCreativePlot();
    
    UFUNCTION(BlueprintCallable)
    void RemoveDroppableTaggedItems(const FGameplayTagContainer GameplayTagContainer);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDroppableItems();
    
    UFUNCTION(BlueprintCallable)
    void ReduceDroppableResources(const float ReductionPercentage);
    
private:
    UFUNCTION(BlueprintCallable)
    void RecordTeamStats();
    
    UFUNCTION(BlueprintCallable)
    void RecordMatchStats();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void PublishCreativePlot(AFortVolume* VolumeToPublish, FCreativePublishOptions MyPublishOptions);
    
    UFUNCTION(BlueprintCallable)
    void PrepareClientForRespawning();
    
    UFUNCTION(BlueprintCallable)
    void PreLobbyIslandTeleport();
    
    UFUNCTION(BlueprintCallable)
    void PostLobbyIslandTeleport(AFortPlayerPawn* PlayerPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayWinEffects(APawn* FinisherPawn, const UFortWeaponItemDefinition* FinishingWeapon, EDeathCause DeathCause, bool bAudioOnly);
    
    UFUNCTION(BlueprintCallable)
    void OnServerMarkerAdded(FFortWorldMarkerData MarkerData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TrackedVictimsShared();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SkydiveLeader();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FocalPoint();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CreativePlotLinkedVolume();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CreativeIslands();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void OnPostGameForced();
    
    UFUNCTION(BlueprintCallable)
    void OnMinigameStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnMinigameEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnMatchmakingPartyReady();
    
    UFUNCTION(BlueprintCallable)
    void OnGameServerNodeTypeChanged(EMeshNetworkNodeType NewNodeType);
    
    UFUNCTION(BlueprintCallable)
    void OnFortPlayerPawnAthenaDied(AFortPlayerPawnAthena* FortPlayerPawnAthena);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCreativePlotLinkedVolumeMinigameChanged(AFortMinigame* Minigame);
    
    UFUNCTION(BlueprintCallable)
    void OnClientVolumeManagerReplicated();
    
    UFUNCTION(BlueprintCallable)
    void OnClientEnterVolume(APlayerState* InPlayerState, AFortVolume* InVolume);
    
public:
    UFUNCTION(BlueprintCallable)
    void MultiKillExpired();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MakeNewCreativePlotFromLinkCode(const FString& LinkCode, const FString& Locale, const FString& Title);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MakeNewCreativePlot(const UFortCreativeRealEstatePlotItemDefinition* PlotType, const FString& Locale, const FString& Title);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnderPlotLimit(int32& MaxIslands, int32& NumIslands, bool bIncludeDeleted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTryToFireRestrictedByTypeCooldowns() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerRebootingNow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInReadOnlyVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInPublishedVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInFeaturedVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInAVolumeTheyCanCreateIn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInAMinigame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartyMemberReadyCheckStatusInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnPublishedIsland();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchmaking() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsLoadingScreenActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClientNotifiedOfWin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClientNotifiedOfTeamWin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClientNotifiedOfLoss() const;
    
    UFUNCTION(BlueprintCallable)
    void HighlightNumberReturned(int32 NumHighlights);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItems(const TArray<EFortItemType>& ExcludedItemTypes) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePlayersLeftChanged(int32 NumPlayersLeft);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
    
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseChanged(EAthenaGamePhase NewPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTrackedVictims(AFortPlayerStateAthena*& EliminatedVictim, AFortPlayerStateAthena*& DownedVictim) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AFortPlayerStateAthena*> GetSquadMemberPlayerStates(const bool bIncludeSelf) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSquadKillsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSquadKills(TArray<int32>& Kills) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetProfilePlotEntries(bool bIncludeDeleted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlaysetSize(int32& SizeX, int32& SizeY, int32& SizeZ) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPlaysetItemDefinition* GetPlayset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlaylistGameTypeText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortMinigame* GetMinigame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxNumberOfPlots();
    
    UFUNCTION(BlueprintCallable)
    UAthenaPlayerMatchReport* GetMatchReport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAthenaMarkerComponent* GetMarkerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInventorySpace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortGameStateAthena* GetGameStateAthena() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortVolume* GetCurrentVolumeOrCreativePlotLinkedVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortVolume* GetCurrentVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortVolumeType GetCurrentFortVolumeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCreativeUserContentManager* GetCreativeUserContentManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortVolume* GetCreativePlotLinkedVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCachedHighlightCount();
    
    UFUNCTION(BlueprintCallable)
    void ForceSpectatorToCursorMode();
    
    UFUNCTION(BlueprintCallable)
    void FollowSpecialActor();
    
private:
    UFUNCTION(BlueprintCallable)
    void EnableCreativeContentManagerBasedOnPlaylist();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void DuplicateCreativePlot(const FString& IslandId, const FString& Locale, const FString& Title);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void DestroyCreativePlot(const FString& IslandId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateGeneratedSkydivePath(const FString& LocationStr, const FVector& DropLocationStr, const FVector& GlideLocationStr, const FVector& LandingLocationStr);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStopWaitLTMLoading();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartWaitLTMLoading();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartRespawnPreparation(FVector RespawnLoc, FRotator RespawnRot, float RespawnCameraDist, FName InRespawnCameraBehavior, const FText& HUDReasonText);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSignalPortalLoadCompleteViaDelegate(const FAsyncTaskResult& Result);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetStreamingTestStreamingLevels(bool streaming);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetDeathReport(FFortPlayerDeathReport InDeathReport);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendTeamStatsForPlayer(const FAthenaMatchTeamStats& TeamStats);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendStateEncryptionKey(const FPlayerStateEncryptionKey& Key);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendMatchStatsForPlayer(const FAthenaMatchStats& Stats);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendEndMatchReportHeartbeat();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendEndBattleRoyaleMatchForPlayer(bool bSuccess, const FAthenaRewardResult& Result);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendDebugPoiVolumeData(const FString& PoiVolumes);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendDebugPoiLocationTags(const FGameplayTagContainer& InPoiTags);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRequestLevelStreamingHandshake();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReportTournamentPlacementPointsScored(int32 Placement, int32 PointsEarned);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientReceiveSquadQuickChatMessage(FAthenaQuickChatActiveEntry ChatEntry, AFortPlayerController* SenderPC);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientReceiveKillNotification(AFortPlayerStateZone* Killer, AFortPlayerStateZone* Killed);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPublishCreativePlotComplete(const FString& ResultErrorCode, const FString& LinkJson);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPreviewScreenshotModeActivated(bool bSuccess, bool bForceQuit);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyWon(APawn* FinisherPawn, const UFortWeaponItemDefinition* FinishingWeapon, EDeathCause DeathCause);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyTeamWon(APawn* FinisherPawn, const UFortWeaponItemDefinition* FinishingWeapon, EDeathCause DeathCause);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyTeamLost();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyLost(APawn* WinningPawn, EEndOfMatchReason LostReason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyAbortRespawn();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientMutatorEvent(AFortGameplayMutator* Mutator, int32 EventId, int32 PayloadData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientMarkSkydivePathsComplete();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientHideScreenWhileRespawning(const FText& HUDReasonText);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEnterCameraMode();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCycleQuickBarToCreativeItem(const FGuid& CreativeItemGuid, const UFortWorldItemDefinition* CreativeItemDef);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCheckIfSafeToTurnOnCamera();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBroadcastPlotItemID(const FString& PlotID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBroadcastOnUpdateCreativePlotName(bool bSuccess, const FText& Reason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBroadcastOnUpdateCreativeDescriptionTags(bool bSuccess, const FText& Reason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBroadcastOnRestoreCreativePlotFinished(bool bSuccess, const FText& Reason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBroadcastOnMakeNewCreativePlotFinished(bool bSuccess, const FText& Reason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBroadcastOnDuplicateCreativePlotFinished(bool bSuccess, const FText& Reason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBroadcastOnDestroyCreativePlotFinished(bool bSuccess, const FText& Reason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBotStopDogpile();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBotStartDogpile(FVector DogpilePosition);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAutoEquipFirstItem(FGuid ItemGuid, bool bForceExecution);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAlertPortalDoneTeleporting();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAlertLeaveIsland();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAddProfileGoCollection(const FString& CollectionName, const TArray<FProfileGoScenario>& NewScenarios);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_DisplayQuestUpdate(FFortUpdatedObjectiveStat ObjectiveUpdated, const AFortPlayerState* QuestOwner, const AFortPlayerState* AssistingPlayer);
    
    UFUNCTION(BlueprintCallable)
    void ClearInventorySpaces(int32 NumSpaces);
    
    UFUNCTION(BlueprintCallable)
    void ClearDroppableItems();
    
    UFUNCTION(BlueprintCallable)
    void CheckIfSafeToTurnOnCamera();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckIfSafeToRespawn();
    
    UFUNCTION(BlueprintCallable)
    void CheckIfLevelStreamingCompleteForHandshake();
    
public:
    UFUNCTION(BlueprintCallable)
    void CheckIfClientLoadedLTM();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayerCreateInCurrentVolume(AFortVolume*& OutCurrentVolume) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanFollowSpecialActor() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelMatchmaking(EMatchmakingCancelReasonV2 CancelReason);
    
    UFUNCTION(BlueprintCallable)
    void CancelCreativeMatchmakingReadyCheck();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastDeviceButtonComponentClickedDelegate(const UFortCreativeDeviceButtonComponent* DeviceButtonComponent);
    
    UFUNCTION(BlueprintCallable)
    void ApplyOverrideWrapToVehicle(const TSoftObjectPtr<UAthenaItemWrapDefinition>& ItemWrap);
    
};

