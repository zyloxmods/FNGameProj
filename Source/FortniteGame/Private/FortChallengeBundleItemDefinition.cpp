#include "FortChallengeBundleItemDefinition.h"

bool UFortChallengeBundleItemDefinition::IsLinearChainQuest(const UFortQuestItemDefinition* InQuestDef, int32& ChainLength, int32& ChainPos) {
    return false;
}

int32 UFortChallengeBundleItemDefinition::GetRewardCompletionThreshold() const {
    return 0;
}

void UFortChallengeBundleItemDefinition::GetQuests(UFortQuestManager* QuestManager, const TArray<UFortQuestItem*>& GrantedQuests, TArray<UFortQuestItem*>& OwnedQuests, TArray<UFortQuestItemDefinition*>& UnownedQuests, bool bGetAllQuestsInChain) const {
}

int32 UFortChallengeBundleItemDefinition::GetNumVisibleQuests() const {
    return 0;
}

int32 UFortChallengeBundleItemDefinition::GetNumQuests() const {
    return 0;
}

FString UFortChallengeBundleItemDefinition::GetEventName() const {
    return TEXT("");
}

TArray<FAthenaRewardItemReference> UFortChallengeBundleItemDefinition::GetCompletionRewards() const {
    return TArray<FAthenaRewardItemReference>();
}

FString UFortChallengeBundleItemDefinition::GetCalendarEventName() const {
    return TEXT("");
}

UFortChallengeBundleItemDefinition::UFortChallengeBundleItemDefinition() {
    this->CharacterOverrideForRewardPreviews = NULL;
    this->MaxChainDepth = 50;
}

