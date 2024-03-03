#include "FortPersistentLeaderboardScreen.h"



void UFortPersistentLeaderboardScreen::HandleViewTabSelectionChanged(UCommonButton* TabButton, int32 TabIdx) {
}

UFortPersistentLeaderboardScreen::UFortPersistentLeaderboardScreen() {
    this->Button_Close = NULL;
    this->Button_Back = NULL;
    this->EntryBox_ViewButtons = NULL;
    this->ActionWidget_TabLeft = NULL;
    this->ActionWidget_TabRight = NULL;
    this->Switcher_ViewTabs = NULL;
    this->ActivatableContent_MeViewTab = NULL;
    this->GlobalTabButton = NULL;
    this->MeTabButton = NULL;
    this->ViewButtonGroup = NULL;
}

