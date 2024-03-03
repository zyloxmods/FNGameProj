#include "FortActivatableVideoPanel.h"

bool UFortActivatableVideoPanel::StreamVideoFromSource(UStreamMediaSource* StreamSource) {
    return false;
}

bool UFortActivatableVideoPanel::StreamVideo(const FString& VideoURL) {
    return false;
}

void UFortActivatableVideoPanel::StartVideo() {
}

void UFortActivatableVideoPanel::ShowThrobber() {
}


bool UFortActivatableVideoPanel::ShouldAutoPlayVideo(FName AssetName, bool bAllowRecord) const {
    return false;
}



bool UFortActivatableVideoPanel::LoadVideo(FName VideoId, bool bIsAutoPlay, bool bForceDefaultAudioTrack, FName VideoString) {
    return false;
}


UMediaPlayer* UFortActivatableVideoPanel::GetMediaPlayer() const {
    return NULL;
}

void UFortActivatableVideoPanel::EnableSkipButton(bool bAllowSkip) {
}

UFortActivatableVideoPanel::UFortActivatableVideoPanel() {
    this->bOverwriteSkip = false;
    this->AutomaticallyDismissPanel = true;
    this->bAutoPlayOnActivated = true;
    this->bAllowSkipping = true;
    this->ControlsVisible = false;
    this->LastInteractionTime = 1;
    this->VideoPlayerWidget = NULL;
    this->Button_Skip = NULL;
    this->Image_ThrobberBackground = NULL;
    this->Image_Throbber = NULL;
    this->ActiveSoundMix = NULL;
}

