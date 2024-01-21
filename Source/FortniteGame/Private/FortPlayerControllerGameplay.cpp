#include "FortPlayerControllerGameplay.h"
#include "Net/UnrealNetwork.h"

bool AFortPlayerControllerGameplay::Validation_IsFlyingPossible() const {
    return false;
}

void AFortPlayerControllerGameplay::StartGhostMode(UFortWorldItemDefinition* ItemProvidingGhostMode) {
}

void AFortPlayerControllerGameplay::SetIsCreativeModeEnabled(bool bIsEnabled) {
}

void AFortPlayerControllerGameplay::SetHUDElementVisibility(const FGameplayTagContainer& HUDElementTags, bool bHideElements, FName ReasonName) {
}

void AFortPlayerControllerGameplay::ServerRPCSetDisplayNPCNumbers_Implementation(bool bEnable) {
}
bool AFortPlayerControllerGameplay::ServerRPCSetDisplayNPCNumbers_Validate(bool bEnable) {
    return true;
}

void AFortPlayerControllerGameplay::ServerCreativeToggleFly_Implementation() {
}
bool AFortPlayerControllerGameplay::ServerCreativeToggleFly_Validate() {
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

void AFortPlayerControllerGameplay::ResetTrick(AFortAthenaVehicle* Vehicle) {
}

void AFortPlayerControllerGameplay::ResetHUDElementVisibilityToSettings(const FGameplayTagContainer& HUDElementTags) {
}

void AFortPlayerControllerGameplay::RefreshHUDElementVisibilitiesToSettings() {
}

void AFortPlayerControllerGameplay::OnWantsToGhostModeChanged(UFortCreativeOption* CreativeOption, uint8 IndexValue) {
}

void AFortPlayerControllerGameplay::OnWantedFlightSpeedChanged(UFortCreativeOption* CreativeOption, uint8 IndexValue) {
}

void AFortPlayerControllerGameplay::OnVerifyAllowedToFly() {
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

bool AFortPlayerControllerGameplay::IsInGhostMode() const {
    return false;
}

bool AFortPlayerControllerGameplay::IsCreativeQuickbarEnabled() const {
    return false;
}

bool AFortPlayerControllerGameplay::IsCreativeModeEnabled() const {
    return false;
}

bool AFortPlayerControllerGameplay::IsAllowedToFly() const {
    return false;
}

void AFortPlayerControllerGameplay::InitializeAmbientAudioController() {
}

void AFortPlayerControllerGameplay::HandlePoiTagContainerTableFinishedReplicating(AFortPoiManager* PoiManager) {
}

void AFortPlayerControllerGameplay::GrantCreativePhoneItemDefLoadedCallback() {
}

FVehicleTrickInfo AFortPlayerControllerGameplay::GetVehicleTrickInfo() {
    return FVehicleTrickInfo{};
}

UFortAmbientAudioController* AFortPlayerControllerGameplay::GetAmbientAudioController() {
    return NULL;
}

void AFortPlayerControllerGameplay::EndGhostMode() {
}

void AFortPlayerControllerGameplay::DisplayNPCNumbers(bool bDisplay) {
}

void AFortPlayerControllerGameplay::DisplayHUDElementVisibility() {
}

void AFortPlayerControllerGameplay::DisableTrickCredit(float Duration) {
}

void AFortPlayerControllerGameplay::ClientEnsureCreativePhoneIsInProperSlot_Implementation() {
}

void AFortPlayerControllerGameplay::ClientCreativeStopFly_Implementation() {
}

void AFortPlayerControllerGameplay::CheckGhostModeItemReplicated() {
}

void AFortPlayerControllerGameplay::CheckGhostModeItemRemoved(UFortWorldItemDefinition* GhostModeItemDef) {
}

bool AFortPlayerControllerGameplay::AreHUDElementsVisible(const FGameplayTagContainer& HUDElementTags) const {
    return false;
}

void AFortPlayerControllerGameplay::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerControllerGameplay, PoiTagContainerTableID);
    DOREPLIFETIME(AFortPlayerControllerGameplay, GhostModeRepData);
    DOREPLIFETIME(AFortPlayerControllerGameplay, ServerNumNPCs);
    DOREPLIFETIME(AFortPlayerControllerGameplay, ServerMaxNumNPCs);
    DOREPLIFETIME(AFortPlayerControllerGameplay, bDisplayNPCNumbers);
    DOREPLIFETIME(AFortPlayerControllerGameplay, FlyingModifierIndex);
    DOREPLIFETIME(AFortPlayerControllerGameplay, bIsFlightSprinting);
    DOREPLIFETIME(AFortPlayerControllerGameplay, bIsCreativeModeEnabled);
    DOREPLIFETIME(AFortPlayerControllerGameplay, bIsCreativeQuickbarEnabled);
}

AFortPlayerControllerGameplay::AFortPlayerControllerGameplay() {
    this->FortAmbientAudioController = NULL;
    this->PoiTagContainerTableID = -1;
    this->ServerNumNPCs = 0;
    this->ServerMaxNumNPCs = 0;
    this->bDisplayNPCNumbers = false;
    this->bHasSetInitialPoiTags = false;
    this->CreativeModeFlyingInputComponent = NULL;
    this->CreativeModeInputComponent = NULL;
    this->FlyingModifiers.AddDefaulted(5);
    this->FlyingModifierIndex = 1;
    this->FlightSpeedWhenEnteredSprint = 1;
    this->bIsFlightSprinting = false;
    this->bIsCreativeModeEnabled = false;
    this->bIsCreativeQuickbarEnabled = false;
    this->CreativeOptionsInternal = NULL;
}

