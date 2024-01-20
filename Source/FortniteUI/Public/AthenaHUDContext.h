#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineBaseTypes.h"
#include "EAthenaGamePhaseStep.h"
#include "EEndOfMatchReason.h"
#include "EFortQuickBars.h"
#include "EFortResourceType.h"
#include "EPTTState.h"
#include "OnUIGameplayCueEventDelegate.h"
#include "SpecialActorRepData.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "AthenaWinnerInfo.h"
#include "Templates/SubclassOf.h"
#include "TextProperty.h"
#include "AthenaHUDContext.generated.h"

class AFortPawn;
class AFortPlayerPawnAthena;
class AFortPlayerStateAthena;
class UAthenaPlayerViewModel;
class UFortGameUIExtenderAthena;
class UFortItem;
class USoundCue;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable, NonTransient)
class FORTNITEUI_API UAthenaHUDContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FShowMobilePicker);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPTTStateChange, EPTTState, NewPushToTalkState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlaylistUIExtensionChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSpecialActorListChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSignalQualityChange, float, NewQuality);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResurrectingNow, bool, bResurrectingNow);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerNameChange, const FString&, NewName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerFiredWeapon);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLowPerformanceMode, bool, bInLowPerformanceMode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLocalTeamWon);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLocalTeamLost);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLocalPlayerWon);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLocalPlayerLost, EEndOfMatchReason, LostReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLocalPlayerKilledPlayer, const AFortPlayerStateAthena*, Player);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLocalPlayerDeathOnWin);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLocalPlayerDBNOStateChanged, bool, bIsDBNO);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLocalPlayerBeginSkydiving);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnForwardStartedFalling);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFireStopped, int32, StopFireIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCanPTTChange);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAthenaSettingsApplied);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAthenaInventorySwapStarted, int32, SlotIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAthenaInventorySwapComplete);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAthenaInventoryItemSelected, UFortItem*, Item);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAthenaHUDAllWinnersAnnounced, const FAthenaWinnerInfo&, WinnerInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAthenaGamePhaseChanged, EAthenaGamePhaseStep, NewPhase);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAthenaAutoFireChanged, bool, bEntering);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalPlayerWon OnLocalPlayerWon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalPlayerDeathOnWin OnLocalPlayerDeathOnWin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalTeamWon OnLocalTeamWon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalTeamLost OnLocalTeamLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalPlayerLost OnLocalPlayerLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalPlayerKilledPlayer OnLocalPlayerKilledPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalPlayerDBNOStateChanged OnLocalPlayerDBNOStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUIGameplayCueEvent OnUIGameplayCue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalPlayerBeginSkydiving OnLocalPlayerBeginSkydiving;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAthenaAutoFireChanged OnAthenaAutoFireChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAthenaSettingsApplied OnClientSettingsShowViewersChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAthenaGamePhaseChanged OnAthenaGamePhaseChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerFiredWeapon OnPlayerFiredWeapon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLowPerformanceMode OnLowPerformanceMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPTTStateChange OnPTTStateChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCanPTTChange OnCanPTTChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShowMobilePicker ShowMobilePickerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlaylistUIExtensionChanged OnPlaylistUIExtensionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerNameChange OnPlayerNameChangeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResurrectingNow OnResurrectingNowDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAthenaHUDAllWinnersAnnounced OnAllWinnersAnnouncedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSignalQualityChange OnSignalQualityChangeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnForwardStartedFalling OnForwardStartedFalling;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpecialActorListChanged OnSpecialActorListChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAthenaInventoryItemSelected OnInventoryItemSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAthenaInventorySwapStarted OnInventorySwapStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAthenaInventorySwapComplete OnInventorySwapComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFireStopped OnFireStopped;
    
private:
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWidget> MoveButtonWidgetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaWinnerInfo WinnerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMoveButtonMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPendingAttachToHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortGameUIExtenderAthena* PlaylistUIExtender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLocalPlayerWonMatch;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> LastSelectedInventoryItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawnAthena* BoundPlayerPawn;
    
public:
    UAthenaHUDContext();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseTapToShoot() const;
    
    UFUNCTION(BlueprintCallable)
    void UseOrRleoadFromHUDStop();
    
    UFUNCTION(BlueprintCallable)
    void UseOrRleoadFromHUDStart();
    
    UFUNCTION(BlueprintCallable)
    void UpdateSelectedWidgetMoveOffsetVector(const FVector2D& VectorOffset, float fMoveScale);
    
    UFUNCTION(BlueprintCallable)
    void TakeMovementInputFromHUD(FVector2D MoveVector);
    
    UFUNCTION(BlueprintCallable)
    void TakeLookStickInputFromHUD(const FVector2D LookStickPosition);
    
    UFUNCTION(BlueprintCallable)
    void TakeLookInputFromHUD(FRotator LookRotator);
    
    UFUNCTION(BlueprintCallable)
    void TakeItemSelectionInputFromHUD(const int32 TouchIndex, const int32 SlotIdx, bool& bIsUsing, EFortQuickBars InQuickBar, bool bReloadOrUseIfAlreadySelected, bool bStopUseImmediately);
    
    UFUNCTION(BlueprintCallable)
    void SwapQuickBarFocusFromHUD(EFortQuickBars InQuickBar, int32 SlotOverride);
    
    UFUNCTION(BlueprintCallable)
    void StopTargettingFromHUD();
    
    UFUNCTION(BlueprintCallable)
    void StopItemSelectionInputFromHUD(const int32 TouchIndex, const int32 SlotIdx, EFortQuickBars InQuickBar);
    
    UFUNCTION(BlueprintCallable)
    void StartOrFinishSwap(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void ShowMobilePicker();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ShowGameModeMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldVictoryUIPushEmoteInput() const;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldDisplayScoreUI();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldDisplayPlacement();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetingToggleable(const bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectWidgetToMoveMode(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedInventoryItem(UFortItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void SetResourceMaterial(EFortResourceType NewMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetPTTState(EPTTState NewPushToTalkState);
    
    UFUNCTION(BlueprintCallable)
    void SetLockOnStickCoords(const FVector2D& LockOnCoords);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalPlayerWonMatch(bool bLocalPlayerWon);
    
    UFUNCTION(BlueprintCallable)
    void SelectWidgetToMove(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void ReloadFromHUD();
    
    UFUNCTION(BlueprintCallable)
    void PushGameOverEmoteInput();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OwnerOrWeaponHasTag(FGameplayTag InTag) const;
    
    UFUNCTION(BlueprintCallable)
    void OnClientSettingUpdatedShowViewers();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAllWinnersAnnounced();
    
public:
    UFUNCTION(BlueprintCallable)
    void JumpFromHudStart(int32 TouchIndex);
    
    UFUNCTION(BlueprintCallable)
    void JumpFromHudEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVictoryUICinematic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingScope() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargeting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwapping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowViewerCountEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunningOnBattery() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOperatingTurret() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovingSelectedWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSelectWidgetToMoveMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInBuildMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFiringFromTouch(int32 TouchIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentWeaponFiring() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentWeaponChargeable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrouching() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoRunEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsActionBound(const FName ActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void HideGameModeMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWifi() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLockOnTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFiringTouch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAutofireTarget() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleUIGameplayCue(FName CueName, TEnumAsByte<EGameplayCueEvent::Type> EventType, const FGameplayCueParameters& Parameters);
    
    UFUNCTION(BlueprintCallable)
    void HandleSpectatorViewTargetChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleLocalPlayerDBNOStateChanged(AFortPawn* FortPawn, bool bIsDBNO);
    
    UFUNCTION(BlueprintCallable)
    void HandleLocalPlayerBeginSkydiving();
    
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseChange(EAthenaGamePhaseStep NewGamePhase);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetWinnerText(FText& ReturnText, const FText& WinnerName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UUserWidget> GetVictoryUIWidgetClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetVictoryText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundCue* GetVictoryStinger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSquadConnectedCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetSelectedInventoryItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPTTState GetPTTState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortGameUIExtenderAthena* GetPlaylistUIExtender() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetPlayerColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLocalTime(int32& Hours, int32& Minutes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetJumpPressedTouchIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInteractPressedTouchIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInLowPerformanceMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameOverDelayTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAthenaPlayerViewModel* GetCurrentViewModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanPTT() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetBoundActions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBatteryLevel() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void ForwardOnSpecialActorListChanged(const FSpecialActorRepData& SpecialActorData);
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceFireFromHUDStop();
    
    UFUNCTION(BlueprintCallable)
    void FireFromHUDStop(int32 TouchIndex, UWidget* DebugWidget);
    
    UFUNCTION(BlueprintCallable)
    void FireFromHUDStart(int32 TouchIndex, UWidget* DebugWidget);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteActionNameFromHUDWithEventType(const FName ActionName, const TEnumAsByte<EInputEvent> KeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteActionNameFromHUD(const FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void EndUseFromHUD();
    
    UFUNCTION(BlueprintCallable)
    void EnableAutoRunFromHUD(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    float DisplayPlayerWonTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CycleQuickbar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShootInVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCurrentWeaponAutoFireFromReticle() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelSwap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAutoRun() const;
    
    UFUNCTION(BlueprintCallable)
    void BeginUseFromHUD();
    
};

