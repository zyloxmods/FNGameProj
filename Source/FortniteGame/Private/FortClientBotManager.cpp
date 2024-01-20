#include "FortClientBotManager.h"

UFortClientBotManager::UFortClientBotManager() {
    this->bHasAttemptedAbandon = false;
    this->bIsMatchmaking = false;
    this->bShouldPickRandomMap = false;
    this->bShouldRecordFPSCharts = false;
    this->bShouldRecordMemoryReports = false;
    this->bFPSRecordingStarted = false;
    this->bWatchingForCallStack = false;
    this->iSelectedTheater = 0;
    this->iSelectedTile = -1;
    this->RandomZoneDifficultyMinimum = 1.00f;
    this->RandomZoneDifficultyMaximum = 100.00f;
    this->NumSkillPurchasesAttempted = 0;
    this->MaxSkillPurchaseAttempts = 10;
    this->NumWorkerSlotsAttempted = 0;
    this->MaxWorkerSlotAttempts = 10;
    this->LobbyActionTimer = 0.00f;
    this->TimeBetweenLobbyActions = 1.00f;
    this->bWaitingForSkillTreePurchase = false;
    this->bWaitingForWorkerSlot = false;
    this->LoopsSpentWaitingForFrontend = 0;
    this->TimeBetweenStartButtonClicks = 5.00f;
    this->TimeSinceFriendInvitesSent = 0.00f;
    this->LastMatchmakeTime = 0.00f;
    this->LastLoginCycleTime = 0.00f;
    this->MatchmakingStartTime = 0.00f;
    this->LastChangedStateTime = 0.00f;
    this->LastRandomTurnTime = 0.00f;
    this->LastPickLootTime = -100.00f;
    this->LastPickEnemyTime = -100.00f;
    this->LastEnemyKilledTime = 0.00f;
    this->LastBuildingKilledTime = 0.00f;
    this->LastGoodInteraction = 30.00f;
    this->LastCheckGoodTarget = 0.00f;
    this->EnemyTarget = NULL;
    this->PickupTarget = NULL;
    this->BuildingTarget = NULL;
    this->MissionTarget = NULL;
    this->PrimaryMissionTarget = NULL;
    this->MyPawn = NULL;
}

