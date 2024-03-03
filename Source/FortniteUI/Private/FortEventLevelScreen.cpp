#include "FortEventLevelScreen.h"

void UFortEventLevelScreen::StreamedVideoOpeningTimedOut() {
}

void UFortEventLevelScreen::StreamedVideoOnUrlSuccess(const FString& OpenedUrl) {
}

void UFortEventLevelScreen::StreamedVideoOnUrlFailure(const FString& OpenedUrl) {
}

void UFortEventLevelScreen::StreamedVideoOnSkipButtonClicked() {
}

void UFortEventLevelScreen::StreamedVideoOnSkipBeforeVideoURLReceived() {
}

void UFortEventLevelScreen::StreamedVideoOnOpenFailure(const FString& OpenedUrl) {
}

void UFortEventLevelScreen::StreamedVideoOnMediaPlayerEndReached() {
}

void UFortEventLevelScreen::StreamedVideoOnMediaOpened(const FString& OpenedUrl) {
}

void UFortEventLevelScreen::OnEventCinematicVideoFinished() {
}

UFortEventLevelScreen::UFortEventLevelScreen() {
    this->EventLevelScreenData = NULL;
    this->CinematicMovieWidgetInstance = NULL;
    this->bCollapseTopbar = false;
    this->bCollapseBottombar = false;
}

