#include "FortHUDContext.h"

void UFortHUDContext::UpdateTrapAttachedToBuilding() {
}

void UFortHUDContext::TriggerCooldownUpdate() {
}

void UFortHUDContext::ToggleFullScreenMap() const {
}

bool UFortHUDContext::ShouldOnlyShowNextPrevBuildingSlotKeybinds() const {
    return false;
}

void UFortHUDContext::SetPreparingMgmtMenu(bool bPreparing) {
}

void UFortHUDContext::SetIsLocalChallengesVisible(bool bIsVisible) {
}

void UFortHUDContext::SetIndicatorsState(EFortIndicatorState NewState) {
}

void UFortHUDContext::SetIndicatorsAllowed(bool bIndicatorsAllowed) {
}

void UFortHUDContext::SetHUDElementVisibility(const FGameplayTagContainer& HUDElementTags, bool bHideElements) {
}

void UFortHUDContext::SetCursorModeLocked(bool bLocked) {
}

void UFortHUDContext::RequestPromptDisplay(const FFortHUDTagPromptData& PromptData, const FGameplayTag& Tag) {
}

void UFortHUDContext::RequestMgmtMenuTab(FName TabName) {
}

void UFortHUDContext::RemovePointOfInterest(AActor* PointOfInterest) {
}

bool UFortHUDContext::PreviewItemPickUp(const UFortItem* InItem, const EFortQuickBars InQuickBarType, int32& OutSlotIndex, TMap<int32, int32>& OutItemsToPush, TArray<int32>& OutItemsToDrop) {
    return false;
}

void UFortHUDContext::OnClientSettingUpdatedShowViewers() {
}

bool UFortHUDContext::IsShowViewerCountEnabled() const {
    return false;
}

bool UFortHUDContext::IsPreparingMgmtMenu() const {
    return false;
}

bool UFortHUDContext::IsLocalChallengesVisible() const {
    return false;
}

bool UFortHUDContext::IsInEditMode() const {
    return false;
}

bool UFortHUDContext::IsInCursorMode() const {
    return false;
}

bool UFortHUDContext::IsContextTutorialActive(EFortContextualTutorialTypes TutorialType) const {
    return false;
}

void UFortHUDContext::HandleVehicleStateChanged(AFortPlayerPawn* PlayerPawn, AActor* NewVehicle, AActor* OldVehicle) {
}

void UFortHUDContext::HandleToggledBattleMapLive(ABattleMapPawnLive* NewSpectatorPawn) {
}

void UFortHUDContext::HandleSpectatorViewTargetChanged() {
}

void UFortHUDContext::HandlePersonalVehicleModeChanged(bool bEnteredVehicle) {
}

void UFortHUDContext::HandleLocalPlayerViewTargetChanged() {
}

void UFortHUDContext::HandleLocalPlayerPlaceChanged() {
}

void UFortHUDContext::HandleLocalPlayerKillsChanged() {
}

void UFortHUDContext::HandleLocalPawnSpawned() {
}

void UFortHUDContext::HandleLocalPawnRevived() {
}

void UFortHUDContext::HandleLocalPawnDied(const FFortPlayerDeathReport& DeathReport) {
}

void UFortHUDContext::HandleFocusedBuildingHealthChanged() {
}

void UFortHUDContext::HandleBuildingModeChanged(bool bEntering) {
}

void UFortHUDContext::HandleActorFocusedForCreative(AActor* NewActor) {
}

float UFortHUDContext::GetTimeToDelayEndOfDayZoneWidgetDisplay() const {
    return 0.0f;
}

float UFortHUDContext::GetScoreDisplayFactor() const {
    return 0.0f;
}

TArray<FFortBadgeCount> UFortHUDContext::GetPotentialBadges() const {
    return TArray<FFortBadgeCount>();
}

AFortPlayerStateZone* UFortHUDContext::GetPlayerStateZone() const {
    return NULL;
}

int32 UFortHUDContext::GetNumAllowedDifficultyIncreases() const {
    return 0;
}

void UFortHUDContext::GetMissionRewards(TArray<UFortItem*>& MissionRewards, TArray<UFortItem*>& MissionAlertRewards) const {
}

TArray<FZoneLoadingScreenHeadingConfig> UFortHUDContext::GetMissionOverviewObjectives() const {
    return TArray<FZoneLoadingScreenHeadingConfig>();
}

AFortMissionManager* UFortHUDContext::GetMissionManager() const {
    return NULL;
}

int32 UFortHUDContext::GetLocalPlayerPlacement() const {
    return 0;
}

bool UFortHUDContext::GetLocalPlayerHasWinningPlacement() const {
    return false;
}

bool UFortHUDContext::GetLocalPlayerHasPlacement() const {
    return false;
}

bool UFortHUDContext::GetLocalPlayerHasLosingPlacement() const {
    return false;
}

EFortIndicatorState UFortHUDContext::GetIndicatorsState() const {
    return EFortIndicatorState::Hidden;
}

AFortGameStateZone* UFortHUDContext::GetGameStateZone() const {
    return NULL;
}

AFortMission* UFortHUDContext::GetFocusedMission() const {
    return NULL;
}

bool UFortHUDContext::GetFocusedBuildingInfo(FFortFocusedBuildingInfo& OutBuildingInfo) const {
    return false;
}

TArray<FEarnedBadgeEntry> UFortHUDContext::GetEarnedBadges() const {
    return TArray<FEarnedBadgeEntry>();
}

int32 UFortHUDContext::GetDifficultyIncreaseRewardsTier() const {
    return 0;
}

void UFortHUDContext::GetDifficultyIncreaseRewardsDifference(int32 BaseDifficultyIncreaseTier, int32 ComparedDifficultyIncreaseTier, TArray<FFortItemDelta>& RewardDeltaInfo) const {
}

void UFortHUDContext::GetDifficultyIncreaseRewards(int32 DifficultyIncreaseTier, TArray<FFortItemDelta>& DifficultyIncreaseRewards) const {
}

FGameplayTagContainer UFortHUDContext::GetCurrentPrimaryMissionTags() const {
    return FGameplayTagContainer{};
}

FFortHUDState UFortHUDContext::GetCurrentHUDState() const {
    return FFortHUDState{};
}

UFortHero* UFortHUDContext::GetCurrentHero() const {
    return NULL;
}

ABuildingActor* UFortHUDContext::GetCurrentFocusedBuilding() const {
    return NULL;
}

bool UFortHUDContext::GetCurrentBasicMissionInfo(FFortBasicMissionInfo& BasicMissionInfo) const {
    return false;
}

bool UFortHUDContext::GetBuildingActorInfo(ABuildingActor* BuildingActor, FFortFocusedBuildingInfo& OutBuildingInfo) const {
    return false;
}

AFortBluGloManager* UFortHUDContext::GetBluGloManager() const {
    return NULL;
}

void UFortHUDContext::GetAccountLevelUpRewards(TArray<FFortItemQuantityPair>& Rewards, int32 AccountLevel) const {
}

void UFortHUDContext::ForwardOnWeaponHudKeyActionUpdated(AFortWeapon* Weapon) {
}

void UFortHUDContext::ForwardOnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon) {
}

void UFortHUDContext::ForwardOnNumSurvivorsRescuedChanged(int32 NumSurvivorsRescued) {
}

void UFortHUDContext::ForwardOnMissionsUpdated() {
}

void UFortHUDContext::ForwardOnAbilityDecisionWindowStackUpdated() {
}

void UFortHUDContext::EnterCursorMode(FName ActionName, UUserWidget* CursorModeWidget) {
}

void UFortHUDContext::EnterCameraMode() {
}

bool UFortHUDContext::AreIndicatorsEnabled() const {
    return false;
}

bool UFortHUDContext::AreHUDElementsVisible(const FGameplayTagContainer& HUDElementTags) const {
    return false;
}

void UFortHUDContext::AddPointOfInterest(AActor* PointOfInterest, FText DisplayText, UTexture2D* DisplayImage, bool bSpecifyColor, FLinearColor ImageColor) {
}

UFortHUDContext::UFortHUDContext() {
    this->bDebugHudObjectiveHeight = false;
    this->bPendingAttachToHUD = false;
    this->OwningPlayerState = NULL;
    this->CurFocusedBuilding = NULL;
    this->CurFocusedTrap = NULL;
    this->BuildingFocusCandidates[0] = NULL;
    this->BuildingFocusCandidates[1] = NULL;
    this->BuildingFocusCandidates[2] = NULL;
    this->BoundPlayerPawn = NULL;
    this->CachedCurrentWeapon = NULL;
    this->CachedPreviousWeapon = NULL;
}

