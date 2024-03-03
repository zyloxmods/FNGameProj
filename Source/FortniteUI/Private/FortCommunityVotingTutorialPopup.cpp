#include "FortCommunityVotingTutorialPopup.h"




void UFortCommunityVotingTutorialPopup::OnSlideAnimationFinished() {
}

void UFortCommunityVotingTutorialPopup::CloseTutorial() {
}

UFortCommunityVotingTutorialPopup::UFortCommunityVotingTutorialPopup() {
    this->NumberOfSlide = 0;
    this->DelayBetweenSlide = 1;
    this->DelayOutAnimation = 1;
    this->Button_NextStep = NULL;
    this->Button_Close = NULL;
    this->Buttons_Switcher = NULL;
}

