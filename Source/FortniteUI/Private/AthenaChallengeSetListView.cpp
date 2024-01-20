#include "AthenaChallengeSetListView.h"

UAthenaChallengeSetListView::UAthenaChallengeSetListView() {
    this->bHideHeaders = false;
    this->bHideCompletionRewards = false;
    this->bHideQuestRewards = false;
    this->bUseCompactActionInfo = false;
    this->bAllowFocus = true;
    this->SectionHeaderEntryClass = NULL;
    this->CompletionRewardEntryClass = NULL;
    this->SpecialOfferEntryClass = NULL;
}

