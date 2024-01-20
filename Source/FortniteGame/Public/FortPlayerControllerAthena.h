#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "EMeshNetworkNodeType.h"
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
#include "EDeathCause.h"
#include "EEndOfMatchReason.h"
#include "FortItemEntry.h"
#include "FortPlayerControllerPvP.h"
#include "FortPlayerDeathReport.h"
#include "FortPlaysetStreamingData.h"
#include "FortUpdatedObjectiveStat.h"
#include "ItemAndCount.h"
#include "OnAircraftStateChangeDelegate.h"
#include "OnCreativePermissionsChangedDelegate.h"
#include "OnCreativePlotLinkedVolumeChangedDelegate.h"
#include "OnInGameLoadScreenChangedDelegate.h"
#include "OnInGameMatchmakingCompleteDelegate.h"
#include "OnItemDropSpawnedDelegate.h"
#include "OnItemDroppedDueToOverflowDelegate.h"
#include "OnLocalPlayerChangedTeamsDelegate.h"
#include "OnPlayerPawnEventDelegate.h"
#include "OnSpectatorStreamingDelegate.h"
#include "OnTalkingPlayersChangedDelegate.h"
#include "OnZebulonDroneChangedDelegate.h"
#include "PartyAssistQuestData.h"
#include "PlayerStateEncryptionKey.h"
#include "ProfileGoScenario.h"
#include "QuickBarData.h"
#include "SettingsHUDVisibilityAndText.h"
#include "Templates/SubclassOf.h"
#include "TimeStampedPhysicsPawnState.h"
#include "FortPlayerControllerAthena.generated.h"

class AActor;
class ACameraActor;
class AFortAthenaCreativePortal;
class AFortBroadcastRemoteClientInfo;
class AFortInventory;
class AFortMinigame;
class AFortPlayerController;
class AFortPlayerMarkerBase;
class AFortPlayerPawn;
class AFortPlayerPawnAthena;
class AFortPlayerStartWarmup;
class AFortPlayerState;
class AFortPlayerStateAthena;
class AFortVolume;
class APawn;
class APhysicsObject;
class UAthenaMarkerComponent;
class UAthenaPlayerMatchReport;
class UAthenaResurrectionComponent;
class UCreativeUserContentManager;
class UFortCreativeRealEstatePlotItemDefinition;
class UFortGamepadSettings;
class UFortHero;
class UFortItemDefinition;
class UFortMiniMapTeamIndicators;
class UFortPlaysetItemDefinition;
class UFortWeaponItemDefinition;
class UFortWorldItemDefinition;
class UInputComponent;
class USoundBase;

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API AFortPlayerControllerAthena : public AFortPlayerControllerPvP {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIslandMetatdataUpdateComplete, const FString&, Error);
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireAbilityToWeaponSwitchTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAircraftStateChange OnAircraftStateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativePermissionsChanged OnCreativePermissionsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnZebulonDroneChanged OnZebulonDroneChanged;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemDropSpawned OnItemDropSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemDroppedDueToOverflow OnItemDroppedDueToOverflow;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShouldForceDeleteDroppedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* SwappingItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WinScreenDelayTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipPlayWinEffects;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPlayersCreditOnLeave;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitZebulonDroneHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ZebulonDrone, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* ZebulonDrone;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeaveDisconnectedPawnsInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* DisconnectedPawn;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDeferredFireInputs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplicateViewTargetInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ViewTargetInventoryLocalUpdate, meta=(AllowPrivateAccess=true))
    AFortInventory* ViewTargetInventory;
    
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
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativePlotLinkedVolumeChanged OnCreativePlotLinkedVolumeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerPawnEvent OnClientLeaveIsland;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* RespawnCameraActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDelayedTeleporting;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInGameMatchmakingComplete InGameMatchmakingComplete;
    
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
    FString LastUsedCreativeIsland;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsAllowedToPublish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSettingsHUDVisibilityAndText> HUDVisibilityGameplayTags;
    
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
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRevertPlayerListenerChange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowNoShadows;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowNoDOF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSentMatchEndedQuestProgress;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuickBarData QuickBarDefinitions[3];
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PartyAssistedMemberData, meta=(AllowPrivateAccess=true))
    TArray<FPartyAssistQuestData> PartyAssistedMemberData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableBroadcastRemoteClientInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortBroadcastRemoteClientInfo* BroadcastRemoteClientInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortHero* StrongMyHero;
    
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
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUseTrapPicker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementCancellableActionLeashLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MovementCancellableActionLeashLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MovementCancellableActionStartingLeashLocation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMovementCancellableActionsWithIceFeet;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveForwardOnlyEmoteCancelBackwardsThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveForwardOnlyEmoteCancelStrafeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaPlayerMatchReport* MatchReport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMiniMapTeamIndicators> MinimapIndicatorClass;
    
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
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TimeSinceLastCreativeSpawn;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreSignifanceBasedCustomDepthRendering;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UCreativeUserContentManager* CreativeUserContentManager;
    
public:
    AFortPlayerControllerAthena();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void WriteCreateBuildingAnalytics();
    
    UFUNCTION(BlueprintCallable)
    void UpdateRichPresenceTimer();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void UpdateCreativePlotData(AFortVolume* VolumeToPublish, FCreativeIslandInfo MyInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void TellServer_ClientReceivedPlaysetDataForVolume(FFortPlaysetStreamingData PlaysetData, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void StopRecordingHighlights();
    
private:
    UFUNCTION(BlueprintCallable)
    void StopAutoPerfCaptureWrapper();
    
    UFUNCTION(BlueprintCallable)
    void StopAutoPerfCapture(EAthenaGamePhase GamePhase);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartRespawnLoading();
    
private:
    UFUNCTION(BlueprintCallable)
    void StartAutoPerfCapture(EAthenaGamePhase GamePhase);
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowHighlightSummary();
    
    UFUNCTION(BlueprintCallable)
    void SetupClientRespawnTimerAndLocation(FVector RespawnLoc, FRotator RespawnRot, FVector OldPlayerLocation, bool bUsePlaylistFadeTime);
    
    UFUNCTION(BlueprintCallable)
    void SetCanStreamBuildingFoundationsIn(bool bCanStream);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerToggleAutoRestartMinigame();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerThankBusDriver();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTeleportToPlaygroundLobbyIsland();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTeleportToPlaygroundIslandDock();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStopSavingCreativePlot();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartUnloadingVolume(AFortVolume* VolumeToUnload);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartMinigame();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartLoadingVolume(AFortVolume* VolumeToLoad);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpawnCreativeSupplyDrop(FVector Position, TSubclassOf<AActor> InSupplyDropClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetTeam(uint8 InTeam);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetShouldSwapPickup(bool bShouldSwapPickup);
    
    UFUNCTION(BlueprintCallable)
    void ServerSetRespawnData(FVector RespawnLoc, FRotator RespawnRot, float RespawnCameraDist);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayset(UFortPlaysetItemDefinition* NewPlayset);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendSquadFriend(AFortPlayerStateAthena* FriendInSquad);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSaveIslandCheckpoint(AFortAthenaCreativePortal* Portal);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRestartMinigame();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestNewZebulonDrone();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReloadCreativePlot();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReleasePortal();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerPlaySquadQuickChatMessage(FAthenaQuickChatActiveEntry ChatEntry, FUniqueNetIdRepl SenderID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerLoadPlotForPortalFromMnemonic(AFortAthenaCreativePortal* Portal, const FString& Mnemonic);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerLoadPlotForPortal(AFortAthenaCreativePortal* Portal, const FString& PlotItemId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerLoadIslandCheckpoint(AFortAthenaCreativePortal* Portal);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerGiveCreativeItem(const FFortItemEntry& CreativeItem);
    
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
    void ServerClearZebulonDrone();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClaimPortal();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddToCachedPurchased(UFortItemDefinition* ItemDefinition, int32 Count);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SendPhysicsBallHitToServer(APhysicsObject* PhysicsObject, const float ClientPing, APawn* HittingPawn, const FVector VelocityOfHitter, const FVector HitNormal, const FTimeStampedPhysicsPawnState ClientBallState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SendClientPhysicsBallStateToServer(APhysicsObject* PhysicsObject, const float ClientPing, const FTimeStampedPhysicsPawnState ClientBallState);
    
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
    void OnRep_ZebulonDrone();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ViewTargetInventoryLocalUpdate();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PartyAssistedMemberData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CreativePlotLinkedVolume();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CreativeIslands();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnNewGamePhase(EAthenaGamePhase NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnGameServerNodeTypeChanged(EMeshNetworkNodeType NewNodeType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCreativeModeEnabledChanged(bool bIsEnabled);
    
public:
    UFUNCTION(BlueprintCallable)
    void MultiKillExpired();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MakeNewCreativePlot(const UFortCreativeRealEstatePlotItemDefinition* PlotType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTryToFireRestrictedByTypeCooldowns() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerRebootingNow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInReadOnlyVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInFeaturedVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInAVolumeTheyCanCreateIn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInAMinigame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClientNotifiedOfWin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClientNotifiedOfTeamWin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClientNotifiedOfLoss() const;
    
    UFUNCTION(BlueprintCallable)
    void HighlightNumberReturned(int32 NumHighlights);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePlayersLeftChanged(int32 NumPlayersLeft);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetSquadKills(TArray<int32>& Kills);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSettingsFilteredPlayerName(const AFortPlayerState* OtherPlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRevertPlayerListenerChangeFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlaysetSize(int32& SizeX, int32& SizeY) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPlaysetItemDefinition* GetPlayset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlaylistGameTypeText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortMinigame* GetMinigame() const;
    
    UFUNCTION(BlueprintCallable)
    UAthenaPlayerMatchReport* GetMatchReport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAthenaMarkerComponent* GetMarkerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortVolume* GetCurrentVolumeOrCreativePlotLinkedVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortVolume* GetCurrentVolume() const;
    
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
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void DestroyCreativePlot(const FString& IslandId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartRespawnPreparation(FVector RespawnLoc, FRotator RespawnRot, float RespawnCameraDist, FName InRespawnCameraBehavior, const FText& HUDReasonText);
    
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
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientReceiveSquadQuickChatMessage(FAthenaQuickChatActiveEntry ChatEntry, AFortPlayerController* SenderPC);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPublishCreativePlotComplete(const FString& ResultErrorCode, const FString& LinkJson);
    
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
    void ClientHideScreenWhileRespawning(const FText& HUDReasonText);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEnterCameraMode();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCycleQuickBarToCreativeItem(const FGuid& CreativeItemGuid, const UFortWorldItemDefinition* CreativeItemDef);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBotStopDogpile();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBotStartDogpile(FVector DogpilePosition);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAutoEquipFirstItem(FGuid ItemGuid, bool bForceExecution);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAlertLeaveIsland();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAddProfileGoCollection(const FString& CollectionName, const TArray<FProfileGoScenario>& NewScenarios);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_DisplayQuestUpdate_Self(FFortUpdatedObjectiveStat ObjectiveUpdated);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_DisplayQuestUpdate_Assist(FFortUpdatedObjectiveStat ObjectiveUpdated, AFortPlayerState* QuestOwner, const AFortPlayerState* AssistingPlayer);
    
    UFUNCTION(BlueprintCallable)
    void ClearInventorySpaces(int32 NumSpaces);
    
    UFUNCTION(BlueprintCallable)
    void ClearDroppableItems();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckIfSafeToTurnOnCamera();
    
    UFUNCTION(BlueprintCallable)
    void CheckIfSafeToRespawn();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayerCreateInCurrentVolume(AFortVolume*& OutCurrentVolume) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanFollowSpecialActor() const;
    
};

