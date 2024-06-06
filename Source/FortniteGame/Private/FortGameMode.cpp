#include "FortGameMode.h"
#include "FortMissionManager.h"
#include "FortTeamInfo.h"

void AFortGameMode::OnEndOfDay() {
}

void AFortGameMode::DumpReservations() const {
}

AFortGameMode::AFortGameMode() {
    bDisableCloudStorage = false;
    bTravelInitiated = false;
    CurrentPlaylistId = 0;
    ZoneIndex = 0;
    bPlayersInvincible = false;
    bKickIdlers = false;
    MaxIdleTime = 1;
    NoScoreKickTime = 1;
    bEnableNotifications = true;
    bEnableReplicationGraph = false;
    DeathPenaltyData = NULL;
    DeathPenaltyDataOverride = NULL;
    FortGameSession = NULL;
    bIsAutomatedTest = false;
    MissionManagerClass = AFortMissionManager::StaticClass();
    bContainersForceTossLoot = false;
    bOverrideRotationOnRestartPlayer = true;
    PendingTimerState = EFortGameplayState::Invalid;
    bDBNOEnabled = true;
    bWorldIsReady = false;
    bTheaterDataIsReady = false;
    TheaterSlot = 0;
    GameplayServerHitchThreshold = 1;
    MovementTimeDiscrepancyHitchCooldown = 1;
    AbilityRefireHitchCooldown = 1;
    bCheckWeaponTracesForPlayerBuiltWalls = true;
    MatchHeartbeatManager = NULL;
    SharedMissionLists = NULL;
    TeamInfoClass = AFortTeamInfo::StaticClass();
    MissionGenerationManager = NULL;
    FlushManager = NULL;
    bAlwaysFlushMMREndZoneEvents = true;
    bOverrideQuickBars = false;
}

