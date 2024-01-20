#include "FortMissionInfo.h"

UFortMissionInfo::UFortMissionInfo() {
    this->MissionType = EFortMissionType::Primary;
    this->TimeOfDaySpeed = -1.00f;
    this->ZoneEndDelay = 5.00f;
    this->ZoneEndDelayOverrideForFailure = -1.00f;
    this->MissionRewardBadge = NULL;
    this->MaxRewardLootTierPoints = 3;
    this->ParTime = 0;
    this->UnderParBadge = NULL;
    this->MaxMissionPoints = 15;
    this->bVictoryTileRequired = false;
    this->MissionDescription = FText::FromString(TEXT("Default Mission Description"));
    this->EndOfMissionMediaSource = NULL;
    this->EndOfMissionMediaSourceStreamed = NULL;
    this->bSkipEndOfMissionVideo = false;
    this->DaysToLive = -1;
    this->bShowMinimapIconsOnlyIfFocused = true;
    this->ExpectedCompletionTime = 0.50f;
    this->MissionEncounterTime = 90.00f;
    this->MinDistanceToOtherMissions = 3072.00f;
    this->MinDistanceToAllowSpawnPad = 10000.00f;
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
}

