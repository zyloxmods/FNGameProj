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
    this->iSelectedTile = 0;
    this->RandomZoneDifficultyMinimum = 1;
    this->RandomZoneDifficultyMaximum = 1;
    this->NumSkillPurchasesAttempted = 0;
    this->MaxSkillPurchaseAttempts = 0;
    this->NumWorkerSlotsAttempted = 0;
    this->MaxWorkerSlotAttempts = 0;
    this->LobbyActionTimer = 1;
    this->TimeBetweenLobbyActions = 1;
    this->bWaitingForSkillTreePurchase = false;
    this->bWaitingForWorkerSlot = false;
    this->LoopsSpentWaitingForFrontend = 0;
    this->TimeBetweenStartButtonClicks = 1;
    this->TimeSinceFriendInvitesSent = 1;
    this->LastMatchmakeTime = 1;
    this->LastLoginCycleTime = 1;
    this->MatchmakingStartTime = 1;
    this->LastChangedStateTime = 1;
    this->LastRandomTurnTime = 1;
    this->LastPickLootTime = 1;
    this->LastPickEnemyTime = 1;
    this->LastEnemyKilledTime = 1;
    this->LastBuildingKilledTime = 1;
    this->LastGoodInteraction = 1;
    this->LastCheckGoodTarget = 1;
    this->EnemyTarget = NULL;
    this->PickupTarget = NULL;
    this->BuildingTarget = NULL;
    this->MissionTarget = NULL;
    this->PrimaryMissionTarget = NULL;
    this->MyPawn = NULL;
}

