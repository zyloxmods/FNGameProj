#include "AthenaHUDBase.h"
#include "Templates/SubclassOf.h"

void UAthenaHUDBase::UpdateUIExtensions(AFortPlayerState* ClientState, AFortMinigame* Minigame) {
}

void UAthenaHUDBase::UpdateCreativePlotLinkedVolume(AFortVolume* Volume) {
}

void UAthenaHUDBase::SetZoneCompleted(bool bValue) {
}


void UAthenaHUDBase::SetFullscreenMapVisibilityNative(bool bIsVisible) {
}


void UAthenaHUDBase::PlaylistExtensionWidgetCreatedNotSupported(EUIExtensionSlot ExtensionSlot, UUserWidget* Widget) {
}

void UAthenaHUDBase::OnVolumeShowPublishWatermarkChanged(AFortVolume* Volume, bool bShowPublishWatermark) {
}

void UAthenaHUDBase::OnMinigameHideHUD(bool bLoading) {
}


void UAthenaHUDBase::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}




bool UAthenaHUDBase::HUDOwnsExtensionSlot_Implementation(EUIExtensionSlot ExtensionSlot) const {
    return false;
}

void UAthenaHUDBase::HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon) {
}

void UAthenaHUDBase::HandleVolumeUnloaded(APlayerState* ClientState, AFortVolume* Volume) {
}

void UAthenaHUDBase::HandleVolumeStateChanged(EVolumeState NewState, AFortVolume* Volume) {
}

void UAthenaHUDBase::HandleVolumeLoaded(APlayerState* ClientState, AFortVolume* Volume) {
}

void UAthenaHUDBase::HandleUpdateMinigameUIExtensions(AFortMinigame* Minigame) {
}

void UAthenaHUDBase::HandlePickerOpenRequest(EFortPickerMode Mode, int32 InitialOption, bool bIgnoreFirstAccept) {
}

void UAthenaHUDBase::HandleOnUpdateInZoneTitleBarVisibility(bool bNewVisibility) {
}

void UAthenaHUDBase::HandleOnMutatorRemoved(AFortGameplayMutator* NewMutator) {
}

void UAthenaHUDBase::HandleOnMutatorAdded(AFortGameplayMutator* NewMutator) {
}

void UAthenaHUDBase::HandleNewPanelFromMutator(TSubclassOf<UUserWidget> PanelClass) {
}

void UAthenaHUDBase::HandleLocalPlayerDied(const FFortPlayerDeathReport& DeathReport) {
}

void UAthenaHUDBase::HandleExitVolume(APlayerState* ClientState, AFortVolume* Volume) {
}

void UAthenaHUDBase::HandleEnteredVolume(APlayerState* ClientState, AFortVolume* Volume) {
}

void UAthenaHUDBase::HandleCursorModeChanging(bool bCursorModeEnabled, FName ActionName) {
}


bool UAthenaHUDBase::GetZoneCompleted() const {
    return false;
}

void UAthenaHUDBase::ClearUIExtensions() {
}

void UAthenaHUDBase::BindVolumeEvents() {
}

UAthenaHUDBase::UAthenaHUDBase() {
    this->ScalableOverlay = NULL;
    this->MapScreenContainer = NULL;
    this->AthenaHUDMenu = NULL;
    this->AthenaTeamKillsWidget = NULL;
    this->TeamInfo = NULL;
    this->LocalPlayerHitPointInfo = NULL;
    this->AthenaEquippedItemWidget = NULL;
    this->SkydivingInfoWidget = NULL;
    this->CompassSwitcher = NULL;
    this->RetainerBox_TempFrit = NULL;
    this->CreativeLinkedVolume = NULL;
    this->AthenaIndicatorLayer = NULL;
    this->KairosHUDLayerClass = NULL;
    this->InZoneTitleBar = NULL;
    this->CurrentCustomReticleExtension = NULL;
}

