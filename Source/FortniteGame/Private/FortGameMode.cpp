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
    this->CurrentPlaylistId = -1;
    this->ZoneIndex = -1;
    this->bPlayersInvincible = false;
    this->bKickIdlers = true;
    this->MaxIdleTime = 180.00f;
    this->NoScoreKickTime = 0.00f;
    this->bEnableNotifications = true;
    this->bEnableReplicationGraph = false;
    this->DeathPenaltyData = NULL;
    this->DeathPenaltyDataOverride = NULL;
    this->FortGameSession = NULL;
    this->bIsAutomatedTest = false;
    this->MissionManagerClass = AFortMissionManager::StaticClass();
    this->bOverrideRotationOnRestartPlayer = true;
    this->PendingTimerState = EFortGameplayState::Invalid;
    this->bDBNOEnabled = true;
    this->bWorldIsReady = false;
    this->bTheaterDataIsReady = false;
    this->TheaterSlot = -1;
    this->GameplayServerHitchThreshold = 0.08f;
    this->MovementTimeDiscrepancyHitchCooldown = 5.00f;
    this->AbilityRefireHitchCooldown = 2.00f;
    this->bCheckWeaponTracesForPlayerBuiltWalls = true;
    this->MatchHeartbeatManager = NULL;
    this->SharedMissionLists = NULL;
    this->TeamInfoClass = AFortTeamInfo::StaticClass();
    this->MissionGenerationManager = NULL;
    this->bOverrideQuickBars = false;
}

