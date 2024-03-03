#include "AthenaChallengeScreen.h"

bool UAthenaChallengeScreen::ShouldPlayHolidayVideo() {
    return false;
}


bool UAthenaChallengeScreen::IsPartyAssistedChallengeSet() const {
    return false;
}

void UAthenaChallengeScreen::HandleTabSelectionChanged(UCommonButton* TabButton, int32 TabIdx) {
}

void UAthenaChallengeScreen::HandleTabClicked(UCommonButton* TabButton, int32 TabIdx) {
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
    this->EntryBox_Row1_MissionChallenges = NULL;
    this->EntryBox_Row2_MissionChallenges = NULL;
    this->EntryBox_StyleChallenges = NULL;
}

