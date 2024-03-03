#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "AthenaGameMessageData.h"
#include "CobaltCombatStormShieldArray.h"
#include "CobaltHideVsDisplayDelegate.h"
#include "CobaltPreRoundDisplayVisibilityDelegate.h"
#include "CobaltRoundAdvancedDelegate.h"
#include "CobaltRoundCompleteDelegate.h"
#include "CobaltRoundCompleteUIFinishedDelegate.h"
#include "CobaltShowVsDisplayDelegate.h"
#include "CobaltTeleportCompleteDelegate.h"
#include "CobaltWidgetRoundData.h"
#include "EFortItemType.h"
#include "FortAthenaMutator_GameModeBase.h"
#include "FortRespawnLogicData.h"
#include "InfiltrationRoundInfoMutatorInterface.h"
#include "PlaylistTimerValueUpdatedDelegate.h"
#include "StormShieldArrayUpdatedDelegate.h"
#include "TaggedPOI.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_Cobalt.generated.h"

class AActor;
class AAthenaCobaltStormShield;
class AFortAthenaMutator_InventoryOverride;
class AFortAthenaMutator_SynchronizedTeleport;
class AFortPlayerPawn;
class AFortPlayerStateAthena;
class UAudioComponent;
class UCurveFloat;
class UDeathEffectsPawnComponent;
class UFortAthenaCustomTimeDilationManager;
class UMaterialParameterCollection;
class USoundBase;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_Cobalt : public AFortAthenaMutator_GameModeBase, public IInfiltrationRoundInfoMutatorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCobaltTeleportComplete OnTeleportComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCobaltRoundComplete OnRoundComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCobaltRoundCompleteUIFinished OnRoundCompleteUIFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCobaltRoundAdvanced OnRoundAdvanced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCobaltShowVsDisplay OnShowVsDisplay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCobaltHideVsDisplay OnHideVsDisplay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStormShieldArrayUpdated OnStormShieldArrayUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlaylistTimerValueUpdated OnPlaylistTimerValueUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCobaltPreRoundDisplayVisibility OnUpdatePreRoundDisplayVisibility;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAthenaCobaltStormShield> StormShieldClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTaggedPOI> POIList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinimumDistanceBetweenPOIs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StormShieldRadiusMultiplierPerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StormShieldMinRadiusMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DelayBeforeStormShrink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StormShieldShrinkLocationMinOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StormShieldShrinkLocationMaxOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StormShieldShrinkRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StormShieldGrowthRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DelayBeforeNextRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DelayBeforePushToSpectateMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeRoundEndDeathAndStinger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeShowingRoundEndUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RadiusRatioForRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HeightOfSpawnIntoNewStormShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DistanceBetweenPlayersOfSameTeamDuringRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TeleportingPlayersText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TeleportingSpectatorsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bResetPlayerAbilitiesOnRoundEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RiftTeleportEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AvailablePerkRerolls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ResetPlayerInventoryBetweenRounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFortItemType> ItemTypesToRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespawnEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RoundDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RespawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRespawnLogicData RespawnLogicData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnFallbackHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnTraceEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MinimapMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinimumVersusScreenDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float POICameraViewPhaseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HideStormShieldDuringPOICameraViewPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreRoundDisplayDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreRoundDisplayDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoundStartWidgetSequenceAdditionalDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UILastManStandingDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaGameMessageData> RoundGameMessageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* StormShieldShrinkBeginSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* VictoryStingerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LoserStingerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoundEndStingerFadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDeathEffectsPawnComponent> DeathEffectsComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RoundResultsText_Win;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RoundResultsText_Lost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSkipWinLossScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShowTeammatesInMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShowEnemiesInMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TeammateMapIconScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EnemyMapIconScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_InventoryOverride* InventoryOverrideMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAthenaCustomTimeDilationManager* TimeDilationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* EndRoundTimeDilationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndRoundTimeDilationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RoundCompleteAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RoundWinAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FirstEliminationAccoladeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* SafeZoneMaterialCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SafeZoneLocMaterialParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SafeZoneScaleMaterialParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SafeZoneRadiusAtMaxSafeZoneScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> StormEyeActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxSupplyDropSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinSupplyDropSpawnTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeleportComplete, meta=(AllowPrivateAccess=true))
    bool bTeleportComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RoundStartWidgetSequenceRunning, meta=(AllowPrivateAccess=true))
    bool bRoundStartWidgetSequenceRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_SynchronizedTeleport* TeleportMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CombatStormShieldArray, meta=(AllowPrivateAccess=true))
    FCobaltCombatStormShieldArray CombatStormShieldArray;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_ActiveRound, meta=(AllowPrivateAccess=true))
    int8 ActiveRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsCobaltFinished;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int8 FirstRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamWinners, meta=(AllowPrivateAccess=true))
    TArray<uint8> TeamWinners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<uint8> TeamLosers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> PendingTeleportingPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimerHandle> MoveToSpectateTimerHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bClientPlaylistTimerStarted, meta=(AllowPrivateAccess=true))
    bool bClientPlaylistTimerStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* RoundEndStingerInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bUseStrictBracketStructure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WidgetRoundData, meta=(AllowPrivateAccess=true))
    FCobaltWidgetRoundData WidgetRoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsFinishedDisplayingRoundEndUI, meta=(AllowPrivateAccess=true))
    bool bIsFinishedDisplayingRoundEndUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* StormEyeActor;
    
public:
    AFortAthenaMutator_Cobalt();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateStormEyeVisuals();
    
    UFUNCTION(BlueprintCallable)
    void TeleportPlayerLoadComplete(AFortPlayerPawn* FortPlayerPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_WidgetRoundData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeleportComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamWinners();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RoundStartWidgetSequenceRunning();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CombatStormShieldArray();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsFinishedDisplayingRoundEndUI();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bClientPlaylistTimerStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveRound();
    
    UFUNCTION(BlueprintCallable)
    void HandleTeleportComplete();
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerStateTeleportComplete(AFortPlayerStateAthena* FortPlayerState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFinalRoundIndex() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void ClientCobaltRoundTimerComplete();
    
    UFUNCTION(BlueprintCallable)
    void AudioFadeChangeEvent(bool bFadeOut, float FadeTime);
    
    
    // Fix for true pure virtual functions not being implemented
};

