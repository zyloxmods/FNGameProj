#include "FortCommunityVotingOption.h"

bool UFortCommunityVotingOption::HaveVotesRemaining() {
    return false;
}



UFortCommunityVotingOption::UFortCommunityVotingOption() {
    this->VotingManager = NULL;
    this->PreviewDetailWidgetClass = NULL;
    this->ComOptionVote = NULL;
    this->ComOptionDetails = NULL;
    this->FlameCounter = NULL;
    this->VoteFeedbackClass = NULL;
    this->ComOptionPreview = NULL;
    this->ComVoteFeedbackContainer = NULL;
}

