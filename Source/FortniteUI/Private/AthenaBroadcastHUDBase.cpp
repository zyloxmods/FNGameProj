#include "AthenaBroadcastHUDBase.h"

void UAthenaBroadcastHUDBase::TryHandleIfPlayerStateAlreadyInVolume() {
}


void UAthenaBroadcastHUDBase::OnVolumeMinigameChanged(AFortMinigame* Minigame) {
}

void UAthenaBroadcastHUDBase::OnVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UAthenaBroadcastHUDBase::OnVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UAthenaBroadcastHUDBase::OnVolumeAdded(AFortVolume* Volume) {
}



void UAthenaBroadcastHUDBase::OnToggleScoreboardScreenActionExecuted(bool& bPassThrough) {
}


void UAthenaBroadcastHUDBase::OnTogglePipModeActionExecuted(bool& bPassThrough) {
}

void UAthenaBroadcastHUDBase::OnToggleMatchStatusScreenActionExecuted(bool& bPassThrough) {
}


void UAthenaBroadcastHUDBase::OnToggleKillFeedActionExecuted(bool& bPassThrough) {
}


void UAthenaBroadcastHUDBase::OnToggleEliminatedGridScreenActionExecuted(bool& bPassThrough) {
}

void UAthenaBroadcastHUDBase::OnToggleActiveGridScreenActionExecuted(bool& bPassThrough) {
}








void UAthenaBroadcastHUDBase::OnGameStateSet(AFortGameState* NewGameState) {
}

void UAthenaBroadcastHUDBase::OnCursorModeChanging(bool bCursorModeEnabled, FName ActionName) {
}

void UAthenaBroadcastHUDBase::OnCurrentPlaylistChanged() {
}

void UAthenaBroadcastHUDBase::HandleToggleReplayViewSettings() {
}

void UAthenaBroadcastHUDBase::HandleToggleHighlightsList() {
}

void UAthenaBroadcastHUDBase::HandleToggleGoToTime() {
}

void UAthenaBroadcastHUDBase::HandleToggleActionFeedScreen() {
}

void UAthenaBroadcastHUDBase::HandleSpectatorViewTargetChanged() {
}

void UAthenaBroadcastHUDBase::HandleNameplatesEnabledChanged(bool bInNameplatesEnabled) {
}

void UAthenaBroadcastHUDBase::HandleHudVisibilityChanged(EHudVisibilityState NewVisibility) {
}


UAthenaBroadcastHUDBase::UAthenaBroadcastHUDBase() {
    this->BroadcastHUDControls = NULL;
    this->NameplateLayer = NULL;
    this->AthenaBroadcastMapPanel = NULL;
    this->EventMatchInfoSwitcher = NULL;
    this->Switcher_TopLeft = NULL;
    this->TopLeft_Empty = NULL;
    this->TopLeft_ViewSettings = NULL;
    this->TopLeft_ActionFeed = NULL;
    this->TopLeft_GoToTime = NULL;
    this->TopLeft_Highlights = NULL;
}

