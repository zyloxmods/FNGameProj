#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Info.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EAthenaGamePhase.h"
#include "EFortMinigameClassResetType.h"
#include "EFortMinigameEnd.h"
#include "EFortMinigameExec.h"
#include "EFortMinigamePlayerSpawnLocationSetting.h"
#include "EFortMinigamePostGameSpawnLocationSetting.h"
#include "EFortMinigameState.h"
#include "EFortQuestObjectiveStatEvent.h"
#include "EMinigameFullscreenMapWidgetType.h"
#include "EMinigameGameEndCallout.h"
#include "EMinigamePlayerPersistence.h"
#include "EMinigameScoreboardStates.h"
#include "EMinigameWinCondition.h"
#include "EVolumeState.h"
#include "FortInitializationInterface.h"
#include "FortMinigameStatCollection.h"
#include "FortMinigameStatQuery.h"
#include "FortMinigameTimes.h"
#include "FortMutatorOwner.h"
#include "FortVolumeAccessor.h"
#include "ItemAndCount.h"
#include "MinigameClassSlot.h"
#include "MinigameEndCondition.h"
#include "MinigamePlayer.h"
#include "MinigamePlayerBucket.h"
#include "MinigamePlayers.h"
#include "MinigameScoreboardBucketRow.h"
#include "MinigameScoreboardPlayerRow.h"
#include "MinigameStatRow.h"
#include "MinigameTeam.h"
#include "OnBossInfoChangedDelegate.h"
#include "OnCurrentRoundChangedDelegate.h"
#include "OnHealthIndicatorChangedDelegate.h"
#include "OnMinigameEndGameDelegate.h"
#include "OnMinigameHideHUDDelegate.h"
#include "OnMinigamePlayerSpawnedDelegate.h"
#include "OnMinigameStatChangedDelegate.h"
#include "OnPlayModeChangedDelegate.h"
#include "OnPlayerChangedClassDelegate.h"
#include "OnPlayerChangedDelegate.h"
#include "OnPlayerChangedTeamDelegate.h"
#include "OnPlayerClassEventDelegate.h"
#include "OnPlayerJoinInProgressDelegate.h"
#include "OnPlayerPawnEventDelegate.h"
#include "OnStateChangedDelegate.h"
#include "OnUIExtensionsChangedDelegate.h"
#include "RefreshIndicatorPlayersCacheDelegate.h"
#include "SimpleMinigameDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "UIExtension.h"
#include "FortMinigame.generated.h"

class AActor;
class AController;
class AFortGameplayMutator;
class AFortPlayerController;
class AFortPlayerControllerAthena;
class AFortPlayerPawn;
class AFortPlayerPawnAthena;
class AFortPlayerState;
class AFortPlayerStateAthena;
class AFortPlayerStateZone;
class AFortVolume;
class APawn;
class APlayerState;
class UCreativePlayerHealthInfoComponent;
class UFortCreativeCreatureManagerComponent;
class UFortCreativeTeleporterManagerComponent;
class UFortMinigameLogicComponent;
class UFortMinigamePlayerStartComponent;
class UFortMinigameStatFilter;
class UFortWorldItemDefinition;
class UObject;
class USceneComponent;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class AFortMinigame : public AInfo, public IFortMutatorOwner, public IFortInitializationInterface, public IFortVolumeAccessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FUniqueNetIdRepl> PendingPlayers;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateChanged StateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinigameHideHUD MinigameHideHUDDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleMinigameDelegate StatChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinigameStatChanged FullStatChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinigamePlayerSpawned OnMinigamePlayerSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinigameEndGame MinigameEndGameDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerChanged PlayerAddedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerChanged PlayerRemovedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerChangedTeam PlayerChangedTeamDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerClassEvent OnPlayerClassApplied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRefreshIndicatorPlayersCache OnRefreshIndicatorPlayersCache;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerClassEvent OnPlayerClassRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerJoinInProgress OnPlayerJoinInProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHealthIndicatorChanged OnCreativePlayerIndicatorRulesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBossInfoChanged OnCreativeBossInfoRulesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleMinigameDelegate MinigameStartedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleMinigameDelegate MinigameEndedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleMinigameDelegate MinigameTeamConfigUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleMinigameDelegate MinigameClassConfigUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerPawnEvent OnPawnTeleportedForMinigame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUIExtensionsChanged OnUIExtensionsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayModeChanged OnPlayModeChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrentRoundChanged OnCurrentRoundChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIExtension> UIExtensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=DoRep_UIExtensionTags, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UIExtensionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentRound, meta=(AllowPrivateAccess=true))
    int32 CurrentRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TotalRounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MinigamePlayer, meta=(AllowPrivateAccess=true))
    FMinigamePlayers PlayerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FMinigamePlayers SpectatingPlayerArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FMinigameEndCondition> EndConditionArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemovePawnOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMinigameStatFilter> PlayerDeathsStatFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepItemsBetweenRounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentageOfResourcesKeptBetweenRounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReloadAndRestockWeaponsEachRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UFortWorldItemDefinition*, int32> RestockAmmoAmounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultRestockAmmoAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLastTeamStandingWins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowStandardEndGameConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndGameOnMatchPointWin;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleMinigameDelegate ServerTimeReplicatedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 AutoStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EFortMinigamePlayerSpawnLocationSetting SpawnLocationSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EFortMinigamePostGameSpawnLocationSetting PostGameSpawnLocationSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float WarmupDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PostGameResetDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float GameWinnerDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float GameScoreDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float RoundWinnerDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float RoundScoreDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ServerEndgameDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bTimerCountsDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TeamArray, meta=(AllowPrivateAccess=true))
    TArray<FMinigameTeam> TeamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ClassSlotArray, meta=(AllowPrivateAccess=true))
    TArray<FMinigameClassSlot> ClassSlotArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMinigameStatQuery> BaseEndConditionArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortMinigameStatFilter>> TrackedStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortMinigameStatFilter>> ScoreboardStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StatsChanged, meta=(AllowPrivateAccess=true))
    FFortMinigameStatCollection RoundStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StatsChanged, meta=(AllowPrivateAccess=true))
    FFortMinigameStatCollection GameStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    EFortMinigameState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortMinigameState PreviousState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMinigameStatFilter> CompletionTimeStatFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMinigameStatFilter> ScoreStatFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMinigameStatFilter> LapTimeStatFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMinigameStatFilter> TimeAliveStatFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 DefaultClassSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortMinigameClassResetType ClassResetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxLivesForPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 TeamToSwapToWhenOutOfSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AutoEndTeamThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ServerTime, meta=(AllowPrivateAccess=true))
    FFortMinigameTimes ServerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortMinigameTimes CachedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bStopwatchMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastRoundDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortMinigameLogicComponent*> MinigameComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortMinigamePlayerStartComponent*> PlayerStartComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortCreativeCreatureManagerComponent* CreatureManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortCreativeTeleporterManagerComponent* TeleporterManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCreativePlayerHealthInfoComponent* CreativePlayerHealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Volume, meta=(AllowPrivateAccess=true))
    AFortVolume* Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bSortScoreboardEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bTeamMinigame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bTeamsAreStable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 NumTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAllowJoinInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMinigamePlayerPersistence PlayerPersistence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortPlayerState* MinigameStarter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamRotationSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TeamRotationCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bStableTeamCosmetics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EMinigameFullscreenMapWidgetType MinigameMapWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EMinigameWinCondition WinCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllTeamsMustMatchEndConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bOnlyAllowRespawningIfPlayerStartPadsFound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EMinigameGameEndCallout GameEndCallout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 VictoryAudioIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 DrawAudioIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 DefeatAudioIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bShowCumulativeScoreboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MinigameStartCameraBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ClientMinigameStartedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MinigameEndCameraBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ClientMinigameEndedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FUIExtension> AllowedUIExtensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EFortMinigameState> MinigameEditModeStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAllowFriendlyFire;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 NumMinigameComponentsServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bVolumeNavigationHasBuilt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> RoundWinHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerBuckets, meta=(AllowPrivateAccess=true))
    TArray<FMinigamePlayerBucket> PlayerBuckets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer OldUIExtensionTags;
    
public:
    AFortMinigame();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseTeamScoring() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void UnregisterVolumeAsNavigationObserver(USceneComponent* RegisteredComponent);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ToggleAutoRestartMinigame();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void StartMinigame(AFortPlayerController* InstigatorPC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldRotateTeams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldDropOrDestroyItem(UPARAM(Ref) bool& bShouldDrop, UPARAM(Ref) bool& bShouldDestroy, AFortPlayerController* PC, const UFortWorldItemDefinition* ItemDef) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetWinningTeamIndex(const uint8 InWinningTeamIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupTeams();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTimeAliveStat(AFortPlayerController* PlayerController, const float TimeAliveSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamNameForTeam(uint8 TeamIndex, const FString& TeamName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetTeamForPlayer(AFortPlayerState* PlayerState, uint8 NewTeam, bool bTemporary, bool bChangeTeamWithoutRespawn);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamColorIndexForTeam(uint8 TeamIndex, int32 TeamColorIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetStatForPlayerId(const FUniqueNetIdRepl& InPlayerID, TSubclassOf<UFortMinigameStatFilter> InFilter, int32 InValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetStatForPlayerBucket(int32 BucketIndex, TSubclassOf<UFortMinigameStatFilter> InFilter, int32 InValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetStatForPlayer(const AFortPlayerState* InPlayer, TSubclassOf<UFortMinigameStatFilter> InFilter, int32 InValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetStatForGroup(TSubclassOf<UFortMinigameStatFilter> InFilter, int32 InValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetPvPTeamForPlayer(AFortPlayerState* PlayerState, int32 Team, bool bTemporary);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMaxInitTeamSizeForTeam(uint8 TeamIndex, int32 TeamSize);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetLapTimeStat(AFortPlayerController* PlayerController, const float LapTimeSeconds);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetInitTeamSizeWeightForTeam(uint8 TeamIndex, int32 TeamSizeWeight);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetClassSlotName(uint8 ClassSlotIndex, const FString& ClassName);
    
    UFUNCTION(BlueprintCallable)
    void SetClassSlotInventory(uint8 ClassSlotIndex, const TArray<FItemAndCount>& InventoryItems);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetClassSlotForPlayer(AFortPlayerState* PlayerState, uint8 NewClassSlot, FOnPlayerChangedClass OnComplete, bool bRespawnPlayer, bool bResetCurrentVitals, bool bClearAllItems, float ClassSwitchDelay);
    
private:
    UFUNCTION(BlueprintCallable)
    void ServerEventLogScoreChanged(EFortQuestObjectiveStatEvent Type, UObject* TargetObject, AFortPlayerController* PlayerController, const FGameplayTagContainer& TargetTags, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& ContextTags, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void ServerEventLogRoundEnded(AFortPlayerController* InstigatorPC, EFortMinigameEnd EndMethod, EFortMinigameState NextState);
    
    UFUNCTION(BlueprintCallable)
    void ServerEventLogMinigameState(EFortMinigameState NewState, int32 Duration);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void RestartMinigame(AFortPlayerController* InstigatorPC);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetStats();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveMinigamePlayer(AFortPlayerState* PlayerState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveMinigameComponent(UFortMinigameLogicComponent* MinigameComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveMinigameActor(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveEndConditionForTeam(uint8 TeamIndex, const FFortMinigameStatQuery& StatQuery);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEndCondition(const FFortMinigameStatQuery& StatQuery);
    
private:
    UFUNCTION(BlueprintCallable)
    void RegisterVolumeAsNavigationObserver();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RefreshVoiceForPlayers();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RefreshVoiceForPlayer(AFortPlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshGameRulesPreview();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RecheckInventory(APawn* PlayerPawn);
    
private:
    UFUNCTION(BlueprintCallable)
    void QueueAllAIForDespawn();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PutPlayerIntoStasis(APawn* PlayerPawn);
    
    UFUNCTION(BlueprintCallable)
    void PutPlayerControllerIntoStasis(AFortPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PostGameResetPlayers();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OverridePlayerSpawnLocation(APawn* PlayerPawn, AFortPlayerStateAthena* PlayerState, FVector& OutLocation, FRotator& OutRotation, bool& bOutRespawningOnGround);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnVolumeStateChanged(EVolumeState NewState, AFortVolume* ChangedVolume);
    
    UFUNCTION(BlueprintCallable)
    void OnTimeLimitElapsed();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSpawningFromSaveFinish();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Volume();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamArray();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StatsChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerBuckets();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MinigamePlayer();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentRound();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ClassSlotArray();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateTeamIndexChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerPawnPossessedDuringTransition(APawn* PlayerPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerPawnPossessedDuringMinigame(APawn* PlayerPawn);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMinigameStatChanged(const AFortPlayerController* InStatOwner, const TSubclassOf<UFortMinigameStatFilter>& TrackedStatClass, int32 Count);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInGameLoadScreenChanged(AFortPlayerControllerAthena* PlayerController, bool bEnableLoadScreen, FText HUDReasonText);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase GamePhase);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFortPlayerDied(AFortPlayerPawnAthena* FortPlayerPawnAthena);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEndGameReturnPlayersFromMatchmaking();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnClientFinishTeleportingForMinigame(AFortPlayerPawn* InPawn);
    
    UFUNCTION(BlueprintCallable)
    bool OnCheckIfClientIsSafeToRespawn(AFortPlayerControllerAthena* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginSpectating(AFortPlayerStateZone* FPSZ);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void NotifyStatEvent(EFortQuestObjectiveStatEvent Type, UObject* TargetObject, AFortPlayerController* PlayerController, const FGameplayTagContainer& TargetTags, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& ContextTags, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void NativeExitedVolumeEvent(AFortPlayerState* LeftPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void NativeEnteredVolumeEvent(AFortPlayerState* PlayerState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void MoveMinigamePlayerToSpectate(AFortPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void LTMFlowDisableMatchmakingBackfillAndJoinInProgress();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_RecordPostGameStatsForPlayer(UPARAM(Ref) FMinigamePlayer& PlayerEntry);
    
public:
    UFUNCTION(BlueprintCallable)
    void K2_IsInProgress(EFortMinigameExec& OutExec);
    
    UFUNCTION(BlueprintCallable)
    void K2_HasStarted(EFortMinigameExec& OutExec);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void K2_ExitedVolumeEvent(AFortPlayerState* LeftPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void K2_EnteredVolumeEvent(AFortPlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWinningPlayerState(const APlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWinningPlayerId(const FUniqueNetIdRepl& PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitingForCameras() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTransitioning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTeamMinigame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPregame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPostGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerUsingClassSlot(AFortPlayerState* PlayerState, uint8 ClassSlot) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsPlayerTeleportingOrRespawningForGameplay(AFortPlayerStateAthena* PlayerToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerSpectatingMinigame(const AFortPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerPersistenceRequired(const AFortPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerOutOfLives(const AFortPlayerState* InPlayerState, const bool bOnlyMinigamePlayers) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerOnRoundWinningTeam(AFortPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerOnGameWinningTeam(AFortPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerLocationBlockedForTeleport(AFortPlayerPawnAthena* PlayerPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInOurVolume(AFortPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInMinigameByNetId(const FUniqueNetIdRepl& UniqueNetId, bool bCheckSpectatingPlayers) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInMinigame(const AFortPlayerState* PlayerState, bool bCheckSpectatingPlayers) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMinigameStarting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMinigameStarter(AFortPlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMinigameComponent(UFortMinigameLogicComponent* MinigameComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMinigameActor(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsLocationInsideTerrain(FVector Location, FHitResult& OutHit);
    
    UFUNCTION(BlueprintCallable)
    bool IsLocationBlockedForTeleport(AFortPlayerState* PlayerState, FVector LocationToCheck, FRotator RotationToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastRound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInWarmup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSetup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInPlayMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameWinnerShown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCuratedHub() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyPlayerSpawnLimited() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsActorPositionInsideTerrain(AActor* Actor, FHitResult& OutHit);
    
    UFUNCTION(BlueprintCallable)
    static void HighlightTopStats(UPARAM(Ref) TArray<FMinigameScoreboardBucketRow>& InOutScoreboardRows);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTimeLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasPlayerStartPads(const AFortPlayerState* InPlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMinigameStarter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleVolumeEditModeChange(bool bInEditMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleReplicationComplete(AFortPlayerControllerAthena* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMinigameWarmup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMinigameStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMinigameEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMinigameComponentRemoved(UFortMinigameLogicComponent* MinigameComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMinigameComponentInPlayChanged(UFortMinigameLogicComponent* MinigameComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMinigameComponentAdded(UFortMinigameLogicComponent* MinigameComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetWinningTeamIndexFromTeamIndex(const uint8 InTeamIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWarmupTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeRemainingUntilAutoStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable)
    UFortCreativeTeleporterManagerComponent* GetTeleporterManagerComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetTeamToSwapToWhenOutOfSpawns(const AFortPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTeamName(uint8 TeamIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetTeamIndexForCosmeticDetails(uint8 TeamIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamColorIndex(uint8 TeamIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStatForPlayerId(const FUniqueNetIdRepl& PlayerId, TSubclassOf<UFortMinigameStatFilter> InFilter, bool bGameTotal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStatForPlayerBucket(int32 BucketIndex, TSubclassOf<UFortMinigameStatFilter> InFilter, bool bGameTotal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStatForPlayer(const AFortPlayerState* InPlayer, TSubclassOf<UFortMinigameStatFilter> InFilter, bool bGameTotal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStatForGroup(TSubclassOf<UFortMinigameStatFilter> InFilter, bool bGameTotal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTagQuery GetStartQueryForPlayer(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStandingsForPlayer(const AFortPlayerState* InPlayerState, TSubclassOf<UFortMinigameStatFilter> InFilter, TArray<FMinigameStatRow>& OutStatRows, int32 RowsReturned);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortMinigamePlayerSpawnLocationSetting GetSpawnLocationSetting(const AFortPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable)
    void GetScoreboardStateTimes(TArray<float>& outStateTimes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetScoreboardRows(TArray<FMinigameScoreboardBucketRow>& OutScoreboardRows, const TArray<TSubclassOf<UFortMinigameStatFilter>>& SortOrder, bool bGameTotal, bool bHighlighting, bool bCountWins, EMinigameScoreboardStates ScoreboardState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetScoreboardRowForPlayerBucket(int32 BucketIndex, FMinigameScoreboardBucketRow& OutScoreboardRow, const TArray<TSubclassOf<UFortMinigameStatFilter>>& SortOrder, bool bGameTotal, bool bHighlighting, bool bCountWins, EMinigameScoreboardStates ScoreboardState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetScoreboardRowForPlayer(AFortPlayerState* PlayerState, FMinigameScoreboardPlayerRow& OutScoreboardRow, const TArray<TSubclassOf<UFortMinigameStatFilter>>& SortOrder, bool bGameTotal, bool bHighlighting, bool bCountWins, EMinigameScoreboardStates ScoreboardState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRuntime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRoundWinner(int32 Round) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRoundBasedGameWinnerNameOrTeam(FText& OutName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRoundBasedGameWinnerName(FText& OutName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPostGameTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPostGameResetDelay(EFortMinigameEnd EndMethod) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayerStartComponentsByTagQuery(TArray<UFortMinigamePlayerStartComponent*>& OutPlayerStartComponents, const FGameplayTagQuery& TagQuery);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerPlacement(const APlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerCount(bool bIncludeSpectators) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetParticipatingPlayers(TArray<AFortPlayerState*>& OutPlayers) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetOrderedMinigameStatsRows(TArray<FMinigameStatRow>& OutStats);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMinigameFullscreenMapWidgetType GetMinigameMapPanelDisplayType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMinigameComponentsByTagQuery(TArray<UFortMinigameLogicComponent*>& OutComponents, const FGameplayTagQuery& TagQuery) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxLivesForPlayer(const AFortPlayerState* PlayerState) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxInitTeamSize(uint8 TeamIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInitTeamSizeWeight(uint8 TeamIndex) const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetEndConditionValueForStatIfAny(const uint8 TeamNumber, const TSubclassOf<UFortMinigameStatFilter>& InStat, int32& OutValue);
    
    UFUNCTION(BlueprintCallable)
    bool GetEndConditionForStatIfAny(const uint8 TeamNumber, const TSubclassOf<UFortMinigameStatFilter>& InStat, FMinigameEndCondition& OutEndCondition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetDefaultClassSlot(const AFortPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentRoundWinnerName(FText& OutName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentRoundWinner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetClassSlotName(uint8 ClassSlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetClassSlotInventory(uint8 ClassSlotIndex, TArray<FItemAndCount>& InventoryItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetClassSlotForPlayer(AFortPlayerState* PlayerState, const bool bUseDeathInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBucketWinCount(int32& WinCount, const int32 BucketIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBucketForPlayerState(const APlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBucketForPlayerId(const FUniqueNetIdRepl& PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAirSpawnLocation(AFortPlayerStateAthena* PlayerState, FVector& OutLocation, FRotator& OutRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FormatStat(TSubclassOf<UFortMinigameStatFilter> InStat, int32 InValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ForceRespawn(AFortPlayerState* PlayerState, UPARAM(Ref) FGameplayTagContainer& RespawnReasons);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EvaluateStatQuery(const FMinigameEndCondition& InEndCondition, const int32 PlayerBucketIndex) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EndGame(AFortPlayerController* InstigatorPC, EFortMinigameEnd EndMethod);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DoRep_UIExtensionTags();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesTimerCountDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoAllPlayersHaveSpawnLocation(EFortMinigamePlayerSpawnLocationSetting SpawnLocation) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool DetermineSpawnLocation(AFortPlayerStateAthena* PlayerState, FVector& OutLocation, FRotator& OutRotation, bool& bOutRespawningOnGround);
    
    UFUNCTION(BlueprintCallable)
    void DeclareWinnerImmediately(int32 WinningBucket);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearTeleportForMinigame(AFortPlayerPawn* InPawn);
    
    UFUNCTION(BlueprintCallable)
    void ClearPlayerInventory(AFortPlayerControllerAthena* PlayerController);
    
public:
    UFUNCTION(BlueprintCallable)
    AActor* ChoosePlayerStart(AController* Player);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CheckRemainingLivingPlayersForEndCondition();
    
    UFUNCTION(BlueprintCallable)
    void CheckEndConditionsInternal();
    
    UFUNCTION(BlueprintCallable)
    void CheckEndConditions();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayerRespawn(const AFortPlayerState* InPlayerState) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CancelPendingClassSlotChange(AFortPlayerState* PlayerState, uint8 PendingClassSlot);
    
private:
    UFUNCTION(BlueprintCallable)
    void BroadcastStatsChangedDelegate();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreTeamsAsymmetrical() const;
    
    UFUNCTION(BlueprintCallable)
    bool AreEnoughPlayersLeftToContinueMatch();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ApplyMutatorsToPlayer(AFortPlayerState* PlayerState, bool bResetCurrentVitals);
    
public:
    UFUNCTION(BlueprintCallable)
    void AdvanceState();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddStatToPlayerBucket(int32 BucketIndex, TSubclassOf<UFortMinigameStatFilter> InFilter, int32 InValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddStatToPlayer(AFortPlayerState* InPlayer, TSubclassOf<UFortMinigameStatFilter> InFilter, int32 InValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddStatToGroup(TSubclassOf<UFortMinigameStatFilter> InFilter, int32 InValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddOrOverrideEndConditionForTeam(uint8 TeamIndex, const FFortMinigameStatQuery& StatQuery);
    
    UFUNCTION(BlueprintCallable)
    void AddOrOverrideEndCondition(const FFortMinigameStatQuery& StatQuery);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddMinigamePlayer(AFortPlayerState* PlayerState, bool bForceSpawn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddMinigameComponent(UFortMinigameLogicComponent* MinigameComponent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddMinigameActor(AActor* Actor);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void RemoveMutatorFromList(AFortGameplayMutator* Mutator) override PURE_VIRTUAL(RemoveMutatorFromList,);
    
    UFUNCTION()
    void GetMutatorsForContextActor(TArray<AFortGameplayMutator*>& OutMutators, const AActor* ContextActor) const override PURE_VIRTUAL(GetMutatorsForContextActor,);
    
    UFUNCTION()
    void GetMutatorRelevantPlayers(TArray<APlayerState*>& OutPlayers) const override PURE_VIRTUAL(GetMutatorRelevantPlayers,);
    
    UFUNCTION()
    void AddMutatorToList(AFortGameplayMutator* Mutator) override PURE_VIRTUAL(AddMutatorToList,);
    
    UFUNCTION()
    void WorldReady() override PURE_VIRTUAL(WorldReady,);
    
    UFUNCTION()
    bool NeedsWorldReady() const override PURE_VIRTUAL(NeedsWorldReady, return false;);
    
    UFUNCTION()
    void MatchStarted() override PURE_VIRTUAL(MatchStarted,);
    
};

