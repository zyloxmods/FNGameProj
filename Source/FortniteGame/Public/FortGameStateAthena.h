#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Styling/SlateBrush.h"
#include "Fonts/SlateFontInfo.h"
#include "AICharacterPartsPreloadData.h"
#include "AIPawnCustomizationPreloadData.h"
#include "AircraftFlightInfo.h"
#include "AthenaGameMessageData.h"
#include "AthenaStreamIdOverride.h"
#include "CosmeticUsageReport.h"
#include "DynamicLandData.h"
#include "EAirCraftBehavior.h"
#include "EAthenaGameMsgType.h"
#include "EAthenaGamePhase.h"
#include "EAthenaGamePhaseStep.h"
#include "EAthenaStormCapState.h"
#include "EEventTournamentRound.h"
#include "EFortPlaylistType.h"
#include "EFortResourceType.h"
#include "EFriendlyFireType.h"
#include "EMapLocationStateType.h"
#include "ESafeZoneStartUp.h"
#include "EvaluationResult.h"
#include "FortGameStateZone.h"
#include "FortMutatorOwner.h"
#include "FortSafeZoneInterface.h"
#include "FortTimeWidgetInterface.h"
#include "FortWinnerPlayerData.h"
#include "GameMemberInfoArray.h"
#include "GameplayMutatorEventData.h"
#include "GameplayMutatorObjectDataArray.h"
#include "GameplayMutatorObserverInterface.h"
#include "HideGameModeMessageDelegate.h"
#include "MeshNetworkStatus.h"
#include "OnAllWinnersAnnouncedDelegate.h"
#include "OnClientVolumeManagerReplicatedDelegate.h"
#include "OnContextTutorialGameModeMessageRequestDelegate.h"
#include "OnCountdownFinishedDelegate.h"
#include "OnCountdownStartedDelegate.h"
#include "OnCountdownStoppedDelegate.h"
#include "OnCountdownTickDelegate.h"
#include "OnCurrentHighScoreUpdatedDelegate.h"
#include "OnFinalCountdownFinishedDelegate.h"
#include "OnFinalCountdownStartedDelegate.h"
#include "OnFinalCountdownTickDelegate.h"
#include "OnGameModeMessageRequestDelegate.h"
#include "OnGameModeMessageSuccessDelegate.h"
#include "OnGameModeRemoveMarkerDelegate.h"
#include "OnGameModeShowMarkerDelegate.h"
#include "OnGamePhaseChangedDelegate.h"
#include "OnGamePhaseStepChangedDelegate.h"
#include "OnHideGameModeMessageRequestDelegate.h"
#include "OnKillFeedUpdatedDelegate.h"
#include "OnMutatorGameplayEventDelegate.h"
#include "OnMutatorGenericIntegerUpdatedDelegate.h"
#include "OnPlayerJoinedLeftCreativeIslandDelegate.h"
#include "OnPlayersLeftChangedDelegate.h"
#include "OnSafeZoneIndicatorChangedDelegate.h"
#include "OnStormCapStateChangedDelegate.h"
#include "OnStormProgressStoppedDelegate.h"
#include "OnTeamsLeftChangedDelegate.h"
#include "OnWinConditionMetCNDelegate.h"
#include "OnWinnerAnnouncedDelegate.h"
#include "OnWinnerInfoDisplayReadyCNDelegate.h"
#include "OnWinningScoreAnnouncedDelegate.h"
#include "OnWinningTeamAnnouncedDelegate.h"
#include "PickupOnDestroyDelegate.h"
#include "PickupOnSpawnReadyDelegate.h"
#include "PlayersLeft.h"
#include "PlaylistPropertyArray.h"
#include "RepositionGameModeMessageDelegate.h"
#include "SetDefaultGameModeMessageDelegate.h"
#include "ShowGameModeMessageDelegate.h"
#include "SpawnMachineRepDataArray.h"
#include "StormCapDamageThresholdInfo.h"
#include "Templates/SubclassOf.h"
#include "TotalPlayers.h"
#include "UpdateNamedPoiColorDelegateDelegate.h"
#include "FortGameStateAthena.generated.h"

class AActor;
class ABuildingActor;
class AFortAthenaAircraft;
class AFortAthenaMapInfo;
class AFortAthenaMutator_AI;
class AFortBroadcastSpectatorInfo;
class AFortGameplayMutator;
class AFortLocalizationService;
class AFortPlayerController;
class AFortPlayerControllerAthena;
class AFortPlayerPawn;
class AFortPlayerState;
class AFortPlayerStateAthena;
class AFortProjectileBase;
class AFortPropertyOverrideReplShared;
class AFortSafeZoneIndicator;
class AFortSpecialActorReplicationInfo;
class AFortVolumeManager;
class APawn;
class APlayerState;
class AUnicornDriver;
class UAthenaBattleBusItemDefinition;
class UCurveFloat;
class UCurveVector;
class UFortContextualTutorialController;
class UFortCustomizationsPreloader;
class UFortGameStateComponent_ActiveEventManager;
class UFortGameStateComponent_Telemetry;
class UFortItemDefinition;
class UFortMutatorListComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UObject;
class USoundCue;
class USoundMix;
class USplatterGridSystem;

UCLASS(Blueprintable, MinimalAPI)
class AFortGameStateAthena : public AFortGameStateZone, public IGameplayMutatorObserverInterface, public IFortMutatorOwner, public IFortSafeZoneInterface, public IFortTimeWidgetInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCurrentPlaylistLoaded, FName, PlaylistName, const FGameplayTagContainer&, PlaylistContextTags);
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBuildOnWaterGlobal;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockBuildOnWaterGlobal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AdditionalGameFeaturePlugins, meta=(AllowPrivateAccess=true))
    TArray<FString> ReplicatedAdditionalGameFeaturePluginURLs;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrentPlaylistLoaded OnCurrentPlaylistLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlaylistDataIsLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlaylistDataIsActivelyLoading;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllWinnersAnnounced AllWinnersAnnounced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWinnerInfoDisplayReadyCN WinnerInfoDisplayReadyCN;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCountdownTick CountdownTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCountdownStarted CountdownStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCountdownFinished CountdownFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCountdownStopped CountdownStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinalCountdownTick FinalCountdownTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinalCountdownStarted FinalCountdownStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinalCountdownFinished FinalCountdownFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrentHighScoreUpdated CurrentHighScoreUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupOnSpawnReady OnPickupSpawnedAndReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupOnDestroy OnPickupDestroy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameModeMessageRequest GameModeMessageRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContextTutorialGameModeMessageRequest ContextTutorialGameModeMessageRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHideGameModeMessageRequest HideGameModeMessageRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameModeMessageSuccess GameModeMessageSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShowGameModeMessage ShowGameModeMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHideGameModeMessage HideGameModeMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameModeShowMarker ShowMarkerGameMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameModeRemoveMarker HideMarkerGameMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRepositionGameModeMessage RepositionGameModeMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetDefaultGameModeMessage SetDefaultPositionGameModeMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerJoinedLeftCreativeIsland OnPlayerLeftCreativeIsland;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerJoinedLeftCreativeIsland OnPlayerJoinedCreativeIsland;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMutatorGenericIntegerUpdated MutatorGenericIntegerUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMutatorGameplayEvent MutatorGameplayEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSafeZoneIndicatorChanged OnSafeZoneIndicatorChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlaylistEndTime, meta=(AllowPrivateAccess=true))
    float PlaylistEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float SafeZonePauseTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TotalFinalCountdownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceTeamScorePlacementOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bPlaylistStoppedSafeZonePhases, meta=(AllowPrivateAccess=true))
    bool bPlaylistStoppedSafeZonePhases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SkyTubesShuttingDown, meta=(AllowPrivateAccess=true))
    bool bSkyTubesShuttingDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SkyTubesDisabled, meta=(AllowPrivateAccess=true))
    bool bSkyTubesDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerChangelistNumber, meta=(AllowPrivateAccess=true))
    int32 ServerChangelistNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AFortSpecialActorReplicationInfo* SpecialActorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AFortPropertyOverrideReplShared* ReplOverrideData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABuildingActor>> BuildingActorClasses;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWinnerAnnounced WinnerAnnounced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWinningTeamAnnounced WinningTeamAnnounced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGamePhaseChanged GamePhaseChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWinningScoreAnnounced WinningScoreDetermined;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGamePhaseStepChanged GamePhaseStepChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStormCapStateChanged StormCapStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStormProgressStopped StormProgressStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayersLeftChanged OnPlayersLeftChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeamsLeftChanged OnTeamsLeftChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWinConditionMetCN OnWinConditionMetCN;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateNamedPoiColorDelegate UpdateNamedPoiColorDelegate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipWinnerAnnounced;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopBuildingHealingOnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsInCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsInFinalCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float WarmupCountdownStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float WarmupCountdownEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float AircraftStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float SafeZonesStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float EndGameStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EndGameKickPlayerTime, meta=(AllowPrivateAccess=true))
    float EndGameKickPlayerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TotalPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayersLeft, meta=(AllowPrivateAccess=true))
    int32 PlayersLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UClass*> ClientVehicleClassesToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ClientItemDefsToLoad, meta=(AllowPrivateAccess=true))
    TArray<UFortItemDefinition*> ClientItemDefsToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortProjectileBase*> PredictedProjectiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RemainingFocalPointActorDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_FocalPointActor, meta=(AllowPrivateAccess=true))
    AActor* FocalPointActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize FocalPointOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float FocalPointFOV;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCheatRespawnEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StormCapState, meta=(AllowPrivateAccess=true))
    EAthenaStormCapState StormCapState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentPlayerCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DamageForStormCapMarking, meta=(AllowPrivateAccess=true))
    FStormCapDamageThresholdInfo DamageForStormCapMarking;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<int32> TeamXPlayersLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WinningPlayerList, meta=(AllowPrivateAccess=true))
    TArray<FFortWinnerPlayerData> WinningPlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamsLeft, meta=(AllowPrivateAccess=true))
    int32 TeamsLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WinningTeamsCN, meta=(AllowPrivateAccess=true))
    TArray<uint8> WinningTeamsCN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ServerToClientPreloadList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UAthenaBattleBusItemDefinition* DefaultBattleBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAllowUserPickedCosmeticBattleBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FAircraftFlightInfo> TeamFlightPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAircraftFlightInfo FlightPathMidLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D DropZoneCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D FlightPathSelectionCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UtcTimeStartedMatch, meta=(AllowPrivateAccess=true))
    FDateTime UtcTimeStartedMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsLargeTeamGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WinningPlayerState, meta=(AllowPrivateAccess=true))
    APlayerState* WinningPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WinningTeam, meta=(AllowPrivateAccess=true))
    int32 WinningTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WinningScore, meta=(AllowPrivateAccess=true))
    int32 WinningScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentHighScore, meta=(AllowPrivateAccess=true))
    int32 CurrentHighScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CurrentHighScoreTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SupplyDropWaveStartedSoundCue, meta=(AllowPrivateAccess=true))
    USoundCue* SupplyDropWaveStartedSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> KillFeedEntry;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKillFeedUpdated KillFeedUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerState*> SpectatorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerState*> PartyMemberSpectatorArray;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerState*> MeshPlayerStateArray;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EAirCraftBehavior AirCraftBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bStormReachedFinalPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EFriendlyFireType FriendlyFireType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SpectateAPartyMemberAvailable, meta=(AllowPrivateAccess=true))
    bool SpectateAPartyMemberAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameMemberInfoArray GameMemberInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<uint8> ActiveTeamNums;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentPlaylistId, meta=(AllowPrivateAccess=true))
    int32 CurrentPlaylistId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SafeZoneIndicator, meta=(AllowPrivateAccess=true))
    AFortSafeZoneIndicator* SafeZoneIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MinimapBackgroundMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MinimapCircleMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MinimapNextCircleMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* FullmapCircleMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* FullmapNextCircleMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush MinimapSafeZoneBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush MinimapCircleBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush MinimapNextCircleBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush FullMapCircleBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush FullMapNextCircleBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush MinimapSafeZoneFinalPosBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush AircraftPathBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush AircraftMidlinePathBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush AircraftPathTeamIndicatorBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MiniMapBackgroundDrawingMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MiniMapCircleDrawingMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MiniMapNextCircleDrawingMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDynamicLandData> DynamicLands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MapInfo, meta=(AllowPrivateAccess=true))
    AFortAthenaMapInfo* MapInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MinimapMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BroadcastSpectatorInfo, meta=(AllowPrivateAccess=true))
    AFortBroadcastSpectatorInfo* BroadcastSpectatorInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USplatterGridSystem* SplatterGridSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCustomizationsPreloader* CustomizationsPreloader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AICharacterPartsPreloadData, meta=(AllowPrivateAccess=true))
    TArray<FAICharacterPartsPreloadData> AICharacterPartsPreloadData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AIPawnCustomizationPreloadData, meta=(AllowPrivateAccess=true))
    TArray<FAIPawnCustomizationPreloadData> AIPawnCustomizationPreloadData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GamePhase, meta=(AllowPrivateAccess=true))
    EAthenaGamePhase GamePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString ReasonWereInSetupPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EventTournamentRound, meta=(AllowPrivateAccess=true))
    EEventTournamentRound EventTournamentRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsCustomMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentPlaylistInfo, meta=(AllowPrivateAccess=true))
    FPlaylistPropertyArray CurrentPlaylistInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bGameModeWillSkipAircraft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SafeZonePhase, meta=(AllowPrivateAccess=true))
    uint8 SafeZonePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaGamePhaseStep GamePhaseStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamePhaseStepTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* LobbySoundMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TotalPlayersBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerBotsLeft, meta=(AllowPrivateAccess=true))
    int32 PlayerBotsLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Aircraft, meta=(AllowPrivateAccess=true))
    TArray<AFortAthenaAircraft*> Aircrafts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bAircraftIsLocked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ESafeZoneStartUp CachedSafeZoneStartUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 LobbyAction;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MutatorEventData, meta=(AllowPrivateAccess=true))
    FGameplayMutatorEventData MutatorEventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayMutatorObjectDataArray MutatorObjectDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MutatorGenericInt_0, meta=(AllowPrivateAccess=true))
    int32 MutatorGenericInt_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MutatorGenericInt_1, meta=(AllowPrivateAccess=true))
    int32 MutatorGenericInt_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MutatorGenericInt_2, meta=(AllowPrivateAccess=true))
    int32 MutatorGenericInt_2;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_AI* GameplayMutator_AI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMutatorListComponent* MutatorListComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortGameStateComponent_Telemetry* FortGameStateComponent_Telemetry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortGameStateComponent_ActiveEventManager* ActiveEventManager;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DefaultGliderRedeployCanRedeploy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DefaultRedeployGliderLateralVelocityMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DefaultRedeployGliderHeightLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DefaultParachuteDeployTraceForGroundDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DefaultAllowNeutralWallEditing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DefaultRebootMachineHotfix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float SignalInStormRegenSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float SignalInStormLostSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float StormCNDamageVulnerabilityLevel0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float StormCNDamageVulnerabilityLevel1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float StormCNDamageVulnerabilityLevel2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float StormCNDamageVulnerabilityLevel3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bFishingCollectionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MeshNetworkStatus, meta=(AllowPrivateAccess=true))
    FMeshNetworkStatus MeshNetworkStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClientVolumeManagerReplicated OnClientVolumeManagerReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortVolumeManager> VolumeManagerToUse;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_VolumeManager, meta=(AllowPrivateAccess=true))
    AFortVolumeManager* VolumeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AFortLocalizationService* LocalizationService;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ResurrectionEnabledRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SpawnMachineIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SpawnCardIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FSpawnMachineRepDataArray SpawnMachineRepData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush EliminationSquadmateIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush EliminationSquadmateClampedIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush EliminationTeammateIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush EliminationTeammateClampedIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush EliminationEnemyIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush EliminationEnemyClampedIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> EliminationFadeInCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveFloat> EliminationFadeOutCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveVector> EliminationScaleInCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveVector> EliminationScaleOutCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EliminationMarkerHUDMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EliminationMarkerHUDZOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GoldenPoiLocationTags, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GoldenPoiLocationTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUnicornDriver* UnicornDriver;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> ActiveEventNamesAtPlaylistLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NewItemDuringWarmupWeightAddMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SmoothedWorldTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SmoothedWorldTimeSecondsDrift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CosmeticUsage, meta=(AllowPrivateAccess=true))
    FCosmeticUsageReport CosmeticUsageReport;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bEnvironmentDamageBlocked;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReticulatedSplineDefinitions, meta=(AllowPrivateAccess=true))
    TArray<FString> ReticulatedSplineDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAthenaStreamIdOverride> ReticulatedSplineIds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bDamageComboHUDEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 DamageComboHUDMinHits;
    
public:
    AFortGameStateAthena();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void UpdateAllGoldenPoiColor(FLinearColor Color, const FSlateFontInfo& Font);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldReturnToMatchmakingOriginOnMatchEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldHaveInfiniteResources(const APawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldEnterSpawningStartup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDBNOTeamInfoFlash() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetLocationTextWorldPosition(const FGameplayTag& LocationTag, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetLocationText(const FGameplayTag& LocationTag, const FText& Text, EMapLocationStateType State);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetLocationFontInState(const FGameplayTag& LocationTag, const FSlateFontInfo& Font, EMapLocationStateType State);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetLocationFontInAllStates(const FGameplayTag& LocationTag, const FSlateFontInfo& Font);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetLocationFont(const FGameplayTag& LocationTag, const FSlateFontInfo& Font);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetLocationColorInState(const FGameplayTag& LocationTag, FLinearColor Color, EMapLocationStateType State);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetLocationColor(const FGameplayTag& LocationTag, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetLocation_StateColor(const FGameplayTag& LocationTag, const FLinearColor& Color, EMapLocationStateType State);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetFocalPointActor(AActor* InFocalPointActor, FVector InFocalPointOffset, float InFocalPointFOV, float InDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatingIslandInformation(FVector WorldPosition, bool bActivated);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetAllLocations_StateColor(const FLinearColor& Color, EMapLocationStateType State);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RunPerfMemCheatScript_Client_Replicated(bool bStartStatFiles);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PauseFPSChartTimer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void OverrideLocation_StateFontMaterial(const FGameplayTag& LocationTag, UMaterialInterface* Mat, EMapLocationStateType State);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void OverrideAllLocations_StateFontMaterial(UMaterialInterface* Mat, EMapLocationStateType State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWinnerAnnounced();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WinningTeamsCN();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WinningTeam();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WinningScore();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WinningPlayerState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WinningPlayerList();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_VolumeManager();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UtcTimeStartedMatch(const FDateTime& OldUtcTimeStartedMatch);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamsLeft();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SupplyDropWaveStartedSoundCue();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StormCapState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpectateAPartyMemberAvailable();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_SkyTubesShuttingDown();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SkyTubesDisabled();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerChangelistNumber();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SafeZonePhase();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SafeZoneIndicator();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReticulatedSplineDefinitions();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlaylistEndTime();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayersLeft();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerBotsLeft();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_MutatorGenericInt_2();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MutatorGenericInt_1();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MutatorGenericInt_0();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MutatorEventData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MeshNetworkStatus();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MapInfo();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_GoldenPoiLocationTags();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_GamePhase(EAthenaGamePhase OldGamePhase);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_FocalPointActor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_EventTournamentRound();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_EndGameKickPlayerTime();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageForStormCapMarking();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentPlaylistInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentPlaylistId();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentHighScore();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CosmeticUsage();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_ClientItemDefsToLoad();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_BroadcastSpectatorInfo();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_bPlaylistStoppedSafeZonePhases();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Aircraft();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AIPawnCustomizationPreloadData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AICharacterPartsPreloadData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AdditionalGameFeaturePlugins();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadedAllAdditionalContent();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWorldResourceWidgetVisible(const AFortPlayerController* Controller, const EFortResourceType ResourceType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTeleportToCreativeHubAllowed(const AFortPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTeamSwitchAllowed(const APawn* SwitchingPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStormCN() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsResurrectionEnabled(AFortPlayerPawn* PlayerPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaygroundModePlaylist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerTriggeredRespawnAllowed(const AFortPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastManStandingCN() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLargePreviewDisabledOnMobile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGuidedTutorialPlaylist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamePhaseNotificationSkipped(EAthenaGamePhaseStep GamePhaseToSkip) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreativeUtilitySpawningAllowedPlaylist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreativeOrPlaygroundModePlaylist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreativeOrBattleLabModePlaylist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreativeModePlaylist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreativeMMPlaylist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreativeLTMPlaylist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleLabModePlaylist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidFocalPointActor() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleHideGameModeMessageRequest(const EAthenaGameMsgType MsgType, const bool bInstantHide, const bool bClearQueue);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameModeShowMarker(int32 PlayerId, int32 InstanceID);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameModeMessageSuccess(AFortPlayerController* OwnerController);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameModeMessageRequest(FAthenaGameMessageData MessageData);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameModeMessageReposition(FVector2D position, TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameModeMessageDefaultPosition();
    
    UFUNCTION(BlueprintCallable)
    void HandleGameModeHideMarker(int32 PlayerId, int32 InstanceID);
    
    UFUNCTION(BlueprintCallable)
    void HandleContextTutorialGameModeMessageRequest(FAthenaGameMessageData MessageData, UFortContextualTutorialController* OwnedController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTotalPlayers GetTotalPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimedWinConditionTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTeamPOIName(uint8 Team) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<AFortPlayerStateAthena*> GetSquadMemberPlayerStates(AFortPlayerStateAthena* InstigatingPlayerState, const bool bIncludeSelf) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldPlayRespawnTimerSFX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldDisplayCountdownTimerText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortSafeZoneIndicator* GetSafeZoneIndicator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FGameplayTagContainer GetPoiGridTagsForLocation(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortPlaylistType GetPlaylistType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlaylistTeams(TArray<uint8>& OutTeams) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayersLeft GetPlayersLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverridenSiphonWoodValue(const APawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverridenSiphonStoneValue(const APawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverridenSiphonMetalValue(const APawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverridenSiphonHealthValue(const APawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverridenSiphonGoldValue(const APawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagQuery GetOverridenDamageSelfWeaponQuery(const APawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagQuery GetOverridenDamageSelfTargetQuery(const APawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOverridenDamageSelfRequiresNonZeroDamage(const APawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverridenDamageSelfDamageToDeal(const APawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable)
    float GetOverriddenVehicleTrickScore(const AFortPlayerController* Controller, float InTrickScore);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AFortGameplayMutator* GetMutatorByInterface(const AActor* ContextActor, UClass* MutatorInterface);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AFortGameplayMutator* GetMutatorByClass(const AActor* ContextActor, TSubclassOf<AFortGameplayMutator> MutatorClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxPlaylistPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEndGameReturnToMatchmakingOriginDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDamageComboHUDMinHits() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetCurrentPlaylistName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAthenaBattleBusItemDefinition* GetBattleBusForPlayer(AFortPlayerControllerAthena* PC) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvgPlayerMMR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetAthenaPlaylistContextTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortAthenaAircraft* GetAircraft(int32 AircraftIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void DoesPlayerHaveLimitedLives(AFortPlayerState* PlayerState, bool& bPlayerLivesAreLimited, int32& RespawnsRemaining) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanUseSlowMotionOnVictory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEvaluationResult CanSpawnActorOfClass(const AActor* InstigatorActor, UClass* ActorClassToSpawn, const FVector& Location, const FRotator& Rotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEvaluationResult CanSpawnActor(const AActor* InstigatorActor, AActor* ActorToSpawn, const FVector& Location, const FRotator& Rotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRespawnOnStarterIsland() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanChangeGameplayOptions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreSkyTubesEnabled() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void RemoveMutatorFromList(AFortGameplayMutator* Mutator) override PURE_VIRTUAL(RemoveMutatorFromList,);
    
    UFUNCTION()
    void GetMutatorsForContextActor(TArray<AFortGameplayMutator*>& OutMutators, const AActor* ContextActor) const override PURE_VIRTUAL(GetMutatorsForContextActor,);
    
    UFUNCTION()
    void GetMutatorRelevantPlayers(TArray<APlayerState*>& OutPlayers) const override PURE_VIRTUAL(GetMutatorRelevantPlayers,);
    
    UFUNCTION()
    void AddMutatorToList(AFortGameplayMutator* Mutator) override PURE_VIRTUAL(AddMutatorToList,);
    
    UFUNCTION(BlueprintCallable)
    FVector GetSafeZoneNextNextCenter() const override PURE_VIRTUAL(GetSafeZoneNextNextCenter, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    FVector GetSafeZoneNextCenter() const override PURE_VIRTUAL(GetSafeZoneNextCenter, return FVector{};);
    
};

