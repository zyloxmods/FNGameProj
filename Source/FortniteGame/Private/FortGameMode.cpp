#include "FortGameMode.h"
#include "FortMissionManager.h"
#include "FortTeamInfo.h"

void AFortGameMode::OnEndOfDay() {
}

void AFortGameMode::DumpReservations() const {
}

AFortGameMode::AFortGameMode() {
    this->bDisableCloudStorage = false;
    this->bTravelInitiated = false;
    this->CurrentPlaylistId = 0;
    this->ZoneIndex = 0;
    this->bPlayersInvincible = false;
    this->bKickIdlers = false;
    this->MaxIdleTime = 1;
    this->NoScoreKickTime = 1;
    this->bEnableNotifications = true;
    this->bEnableReplicationGraph = false;
    this->DeathPenaltyData = NULL;
    this->DeathPenaltyDataOverride = NULL;
    this->FortGameSession = NULL;
    this->bIsAutomatedTest = false;
    this->MissionManagerClass = AFortMissionManager::StaticClass();
    this->bContainersForceTossLoot = false;
    this->bOverrideRotationOnRestartPlayer = true;
    this->PendingTimerState = EFortGameplayState::Invalid;
    this->bDBNOEnabled = true;
    this->bWorldIsReady = false;
    this->bTheaterDataIsReady = false;
    this->TheaterSlot = 0;
    this->GameplayServerHitchThreshold = 1;
    this->MovementTimeDiscrepancyHitchCooldown = 1;
    this->AbilityRefireHitchCooldown = 1;
    this->bCheckWeaponTracesForPlayerBuiltWalls = true;
    this->MatchHeartbeatManager = NULL;
    this->SharedMissionLists = NULL;
    this->TeamInfoClass = AFortTeamInfo::StaticClass();
    this->MissionGenerationManager = NULL;
    this->FlushManager = NULL;
    this->bAlwaysFlushMMREndZoneEvents = true;
    this->bOverrideQuickBars = false;
}

