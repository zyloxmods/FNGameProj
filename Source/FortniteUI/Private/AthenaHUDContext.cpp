#include "AthenaHUDContext.h"

float UAthenaHUDContext::VictoryStingerTimeUntilFadeOut() const {
    return 0.0f;
}

bool UAthenaHUDContext::UseTapToShoot() const {
    return false;
}

void UAthenaHUDContext::UseOrRleoadFromHUDStop() {
}

void UAthenaHUDContext::UseOrRleoadFromHUDStart() {
}

void UAthenaHUDContext::UpdateSelectedWidgetMoveOffsetVector(const FVector2D& VectorOffset, float fMoveScale) {
}

void UAthenaHUDContext::TryBestUseForActor(AActor* ActorToUse) {
}

void UAthenaHUDContext::TakeMovementInputFromHUD(FVector2D MoveVector) {
}

void UAthenaHUDContext::TakeLookStickInputFromHUD(const FVector2D LookStickPosition) {
}

void UAthenaHUDContext::TakeLookInputFromHUD(FRotator LookRotator) {
}

void UAthenaHUDContext::TakeItemSelectionInputFromHUD(const int32 TouchIndex, const int32 SlotIdx, bool& bIsUsing, EFortQuickBars InQuickBar, bool bReloadOrUseIfAlreadySelected, bool bStopUseImmediately) {
}

void UAthenaHUDContext::SwitchToPrimaryQuickbar() {
}

void UAthenaHUDContext::SwapQuickBarFocusFromHUD(EFortQuickBars InQuickBar, int32 SlotOverride) {
}

void UAthenaHUDContext::StopTargettingFromHUD() {
}

void UAthenaHUDContext::StopItemSelectionInputFromHUD(const int32 TouchIndex, const int32 SlotIdx, EFortQuickBars InQuickBar) {
}

void UAthenaHUDContext::SpecialEventStarted(float TotalEventTime, float TimeRemaining, bool bIsAttacker, const FText EventDescription) {
}

void UAthenaHUDContext::SpecialEventEnded() {
}

void UAthenaHUDContext::ShowMobilePicker() {
}

void UAthenaHUDContext::ShowMarkerGameModeMessage(int32 PlayerId, int32 InstanceID) const {
}

void UAthenaHUDContext::ShowGameModeMessage() const {
}

bool UAthenaHUDContext::ShouldVictoryUIPushEmoteInput() const {
    return false;
}

bool UAthenaHUDContext::ShouldPlayCustomEndScreenAtLoss() const {
    return false;
}

bool UAthenaHUDContext::ShouldDisplayScoreUI() {
    return false;
}

bool UAthenaHUDContext::ShouldDisplayPlacement() {
    return false;
}

bool UAthenaHUDContext::ShouldAlwaysDisplaySquadInfo() {
    return false;
}

void UAthenaHUDContext::SetTargetingToggleable(const bool bNewValue) {
}

void UAthenaHUDContext::SetSelectWidgetToMoveMode(bool bSet) {
}

void UAthenaHUDContext::SetSelectedInventoryItem(UFortItem* Item) {
}

void UAthenaHUDContext::SetResourceMaterial(EFortResourceType NewMaterial) {
}

void UAthenaHUDContext::SetPTTState(EPTTState NewPushToTalkState) {
}

void UAthenaHUDContext::SetPostGameWidgetPlacement(FName WidgetPlacement) {
}

void UAthenaHUDContext::SetLockOnStickCoords(const FVector2D& LockOnCoords) {
}

void UAthenaHUDContext::SetLocalPlayerWonMatch(bool bLocalPlayerWon) {
}

void UAthenaHUDContext::SelectWidgetToMove(UWidget* Widget) {
}

void UAthenaHUDContext::ReloadFromHUD() {
}

void UAthenaHUDContext::PushGameOverEmoteInput() {
}

bool UAthenaHUDContext::OwnerOrWeaponHasTag(FGameplayTag InTag) const {
    return false;
}

void UAthenaHUDContext::OnReadyForWinnerInfoDisplay() {
}

void UAthenaHUDContext::OnClientSettingUpdatedShowViewers() {
}

void UAthenaHUDContext::OnAllWinnersAnnounced() {
}

void UAthenaHUDContext::JumpFromHudStart(int32 TouchIndex) {
}

void UAthenaHUDContext::JumpFromHudEnd() {
}

bool UAthenaHUDContext::IsVictoryUICinematic() const {
    return false;
}

bool UAthenaHUDContext::IsUsingScope() const {
    return false;
}

bool UAthenaHUDContext::IsTargeting() const {
    return false;
}

bool UAthenaHUDContext::IsShowViewerCountEnabled() const {
    return false;
}

bool UAthenaHUDContext::IsRunningOnBattery() const {
    return false;
}

bool UAthenaHUDContext::IsOperatingTurret() const {
    return false;
}

bool UAthenaHUDContext::IsMovingSelectedWidget() const {
    return false;
}

bool UAthenaHUDContext::IsInSelectWidgetToMoveMode() const {
    return false;
}

bool UAthenaHUDContext::IsInBuildMode() const {
    return false;
}

bool UAthenaHUDContext::IsFiringFromTouch(int32 TouchIndex) const {
    return false;
}

bool UAthenaHUDContext::IsCurrentWeaponFiring() const {
    return false;
}

bool UAthenaHUDContext::IsCurrentWeaponChargeable() const {
    return false;
}

bool UAthenaHUDContext::IsCrouching() const {
    return false;
}

bool UAthenaHUDContext::IsAutoRunEnabled() const {
    return false;
}

bool UAthenaHUDContext::IsActionBound(const FName ActionName) {
    return false;
}

void UAthenaHUDContext::HideGameModeMessage() const {
}

bool UAthenaHUDContext::HasWifi() const {
    return false;
}

bool UAthenaHUDContext::HasLockOnTarget() const {
    return false;
}

bool UAthenaHUDContext::HasFiringTouch() const {
    return false;
}

bool UAthenaHUDContext::HasAutofireTarget() const {
    return false;
}

void UAthenaHUDContext::HandleUIGameplayCue(FName CueName, TEnumAsByte<EGameplayCueEvent::Type> EventType, const FGameplayCueParameters& Parameters) {
}

void UAthenaHUDContext::HandleSpectatorViewTargetChanged() {
}

void UAthenaHUDContext::HandleLocalPlayerDBNOStateChanged(AFortPawn* FortPawn, bool bIsDBNO) {
}

void UAthenaHUDContext::HandleLocalPlayerBeginSkydiving() {
}

void UAthenaHUDContext::HandleGamePhaseChange(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void UAthenaHUDContext::GetWinnerText(FText& ReturnText, const FText& WinnerName) {
}

FText UAthenaHUDContext::GetVictoryText() const {
    return FText::GetEmpty();
}

USoundCue* UAthenaHUDContext::GetVictoryStinger() const {
    return NULL;
}

ETouchInteractMode UAthenaHUDContext::GetTouchInteractMode() const {
    return ETouchInteractMode::Off;
}

int32 UAthenaHUDContext::GetSquadSize() const {
    return 0;
}

int32 UAthenaHUDContext::GetSquadConnectedCount() const {
    return 0;
}

EPTTState UAthenaHUDContext::GetPTTState() const {
    return EPTTState::Enabled;
}

FString UAthenaHUDContext::GetPlayerName() const {
    return TEXT("");
}

FLinearColor UAthenaHUDContext::GetPlayerColor() const {
    return FLinearColor{};
}

void UAthenaHUDContext::GetLocalTime(int32& Hours, int32& Minutes) const {
}

bool UAthenaHUDContext::GetLocalPlayerWonMatch() const {
    return false;
}

int32 UAthenaHUDContext::GetJumpPressedTouchIndex() const {
    return 0;
}

int32 UAthenaHUDContext::GetInteractPressedTouchIndex() const {
    return 0;
}

bool UAthenaHUDContext::GetInLowPerformanceMode() const {
    return false;
}

FText UAthenaHUDContext::GetGliderDisplayName() const {
    return FText::GetEmpty();
}

EAthenaGamePhase UAthenaHUDContext::GetGamePhase() const {
    return EAthenaGamePhase::None;
}

float UAthenaHUDContext::GetGameOverDelayTime() const {
    return 0.0f;
}

TSoftClassPtr<UUserWidget> UAthenaHUDContext::GetCustomDBNOWidgetClass() const {
    return NULL;
}

TSoftObjectPtr<UMaterialInterface> UAthenaHUDContext::GetCustomDBNOReviveMaterial() const {
    return NULL;
}

bool UAthenaHUDContext::GetCanPTT() const {
    return false;
}

TArray<FName> UAthenaHUDContext::GetBoundActions() {
    return TArray<FName>();
}

float UAthenaHUDContext::GetBatteryLevel() const {
    return 0.0f;
}

void UAthenaHUDContext::ForwardOnSpecialActorListChanged(const FSpecialActorRepData& SpecialActorData) {
}

void UAthenaHUDContext::ForceVictoryRoyaleUI() {
}

void UAthenaHUDContext::ForceStartPostGameFlow() {
}

void UAthenaHUDContext::ForceFireFromHUDStop() {
}

void UAthenaHUDContext::FireFromHUDStop(int32 TouchIndex, UWidget* DebugWidget) {
}

void UAthenaHUDContext::FireFromHUDStart(int32 TouchIndex, UWidget* DebugWidget) {
}

void UAthenaHUDContext::ExecuteActionNameFromHUDWithEventType(const FName ActionName, const TEnumAsByte<EInputEvent> KeyEvent) {
}

void UAthenaHUDContext::ExecuteActionNameFromHUD(const FName ActionName) {
}

void UAthenaHUDContext::EndUseFromHUD() {
}

void UAthenaHUDContext::EnableAutoRunFromHUD(bool bEnable) {
}

bool UAthenaHUDContext::DoesPlaylistUIExtensionSlotContainWidget(EUIExtensionSlot PlaylistSlot) const {
    return false;
}

float UAthenaHUDContext::DisplayPlayerWonTime() {
    return 0.0f;
}

void UAthenaHUDContext::CycleQuickbar() const {
}

bool UAthenaHUDContext::CanShootInVehicle() const {
    return false;
}

bool UAthenaHUDContext::CanCurrentWeaponAutoFireFromReticle() const {
    return false;
}

bool UAthenaHUDContext::CanAutoRun() const {
    return false;
}

void UAthenaHUDContext::BeginUseFromHUD() {
}

UAthenaHUDContext::UAthenaHUDContext() {
    this->bMoveButtonMode = false;
    this->bPendingAttachToHUD = false;
    this->bLocalPlayerWonMatch = false;
    this->BoundPlayerPawn = NULL;
    this->PlayerViewModel = NULL;
}

