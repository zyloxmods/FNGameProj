#include "FortGlobalUIContext.h"
#include "Templates/SubclassOf.h"

void UFortGlobalUIContext::UnregisterScriptedActions(TArray<TSubclassOf<AFortScriptedAction>> ScriptedActions) {
}

void UFortGlobalUIContext::UnregisterScriptedAction(TSubclassOf<AFortScriptedAction> ScriptedAction) {
}

void UFortGlobalUIContext::UnregisterInputAction(const UUserWidget* UserWidget, FDataTableRowHandle InputActionRow) {
}

void UFortGlobalUIContext::UnbindToFeatureState(EFortUIFeature Feature, FUIFeatureStateChangedListener Delegate) {
}

void UFortGlobalUIContext::TriggerUIFeedbackEvent(FName EventName) const {
}

void UFortGlobalUIContext::TetherChanged(bool bIsTethered) {
}

bool UFortGlobalUIContext::ShowWebURL(const FString& URL, const EFortUrlType URLType) {
    return false;
}

bool UFortGlobalUIContext::ShowVehicleHealthBarOnPlayerHUD() const {
    return false;
}

void UFortGlobalUIContext::ShowConsoleAccountPicker(const int32 ControllerIndex, const FConsoleAccountPickerResult& CompletionDelegate) {
}

void UFortGlobalUIContext::ShowBang(EFortBangType Type) {
}

void UFortGlobalUIContext::ShowAthenaMatchReadyExternalNotificationWindow() {
}

bool UFortGlobalUIContext::ShouldShowRateWidget() const {
    return false;
}

bool UFortGlobalUIContext::ShouldShowPhoenixDisplay() const {
    return false;
}

bool UFortGlobalUIContext::ShouldCloseMenuOnEscape() const {
    return false;
}

void UFortGlobalUIContext::SetSubGame(ESubGame SubGame) {
}

void UFortGlobalUIContext::SetRatingWidgetFeedbackTitle(const FText& Title) {
}

void UFortGlobalUIContext::SetInputMode(EFortInputMode InMode) {
}

void UFortGlobalUIContext::SetHideStwItemRefundHelp(bool bInHideHelp) {
}

void UFortGlobalUIContext::SetHidePerkRecombobulatorHelp(bool bInHideHelp) {
}

void UFortGlobalUIContext::SetCurrentInputPresetName(const FString& InputPresetName) {
}

void UFortGlobalUIContext::SetCurrentCustomInputTemplatePresetName(const FString& InputPresetName) {
}

void UFortGlobalUIContext::SetCreativeMode(bool IsCreativeMode) {
}

void UFortGlobalUIContext::SetContextHelpItem(UFortHelpItem* ContextSpecificHelpItem) {
}

void UFortGlobalUIContext::SetBangFromCount(EFortBangType Type, int32 Count) {
}

void UFortGlobalUIContext::SendUINavigationAnalytic(const FString& Destination, bool bUserInitiated) {
}

void UFortGlobalUIContext::SendLeaveZoneAnalytic() {
}

void UFortGlobalUIContext::SendExperienceRatingAnalytic(const FString& RatingType, const FString& FeedbackSentBy, const FText& RatingQuestion, const int32& StarCount, const FString& GameSessionId, const FString& Comment) {
}

void UFortGlobalUIContext::RunLauncherWithOptions(const FString& Options) {
}

void UFortGlobalUIContext::ReturnToSubGameSelect() {
}

void UFortGlobalUIContext::RegisterScriptedActions(TArray<TSubclassOf<AFortScriptedAction>> ScriptedActions) {
}

void UFortGlobalUIContext::RegisterScriptedAction(TSubclassOf<AFortScriptedAction> ScriptedAction) {
}

void UFortGlobalUIContext::RegisterInputAction(const UUserWidget* UserWidget, FDataTableRowHandle InputActionRow, FCommonActionCommited CommitedEvent, int32 InFilterPriority) {
}

void UFortGlobalUIContext::RefreshHUDForRespawn() {
}

void UFortGlobalUIContext::QuitGame() {
}

void UFortGlobalUIContext::QueryGameBackendVersion() {
}

void UFortGlobalUIContext::ProcessConfirmationResult(EFortDialogResult InResult, FName InResultName, const FFortDialogDescription_NUI& ConfirmationDescription, bool bWaitingForLatentAction, FFortDialogExternalLatentActionHandle& WaitingDialogHandle) {
}

void UFortGlobalUIContext::Logout() {
}

bool UFortGlobalUIContext::IsUsingGamepad() const {
    return false;
}

bool UFortGlobalUIContext::IsUIVisible() const {
    return false;
}

bool UFortGlobalUIContext::IsPendingLogout() const {
    return false;
}

bool UFortGlobalUIContext::IsMobileApp() const {
    return false;
}

bool UFortGlobalUIContext::IsInZone() const {
    return false;
}

bool UFortGlobalUIContext::IsInOutpostZone() const {
    return false;
}

bool UFortGlobalUIContext::IsHUDVisible() {
    return false;
}

bool UFortGlobalUIContext::IsGamepadAttached() const {
    return false;
}

bool UFortGlobalUIContext::IsDesktopPlatform() {
    return false;
}

bool UFortGlobalUIContext::IsCustomGamepadConfig(const int32 ConfigIndex) const {
    return false;
}

bool UFortGlobalUIContext::IsCurrentlyShowingLoadingScreen() const {
    return false;
}

bool UFortGlobalUIContext::IsCreativeModeAccessLimited() const {
    return false;
}

bool UFortGlobalUIContext::IsBluGloEnabled() {
    return false;
}

bool UFortGlobalUIContext::IsBattleRoyaleMatchmakingEnabled() const {
    return false;
}

bool UFortGlobalUIContext::IsAllContentInstalled(const ESubGame SubGame) {
    return false;
}

void UFortGlobalUIContext::InputActionHoldStopped(FName InputActionName, bool bCompletedSuccessfully) {
}

void UFortGlobalUIContext::InputActionHoldStarted(FName InputActionName, float HoldDuration) {
}

void UFortGlobalUIContext::HideBang(EFortBangType Type) {
}

bool UFortGlobalUIContext::HasAccesstoMultipleSubGames() const {
    return false;
}

FName UFortGlobalUIContext::GetUseActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetTrapPickerActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetTrapHotbarActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetTrapConfirmActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

void UFortGlobalUIContext::GetTopLevelHelpItems(TArray<UFortHelpItem*>& ActiveHelpEntries) {
}

FName UFortGlobalUIContext::GetToggleInventoryActionName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetToggleFullscreenMapActionName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetTargetActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetSwitchQuickBarActionName(ECommonInputType OverrideInputType) const {
    return NAME_None;
}

ESubGame UFortGlobalUIContext::GetSubGame() const {
    return ESubGame::Campaign;
}

FName UFortGlobalUIContext::GetShoppingCartCoastActionName() const {
    return NAME_None;
}

FString UFortGlobalUIContext::GetSessionId() const {
    return TEXT("");
}

FString UFortGlobalUIContext::GetSessionConnectString() const {
    return TEXT("");
}

UFortSeasonalEventManager* UFortGlobalUIContext::GetSeasonalEventManager() const {
    return NULL;
}

UFortUIScoreReport* UFortGlobalUIContext::GetScoreReport() {
    return NULL;
}

FName UFortGlobalUIContext::GetRotatePrimitiveClockwiseActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

UFortQuestManager* UFortGlobalUIContext::GetQuestManager(ESubGame SubGame) const {
    return NULL;
}

FName UFortGlobalUIContext::GetQuadCrasherBoostActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

int32 UFortGlobalUIContext::GetPlayerInfiltrationFaction() {
    return 0;
}

FText UFortGlobalUIContext::GetPlatformDisplayName() const {
    return FText::GetEmpty();
}

FName UFortGlobalUIContext::GetPickerConfirmActionName(EFortPickerMode PickerMode) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetPickerCancelActionName(EFortPickerMode PickerMode) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetPerformBuildingImprovementInteractionActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetPerformBuildingEditInteractionActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetOstrichShieldBoostName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetOstrichSelfDestructName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetOstrichSecondaryFireName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetOstrichPrimaryFireName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetOstrichJumpActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetOstrichBoostActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

UFortUIMessageManager* UFortGlobalUIContext::GetMessageManager(FName ManagerName, bool& bCreatedNew) {
    return NULL;
}

UFortUIRewardReport* UFortGlobalUIContext::GetLastMissionRewardReport() {
    return NULL;
}

void UFortGlobalUIContext::GetLastMissionInfo(FFortLastMissionInfo& LastMissionInfo) const {
}

FGameSummaryInfo UFortGlobalUIContext::GetLastGameSummaryInfo() const {
    return FGameSummaryInfo{};
}

FText UFortGlobalUIContext::GetKeyTextForAxis(FName Axis, const float AxisScale, bool bIsUsingGamepad, bool bUseAbbreviatedText) const {
    return FText::GetEmpty();
}

FText UFortGlobalUIContext::GetKeyTextForAction(FName Action, FText& ButtonActionType, bool bUseAbbreviatedText) const {
    return FText::GetEmpty();
}

FKey UFortGlobalUIContext::GetKeyForAxis(FName Axis, const float Scale, const bool bIsUsingGamepad) const {
    return FKey{};
}

FKey UFortGlobalUIContext::GetKeyForAction(FName Action, const bool bForceGamepadKey, FName PresetNameOverride) const {
    return FKey{};
}

void UFortGlobalUIContext::GetKBMPlayerInputPresetNamesForSubGame(ESubGame SubGame, TArray<FString>& InputPresetNames, TArray<FText>& InputPresetFriendlyNames) const {
}

void UFortGlobalUIContext::GetKBMPlayerInputPresetDescriptionForSubGame(ESubGame SubGame, int32 CurrentPreset, FText& InputPresetDescription, FText& InputPresetSubDescription) const {
}

FName UFortGlobalUIContext::GetJumpActionName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetJackalUseOrExitActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetJackalJumpActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetJackalBoostActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

UTexture2D* UFortGlobalUIContext::GetInputTypeIcon(ECommonInputType InputType) {
    return NULL;
}

int32 UFortGlobalUIContext::GetInputPriority(EInputPriority Priority) const {
    return 0;
}

bool UFortGlobalUIContext::GetInputDetailsForAction(FName Action, FFortInputActionDetails& InputActionDetails) const {
    return false;
}

FName UFortGlobalUIContext::GetHoagieBoostName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

bool UFortGlobalUIContext::GetHideStwItemRefundHelp() const {
    return false;
}

bool UFortGlobalUIContext::GetHidePerkRecombobulatorHelp() const {
    return false;
}

FName UFortGlobalUIContext::GetHamsterballShootActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetHamsterballExtendActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetHamsterballBoostActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetGolfCartReverseActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetGolfCartForwardActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetGolfCartEBrakeActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetGamepadJackalExitActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetGadget2ActionName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetGadget1ActionName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetFireActionName() const {
    return NAME_None;
}

FText UFortGlobalUIContext::GetFeedbackTitle() const {
    return FText::GetEmpty();
}

FText UFortGlobalUIContext::GetFeatureStateReasonText(const EFortUIFeatureStateReason Reason) const {
    return FText::GetEmpty();
}

void UFortGlobalUIContext::GetFeatureState(const EFortUIFeature Feature, EFortUIFeatureState& OutFeatureState, EFortUIFeatureStateReason& OutReason) {
}

FString UFortGlobalUIContext::GetCustomGamepadInputPresetName() const {
    return TEXT("");
}

FString UFortGlobalUIContext::GetCurrentInputPresetName() const {
    return TEXT("");
}

FString UFortGlobalUIContext::GetCurrentCustomInputTemplatePresetName() const {
    return TEXT("");
}

FName UFortGlobalUIContext::GetCrouchActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeToggleHeatmapName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeToggleGhostName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeQuickbarActivateClutchName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativePossessPropActivateName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveToolMultiSelectName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveToolEquippedGrabOrLetGoName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveToolEquippedDeleteName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveToolEquippedCopyGrabOrDuplicateName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveToolClearMultiSelectName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveObjectsFreelySwitchAxisName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveObjectsFreelyRotateCounterclockwiseName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveObjectsFreelyRotateClockwiseName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveObjectsFreelyPushName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveObjectsFreelyPullName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveObjectsFreelyLetGoName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveObjectsFreelyExitName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveObjectsFreelyDuplicateName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveObjectsFreelyDropToFloorName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveObjectsFreelyChangePrecisionLevelName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveBuildingsOnGridRotateCounterclockwiseName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveBuildingsOnGridRotateClockwiseName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveBuildingsOnGridMirrorName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveBuildingsOnGridLetGoName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveBuildingsOnGridExitName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveBuildingsOnGridDuplicateName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeMoveBuildingsOnGridChangePrecisionLevelName() const {
    return NAME_None;
}

FDateTime UFortGlobalUIContext::GetCreativeModeLimitedAccessEndTime() const {
    return FDateTime{};
}

bool UFortGlobalUIContext::GetCreativeMode() const {
    return false;
}

FName UFortGlobalUIContext::GetCreativeIslandPanelToggleDetailsName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeIslandPanelSupportAffiliateName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeIslandPanelStartMinigameName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeFlyUpActionName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCreativeFlyDownActionName() const {
    return NAME_None;
}

FText UFortGlobalUIContext::GetConningXpModifierMessage(int32 TotalSkillPoints, int32 ContentDifficulty) {
    return FText::GetEmpty();
}

float UFortGlobalUIContext::GetConningDifficultyXpModifier(int32 TotalSkillPoints, int32 ContentDifficulty) {
    return 0.0f;
}

UFortCollectionBookManager* UFortGlobalUIContext::GetCollectionBookManager() const {
    return NULL;
}

FName UFortGlobalUIContext::GetChangeMaterialActionName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCannonShootActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetCannonCoastActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetBuildConfirmActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

bool UFortGlobalUIContext::GetBrushForKeyWithCustomInput(FKey Key, FSlateBrush& Brush, ECommonInputType InputType, ECommonGamepadType GamepadType) const {
    return false;
}

bool UFortGlobalUIContext::GetBrushForKey(FKey Key, FSlateBrush& Brush) const {
    return false;
}

FName UFortGlobalUIContext::GetBiplaneTaxiBackwardsName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetBiplaneStopEngineName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetBiplaneStartEngineName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetBiplaneShootName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetBiplaneRollRightName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetBiplaneRollLeftName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetBiplaneRollInvertName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetBiplaneFreelookName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetBiplaneBoostName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FString UFortGlobalUIContext::GetBackendName() const {
    return TEXT("");
}

FName UFortGlobalUIContext::GetAltInteractionActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

void UFortGlobalUIContext::GetAllPlayerInputPresetNamesForSubGame(ESubGame SubGame, TArray<FString>& InputPresetNames, TArray<FText>& InputPresetFriendlyNames) const {
}

void UFortGlobalUIContext::GetAllPlayerInputPresetNames(TArray<FString>& InputPresetNames, TArray<FText>& InputPresetFriendlyNames) const {
}

FName UFortGlobalUIContext::GetActionForKey(const FName PresetName, const FKey Key, const EFortInputActionGroup InputActionGroup, const bool bIsUsingGamepad) const {
    return NAME_None;
}

FFortGlobalActionDetails UFortGlobalUIContext::GetActionDetails(EFortGlobalAction Action, const FFortGlobalActionDetailsFunctionContext& Context) const {
    return FFortGlobalActionDetails{};
}

FText UFortGlobalUIContext::GetAccountGameplayRestrictionText() const {
    return FText::GetEmpty();
}

ESubGameAccessReason UFortGlobalUIContext::GetAccessReason(const ESubGame SubGame) const {
    return ESubGameAccessReason::NoAccess;
}

FName UFortGlobalUIContext::GetAbility3ActionName() const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetAbility2ActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

FName UFortGlobalUIContext::GetAbility1ActionName(const ECommonInputType OverrideInputType) const {
    return NAME_None;
}

void UFortGlobalUIContext::ForceSetFeatureState(EFortUIFeature Feature, EFortUIFeatureState ForcedState, EFortUIFeatureStateReason Reason) {
}

void UFortGlobalUIContext::ExitVehicle() {
}

void UFortGlobalUIContext::EnterVehiclePassenger() {
}

void UFortGlobalUIContext::EnterVehicleDriver() {
}

void UFortGlobalUIContext::DrawAttention(UWidget* BaseWidget) {
}

void UFortGlobalUIContext::DisplayStateContent(bool bDisplay) {
}

void UFortGlobalUIContext::CopyToClipboard(const FString& ClipboardText) {
}

float UFortGlobalUIContext::ContentInstallationProgress(const ESubGame SubGame) const {
    return 0.0f;
}

void UFortGlobalUIContext::CloseExternalNotificationWindowIfOpen() {
}

void UFortGlobalUIContext::ClearSelectionGroup(FName SelectionGroup) {
}

void UFortGlobalUIContext::ClearRatingWidgetInfo() {
}

void UFortGlobalUIContext::ClearLastMissionReports() {
}

void UFortGlobalUIContext::ClearLastGameSummaryInfo() const {
}

void UFortGlobalUIContext::ClearForceSetFeatureState(EFortUIFeature Feature) {
}

void UFortGlobalUIContext::CheckFlag(const FString& FlagName, EFlagStatus& OutStatus) {
}

bool UFortGlobalUIContext::CanPlay(ESubGame SubGame, FText& DenialReason) const {
    return false;
}

bool UFortGlobalUIContext::CanMatchmake(ESubGame SubGame, FText& DenialReason) {
    return false;
}

void UFortGlobalUIContext::CancelDrawAttention(UWidget* BaseWidget) {
}

void UFortGlobalUIContext::BroadcastItemReceivedNotificationShown(bool IsActive) {
}

void UFortGlobalUIContext::BindToFeatureStateAndInitialize(EFortUIFeature Feature, FUIFeatureStateChangedListener Delegate) {
}

bool UFortGlobalUIContext::AllowQuit() const {
    return false;
}

bool UFortGlobalUIContext::AllowLogout() const {
    return false;
}

UFortGlobalUIContext::UFortGlobalUIContext() {
    this->bShouldSubgameSelectStartOnCampaignUpsell = false;
    this->AthenaMatchReadyNotificationWidget = NULL;
    this->ActiveContextSpecificHelpItem = NULL;
    this->bIsUIVisible = false;
    this->bShowRateWidget = false;
}

