#include "FortMissionInfo.h"

UFortMissionInfo::UFortMissionInfo() {
    MissionType = EFortMissionType::Primary;
    TimeOfDaySpeed = 1;
    ZoneEndDelay = 1;
    ZoneEndDelayOverrideForFailure = 1;
    MissionRewardBadge = NULL;
    MaxRewardLootTierPoints = 0;
    ParTime = 0;
    UnderParBadge = NULL;
    MaxMissionPoints = 0;
    bVictoryTileRequired = false;
    MissionDescription = FText::FromString(TEXT("Default Mission Description"));
    EndOfMissionMediaSource = NULL;
    bSkipEndOfMissionVideo = false;
    DaysToLive = 0;
    bShowMinimapIconsOnlyIfFocused = true;
    ExpectedCompletionTime = 1;
    MissionEncounterTime = 1;
    MinDistanceToOtherMissions = 1;
    MinDistanceToAllowSpawnPad = 1;
    bStartPlayingOnLoad = false;
    bRequiresActivation = true;
    BluGloActivationRequirement = 0;
    bAllowDifficultyIncrease = true;
    RewardsTitleText = FText::FromString(TEXT("{MissionName} Completed!"));
    RewardsDescriptionText = FText::FromString(TEXT("You ranked {PositionRank}. For your efforts, you have been awarded:"));
    NonParticipationRewardsDescriptionText = FText::FromString(TEXT("Your teammates did a great job! For their efforts, you have been awarded:"));
    WeightedRewards = NULL;
    bIsGroupContent = false;
    bUseRRV = true;
    MissionName = FText::FromString(TEXT("Default Mission Name"));
    bShouldDisplayMissionName = true;
}

