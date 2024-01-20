#include "FortChallengeBundleItem.h"

void UFortChallengeBundleItem::GetQuests(UFortQuestManager* QuestManager, TArray<UFortQuestItem*>& OwnedQuests, TArray<UFortQuestItemDefinition*>& UnownedQuests, bool bGetAllQuestsInChain) const {
}

float UFortChallengeBundleItem::GetPercentageComplete() const {
    return 0.0f;
}

UFortChallengeBundleItemDefinition* UFortChallengeBundleItem::GetChallengeDefinitionBP() const {
    return NULL;
}

void UFortChallengeBundleItem::GetAchievedCount(int32& OutTotalAchievedCount, int32& OutTotalRequiredCount) const {
}

UFortChallengeBundleItem::UFortChallengeBundleItem() {
    this->num_quests_completed = 0;
    this->num_progress_quests_completed = 0;
}

