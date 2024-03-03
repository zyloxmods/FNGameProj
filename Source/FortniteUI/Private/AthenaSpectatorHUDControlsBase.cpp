#include "AthenaSpectatorHUDControlsBase.h"



void UAthenaSpectatorHUDControlsBase::OnCameraTypeChangedInternal(AFortPlayerControllerSpectating* SpectatorPC, ESpectatorCameraType NewCameraType) {
}


void UAthenaSpectatorHUDControlsBase::HandleReplayHighlightsAvailable(AFortReplaySpectator* Sender, bool bIsAvailable) {
}



UAthenaSpectatorHUDControlsBase::UAthenaSpectatorHUDControlsBase() {
    this->ReplayTimeline = NULL;
    this->Button_FocusTimeline = NULL;
    this->IconTextButtonReplay_PlayHighlights = NULL;
}

