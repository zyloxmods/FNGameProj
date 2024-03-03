#include "FortCommunityVotingRevealScreen.h"




void UFortCommunityVotingRevealScreen::HandleDetailButtonClicked() {
}

void UFortCommunityVotingRevealScreen::HandleCloseButtonClicked() {
}

void UFortCommunityVotingRevealScreen::Dismiss() {
}

UFortCommunityVotingRevealScreen::UFortCommunityVotingRevealScreen() {
    this->MaxRevealPlayRate = 1;
    this->MinRevealPlayRate = 1;
    this->VotingManager = NULL;
    this->WinnerOption = NULL;
    this->WinnerOfferInfo = NULL;
    this->EntryBox_Options = NULL;
    this->Button_Close = NULL;
    this->Button_Detail = NULL;
    this->RichText_ItemReturns = NULL;
    this->BorderRarityColored = NULL;
    this->ComOptionRevealWinner = NULL;
}

