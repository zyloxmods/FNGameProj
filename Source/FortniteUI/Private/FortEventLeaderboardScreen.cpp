#include "FortEventLeaderboardScreen.h"





void UFortEventLeaderboardScreen::HandleViewTabSelectionChanged(UCommonButton* TabButton, int32 TabIdx) {
}

UFortEventLeaderboardScreen::UFortEventLeaderboardScreen() {
    this->EventDisplayType = ETournamentDisplayType::Default;
    this->EntryBox_ViewButtons = NULL;
    this->ActionWidget_TabLeft = NULL;
    this->ActionWidget_TabRight = NULL;
    this->Button_ViewLiveGames = NULL;
    this->ViewButtonGroup = NULL;
}

