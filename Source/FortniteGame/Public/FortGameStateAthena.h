#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "Fonts/SlateFontInfo.h"
#include "AircraftFlightInfo.h"
#include "BuildingContainerDebugInfo.h"
#include "DynamicLandData.h"
#include "EAirCraftBehavior.h"
#include "EAthenaAerialPhase.h"
#include "EAthenaGamePhase.h"
#include "EAthenaGamePhaseStep.h"
#include "EAthenaStormCapState.h"
#include "EEventTournamentRound.h"
#include "EFortPlaylistType.h"
#include "EFriendlyFireType.h"
#include "ESafeZoneStartUp.h"
#include "FortGameStatePvP.h"
#include "FortMutatorOwner.h"
#include "FortWinnerPlayerData.h"
#include "GameMemberInfoArray.h"
#include "GameplayMutatorEventData.h"
#include "GameplayMutatorObjectDataArray.h"
#include "GameplayMutatorObserverInterface.h"
#include "HideGameModeMessageDelegate.h"
#include "MeshNetworkStatus.h"
#include "OnAllWinnersAnnouncedDelegate.h"
#include "OnClientVolumeManagerReplicatedDelegate.h"
#include "OnCountdownFinishedDelegate.h"
#include "OnCountdownStartedDelegate.h"
#include "OnCountdownTickDelegate.h"
#include "OnCurrentHighScoreUpdatedDelegate.h"
#include "OnFinalCountdownFinishedDelegate.h"
#include "OnFinalCountdownStartedDelegate.h"
#include "OnFinalCountdownTickDelegate.h"
#include "OnGameModeMessageRequestDelegate.h"
#include "OnGamePhaseChangedDelegate.h"
#include "OnGamePhaseStepChangedDelegate.h"
#include "OnKillFeedUpdatedDelegate.h"
#include "OnMutatorGameplayEventDelegate.h"
#include "OnMutatorGenericIntegerUpdatedDelegate.h"
#include "OnPlayerJoinedLeftCreativeIslandDelegate.h"
#include "OnPlayersLeftChangedDelegate.h"
#include "OnStormCapStateChangedDelegate.h"
#include "OnStormProgressStoppedDelegate.h"
#include "OnTeamsLeftChangedDelegate.h"
#include "OnWinnerAnnouncedDelegate.h"
#include "OnWinningScoreAnnouncedDelegate.h"
#include "OnWinningTeamAnnouncedDelegate.h"
#include "PickupOnDestroyDelegate.h"
#include "PickupOnSpawnReadyDelegate.h"
#include "PlaylistPropertyArray.h"
#include "ShowGameModeMessageDelegate.h"
#include "SpawnMachineRepDataArray.h"
#include "Templates/SubclassOf.h"
#include "UpdateNamedPoiColorDelegateDelegate.h"
#include "FortGameStateAthena.generated.h"

class AActor;
class ABuildingActor;
class AFortAthenaAircraft;
class AFortAthenaMapInfo;
class AFortAthenaMutator_AI;
class AFortBroadcastSpectatorInfo;
class AFortGameplayMutator;
class AFortPlayerController;
class AFortPlayerControllerAthena;
class AFortPlayerPawn;
class AFortPlayerState;
class AFortSafeZoneIndicator;
class AFortSpecialActorReplicationInfo;
class AFortVolumeManager;
class APawn;
class APlayerState;
class UAthenaBattleBusItemDefinition;
class UFortMutatorListComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UObject;
class USoundCue;
class USoundMix;

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API AFortGameStateAthena : public AFortGameStatePvP, public IGameplayMutatorObserverInterface, public IFortMutatorOwner {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCurrentPlaylistLoaded, FName, PlaylistName, const FGameplayTagContainer&, PlaylistContextTags);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrentPlaylistLoaded OnCurrentPlaylistLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlaylistDataIsLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlaylistDataIsActivelyLoading;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllWinnersAnnounced AllWinnersAnnounced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCountdownTick CountdownTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCountdownStarted CountdownStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCountdownFinished CountdownFinished;
    
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
    FShowGameModeMessage ShowGameModeMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHideGameModeMessage HideGameModeMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerJoinedLeftCreativeIsland OnPlayerLeftCreativeIsland;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerJoinedLeftCreativeIsland OnPlayerJoinedCreativeIsland;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMutatorGenericIntegerUpdated MutatorGenericIntegerUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMutatorGameplayEvent MutatorGameplayEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlaylistTimeRemaining, meta=(AllowPrivateAccess=true))
    int32 PlaylistTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrevPlaylistTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TotalFinalCountdownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceTeamScorePlacementOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bPlaylistStoppedSafeZonePhases, meta=(AllowPrivateAccess=true))
    bool bPlaylistStoppedSafeZonePhases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bSafeZonePaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SkyTubesDisabled, meta=(AllowPrivateAccess=true))
    bool bSkyTubesDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerChangelistNumber, meta=(AllowPrivateAccess=true))
    int32 ServerChangelistNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AFortSpecialActorReplicationInfo* SpecialActorData;
    
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
    FUpdateNamedPoiColorDelegate UpdateNamedPoiColorDelegate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipWinnerAnnounced;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float EndGameKickPlayerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TotalPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayersLeft, meta=(AllowPrivateAccess=true))
    int32 PlayersLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UClass*> ClientVehicleClassesToLoad;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FBuildingContainerDebugInfo> TreasureChestInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FBuildingContainerDebugInfo> AmmoBoxInfos;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCheatRespawnEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StormCapState, meta=(AllowPrivateAccess=true))
    EAthenaStormCapState StormCapState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentPlayerCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DamageForStormCapMarking, meta=(AllowPrivateAccess=true))
    float DamageForStormCapMarking;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<int32> TeamXPlayersLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WinningPlayerList, meta=(AllowPrivateAccess=true))
    TArray<FFortWinnerPlayerData> WinningPlayerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamsLeft, meta=(AllowPrivateAccess=true))
    int32 TeamsLeft;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EAirCraftBehavior AirCraftBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bStormReachedFinalPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EFriendlyFireType FriendlyFireType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameMemberInfoArray GameMemberInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<uint8> ActiveTeamNums;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentPlaylistId, meta=(AllowPrivateAccess=true))
    int32 CurrentPlaylistId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortSafeZoneIndicator* SafeZoneIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MinimapMaterial;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortAthenaMapInfo* MapInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MinimapMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BroadcastSpectatorInfo, meta=(AllowPrivateAccess=true))
    AFortBroadcastSpectatorInfo* BroadcastSpectatorInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GamePhase, meta=(AllowPrivateAccess=true))
    EAthenaGamePhase GamePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EventTournamentRound, meta=(AllowPrivateAccess=true))
    EEventTournamentRound EventTournamentRound;
    
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
    int32 PlayerBotsLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TeamBotsLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Aircraft, meta=(AllowPrivateAccess=true))
    TArray<AFortAthenaAircraft*> Aircrafts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bAircraftIsLocked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MeshNetworkStatus, meta=(AllowPrivateAccess=true))
    FMeshNetworkStatus MeshNetworkStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClientVolumeManagerReplicated OnClientVolumeManagerReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortVolumeManager> VolumeManagerToUse;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_VolumeManager, meta=(AllowPrivateAccess=true))
    AFortVolumeManager* VolumeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ResurrectionEnabledRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SpawnMachineIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SpawnCardIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FSpawnMachineRepDataArray SpawnMachineRepData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GoldenPoiLocationTags, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GoldenPoiLocationTags;
    
public:
    AFortGameStateAthena();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void UpdateAllGoldenPoiColor(FLinearColor Color, const FSlateFontInfo& Font);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetLocationText(const FGameplayTag& LocationTag, const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetLocationPosition2D(const FGameplayTag& LocationTag, FVector2D Location);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetLocationFont(const FGameplayTag& LocationTag, const FSlateFontInfo& Font);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetLocationColor(const FGameplayTag& LocationTag, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatingIslandInformation(FVector WorldPosition, bool bActivated);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RunPerfMemCheatScript_Client_Replicated(bool bStartStatFiles);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWinnerAnnounced();
    
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
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_SkyTubesDisabled();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerChangelistNumber();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SafeZonePhase();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlaylistTimeRemaining();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayersLeft();
    
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
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_GoldenPoiLocationTags();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_GamePhase(EAthenaGamePhase OldGamePhase);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EventTournamentRound();
    
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
    void OnRep_BroadcastSpectatorInfo();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_bPlaylistStoppedSafeZonePhases();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Aircraft();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsTeleportToCreativeHubAllowed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTeamSwitchAllowed(const APawn* SwitchingPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsResurrectionEnabled(AFortPlayerPawn* PlayerPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaygroundModePlaylist() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerTriggeredRespawnAllowed(const AFortPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamePhaseNotificationSkipped(EAthenaGamePhaseStep GamePhaseToSkip) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreativeOrPlaygroundModePlaylist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreativeModePlaylist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreativeLTMPlaylist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortSafeZoneIndicator* GetSafeZoneIndicator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FGameplayTagContainer GetPoiGridTagsForLocation(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortPlaylistType GetPlaylistType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlaylistTeams(TArray<uint8>& OutTeams) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverridenSiphonWoodValue(const APawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverridenSiphonStoneValue(const APawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverridenSiphonMetalValue(const APawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverridenSiphonHealthValue(const APawn* Pawn) const;
    
    UFUNCTION(BlueprintCallable)
    float GetOverriddenVehicleTrickScore(const AFortPlayerController* Controller, float InTrickScore);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AFortGameplayMutator* GetMutatorByClass(const AActor* ContextActor, TSubclassOf<AFortGameplayMutator> MutatorClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxPlaylistPlayers() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetCurrentPlaylistName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAthenaBattleBusItemDefinition* GetBattleBusForPlayer(AFortPlayerControllerAthena* PC) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetAthenaPlaylistContextTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortAthenaAircraft* GetAircraft(int32 AircraftIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAthenaAerialPhase GetAerialPhase(AFortPlayerControllerAthena* PlayerController) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanUseSlowMotionOnVictory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRespawnOnStarterIsland() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanChangeGameplayOptions();
    
    
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

