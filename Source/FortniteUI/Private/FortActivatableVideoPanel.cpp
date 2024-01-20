#include "FortActivatableVideoPanel.h"

bool UFortActivatableVideoPanel::StreamVideo(const FString& VideoURL) {
    return false;
}

void UFortActivatableVideoPanel::ShowThrobber() {
}

bool UFortActivatableVideoPanel::LoadVideoByIndex(int32 VideoIndex) {
    return false;
}

bool UFortActivatableVideoPanel::LoadVideo(FName VideoID) {
    return false;
}

UFortActivatableVideoPanel::UFortActivatableVideoPanel() {
    this->bAutoPlayOnActivated = true;
    this->bAllowSkipping = true;
    this->VideoPlayerWidget = NULL;
    this->Button_Skip = NULL;
    this->Image_ThrobberBackground = NULL;
    this->Image_Throbber = NULL;
}

