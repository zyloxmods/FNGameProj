#include "AthenaChallengeListEntry_DetailedChallenge.h"

void UAthenaChallengeListEntry_DetailedChallenge::HandleUpperAreaClicked() {
}

void UAthenaChallengeListEntry_DetailedChallenge::HandleCloseChallengeOptionsInputAction(bool& bPassThrough) {
}

UAthenaChallengeListEntry_DetailedChallenge::UAthenaChallengeListEntry_DetailedChallenge() {
    this->bHasAnyOptionsAvailable = false;
    this->bIsDisplayingChallengeActions = false;
    this->BoundAnim_ShowChallengeOptions = NULL;
    this->SimpleButton_TopClickArea = NULL;
    this->Reward_QuestReward = NULL;
    this->Button_PartyAssist = NULL;
    this->Button_ReplaceChallenge = NULL;
    this->RichText_ActionInfo = NULL;
}

