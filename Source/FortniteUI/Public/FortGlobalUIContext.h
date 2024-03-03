#pragma once
#include "CoreMinimal.h"
#include "ECommonGamepadType.h"
#include "ECommonInputType.h"
#include "CommonActionCommitedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EFortBangType.h"
#include "EFortDialogResult.h"
#include "EFortGlobalAction.h"
#include "EFortInputActionGroup.h"
#include "EFortPickerMode.h"
#include "ESubGame.h"
#include "ESubGameAccessReason.h"
#include "FortDialogDescription_NUI.h"
#include "FortDialogExternalLatentActionHandle.h"
#include "FortGlobalActionDetails.h"
#include "FortGlobalActionDetailsFunctionContext.h"
#include "FortInputActionDetails.h"
#include "FortLocalPlayerSubsystem.h"
#include "GameSummaryInfo.h"
#include "OnEnterVehicleDriverDelegate.h"
#include "OnEnterVehiclePassengerDelegate.h"
#include "OnExitVehicleDelegate.h"
#include "OnInputActionHoldStartedDelegate.h"
#include "OnInputActionHoldStoppedDelegate.h"
#include "OnTetherChangedDelegate.h"
#include "InputCoreTypes.h"
#include "Styling/SlateBrush.h"
#include "Blueprint/DragDropOperation.h"
#include "ConsoleAccountPickerResultDelegate.h"
#include "EFlagStatus.h"
#include "EFortInputMode.h"
#include "EFortUIFeature.h"
#include "EFortUIFeatureState.h"
#include "EFortUIFeatureStateReason.h"
#include "EFortUrlType.h"
#include "EInputPriority.h"
#include "FortBackendVersion.h"
#include "FortGlobalUIContextGenericChangeDelegate.h"
#include "FortLastMissionInfo.h"
#include "FortUIFeatureStruct.h"
#include "OnContextHelpItemsChangedDelegate.h"
#include "OnItemReceivedNotificationShownDelegate.h"
#include "OnKeybindsChangedDelegateDelegate.h"
#include "OnRefreshHUDForRespawnDelegate.h"
#include "OnScoreReportChangedDelegate.h"
#include "OnSubGameChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "UIFeatureStateChangedListenerDelegate.h"
#include "FortGlobalUIContext.generated.h"

class AFortScriptedAction;
class UAthenaMatchReadyDesktopPopup;
class UFortCollectionBookManager;
class UFortHelpItem;
class UFortQuestManager;
class UFortSeasonalEventManager;
class UFortUIMessageManager;
class UFortUIRewardReport;
class UFortUIScoreReport;
class UTexture2D;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable, MinimalAPI)
class UFortGlobalUIContext : public UFortLocalPlayerSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQueryFortBackendVersionDelegate, FFortBackendVersion, FortBackendVersion);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLocalPlayerControllerConnectionChangedDelegate, bool, bConnected);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadingScreenVisibilityChangedDelegate, bool, IsVisible);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSubGameChanged SubGameChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGlobalUIContextGenericChange PlayerControllerChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSubgameSelectStartOnCampaignUpsell;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKeybindsChangedDelegate OnKeybindsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputActionHoldStarted OnInputActionHoldStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInputActionHoldStopped OnInputActionHoldStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRefreshHUDForRespawn OnRefreshHUDForRespawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterVehicleDriver OnEnterVehicleDriver;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterVehiclePassenger OnEnterVehiclePassenger;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExitVehicle OnExitVehicle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTetherChanged OnTetherChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDragDropMulticast DragAndDropStartedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDragDropMulticast DragAndDropEndedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScoreReportChanged OnScoreReportChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContextHelpItemsChanged OnContextHelpChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemReceivedNotificationShown OnItemReceivedNotificationShown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQueryFortBackendVersionDelegate OnQueryFortBackendVersionComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadingScreenVisibilityChangedDelegate OnLoadingScreenVisibilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalPlayerControllerConnectionChangedDelegate OnLocalPlayerControllerConnectionChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UFortUIMessageManager*> MessageManagersByName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EFortUIFeature, FFortUIFeatureStruct> Features;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAthenaMatchReadyDesktopPopup* AthenaMatchReadyNotificationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortHelpItem* ActiveContextSpecificHelpItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsUIVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShowRateWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESubGame, bool> IsAllContentInstalledCacheMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText FeedbackTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime FirstLoginTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle AddictionMsgTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl CurrentLocalPlayerUniqueNetId;
    
public:
    UFortGlobalUIContext();
    UFUNCTION(BlueprintCallable)
    void UnregisterScriptedActions(TArray<TSubclassOf<AFortScriptedAction>> ScriptedActions);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterScriptedAction(TSubclassOf<AFortScriptedAction> ScriptedAction);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterInputAction(const UUserWidget* UserWidget, FDataTableRowHandle InputActionRow);
    
    UFUNCTION(BlueprintCallable)
    void UnbindToFeatureState(EFortUIFeature Feature, FUIFeatureStateChangedListener Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TriggerUIFeedbackEvent(FName EventName) const;
    
    UFUNCTION(BlueprintCallable)
    void TetherChanged(bool bIsTethered);
    
    UFUNCTION(BlueprintCallable)
    bool ShowWebURL(const FString& URL, const EFortUrlType URLType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShowVehicleHealthBarOnPlayerHUD() const;
    
    UFUNCTION(BlueprintCallable)
    void ShowConsoleAccountPicker(const int32 ControllerIndex, const FConsoleAccountPickerResult& CompletionDelegate);
    
    UFUNCTION(BlueprintCallable)
    void ShowBang(EFortBangType Type);
    
    UFUNCTION(BlueprintCallable)
    void ShowAthenaMatchReadyExternalNotificationWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowRateWidget() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowPhoenixDisplay() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldCloseMenuOnEscape() const;
    
    UFUNCTION(BlueprintCallable)
    void SetSubGame(ESubGame SubGame);
    
    UFUNCTION(BlueprintCallable)
    void SetRatingWidgetFeedbackTitle(const FText& Title);
    
    UFUNCTION(BlueprintCallable)
    void SetInputMode(EFortInputMode InMode);
    
    UFUNCTION(BlueprintCallable)
    void SetHideStwItemRefundHelp(bool bInHideHelp);
    
    UFUNCTION(BlueprintCallable)
    void SetHidePerkRecombobulatorHelp(bool bInHideHelp);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentInputPresetName(const FString& InputPresetName);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentCustomInputTemplatePresetName(const FString& InputPresetName);
    
    UFUNCTION(BlueprintCallable)
    void SetCreativeMode(bool IsCreativeMode);
    
    UFUNCTION(BlueprintCallable)
    void SetContextHelpItem(UFortHelpItem* ContextSpecificHelpItem);
    
    UFUNCTION(BlueprintCallable)
    void SetBangFromCount(EFortBangType Type, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SendUINavigationAnalytic(const FString& Destination, bool bUserInitiated);
    
    UFUNCTION(BlueprintCallable)
    void SendLeaveZoneAnalytic();
    
    UFUNCTION(BlueprintCallable)
    void SendExperienceRatingAnalytic(const FString& RatingType, const FString& FeedbackSentBy, const FText& RatingQuestion, const int32& StarCount, const FString& GameSessionId, const FString& Comment);
    
    UFUNCTION(BlueprintCallable)
    void RunLauncherWithOptions(const FString& Options);
    
    UFUNCTION(BlueprintCallable)
    void ReturnToSubGameSelect();
    
    UFUNCTION(BlueprintCallable)
    void RegisterScriptedActions(TArray<TSubclassOf<AFortScriptedAction>> ScriptedActions);
    
    UFUNCTION(BlueprintCallable)
    void RegisterScriptedAction(TSubclassOf<AFortScriptedAction> ScriptedAction);
    
    UFUNCTION(BlueprintCallable)
    void RegisterInputAction(const UUserWidget* UserWidget, FDataTableRowHandle InputActionRow, FCommonActionCommited CommitedEvent, int32 InFilterPriority);
    
    UFUNCTION(BlueprintCallable)
    void RefreshHUDForRespawn();
    
    UFUNCTION(BlueprintCallable)
    void QuitGame();
    
    UFUNCTION(BlueprintCallable)
    void QueryGameBackendVersion();
    
    UFUNCTION(BlueprintCallable)
    void ProcessConfirmationResult(EFortDialogResult InResult, FName InResultName, const FFortDialogDescription_NUI& ConfirmationDescription, bool bWaitingForLatentAction, FFortDialogExternalLatentActionHandle& WaitingDialogHandle);
    
    UFUNCTION(BlueprintCallable)
    void Logout();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingGamepad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUIVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPendingLogout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMobileApp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInOutpostZone() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsHUDVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamepadAttached() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDesktopPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCustomGamepadConfig(const int32 ConfigIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentlyShowingLoadingScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreativeModeAccessLimited() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBluGloEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleRoyaleMatchmakingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllContentInstalled(const ESubGame SubGame);
    
    UFUNCTION(BlueprintCallable)
    void InputActionHoldStopped(FName InputActionName, bool bCompletedSuccessfully);
    
    UFUNCTION(BlueprintCallable)
    void InputActionHoldStarted(FName InputActionName, float HoldDuration);
    
    UFUNCTION(BlueprintCallable)
    void HideBang(EFortBangType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAccesstoMultipleSubGames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetUseActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTrapPickerActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTrapHotbarActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTrapConfirmActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable)
    void GetTopLevelHelpItems(TArray<UFortHelpItem*>& ActiveHelpEntries);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetToggleInventoryActionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetToggleFullscreenMapActionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTargetActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSwitchQuickBarActionName(ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESubGame GetSubGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetShoppingCartCoastActionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSessionId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSessionConnectString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortSeasonalEventManager* GetSeasonalEventManager() const;
    
    UFUNCTION(BlueprintCallable)
    UFortUIScoreReport* GetScoreReport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetRotatePrimitiveClockwiseActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortQuestManager* GetQuestManager(ESubGame SubGame) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetQuadCrasherBoostActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerInfiltrationFaction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlatformDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPickerConfirmActionName(EFortPickerMode PickerMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPickerCancelActionName(EFortPickerMode PickerMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPerformBuildingImprovementInteractionActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPerformBuildingEditInteractionActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetOstrichShieldBoostName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetOstrichSelfDestructName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetOstrichSecondaryFireName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetOstrichPrimaryFireName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetOstrichJumpActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetOstrichBoostActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable)
    UFortUIMessageManager* GetMessageManager(FName ManagerName, bool& bCreatedNew);
    
    UFUNCTION(BlueprintCallable)
    UFortUIRewardReport* GetLastMissionRewardReport();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLastMissionInfo(FFortLastMissionInfo& LastMissionInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameSummaryInfo GetLastGameSummaryInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    FText GetKeyTextForAxis(FName Axis, const float AxisScale, bool bIsUsingGamepad, bool bUseAbbreviatedText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    FText GetKeyTextForAction(FName Action, FText& ButtonActionType, bool bUseAbbreviatedText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    FKey GetKeyForAxis(FName Axis, const float Scale, const bool bIsUsingGamepad) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    FKey GetKeyForAction(FName Action, const bool bForceGamepadKey, FName PresetNameOverride) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetKBMPlayerInputPresetNamesForSubGame(ESubGame SubGame, TArray<FString>& InputPresetNames, TArray<FText>& InputPresetFriendlyNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetKBMPlayerInputPresetDescriptionForSubGame(ESubGame SubGame, int32 CurrentPreset, FText& InputPresetDescription, FText& InputPresetSubDescription) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetJumpActionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetJackalUseOrExitActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetJackalJumpActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetJackalBoostActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetInputTypeIcon(ECommonInputType InputType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInputPriority(EInputPriority Priority) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInputDetailsForAction(FName Action, FFortInputActionDetails& InputActionDetails) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetHoagieBoostName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHideStwItemRefundHelp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHidePerkRecombobulatorHelp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetHamsterballShootActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetHamsterballExtendActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetHamsterballBoostActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetGolfCartReverseActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetGolfCartForwardActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetGolfCartEBrakeActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetGamepadJackalExitActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetGadget2ActionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetGadget1ActionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetFireActionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFeedbackTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFeatureStateReasonText(const EFortUIFeatureStateReason Reason) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFeatureState(const EFortUIFeature Feature, EFortUIFeatureState& OutFeatureState, EFortUIFeatureStateReason& OutReason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCustomGamepadInputPresetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentInputPresetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentCustomInputTemplatePresetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCrouchActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeToggleHeatmapName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeToggleGhostName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeQuickbarActivateClutchName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativePossessPropActivateName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveToolMultiSelectName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveToolEquippedGrabOrLetGoName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveToolEquippedDeleteName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveToolEquippedCopyGrabOrDuplicateName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveToolClearMultiSelectName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveObjectsFreelySwitchAxisName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveObjectsFreelyRotateCounterclockwiseName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveObjectsFreelyRotateClockwiseName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveObjectsFreelyPushName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveObjectsFreelyPullName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveObjectsFreelyLetGoName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveObjectsFreelyExitName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveObjectsFreelyDuplicateName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveObjectsFreelyDropToFloorName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveObjectsFreelyChangePrecisionLevelName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveBuildingsOnGridRotateCounterclockwiseName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveBuildingsOnGridRotateClockwiseName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveBuildingsOnGridMirrorName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveBuildingsOnGridLetGoName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveBuildingsOnGridExitName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveBuildingsOnGridDuplicateName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeMoveBuildingsOnGridChangePrecisionLevelName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetCreativeModeLimitedAccessEndTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCreativeMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeIslandPanelToggleDetailsName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeIslandPanelSupportAffiliateName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeIslandPanelStartMinigameName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeFlyUpActionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCreativeFlyDownActionName() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetConningXpModifierMessage(int32 TotalSkillPoints, int32 ContentDifficulty);
    
    UFUNCTION(BlueprintCallable)
    float GetConningDifficultyXpModifier(int32 TotalSkillPoints, int32 ContentDifficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortCollectionBookManager* GetCollectionBookManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetChangeMaterialActionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCannonShootActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCannonCoastActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBuildConfirmActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    bool GetBrushForKeyWithCustomInput(FKey Key, FSlateBrush& Brush, ECommonInputType InputType, ECommonGamepadType GamepadType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    bool GetBrushForKey(FKey Key, FSlateBrush& Brush) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBiplaneTaxiBackwardsName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBiplaneStopEngineName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBiplaneStartEngineName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBiplaneShootName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBiplaneRollRightName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBiplaneRollLeftName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBiplaneRollInvertName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBiplaneFreelookName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBiplaneBoostName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBackendName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAltInteractionActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllPlayerInputPresetNamesForSubGame(ESubGame SubGame, TArray<FString>& InputPresetNames, TArray<FText>& InputPresetFriendlyNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllPlayerInputPresetNames(TArray<FString>& InputPresetNames, TArray<FText>& InputPresetFriendlyNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    FName GetActionForKey(const FName PresetName, const FKey Key, const EFortInputActionGroup InputActionGroup, const bool bIsUsingGamepad) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortGlobalActionDetails GetActionDetails(EFortGlobalAction Action, const FFortGlobalActionDetailsFunctionContext& Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAccountGameplayRestrictionText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESubGameAccessReason GetAccessReason(const ESubGame SubGame) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAbility3ActionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAbility2ActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAbility1ActionName(const ECommonInputType OverrideInputType) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceSetFeatureState(EFortUIFeature Feature, EFortUIFeatureState ForcedState, EFortUIFeatureStateReason Reason);
    
    UFUNCTION(BlueprintCallable)
    void ExitVehicle();
    
    UFUNCTION(BlueprintCallable)
    void EnterVehiclePassenger();
    
    UFUNCTION(BlueprintCallable)
    void EnterVehicleDriver();
    
    UFUNCTION(BlueprintCallable)
    static void DrawAttention(UWidget* BaseWidget);
    
    UFUNCTION(BlueprintCallable)
    void DisplayStateContent(bool bDisplay);
    
    UFUNCTION(BlueprintCallable)
    void CopyToClipboard(const FString& ClipboardText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ContentInstallationProgress(const ESubGame SubGame) const;
    
    UFUNCTION(BlueprintCallable)
    void CloseExternalNotificationWindowIfOpen();
    
    UFUNCTION(BlueprintCallable)
    void ClearSelectionGroup(FName SelectionGroup);
    
    UFUNCTION(BlueprintCallable)
    void ClearRatingWidgetInfo();
    
    UFUNCTION(BlueprintCallable)
    void ClearLastMissionReports();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ClearLastGameSummaryInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearForceSetFeatureState(EFortUIFeature Feature);
    
    UFUNCTION(BlueprintCallable)
    static void CheckFlag(const FString& FlagName, EFlagStatus& OutStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlay(ESubGame SubGame, FText& DenialReason) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMatchmake(ESubGame SubGame, FText& DenialReason);
    
    UFUNCTION(BlueprintCallable)
    static void CancelDrawAttention(UWidget* BaseWidget);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastItemReceivedNotificationShown(bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void BindToFeatureStateAndInitialize(EFortUIFeature Feature, FUIFeatureStateChangedListener Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowQuit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowLogout() const;
    
};

