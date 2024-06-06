#include "FortChallengeBundleItemDefinition.h"

bool UFortChallengeBundleItemDefinition::IsLinearChainQuest(const UFortQuestItemDefinition* InQuestDef, int32& ChainLength, int32& ChainPos) const {
    return false;
}

int32 UFortChallengeBundleItemDefinition::GetTotalNumberOfQuests() const {
    return 0;
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

FString UFortChallengeBundleItemDefinition::GetHexCodeForStyleColor(EBundleStyleColor DesiredColor) const {
    return TEXT("");
}

FString UFortChallengeBundleItemDefinition::GetEventName() const {
    return TEXT("");
}

FFortChallengeSetStyle UFortChallengeBundleItemDefinition::GetDisplayStyle() const {
    return FFortChallengeSetStyle{};
}

TArray<FAthenaRewardItemReference> UFortChallengeBundleItemDefinition::GetCompletionRewards() const {
    return TArray<FAthenaRewardItemReference>();
}

FString UFortChallengeBundleItemDefinition::GetCalendarEventName() const {
    return TEXT("");
}

int32 UFortChallengeBundleItemDefinition::GetBundleLevelForQuest(const UFortQuestItemDefinition* QuestDef) const {
    return 0;
}

UFortChallengeBundleItemDefinition::UFortChallengeBundleItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    CharacterOverrideForRewardPreviews = NULL;
    MaxChainDepth = 0;
    bHideFromMapChallenges = false;
    bHideRewardFromMapChallenges = false;
    ItemType = EFortItemType::ChallengeBundle;
}

