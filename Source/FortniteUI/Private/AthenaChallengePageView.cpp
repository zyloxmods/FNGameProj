#include "AthenaChallengePageView.h"

void UAthenaChallengePageView::OnPageCycledOut() {
}

void UAthenaChallengePageView::OnPageCycledIn() {
}





UAthenaChallengePageView::UAthenaChallengePageView() {
    this->bInGame = false;
    this->PageEntryClass = NULL;
    this->MaxNumEntriesPerPage = 0;
    this->ChallengePage = NULL;
    this->RichText_PageNumber = NULL;
    this->PageState = EAthenaChallengePageState::NotDisplayed;
}

