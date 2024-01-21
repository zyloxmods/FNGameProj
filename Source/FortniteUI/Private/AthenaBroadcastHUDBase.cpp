#include "AthenaBroadcastHUDBase.h"


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

void UAthenaBroadcastHUDBase::OnCurrentPlaylistChanged() {
}

UAthenaBroadcastHUDBase::UAthenaBroadcastHUDBase() {
    this->BroadcastHUDControls = NULL;
    this->EventMatchInfoSwitcher = NULL;
}

