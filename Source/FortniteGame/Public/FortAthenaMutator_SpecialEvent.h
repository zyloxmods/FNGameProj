#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "AircraftFlightInfo.h"
#include "EAthenaGamePhaseStep.h"
#include "FortAthenaMutator.h"
#include "FortDelayRTMMData.h"
#include "FortSpecialEventEmoteData.h"
#include "FortSpecialEventGEData.h"
#include "FortSpecialEventOverrideParts.h"
#include "GenericSpecialEventDelegate.h"
#include "OnAllPlayersSanitizedDelegate.h"
#include "OnPawnLoadedDelegate.h"
#include "OnSanitizedPawnsBroadcastDelegate.h"
#include "OnTeleportAllPlayersFinishedDelegate.h"
#include "PawnState.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_SpecialEvent.generated.h"

class AFortAthenaAircraft;
class AFortPlayerController;
class AFortPlayerPawn;
class IFortSafeZoneInterface;
class UFortSafeZoneInterface;
class UInputComponent;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_SpecialEvent : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeleportAllPlayersFinished TeleportAllPlayersFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSanitizedPawnsBroadcast OnSantizedPawnsBroadcast;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllPlayersSanitized OnAllPlayersSanitized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPawnLoaded OnPawnLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericSpecialEvent OnResumeGame;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bPlayersAreInvincible, meta=(AllowPrivateAccess=true))
    bool bPlayersAreInvincible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumScoreBumpForAutomadeGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ScoreBrackets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnforceInfiniteWarmup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WarmupIslandPlayerStartTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UIToHideWhenOnlyRelevantToSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Aircraft, meta=(AllowPrivateAccess=true))
    AFortAthenaAircraft* EventAircraft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAircraftFlightInfo EventAircraftInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortAthenaAircraft> EventAircraftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bDisableHUD, meta=(AllowPrivateAccess=true))
    bool bDisableHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GameResumed, meta=(AllowPrivateAccess=true))
    uint8 GameResumed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AdditionalViewpoint, meta=(AllowPrivateAccess=true))
    FVector AdditionalViewpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bParachutesDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LastCSVEventName, meta=(AllowPrivateAccess=true))
    FString LastCSVEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bPawnsOnlyRelevantToOwner, meta=(AllowPrivateAccess=true))
    bool bPawnsOnlyRelevantToOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bCanStreamBuildingFoundationsIn, meta=(AllowPrivateAccess=true))
    bool bCanStreamBuildingFoundationsIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AllPlayerTeleportedCount, meta=(AllowPrivateAccess=true))
    int32 AllPlayerTeleportedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DelayPlayersFromReturningToLobbyData, meta=(AllowPrivateAccess=true))
    FFortDelayRTMMData DelayPlayersFromReturningToLobbyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName NamedWeightForContainerLootRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WeightForContainerLootRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortSpecialEventEmoteData> SpecialEventEmoteData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* SpecialEventsInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortSpecialEventOverrideParts> SpecialEventOverrideParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSpecialEventGEData GameplayEffectToApplyOnSwapToDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, int32> OverridePartsArrayIndexMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActivePawnStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPawnState> PawnStateData;
    
public:
    AFortAthenaMutator_SpecialEvent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void WarmUpIslandUpdated();
    
    UFUNCTION(BlueprintCallable)
    void UpdatePawnState(const FGameplayTagContainer& StatesToAdd, const FGameplayTagContainer& StatesToRemove);
    
    UFUNCTION(BlueprintCallable)
    void ToggleHUDs(bool bHide);
    
    UFUNCTION(BlueprintCallable)
    void ToggleDisableWeapons(bool bDisableWeapons);
    
    UFUNCTION(BlueprintCallable)
    void ToggleDisableParachutes(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void ToggleAllPlayersInvincibility(bool bInvincible);
    
    UFUNCTION(BlueprintCallable)
    void TeleportAllPlayers(FGameplayTagContainer EventTags, int32 TeleportsPerFrame, int32 SafeZoneIndex);
    
    UFUNCTION(BlueprintCallable)
    void SwapBodyParts(const int32 ArrayIndex, AFortPlayerController* FortPC);
    
    UFUNCTION(BlueprintCallable)
    void StartSafeZoneOverrideForEvent(int32 SafeZoneIndexForEvent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ShrinkSafeZone();
    
    UFUNCTION(BlueprintCallable)
    void SetWeightForContainerLootRoll(const float Weight);
    
    UFUNCTION(BlueprintCallable)
    void SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPawnsOnlyRelevantToOwner(bool bInPawnsRelevantOnlyToOwner);
    
    UFUNCTION(BlueprintCallable)
    void SetNamedWeightForContainerLootRoll(const FName WeightName);
    
    UFUNCTION(BlueprintCallable)
    void SetMatchTime(int32 NewMatchTime);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCanStreamBuildingFoundationsIn(bool bEnable);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAdditionalViewpoint(FVector WorldLocation);
    
    UFUNCTION(BlueprintCallable)
    void ResumeWinCondition();
    
    UFUNCTION(BlueprintCallable)
    void ResetWinConditionProgressToZero();
    
    UFUNCTION(BlueprintCallable)
    void ResetWinCondition();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ResetSpecialEventAircraft();
    
    UFUNCTION(BlueprintCallable)
    void ResetSafeZoneOverrideAfterEvent(int32 MinResetSafeZoneIndex, float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu);
    
    UFUNCTION(BlueprintCallable)
    void ResetMatchTimeToPrevious();
    
    UFUNCTION(BlueprintCallable)
    void RequestSanitizedPlayers(int32 NumPlayersRequested);
    
    UFUNCTION(BlueprintCallable)
    void PushSpecialEventEmoteInputComponent();
    
    UFUNCTION(BlueprintCallable)
    void PopSpecialEventEmoteInputComponent();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PlacePlayersInAircraft();
    
    UFUNCTION(BlueprintCallable)
    void PauseWinCondition(bool bLockScores);
    
    UFUNCTION(BlueprintCallable)
    void PauseSupplyDrops(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    void PauseStormProgression(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    void PauseStormDamage(bool bPause);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWarmUpTeleportComplete(AFortPlayerPawn* PlayerPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LastCSVEventName();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GameResumed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DelayPlayersFromReturningToLobbyData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bPlayersAreInvincible();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bPawnsOnlyRelevantToOwner();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bDisableHUD();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bCanStreamBuildingFoundationsIn();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AllPlayerTeleportedCount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Aircraft();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AdditionalViewpoint();
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
    
    UFUNCTION(BlueprintCallable)
    void OnAircraftFlightEnded(AFortAthenaAircraft* FortAthenaAircraft);
    
    UFUNCTION(BlueprintCallable)
    void OnAircraftExitedDropZone(AFortAthenaAircraft* FortAthenaAircraft);
    
    UFUNCTION(BlueprintCallable)
    void OnAircraftEnteredDropZone(AFortAthenaAircraft* FortAthenaAircraft);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void NotifyClientsGameResumed();
    
    UFUNCTION(BlueprintCallable)
    void JumpToSafeZonePhase(FVector PawnSpawnCenterLocation, float PawnSpawnMinDistance, float PawnSpawnMaxDistance);
    
    UFUNCTION(BlueprintCallable)
    void ForceSafeZoneFinalLocation(FVector NewFinalLocation, float DefaultAircraftOffsetFromMidLine, float MinDefaultMidlineAngle, float MaxDefaultMidlineAngle);
    
    UFUNCTION(BlueprintCallable)
    void CloseParachutes();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllPawnStates();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ClearAdditionalViewpoint();
    
    UFUNCTION(BlueprintCallable)
    void ChangeWinCondition(float NewGoalScore);
    
    UFUNCTION(BlueprintCallable)
    void AutobalanceTargetScore();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddCSVEvent(const FString& CSVEventName);
    
};

