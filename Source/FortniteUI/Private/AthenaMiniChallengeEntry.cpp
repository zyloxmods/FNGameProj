#include "AthenaMiniChallengeEntry.h"







void UAthenaMiniChallengeEntry::FinishedQuestUpdate() {
}

UAthenaMiniChallengeEntry::UAthenaMiniChallengeEntry() {
    this->QuestIcon = NULL;
    this->QuestDef = NULL;
    this->PendingQuestDef = NULL;
    this->DisplayGoal = 0;
    this->DisplayAchivedCount = 0;
    this->PendingGoalCount = 0;
    this->PendingLastKnown = 0;
    this->PendingAchivedCount = 0;
    this->PendingXpValue = 0;
    this->bPendingUpdate = false;
    this->bIsFirstTimeBoosted = false;
    this->ParamName = TEXT("TextureMask");
}

