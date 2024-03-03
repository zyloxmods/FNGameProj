#include "FortCommunityVotingScreen.h"

void UFortCommunityVotingScreen::HandleBackButton(bool& bPassThrough) {
}


void UFortCommunityVotingScreen::Dismiss() {
}

UFortCommunityVotingScreen::UFortCommunityVotingScreen() {
    this->CommunityVotingModalPopupClass = NULL;
    this->CommunityVotingModalTutorialPopupClass = NULL;
    this->VotingManager = NULL;
    this->HighlightedOption = NULL;
    this->Countdown_RemainingTime = NULL;
    this->EntryBox_Options = NULL;
    this->ComBackButton = NULL;
    this->AvailableSparksWidget = NULL;
    this->Switcher_VotingTip = NULL;
    this->Com_ThanksForVotingMessage = NULL;
}

