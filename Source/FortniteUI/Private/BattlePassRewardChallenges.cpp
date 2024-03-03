#include "BattlePassRewardChallenges.h"






UBattlePassRewardChallenges::UBattlePassRewardChallenges() {
    this->UnlocksInXDaysTextFormat = FText::FromString(TEXT("Unlocks in {0} days"));
    this->UnlocksInXHoursTextFormat = FText::FromString(TEXT("Unlocks in {0} hours"));
    this->UnlocksSoonText = FText::FromString(TEXT("Unlocks soon!"));
    this->HiddenChallengeText = FText::FromString(TEXT("???"));
    this->Text_PrerequisitesTitle = NULL;
    this->Text_ChallengesTitle = NULL;
    this->EntryBox_Prerequisites = NULL;
    this->EntryBox_Challenges = NULL;
    this->Text_UnlocksIn = NULL;
}

