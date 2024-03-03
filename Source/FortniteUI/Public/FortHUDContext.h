#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "UObject/NoExportTypes.h"
#include "EFortContextualTutorialTypes.h"
#include "EFortIndicatorState.h"
#include "EFortQuickBars.h"
#include "EarnedBadgeEntry.h"
#include "FortBadgeCount.h"
#include "FortHUDTagPromptData.h"
#include "FortItemQuantityPair.h"
#include "FortPawnEquippedWeaponSignatureDelegate.h"
#include "FortPlayerDeathReport.h"
#include "OnWeaponHudKeyActionUpdatedDelegate.h"
#include "PawnUpdatedDecisionWindowStackSignatureDelegate.h"
#include "ZoneLoadingScreenHeadingConfig.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "FortBasicMissionInfo.h"
#include "FortFocusedBuildingInfo.h"
#include "FortHUDState.h"
#include "FortItemDelta.h"
#include "HUDBasicDelegateDelegate.h"
#include "OnActiveGameplayModifiersChangedDelegateDelegate.h"
#include "OnActorFocusedForCreativeDelegate.h"
#include "OnBigHitPointStatChangedDelegate.h"
#include "OnBuildModeChangedDelegate.h"
#include "OnBuildingFocusedDelegate.h"
#include "OnBuildingTrapDurabilityChangedDelegate.h"
#include "OnCanInteractDelegate.h"
#include "OnContextualReticleChangedDelegateDelegate.h"
#include "OnCursorModeChangedDelegateDelegate.h"
#include "OnCursorModeChangingDelegateDelegate.h"
#include "OnDamagedResourceBuildingDelegate.h"
#include "OnDamagedResourceVehicleDelegate.h"
#include "OnDebugHUDObjectiveHeightChangedDelegate.h"
#include "OnEarnedBadgesChangedDelegate.h"
#include "OnEndOfDayRecapDelegate.h"
#include "OnFocusedBuildingAttachedTrapChangedDelegate.h"
#include "OnFocusedBuildingStateChangedDelegate.h"
#include "OnFocusedMissionChangedDelegate.h"
#include "OnGameViewportActivationChangedDelegateDelegate.h"
#include "OnHUDElementVisibilityChangedDelegate.h"
#include "OnHUDStateRefreshedDelegate.h"
#include "OnHighlightsCountChangedDelegate.h"
#include "OnHitPointStatChangedDelegate.h"
#include "OnHitPointsModifiedDelegate.h"
#include "OnHordeTierCompleteDelegateDelegate.h"
#include "OnHordeTierInitializedDelegateDelegate.h"
#include "OnHordeWaveCompleteDelegateDelegate.h"
#include "OnIndicatorModeChangedDelegateDelegate.h"
#include "OnInteractUpdatedDelegate.h"
#include "OnInteractionCostChangedDelegate.h"
#include "OnLocalChallengesVisibilityChangedDelegateDelegate.h"
#include "OnMgmtMenuTabChangeRequestedDelegateDelegate.h"
#include "OnNumSurvivorsRescuedUpdateDelegate.h"
#include "OnPersonalVehicleModeChangeDelegate.h"
#include "OnPlayerDeathDelegate.h"
#include "OnPlayerKillsChangedDelegate.h"
#include "OnPlayerPlaceChangedDelegate.h"
#include "OnPlayerRevivedDelegate.h"
#include "OnPlayerSpawnedDelegate.h"
#include "OnPlayerTargetingChangedDelegateDelegate.h"
#include "OnPointOfInterestAddedDelegate.h"
#include "OnPointOfInterestRemovedDelegate.h"
#include "OnRequestPromptDisplayDelegateDelegate.h"
#include "OnRequestSetInZoneTitleBarVisibilityDelegate.h"
#include "OnScoreChangedDelegate.h"
#include "OnScoreStatChangedDelegate.h"
#include "OnSettingsAppliedDelegate.h"
#include "OnShouldTriggerCooldownUpdateDelegate.h"
#include "OnToggleScoreboardDelegateDelegate.h"
#include "OnToggledBattleMapLiveDelegate.h"
#include "OnUnableToPerformActionDelegateDelegate.h"
#include "OnVehicleFocusedDelegate.h"
#include "OnVehicleStateChangedDelegate.h"
#include "OnWaveBasedModifiersAppliedDelegateDelegate.h"
#include "OnWaveCombatStartDelegate.h"
#include "FortHUDContext.generated.h"

class AActor;
class ABattleMapPawnLive;
class ABuildingActor;
class ABuildingTrap;
class AFortBluGloManager;
class AFortGameStateZone;
class AFortMission;
class AFortMissionManager;
class AFortPlayerPawn;
class AFortPlayerState;
class AFortPlayerStateZone;
class AFortWeapon;
class UFortHero;
class UFortItem;
class UFortTouchControlRegion;
class UTexture2D;
class UUserWidget;

UCLASS(Blueprintable, NonTransient)
class FORTNITEUI_API UFortHUDContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCursorModeChangingDelegate OnCursorModeChanging;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCursorModeChangedDelegate OnCursorModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestPromptDisplayDelegate OnRequestPromptDisplay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameViewportActivationChangedDelegate OnGameViewportActivationChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMgmtMenuTabChangeRequestedDelegate OnMgmtMenuTabChangeRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIndicatorModeChangedDelegate OnIndicatorModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContextualReticleChangedDelegate OnContextualReticleChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleFocused OnVehicleFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBuildingFocused OnBuildingFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorFocusedForCreative OnActorFocusedForCreative;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusedBuildingStateChanged OnFocusedBuildingStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitPointStatChanged OnFocusedBuildingHealthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBigHitPointStatChanged OnFocusedBuildingBigHealthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionCostChanged OnFocusedBuildingRepairCostChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBuildingTrapDurabilityChanged OnFocusedBuildingAttachedTrapDurabilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusedBuildingAttachedTrapChanged OnFocusedBuildingAttachedTrapChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamagedResourceBuilding OnDamagedResourceBuilding;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamagedResourceVehicle OnDamagedResourceVehicle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCanInteract OnPlayerCanInteract;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractUpdated OnInteractUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerTargetingChangedDelegate OnPlayerTargetingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScoreChanged OnScoreChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScoreStatChanged OnScoreStatChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDBasicDelegate OnZoneCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDBasicDelegate OnPawnSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDBasicDelegate OnDamageReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnableToPerformActionDelegate OnUnableToPerformAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitPointStatChanged OnLocalPlayerMaxHealthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitPointsModified OnLocalPlayerHealthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerDeath OnLocalPlayerDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerSpawned OnLocalPlayerSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerRevived OnLocalPlayerRevived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerKillsChanged OnLocalPlayerKillsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerPlaceChanged OnLocalPlayerPlaceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerPlaceChanged OnLocalPlayerViewTargetChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnToggledBattleMapLive OnToggledBattleMapLive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitPointStatChanged OnLocalPlayerMaxShieldChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitPointsModified OnLocalPlayerShieldChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitPointStatChanged OnLocalPlayerMaxStaminaChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitPointStatChanged OnLocalPlayerStaminaChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnToggleScoreboardDelegate OnToggleScoreboard;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndOfDayRecap OnEndOfDayRecap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWaveCombatStart OnWaveCombatStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWaveBasedModifiersAppliedDelegate OnWaveBasedModifiersApplied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveGameplayModifiersChangedDelegate OnActiveGameplayModifiersChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHordeTierInitializedDelegate OnHordeTierInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHordeTierCompleteDelegate OnHordeTierComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHordeWaveCompleteDelegate OnHordeWaveComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDBasicDelegate OnBuildingMaterialCycled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHighlightsCountChanged OnHighlightsCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHUDStateRefreshed OnHUDStateRefreshed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShouldTriggerCooldownUpdate OnShouldTriggerCooldownUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestSetInZoneTitleBarVisibility OnRequestSetInZoneTitleBarVisibility;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPawnEquippedWeaponSignature OnWeaponEquippedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponHudKeyActionUpdated OnWeaponHudKeyActionUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnUpdatedDecisionWindowStackSignature OnAbilityDecisionWindowStackUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDBasicDelegate OnWorldDaysElapsedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNumSurvivorsRescuedUpdate OnNumSurvivorsRescuedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEarnedBadgesChanged OnEarnedBadgesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDBasicDelegate OnPotentialBadgesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDBasicDelegate OnMissionManagerCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDBasicDelegate OnMissionsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusedMissionChanged OnFocusedMissionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDBasicDelegate OnTheaterUniqueIDChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDBasicDelegate OnZoneDifficultyInfoRowChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDBasicDelegate OnDifficultyIncreaseRewardTierChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDBasicDelegate OnDifficultyIncreaseRewardsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDBasicDelegate OnMissionGeneratorChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDBasicDelegate OnMissionRewardsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPointOfInterestAdded OnPointOfInterestAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPointOfInterestRemoved OnPointOfInterestRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHUDElementVisibilityChanged OnHUDElementVisibilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalChallengesVisibilityChangedDelegate OnLocalChallengesVisibilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDebugHUDObjectiveHeightChanged OnDebugHUDObjectiveHeightChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBuildModeChanged OnBuildModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPersonalVehicleModeChange OnPersonalVehicleModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleStateChanged OnPlayerVehicleStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSettingsApplied OnClientSettingsShowViewersChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDebugHudObjectiveHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPendingAttachToHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerState* OwningPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingActor* CurFocusedBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingTrap* CurFocusedTrap;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingActor* BuildingFocusCandidates[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* BoundPlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortWeapon* CachedCurrentWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortWeapon* CachedPreviousWeapon;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortTouchControlRegion> TouchControlRegion;
    
public:
    UFortHUDContext();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateTrapAttachedToBuilding();
    
public:
    UFUNCTION(BlueprintCallable)
    void TriggerCooldownUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ToggleFullScreenMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldOnlyShowNextPrevBuildingSlotKeybinds() const;
    
    UFUNCTION(BlueprintCallable)
    void SetPreparingMgmtMenu(bool bPreparing);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLocalChallengesVisible(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetIndicatorsState(EFortIndicatorState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetIndicatorsAllowed(bool bIndicatorsAllowed);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDElementVisibility(const FGameplayTagContainer& HUDElementTags, bool bHideElements);
    
    UFUNCTION(BlueprintCallable)
    void SetCursorModeLocked(bool bLocked);
    
private:
    UFUNCTION(BlueprintCallable)
    void RequestPromptDisplay(const FFortHUDTagPromptData& PromptData, const FGameplayTag& Tag);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestMgmtMenuTab(FName TabName);
    
    UFUNCTION(BlueprintCallable)
    void RemovePointOfInterest(AActor* PointOfInterest);
    
    UFUNCTION(BlueprintCallable)
    bool PreviewItemPickUp(const UFortItem* InItem, const EFortQuickBars InQuickBarType, int32& OutSlotIndex, TMap<int32, int32>& OutItemsToPush, TArray<int32>& OutItemsToDrop);
    
    UFUNCTION(BlueprintCallable)
    void OnClientSettingUpdatedShowViewers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowViewerCountEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreparingMgmtMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalChallengesVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInEditMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCursorMode() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsContextTutorialActive(EFortContextualTutorialTypes TutorialType) const;
    
    UFUNCTION(BlueprintCallable)
    void HandleVehicleStateChanged(AFortPlayerPawn* PlayerPawn, AActor* NewVehicle, AActor* OldVehicle);
    
    UFUNCTION(BlueprintCallable)
    void HandleToggledBattleMapLive(ABattleMapPawnLive* NewSpectatorPawn);
    
    UFUNCTION(BlueprintCallable)
    void HandleSpectatorViewTargetChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandlePersonalVehicleModeChanged(bool bEnteredVehicle);
    
    UFUNCTION(BlueprintCallable)
    void HandleLocalPlayerViewTargetChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleLocalPlayerPlaceChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleLocalPlayerKillsChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleLocalPawnSpawned();
    
    UFUNCTION(BlueprintCallable)
    void HandleLocalPawnRevived();
    
    UFUNCTION(BlueprintCallable)
    void HandleLocalPawnDied(const FFortPlayerDeathReport& DeathReport);
    
    UFUNCTION(BlueprintCallable)
    void HandleFocusedBuildingHealthChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleBuildingModeChanged(bool bEntering);
    
    UFUNCTION(BlueprintCallable)
    void HandleActorFocusedForCreative(AActor* NewActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeToDelayEndOfDayZoneWidgetDisplay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScoreDisplayFactor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FFortBadgeCount> GetPotentialBadges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerStateZone* GetPlayerStateZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumAllowedDifficultyIncreases() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMissionRewards(TArray<UFortItem*>& MissionRewards, TArray<UFortItem*>& MissionAlertRewards) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FZoneLoadingScreenHeadingConfig> GetMissionOverviewObjectives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortMissionManager* GetMissionManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocalPlayerPlacement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLocalPlayerHasWinningPlacement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLocalPlayerHasPlacement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLocalPlayerHasLosingPlacement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortIndicatorState GetIndicatorsState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortGameStateZone* GetGameStateZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortMission* GetFocusedMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFocusedBuildingInfo(FFortFocusedBuildingInfo& OutBuildingInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FEarnedBadgeEntry> GetEarnedBadges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDifficultyIncreaseRewardsTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDifficultyIncreaseRewardsDifference(int32 BaseDifficultyIncreaseTier, int32 ComparedDifficultyIncreaseTier, TArray<FFortItemDelta>& RewardDeltaInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDifficultyIncreaseRewards(int32 DifficultyIncreaseTier, TArray<FFortItemDelta>& DifficultyIncreaseRewards) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetCurrentPrimaryMissionTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortHUDState GetCurrentHUDState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortHero* GetCurrentHero() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABuildingActor* GetCurrentFocusedBuilding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentBasicMissionInfo(FFortBasicMissionInfo& BasicMissionInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBuildingActorInfo(ABuildingActor* BuildingActor, FFortFocusedBuildingInfo& OutBuildingInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortBluGloManager* GetBluGloManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAccountLevelUpRewards(TArray<FFortItemQuantityPair>& Rewards, int32 AccountLevel) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void ForwardOnWeaponHudKeyActionUpdated(AFortWeapon* Weapon);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnNumSurvivorsRescuedChanged(int32 NumSurvivorsRescued);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnMissionsUpdated();
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnAbilityDecisionWindowStackUpdated();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnterCursorMode(FName ActionName, UUserWidget* CursorModeWidget);
    
    UFUNCTION(BlueprintCallable)
    void EnterCameraMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreIndicatorsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreHUDElementsVisible(const FGameplayTagContainer& HUDElementTags) const;
    
    UFUNCTION(BlueprintCallable)
    void AddPointOfInterest(AActor* PointOfInterest, FText DisplayText, UTexture2D* DisplayImage, bool bSpecifyColor, FLinearColor ImageColor);
    
};

