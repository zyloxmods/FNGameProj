#include "FortPlayerControllerGameplay.h"
#include "Net/UnrealNetwork.h"

bool AFortPlayerControllerGameplay::Validation_IsFlyingPossible() const {
    return false;
}

void AFortPlayerControllerGameplay::StartGhostMode(UFortWorldItemDefinition* ItemProvidingGhostMode) {
}

void AFortPlayerControllerGameplay::ShowQuicktimeEventWidget(float Duration, float SweetSpot, float PerfectTolerance, float GreatTolerance, float GoodTolerance) {
}

void AFortPlayerControllerGameplay::SetLastUsedCreativePropetyFilter(int32 PropertyFilterIndex) {
}

void AFortPlayerControllerGameplay::SetHUDElementVisibility(const FGameplayTagContainer& HUDElementTags, bool bHideElements, FName ReasonName) {
}

void AFortPlayerControllerGameplay::ServerRPCSetDisplayNPCNumbers_Implementation(bool bEnable) {
}
bool AFortPlayerControllerGameplay::ServerRPCSetDisplayNPCNumbers_Validate(bool bEnable) {
    return true;
}

void AFortPlayerControllerGameplay::ServerCreativeToggleFly_Implementation(const bool bEnableOnly) {
}
bool AFortPlayerControllerGameplay::ServerCreativeToggleFly_Validate(const bool bEnableOnly) {
    return true;
}

void AFortPlayerControllerGameplay::ServerCreativeStopGhost_Implementation() {
}
bool AFortPlayerControllerGameplay::ServerCreativeStopGhost_Validate() {
    return true;
}

void AFortPlayerControllerGameplay::ServerCreativeStopFlyUp_Implementation() {
}
bool AFortPlayerControllerGameplay::ServerCreativeStopFlyUp_Validate() {
    return true;
}

void AFortPlayerControllerGameplay::ServerCreativeStopFlyDown_Implementation() {
}
bool AFortPlayerControllerGameplay::ServerCreativeStopFlyDown_Validate() {
    return true;
}

void AFortPlayerControllerGameplay::ServerCreativeStopFly_Implementation() {
}
bool AFortPlayerControllerGameplay::ServerCreativeStopFly_Validate() {
    return true;
}

void AFortPlayerControllerGameplay::ServerCreativeStartFlyUp_Implementation() {
}
bool AFortPlayerControllerGameplay::ServerCreativeStartFlyUp_Validate() {
    return true;
}

void AFortPlayerControllerGameplay::ServerCreativeStartFlyDown_Implementation() {
}
bool AFortPlayerControllerGameplay::ServerCreativeStartFlyDown_Validate() {
    return true;
}

void AFortPlayerControllerGameplay::ServerCreativeSetGhost_Implementation(bool bWantsToGhost) {
}
bool AFortPlayerControllerGameplay::ServerCreativeSetGhost_Validate(bool bWantsToGhost) {
    return true;
}

void AFortPlayerControllerGameplay::ServerCreativeSetFlightSprint_Implementation(bool bSprint) {
}
bool AFortPlayerControllerGameplay::ServerCreativeSetFlightSprint_Validate(bool bSprint) {
    return true;
}

void AFortPlayerControllerGameplay::ServerCreativeSetFlightSpeedIndex_Implementation(int32 Index) {
}
bool AFortPlayerControllerGameplay::ServerCreativeSetFlightSpeedIndex_Validate(int32 Index) {
    return true;
}

void AFortPlayerControllerGameplay::ServerAwardVehicleTrickPoints_Implementation(int32 InPoints, int32 InAirTimeX1000) {
}
bool AFortPlayerControllerGameplay::ServerAwardVehicleTrickPoints_Validate(int32 InPoints, int32 InAirTimeX1000) {
    return true;
}

void AFortPlayerControllerGameplay::ResetTrick(AActor* VehicleActor) {
}

void AFortPlayerControllerGameplay::ResetHUDElementVisibilityToSettings(const FGameplayTagContainer& HUDElementTags) {
}

void AFortPlayerControllerGameplay::RefreshHUDElementVisibilitiesToSettings() {
}

void AFortPlayerControllerGameplay::QuickTimeEventFeedbackWidget(EFortQuickTimeEventResult Result) {
}

void AFortPlayerControllerGameplay::PushCreativeReadyCheckInputMode() {
}

void AFortPlayerControllerGameplay::PopCreativeReadyCheckInputMode() {
}

void AFortPlayerControllerGameplay::OnWantsToGhostModeChanged(UFortCreativeOption* CreativeOption, uint8 IndexValue) {
}

void AFortPlayerControllerGameplay::OnWantedUIMetricsDisplayChanged(UFortCreativeOption* CreativeOption, uint8 IndexValue) {
}

void AFortPlayerControllerGameplay::OnWantedToSwapPhoneAndHarvestHoldChanged(UFortCreativeOption* CreativeOption, uint8 IndexValue) {
}

void AFortPlayerControllerGameplay::OnWantedFlightSpeedChanged(UFortCreativeOption* CreativeOption, uint8 IndexValue) {
}

void AFortPlayerControllerGameplay::OnVerifyAllowedToFly() {
}

void AFortPlayerControllerGameplay::OnRep_UIMetricsDisplayIndex() {
}

void AFortPlayerControllerGameplay::OnRep_PoiTagContainerTableID(int16 PreviousPoiTagContainerTableID) {
}

void AFortPlayerControllerGameplay::OnRep_IsFlightSprinting() {
}

void AFortPlayerControllerGameplay::OnRep_IsCreativeQuickbarEnabled(bool bPrevIsEnabled) {
}

void AFortPlayerControllerGameplay::OnRep_IsCreativeModeEnabled() {
}

void AFortPlayerControllerGameplay::OnRep_GhostModeRepData() {
}

void AFortPlayerControllerGameplay::OnRep_FlyingModifierIndex() {
}

void AFortPlayerControllerGameplay::OnRep_CreativeQuickbarComponent() {
}

bool AFortPlayerControllerGameplay::IsUsingHideOtherPlayerNames() const {
    return false;
}

bool AFortPlayerControllerGameplay::IsInGhostMode() const {
    return false;
}

bool AFortPlayerControllerGameplay::IsCreativeThermometerNewUIEnabled() const {
    return false;
}

bool AFortPlayerControllerGameplay::IsCreativeQuickmenuEnabled() const {
    return false;
}

bool AFortPlayerControllerGameplay::IsCreativeQuickbarEnabled() const {
    return false;
}

bool AFortPlayerControllerGameplay::IsCreativeQuickbarActive() const {
    return false;
}

bool AFortPlayerControllerGameplay::IsCreativePreviewScreenshotAvailable() {
    return false;
}

bool AFortPlayerControllerGameplay::IsCreativePhoneAndHarvestHoldSwapped() const {
    return false;
}

bool AFortPlayerControllerGameplay::IsCreativeModeEnabled() const {
    return false;
}

bool AFortPlayerControllerGameplay::IsCreativeIslandExporterEnabled() const {
    return false;
}

bool AFortPlayerControllerGameplay::IsAllowedToFly() const {
    return false;
}

void AFortPlayerControllerGameplay::InitializeAmbientAudioController() {
}

void AFortPlayerControllerGameplay::HideQuicktimeEventWidget() {
}

void AFortPlayerControllerGameplay::HandlePoiTagContainerTableFinishedReplicating(AFortPoiManager* PoiManager) {
}

void AFortPlayerControllerGameplay::GrantCreativePhoneItemDefLoadedCallback() {
}

FVehicleTrickInfo AFortPlayerControllerGameplay::GetVehicleTrickInfo() {
    return FVehicleTrickInfo{};
}

FString AFortPlayerControllerGameplay::GetSpectatingPlayerName() {
    return TEXT("");
}

FString AFortPlayerControllerGameplay::GetSettingsFilteredPlayerName(const AFortPlayerState* OtherPlayerState) const {
    return TEXT("");
}

int32 AFortPlayerControllerGameplay::GetLastUsedCreativePropetyFilter() {
    return 0;
}

UFortAmbientAudioController* AFortPlayerControllerGameplay::GetAmbientAudioController() {
    return NULL;
}

void AFortPlayerControllerGameplay::FollowPreviousTeammate() {
}

void AFortPlayerControllerGameplay::FollowNextTeammate() {
}

void AFortPlayerControllerGameplay::EndGhostMode() {
}

void AFortPlayerControllerGameplay::DisplayNPCNumbers(bool bDisplay) {
}

void AFortPlayerControllerGameplay::DisplayHUDElementVisibility() {
}

void AFortPlayerControllerGameplay::DisableTrickCredit(float Duration) {
}

void AFortPlayerControllerGameplay::CreativeToggleFly(const bool bEnableOnly) {
}

void AFortPlayerControllerGameplay::ClientRemoveItemAbilitySet_Implementation(UFortAbilitySet* AbilitySet, FGuid ItemGuid) {
}

void AFortPlayerControllerGameplay::ClientCreativeStopFly_Implementation() {
}

void AFortPlayerControllerGameplay::ClientCreativeSetUIMetricsDisplayIndex_Implementation(int32 Index) {
}

void AFortPlayerControllerGameplay::ClientCreativePhoneCreated_Implementation() {
}

void AFortPlayerControllerGameplay::ClientApplyItemAbilitySet_Implementation(UFortAbilitySet* AbilitySet, FGuid ItemGuid) {
}

void AFortPlayerControllerGameplay::CheckGhostModeItemReplicated() {
}

void AFortPlayerControllerGameplay::CheckGhostModeItemRemoved(UFortWorldItemDefinition* GhostModeItemDef) {
}

bool AFortPlayerControllerGameplay::CanFollowTeammate() const {
    return false;
}

bool AFortPlayerControllerGameplay::AreHUDElementsVisible(const FGameplayTagContainer& HUDElementTags) const {
    return false;
}

void AFortPlayerControllerGameplay::ActivateCreativePreviewScreenshot(bool bActivate) {
}

void AFortPlayerControllerGameplay::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerControllerGameplay, PoiTagContainerTableID);
    DOREPLIFETIME(AFortPlayerControllerGameplay, CreativeQuickbarComponent);
    DOREPLIFETIME(AFortPlayerControllerGameplay, GhostModeRepData);
    DOREPLIFETIME(AFortPlayerControllerGameplay, ServerNumNPCs);
    DOREPLIFETIME(AFortPlayerControllerGameplay, ServerMaxNumNPCs);
    DOREPLIFETIME(AFortPlayerControllerGameplay, bDisplayNPCNumbers);
    DOREPLIFETIME(AFortPlayerControllerGameplay, FlyingModifierIndex);
    DOREPLIFETIME(AFortPlayerControllerGameplay, UIMetricsDisplayIndex);
    DOREPLIFETIME(AFortPlayerControllerGameplay, bIsFlightSprinting);
    DOREPLIFETIME(AFortPlayerControllerGameplay, bIsCreativeModeEnabled);
    DOREPLIFETIME(AFortPlayerControllerGameplay, bIsCreativeQuickbarEnabled);
    DOREPLIFETIME(AFortPlayerControllerGameplay, bCreativeMCPProfileIsMatchamkingEnabled);
    DOREPLIFETIME(AFortPlayerControllerGameplay, bIsCreativeThermometerNewUIEnabled);
    DOREPLIFETIME(AFortPlayerControllerGameplay, bIsCreativeIslandExporterEnabled);
}

AFortPlayerControllerGameplay::AFortPlayerControllerGameplay() {
    FortAmbientAudioController = NULL;
    PoiTagContainerTableID = 0;
    CreativeCameraPreviewScreenshotClass = NULL;
    CreativeQuickbarComponent = NULL;
    ServerNumNPCs = 0;
    ServerMaxNumNPCs = 0;
    bDisplayNPCNumbers = false;
    bHasSetInitialPoiTags = false;
    CreativeModeFlyingInputComponent = NULL;
    CreativeModeInputComponent = NULL;
    CreativeGlobalOptionsInputComponent = NULL;
    CreativeModePreviewScreenshotInputComponent = NULL;
    CreativeModeInGameReadyCheckInputComponent = NULL;
    FlyingModifiers.AddDefaulted(5);
    FlyingModifierIndex = 0;
    UIMetricsDisplayIndex = 0;
    FlightSpeedWhenEnteredSprint = 0;
    bIsFlightSprinting = false;
    bIsCreativeModeEnabled = false;
    bIsCreativeQuickbarEnabled = true;
    bIsCreativeQuickmenuEnabled = true;
    bCreativeMCPProfileIsMatchamkingEnabled = false;
    bIsCreativeThermometer2Enabled = false;
    bIsCreativeThermometerNewUIEnabled = false;
    bIsCreativeIslandExporterEnabled = false;
    DefaultCameraModifierClasses.AddDefaulted(1);
    CreativeOptionsInternal = NULL;
}

