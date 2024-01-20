#include "FortQuestItemDefinition.h"

bool UFortQuestItemDefinition::ShouldDisplayOverallQuestInformation() const {
    return false;
}

bool UFortQuestItemDefinition::ShouldAutoLaunch() const {
    return false;
}

bool UFortQuestItemDefinition::IsTutorialQuest() const {
    return false;
}

bool UFortQuestItemDefinition::IsIncludedInCategories() const {
    return false;
}

bool UFortQuestItemDefinition::IsHidden() const {
    return false;
}

bool UFortQuestItemDefinition::IsGlyphQuest() const {
    return false;
}

bool UFortQuestItemDefinition::IsDeprecated() const {
    return false;
}

float UFortQuestItemDefinition::GetWeight() const {
    return 0.0f;
}

bool UFortQuestItemDefinition::GetUpdateObjectiveOncePerMatch() const {
    return false;
}

UFortConversation* UFortQuestItemDefinition::GetSelectRewardsConversation() const {
    return NULL;
}

TArray<FFortMcpQuestRewardInfo> UFortQuestItemDefinition::GetSelectableRewards_BP() const {
    return TArray<FFortMcpQuestRewardInfo>();
}

EFortQuestRewardType UFortQuestItemDefinition::GetRewardType() const {
    return EFortQuestRewardType::BasicRewards;
}

TArray<FFortItemQuantityPair> UFortQuestItemDefinition::GetRewards_BP() const {
    return TArray<FFortItemQuantityPair>();
}

FFortRewardInfo UFortQuestItemDefinition::GetRewardInfo_BP() const {
    return FFortRewardInfo{};
}

FText UFortQuestItemDefinition::GetRewardHeaderText() const {
    return FText::GetEmpty();
}

FText UFortQuestItemDefinition::GetRewardDescription() const {
    return FText::GetEmpty();
}

EFortQuestType UFortQuestItemDefinition::GetQuestType() const {
    return EFortQuestType::Task;
}

UFortQuestItemDefinition* UFortQuestItemDefinition::GetPrerequisiteQuest() const {
    return NULL;
}

FDataTableRowHandle UFortQuestItemDefinition::GetPrerequisiteObjective() const {
    return FDataTableRowHandle{};
}

int32 UFortQuestItemDefinition::GetPartialObjectiveCompletionCount() const {
    return 0;
}

TArray<FFortMcpQuestObjectiveInfo> UFortQuestItemDefinition::GetObjectives_BP() const {
    return TArray<FFortMcpQuestObjectiveInfo>();
}

int32 UFortQuestItemDefinition::GetObjectiveNeededToComplete() const {
    return 0;
}

UFortConversation* UFortQuestItemDefinition::GetIntroConversation() const {
    return NULL;
}

TArray<FFortHiddenRewardQuantityPair> UFortQuestItemDefinition::GetHiddenRewards_BP() const {
    return TArray<FFortHiddenRewardQuantityPair>();
}

FText UFortQuestItemDefinition::GetCompletionText() const {
    return FText::GetEmpty();
}

UFortConversation* UFortQuestItemDefinition::GetClaimConversation() const {
    return NULL;
}

FFortRewardInfo UFortQuestItemDefinition::GetChallengeChainRewardInfo(bool bGetAllQuestRewards) const {
    return FFortRewardInfo{};
}

FDataTableRowHandle UFortQuestItemDefinition::GetCategory() const {
    return FDataTableRowHandle{};
}

bool UFortQuestItemDefinition::GetAthenaUpdateObjectiveOncePerMatch() const {
    return false;
}

bool UFortQuestItemDefinition::GetAthenaObjectiveMustBeCompletedInASingleMatch() const {
    return false;
}

bool UFortQuestItemDefinition::ExpandsStormShield() const {
    return false;
}

bool UFortQuestItemDefinition::CanPartyAssist() const {
    return false;
}

bool UFortQuestItemDefinition::AllowsTileMatching() const {
    return false;
}

bool UFortQuestItemDefinition::AllowsPlayNowNavigation() const {
    return false;
}

UFortQuestItemDefinition::UFortQuestItemDefinition() {
    this->QuestType = EFortQuestType::Task;
    this->bShouldDisplayOverallQuestInformation = false;
    this->bAthenaUpdateObjectiveOncePerMatch = false;
    this->bAthenaMustCompleteInSingleMatch = false;
    this->bUpdateObjectiveOncePerMatch = false;
    this->IsStreamingRequired = true;
    this->bExpandsStormShield = false;
    this->bHidden = false;
    this->bIncludedInCategories = true;
    this->bAutoLaunch = false;
    this->bDeprecated = false;
    this->bDisableBackendConditionEvaluation = false;
    this->bAllowTileMatching = true;
    this->bAllowPlayNowNavigation = true;
    this->bAllowMissionAlertMatchesBypassingTileRequirements = false;
    this->bTutorialQuest = false;
    this->ExpirationDuration = 0;
    this->ObjectiveCompletionCount = -1;
    this->RewardsTable = NULL;
    this->Objectives.AddDefaulted(1);
    this->Weight = 1.00f;
    this->GranterWindowPeriodMinutes = 240;
    this->GranterCooldownPeriodSeconds = 60;
    this->ClaimPriority = 1;
    this->SortPriority = 0;
}

