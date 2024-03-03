#include "MinigameWidgetBase.h"
#include "Templates/SubclassOf.h"


void UMinigameWidgetBase::OnWorldGameStateChanged(AGameStateBase* GameState) {
}

void UMinigameWidgetBase::OnVolumeMinigameChanged(AFortMinigame* Minigame) {
}



void UMinigameWidgetBase::OnGameStateVolumeManagerReplicated() {
}

void UMinigameWidgetBase::OnExitVolume(APlayerState* ClientState, AFortVolume* ExitedVolume) {
}

void UMinigameWidgetBase::OnEnteredVolume(APlayerState* ClientState, AFortVolume* EnteredVolume) {
}



void UMinigameWidgetBase::OnDisplayMinigameInProgressUI_Implementation(bool bDisplay) {
}





void UMinigameWidgetBase::OnCurrentStateChangedDelegate(AFortMinigame* Minigame, EFortMinigameState MinigameState) {
}

FAthenaGameMessageData UMinigameWidgetBase::MakeMessageData(EAthenaGameMsgType MsgType, FText MsgText, USoundCue* MsgSound, float DisplayTime) {
    return FAthenaGameMessageData{};
}

void UMinigameWidgetBase::HideAllMinigameWidgetUI() {
}

void UMinigameWidgetBase::HandlePlayerStatChanged() {
}

int32 UMinigameWidgetBase::GetStatValue(TSubclassOf<UFortMinigameStatFilter> InFilter, bool bGameTotal) {
    return 0;
}

void UMinigameWidgetBase::DynamicHandleLoadingScreenVisibilityChanged(bool IsVisible) {
}

UMinigameWidgetBase::UMinigameWidgetBase() {
    this->bDisplayCaptureObjectiveRow = false;
    this->CurrentMinigame = NULL;
    this->CurrentGameState = NULL;
    this->CurrentVolumeManager = NULL;
    this->CurrentVolume = NULL;
}

