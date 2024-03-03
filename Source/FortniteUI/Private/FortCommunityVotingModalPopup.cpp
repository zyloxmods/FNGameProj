#include "FortCommunityVotingModalPopup.h"

void UFortCommunityVotingModalPopup::HandleVoteButtonClicked() {
}

void UFortCommunityVotingModalPopup::HandleButtonArgless() {
}

void UFortCommunityVotingModalPopup::HandleButton(bool& bPassThrough) {
}

void UFortCommunityVotingModalPopup::Dismiss() {
}

UFortCommunityVotingModalPopup::UFortCommunityVotingModalPopup() {
    this->VotingScreenClass = NULL;
    this->CandidateClass = NULL;
    this->Button_VoteNow = NULL;
    this->Button_Close = NULL;
    this->Border_TapToCloseZone = NULL;
    this->EntryBox_Options = NULL;
    this->TextBlock_Title = NULL;
    this->TextBlock_Banner = NULL;
}

