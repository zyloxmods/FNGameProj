#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FortAthenaMutator_GameModeBase.h"
#include "FortSquadStartSearchParamData.h"
#include "RespawnAndSpectateSelectManager.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "ArgonEndTraversePointSetDelegate.h"
#include "ArgonOnSupplyDropClusterSpawnedDelegate.h"
#include "ArgonOnTeamTicketCountChangedDelegate.h"
#include "ArgonPlayerFinishedDelegate.h"
#include "ArgonPlayerInfo.h"
#include "ArgonPlayerReachedEndWithoutEnoughTicketsDelegate.h"
#include "ArgonRacePhaseChangedDelegate.h"
#include "ArgonRaceStateInfo.h"
#include "ArgonRoute.h"
#include "ArgonSupplyDropPointData.h"
#include "ArgonTeamProgressBarInfo.h"
#include "ArgonTeamTicketCount.h"
#include "ArgonVehicleOption.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_Argon.generated.h"

class AActor;
class AArgonTraversePoint;
class AAthenaHoldingArea;
class AAthenaTraversePoint;
class AFortAthenaMutator_GameStartCountdown;
class AFortAthenaMutator_RespawnAndSpectateSelect;
class AFortAthenaMutator_SynchronizedTeleport;
class AFortPlayerPawn;
class AFortPlayerStateAthena;
class AFortSquadStart;
class UCurveFloat;
class UFortGameplayAbility_JumpBoostPack;
class UFortMontageItemDefinitionBase;
class UFortWorldItemDefinition;
class UNiagaraSystem;
class UParticleSystem;

UCLASS(Blueprintable)
class ARGONRUNTIME_API AFortAthenaMutator_Argon : public AFortAthenaMutator_GameModeBase, public IRespawnAndSpectateSelectManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinInitialVehicleFuelPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxInitialVehicleFuelPercent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArgonPlayerFinished OnArgonPlayerFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArgonPlayerReachedEndWithoutEnoughTickets OnArgonPlayerReachedEndWithoutEnoughTickets;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArgonRacePhaseChanged OnArgonRacePhaseChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArgonEndTraversePointSet OnArgonEndTraversePointSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArgonOnTeamTicketCountChanged OnTeamTicketCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArgonOnSupplyDropClusterSpawned OnSupplyDropClusterSpawned;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArgonRoute> Routes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSquadStartSearchParamData StartPOISquadStartSearchParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bUseOverridingSpawnTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> OverridingSpawnTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TeleportingPlayersText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PreCountdownTextDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArgonVehicleOption> VehicleOptionsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EndRaceAfterNumFinishers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush EndLocationCompassBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush EndLocationLockedCompassBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndLocationCompassBrush_YOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndLocationCompassBrush_MinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndLocationCompassBrush_MaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndLocationCompassBrush_DistanceForMinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndLocationCompassBrush_DistanceForMaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush EndLocationMapBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush EndLocationLockedMapBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D EndLocationMapBrushScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RacePositionStatGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* TicketItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumTicketsNeededToCompleteRace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumEnemiesTrackedOnProgressBarUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSquadmatesTrackedOnProgressBarUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EntireSquadDeadRespawnViewPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EntireSquadDeadRespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> EntireSquadDeadRespawnActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RespawnOffsetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinRespawnHeightAboveGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArgonSupplyDropPointData SupplyDropPointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bAreDropsAlwaysTriggeredByFirstPlacePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SupplyDropPercentCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxConsecutiveDropsOnSameSideOfPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinPathDropOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxPathDropOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinDropTriggerSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxDropTriggerSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinDropDistFromRaceEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat FirstDropTriggerDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumRepopulationsPerRacePathDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DelayBeforeRepopulatingRacePathDrops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumDropsAroundEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DelayBetweenEndPointDrops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinEndDropRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxEndDropRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumRepopulationsPerEndPointDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DelayBeforeRepopulatingEndPointDrops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector StartingPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMontageItemDefinitionBase* StartingLineEmote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxStartingLineEmoteDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinStartingLineEmotePlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxStartingLineEmotePlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bPlayStartingLineEmoteBeforeCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMontageItemDefinitionBase* FinishedRaceEmote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat FinishedRaceEmoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* SquadmateVictoryVFXTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FinishedPlayerDespawnVFXTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxFloorCheckDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumNearbyTicketsToShowOnCompass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumNearbyTicketsToShowInWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush TicketCompassBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TicketCompassBrush_YOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TicketCompassBrush_Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SortClientTicketComponentsTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush AcquiredAllTicketsMapBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TicketSpecialActorCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> AnalyticsAttributeNameToStatNameMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGameplayAbility_JumpBoostPack> JumpBoostPackAbilityClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentRaceState, meta=(AllowPrivateAccess=true))
    FArgonRaceStateInfo CurrentRaceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortSquadStart*> SquadStarts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RacingPlayersByPlace, meta=(AllowPrivateAccess=true))
    TArray<FArgonPlayerInfo> RacingPlayersByPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FArgonTeamProgressBarInfo> LeaderProgressInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamTicketCounts, meta=(AllowPrivateAccess=true))
    TArray<FArgonTeamTicketCount> TeamTicketCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAthenaHoldingArea* SquadStartHoldingArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EndTraversePoint, meta=(AllowPrivateAccess=true))
    AArgonTraversePoint* EndTraversePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_SynchronizedTeleport* TeleportMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_GameStartCountdown* GameStartCountdownMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_RespawnAndSpectateSelect* RespawnAndSpectateSelectMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, AActor*> EntireSquadDeadRespawnActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NumSupplyDropClustersSpawned, meta=(AllowPrivateAccess=true))
    uint8 NumSupplyDropClustersSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float RaceStartTime;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AFortPlayerPawn>> FinishedPlayerPawns;
    
public:
    AFortAthenaMutator_Argon();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void SortClientTicketComponents();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamTicketCounts();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RacingPlayersByPlace();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NumSupplyDropClustersSpawned();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EndTraversePoint();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentRaceState();
    
    UFUNCTION(BlueprintCallable)
    void OnEndTraversePointTouched(AAthenaTraversePoint* PointActor, AFortPlayerStateAthena* TouchingPlayer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingRespawnAndSpectateSelectMutator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTeamFinishedRace(uint8 Team) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPlayerFinishedRace(const AFortPlayerStateAthena* PlayerState) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerTeleportComplete(AFortPlayerStateAthena* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void HandleGroupTeleportComplete();
    
    UFUNCTION(BlueprintCallable)
    void HandleGameStartCountdownEnd();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWorldItemDefinition* GetTicketItemDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRandomStartingLineEmotePlayRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRaceTimeElapsed() const;
    
    UFUNCTION(BlueprintCallable)
    void GetProgressBarUIInfo(float& OutMyPercent, TArray<float>& OutSquadmatePcts, uint8& OutNumSquadTickets, TArray<FArgonTeamProgressBarInfo>& OutEnemyProgressInfos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerTeamPlacement(AFortPlayerStateAthena* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfTicketsTeamHasAcquired(uint8 Team) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfTicketsNeededToFinishRace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AArgonTraversePoint* GetEndTraversePoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DidPlayerCrossFinishLine(const AFortPlayerStateAthena* PlayerState) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

