#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AthenaGameMessageData.h"
#include "EUraniumCartMovementRuleOnNewRound.h"
#include "EUraniumEventId.h"
#include "EUraniumRoundEndCondition.h"
#include "EUraniumRoundPhase.h"
#include "FortAthenaMutator_GameModeBase.h"
#include "FortOperationsCharacterPartsFactionAuthority.h"
#include "InfiltrationRoundInfoMutatorInterface.h"
#include "RegisterWithMutatorComponentManager.h"
#include "Templates/SubclassOf.h"
#include "UraniumChangeRoundEndVisibilityDelegate.h"
#include "UraniumChangeRoundProgressVisibilityDelegate.h"
#include "UraniumOnOvertimeChangedDelegate.h"
#include "UraniumOnRoundCompletedDelegate.h"
#include "UraniumOnRoundDataUpdatedDelegate.h"
#include "UraniumOnShowRoundIntroDelegate.h"
#include "UraniumOnTeamsRolesChangedDelegate.h"
#include "UraniumPOIData.h"
#include "UraniumRoundData.h"
#include "UraniumTeleportOutCompleteDelegate.h"
#include "FortAthenaMutator_Uranium.generated.h"

class AActor;
class AFortAthenaMutator_InventoryOverride;
class AFortAthenaMutator_RespawnWave;
class AFortAthenaMutator_SynchronizedTeleport;
class AFortCheckPointCosmeticActor;
class AFortMissionStormShield;
class AFortPlayerPushableCart;
class AFortPlayerStateAthena;
class UCurveFloat;
class UFortAthenaCustomTimeDilationManager;
class UMaterialParameterCollection;
class USoundBase;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_Uranium : public AFortAthenaMutator_GameModeBase, public IFortOperationsCharacterPartsFactionAuthority, public IInfiltrationRoundInfoMutatorInterface, public IRegisterWithMutatorComponentManager {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInitialized);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInitialized OnInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUraniumTeleportOutComplete OnTeleportOutComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUraniumChangeRoundEndVisibility OnUraniumChangeRoundEndVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUraniumOnShowRoundIntro OnShowRoundIntro;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUraniumChangeRoundProgressVisibility OnUraniumChangeRoundProgressVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bPerkSelectBeforePOICamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RoundResultsText_AttackersWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RoundResultsText_AttackersLost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RoundResultsText_DefendersWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RoundResultsText_DefendersLost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RoundIntroText_Attacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RoundIntroText_Defending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* RoundIntroFactionSound_Attacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* RoundIntroFactionSound_Defending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* MatchEndSound_Win_Attackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* MatchEndSound_Win_Defenders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* MatchEndSound_Lose_Attackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* MatchEndSound_Lose_Defenders;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortPlayerPushableCart> PushCartClass;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_PushCart, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerPushableCart> PushCart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortMissionStormShield> StormShieldClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortMissionStormShield* StormShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RespawnLocationOffset_PusherTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RespawnLocationOffset_DefenderTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StartMovingRespawnCheckPointPct_PusherTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StartMovingRespawnCheckPointPct_DefenderTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StopMovingRespawnCheckPointPct_PusherTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StopMovingRespawnCheckPointPct_DefenderTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MovingRespawnOffsetMultiplier_PusherTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MovingRespawnOffsetMultiplier_DefenderTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PercentToMoveRespawnTowardCartViaTeamSize_PusherTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PercentToMoveRespawnTowardCartViaTeamSize_DefenderTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bAlignMovingRespawnToCart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinRespawnHeightAboveGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentMovingRespawnOffset_PusherTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentMovingRespawnOffset_DefenderTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector RespawnLocation_PusherTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector RespawnLocation_DefenderTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentPOI, meta=(AllowPrivateAccess=true))
    FUraniumPOIData CurrentPOI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SafeZoneRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AircraftOffsetFromRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SupplyDropRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfRounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUraniumRoundEndCondition RoundEndCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUraniumCartMovementRuleOnNewRound CartMovementRuleOnNewRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bOnRoundEndSwitchTeamRoles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bOnRoundSetUpResetPlayerAbilities;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoundPhaseDurations[15];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndOfRoundCameraFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndOfRoundCameraFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndOfRoundStasisDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RoundData, meta=(AllowPrivateAccess=true))
    FUraniumRoundData RoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EarlyEndGame_BlowOutRoundNumberMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EarlyEndGame_BlowOutPointSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EarlyEndGame_OutNumberedPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentRoundPhase, meta=(AllowPrivateAccess=true))
    EUraniumRoundPhase CurrentRoundPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bRoundTimerStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MatchTimeAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MatchTimeAddedPerCheckpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PushersAbandonedCartOvertime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PushersAbandonedCartOvertimeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PushersAbandonedCartOvertimeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPushCartIsPushableAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PushersAbandonedCartStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PushersAbandonedCartDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bInOvertime, meta=(AllowPrivateAccess=true))
    uint8 bInOvertime: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPerkModeOn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldPlayFactionIntro: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DestroyActorsOnNewRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ActorClassesToDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PlayersImmediatelyReenterGameplayAfterSelectingAPerk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MinimapMaterialParameterCollection;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUraniumOnOvertimeChanged OnOvertimeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUraniumOnRoundDataUpdated OnRoundDataUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUraniumOnRoundCompleted OnRoundCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUraniumOnTeamsRolesChanged OnTeamsRolesChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RoundCompleteAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RoundWinAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MatchWinAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowFullSplineOnMapUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortCheckPointCosmeticActor> CheckPointMarkerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SplineGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CameraGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer POIParentGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSafeToTurnOnCameraAfterRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUraniumEventId, FAthenaGameMessageData> GameMessages_Pushers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUraniumEventId, FAthenaGameMessageData> GameMessages_Defenders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EventTracking_TimeBetweenTicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EventTracking_TimeIsLowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EventTracking_TimeIsExtraLowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EventTracking_CheckPointIsNearDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TeleportingPlayersOutText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForcePerkPickerOnCheckpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAthenaCustomTimeDilationManager* TimeDilationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* EndRoundTimeDilationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndRoundTimeDilationDuration;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_SynchronizedTeleport* TeleportMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_InventoryOverride* InventoryOverrideMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_RespawnWave* RespawnWaveMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 CheckpointTeleportPlayersReleased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeleportComplete, meta=(AllowPrivateAccess=true))
    uint8 CheckpointTeleportComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TeleportHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCheatDrawRespawnLocations;
    
public:
    AFortAthenaMutator_Uranium();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void TickUraniumEvents();
    
private:
    UFUNCTION(BlueprintCallable)
    void TeleportPlayerLoadComplete(AFortPlayerStateAthena* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void StartEndOfRoundStasis();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeleportComplete();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RoundData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PushCart();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentRoundPhase();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentPOI();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bInOvertime();
    
    UFUNCTION(BlueprintCallable)
    void OnPushCartTeamsRolesChanged(uint8 NewPusherTeam, uint8 NewDefenerTeam);
    
    UFUNCTION(BlueprintCallable)
    void OnPushCartReachedCheckPoint(int32 CheckPointIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPushCartPushersOrDefendersChanged();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlaylistDataLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContainerTags);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetWinningTeams(const TArray<uint8>& InWinningTeams);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTeleportComplete();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleRoundPhase(EUraniumRoundPhase NewRoundPhase);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetWinningTeamForRound(int32 RoundNumber) const;
    
    UFUNCTION(BlueprintCallable)
    void GetRoundTeamWinners(TArray<uint8>& TeamWinnersEachRound);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerPushableCart* GetPushCart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentRoundNumber() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentRoundCheckPoint() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

