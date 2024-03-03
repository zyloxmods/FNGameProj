#include "FortMissionInfo.h"

UFortMissionInfo::UFortMissionInfo() {
    this->MissionType = EFortMissionType::Primary;
    this->TimeOfDaySpeed = 1;
    this->ZoneEndDelay = 1;
    this->ZoneEndDelayOverrideForFailure = 1;
    this->MissionRewardBadge = NULL;
    this->MaxRewardLootTierPoints = 0;
    this->ParTime = 0;
    this->UnderParBadge = NULL;
    this->MaxMissionPoints = 0;
    this->bVictoryTileRequired = false;
    this->MissionDescription = FText::FromString(TEXT("Default Mission Description"));
    this->EndOfMissionMediaSource = NULL;
    this->bSkipEndOfMissionVideo = false;
    this->DaysToLive = 0;
    this->bShowMinimapIconsOnlyIfFocused = true;
    this->ExpectedCompletionTime = 1;
    this->MissionEncounterTime = 1;
    this->MinDistanceToOtherMissions = 1;
    this->MinDistanceToAllowSpawnPad = 1;
    this->bStartPlayingOnLoad = false;
    this->bRequiresActivation = true;
    this->BluGloActivationRequirement = 0;
    this->bAllowDifficultyIncrease = true;
    this->RewardsTitleText = FText::FromString(TEXT("{MissionName} Completed!"));
    this->RewardsDescriptionText = FText::FromString(TEXT("You ranked {PositionRank}. For your efforts, you have been awarded:"));
    this->NonParticipationRewardsDescriptionText = FText::FromString(TEXT("Your teammates did a great job! For their efforts, you have been awarded:"));
    this->WeightedRewards = NULL;
    this->bIsGroupContent = false;
    this->bUseRRV = true;
    this->MissionName = FText::FromString(TEXT("Default Mission Name"));
    this->bShouldDisplayMissionName = true;
}

