#include "FortPlaylistAthena.h"

void UFortPlaylistAthena::CreateCalendarPayload_RegionalOverride() {
}

void UFortPlaylistAthena::CreateCalendarPayload_Enabling() {
}

UFortPlaylistAthena::UFortPlaylistAthena() {
    this->bRewardsTrackPlacement = true;
    this->bRewardsAllowXPProgression = true;
    this->bRewardForRevivingTeammates = false;
    this->RewardPlacementBonusType = ERewardPlacementBonusType::Squad;
    this->RewardsPlacementThreshold = 3;
    this->RewardTimePlayedType = ERewardTimePlayedType::Default;
    this->RewardTimePlayedXPPerMinute = -1;
    this->RewardTimePlayedXPFlatValue = -1;
    this->bAllowSinglePartyMatches = false;
    this->bRequeueAfterFailedSessionAssignment = true;
    this->bIsTournament = false;
    this->bEnableAdvancedLogic = false;
    this->bUpdateMMR = false;
    this->MaxBucketCapacity = -1;
    this->MaxPendingMatches = -1;
    this->bUseInputRules = true;
    this->bRequireCrossplayEnabled = true;
    this->bLimitedPoolMatchmakingEnabled = false;
    this->CompetitivePointClamp = 100;
    this->bUseMultidivisionQueues = false;
    this->WinConditionType = EAthenaWinCondition::LastManStanding;
    this->WinConditionPlayersRemaining = 1;
    this->bIsLargeTeamGame = false;
    this->bShouldSpreadTeams = true;
    this->bIgnoreDefaultQuests = false;
    this->bDisallowMultipleWeaponsOfType = false;
    this->bAllowEditingEnemyWalls = false;
    this->LootDropRounds = 1;
    this->ForceKickAfterDeathTime = 0.00f;
    this->ForceKickAfterDeathMode = EForceKickAfterDeathMode::Disabled;
    this->QuickbarSelectionPreservationMode = EWeaponSelectionPreservationType::KeepSelectionWhenRespawning;
    this->DestructedBuildingInGridTimeout = 0.00f;
    this->bTeamFilterDestructedBuildingsInGrid = true;
    this->bOwnerFilterDestructedBuildingsInGrid = false;
    this->MaximumAspectRatio = 0.00f;
    this->bVehiclesDestroyAllBuildingSMActorsOnContact = false;
    this->bAutoAcquireSpawnChip = false;
    this->SoundMix = NULL;
    this->bForceCameraFadeOnRespawn = true;
    this->MinTimeBeforeRespawnCameraFade = 3.00f;
    this->RespawnType = EAthenaRespawnType::None;
    this->bRespawnInAir = true;
    this->bSkipWarmup = false;
    this->bSkipAircraft = false;
    this->WarmupEarlyRequiredPlayerPercent = 0.00f;
    this->AirCraftBehavior = EAirCraftBehavior::Default;
    this->bUseCustomAircraftPathSelection = false;
    this->bUseSameDirectionForOpposingAircraft = false;
    this->bAircraftDropOnlyWithinSafeZone = false;
    this->AircraftPathOffsetFromMapCenterMin = 0.00f;
    this->AircraftPathOffsetFromMapCenterMax = 0.00f;
    this->AircraftPathMidpointSelectionRadiusMin = 20000.00f;
    this->AircraftPathMidpointSelectionRadiusMax = 40000.00f;
    this->PlaylistMissionGen = NULL;
    this->bForceLTMLoadingScreenBackground = false;
    this->UIExtenderClass = NULL;
    this->MissionIcon = NULL;
    this->bLimitedTimeMode = true;
    this->bDisplayScoreInHUD = false;
    this->bDisplayRespawnWidget = false;
    this->bEnforceFullSquadInUI = false;
    this->MapScaleOverride = 0.00f;
    this->bDrawCreativeDynamicIslands = false;
    this->MapManagerClass = NULL;
    this->SafeZoneStartUp = ESafeZoneStartUp::UseDefaultGameBehavior;
    this->bWarmUpInStorm = false;
    this->StormEffectDelay = 0.00f;
    this->bDisplayFinalStormPosition = false;
    this->bDrawLineToStormCircleIfOutside = true;
    this->LastSafeZoneIndex = -1;
    this->bUseDefaultSupplyDrops = true;
    this->bPlaylistUsesCustomCharacterParts = false;
    this->NetActorDiscoveryBudgetInKBytesPerSec = 0;
    this->bEnableCreativeMode = false;
    this->bAllowTeamSwitching = false;
    this->bAllowLayoutRequirementsFeature = false;
    this->bUseCreativeStarterIsland = false;
    this->bUsesAnimationSharing = false;
    this->PlaylistStatId = -1;
    this->bAccumulateToProfileStats = false;
    this->bSaveToRecentGameList = true;
    this->bEnableStatsV2Stats = true;
    this->AISettings = NULL;
}

