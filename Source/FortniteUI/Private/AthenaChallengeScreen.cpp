#include "AthenaChallengeScreen.h"

bool UAthenaChallengeScreen::IsPartyAssistedChallengeSet() const {
    return false;
}

void UAthenaChallengeScreen::HandleTabSelectionChanged(UCommonButton* TabButton, int32 TabIdx) {
}

void UAthenaChallengeScreen::HandleTabClicked(UCommonButton* TabButton, int32 TabIdx) {
}

void UAthenaChallengeScreen::HandlePrevCategoryAction(bool& bPassThrough) {
}

void UAthenaChallengeScreen::HandleNextCategoryAction(bool& bPassThrough) {
}

void UAthenaChallengeScreen::HandleDetailsDeactivated(UCommonActivatablePanel* DetailsPanel) {
}

UAthenaChallengeScreen::UAthenaChallengeScreen() {
    this->DefaultDetailsWidgetClass = NULL;
    this->ActiveDetailsWidget = NULL;
    this->LastSelectedTile = NULL;
    this->TabButtonGroup = NULL;
    this->EntryBox_SectionTabs = NULL;
    this->ScrollBox_Sections = NULL;
    this->EntryBox_EventChallenges = NULL;
    this->ChallengeTile_Dailies = NULL;
    this->EntryBox_WeeklyChallenges = NULL;
    this->EntryBox_StyleChallenges = NULL;
}

