#include "AthenaChallengeInfoPanel.h"

void UAthenaChallengeInfoPanel::HandleQuestsUpdatedInGame() {
}

void UAthenaChallengeInfoPanel::HandleCycleQuestsInputAction(bool& bPassThrough) {
}

UAthenaChallengeInfoPanel::UAthenaChallengeInfoPanel() {
    this->CurrentPage = EChallengeInfoPage::PartyAssist;
    this->MaxSuggestedEntries = 5;
    this->Text_DisplayedChallengeTypes = NULL;
    this->EntryBox_Challenges = NULL;
}

