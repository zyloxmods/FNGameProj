#include "AthenaHUDBase.h"


void UAthenaHUDBase::UpdateUIExtensions(AFortPlayerState* ClientState, AFortMinigame* Minigame) {
}





void UAthenaHUDBase::HandleVolumeUnloaded(APlayerState* ClientState, AFortVolume* Volume) {
}

void UAthenaHUDBase::HandleVolumeStateChanged(EVolumeState NewState, AFortVolume* Volume) {
}

void UAthenaHUDBase::HandleVolumeLoaded(APlayerState* ClientState, AFortVolume* Volume) {
}

void UAthenaHUDBase::HandleUpdateMinigameUIExtensions(AFortMinigame* Minigame) {
}

void UAthenaHUDBase::HandleExitVolume(APlayerState* ClientState, AFortVolume* Volume) {
}

void UAthenaHUDBase::HandleEnteredVolume(APlayerState* ClientState, AFortVolume* Volume) {
}

void UAthenaHUDBase::HandleCursorModeChanging(bool bCursorModeEnabled) {
}

void UAthenaHUDBase::ClearUIExtensions() {
}

void UAthenaHUDBase::BindVolumeEvents() {
}

UAthenaHUDBase::UAthenaHUDBase() {
    this->PlayerViewModel = NULL;
    this->ScalableOverlay = NULL;
    this->KairosHUDLayerClass = NULL;
}

