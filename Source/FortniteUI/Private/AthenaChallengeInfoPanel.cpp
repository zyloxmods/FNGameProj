#include "AthenaChallengeInfoPanel.h"

void UAthenaChallengeInfoPanel::HandleQuestsUpdatedInGame() {
}

void UAthenaChallengeInfoPanel::HandleNewContextualObjectives(const TArray<UFortQuestItem*>& Objectives) {
}

void UAthenaChallengeInfoPanel::HandleCycleQuestsInputAction(bool& bPassThrough) {
}

UAthenaChallengeInfoPanel::UAthenaChallengeInfoPanel() {
    this->CurrentPage = EChallengeInfoPage::PartyAssist;
    this->MaxSuggestedEntries = 0;
    this->Text_DisplayedChallengeTypes = NULL;
    this->EntryBox_Challenges = NULL;
}

