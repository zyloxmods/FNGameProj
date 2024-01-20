#include "MinigameWidgetBase.h"


void UMinigameWidgetBase::OnStopExitingVolume(APlayerState* ClientState, AFortVolume* ExitedVolume) {
}



void UMinigameWidgetBase::OnExitVolume(APlayerState* ClientState, AFortVolume* ExitedVolume) {
}

void UMinigameWidgetBase::OnExitingVolume(APlayerState* ClientState, AFortVolume* ExitingVolume) {
}

void UMinigameWidgetBase::OnEnteredVolume(APlayerState* ClientState, AFortVolume* EnteredVolume) {
}



void UMinigameWidgetBase::OnDisplayMinigameInProgressUI_Implementation(bool bDisplay) {
}





void UMinigameWidgetBase::OnCurrentStateChangedDelegate(EFortMinigameState MinigameState) {
}

FAthenaGameMessageData UMinigameWidgetBase::MakeMessageData(EAthenaGameMsgType MsgType, FText MsgText, USoundCue* MsgSound, float DisplayTime) {
    return FAthenaGameMessageData{};
}

void UMinigameWidgetBase::HideAllMinigameWidgetUI() {
}

void UMinigameWidgetBase::DynamicHandleLoadingScreenVisibilityChanged(bool IsVisible) {
}

UMinigameWidgetBase::UMinigameWidgetBase() {
    this->bDisplayCaptureObjectiveRow = false;
    this->CurrentMinigame = NULL;
}

