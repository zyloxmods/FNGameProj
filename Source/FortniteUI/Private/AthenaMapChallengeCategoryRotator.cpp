#include "AthenaMapChallengeCategoryRotator.h"

void UAthenaMapChallengeCategoryRotator::HandleNewContextualObjectives(const TArray<UFortQuestItem*>& ContextualQuests) {
}

UAthenaMapChallengeCategoryRotator::UAthenaMapChallengeCategoryRotator() {
    this->Button_Next = NULL;
    this->Button_Previous = NULL;
    this->bShowTabsWithCompletedChallenges = true;
    this->MaxSuggestedEntries = 0;
}

