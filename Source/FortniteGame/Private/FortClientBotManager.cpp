#include "FortClientBotManager.h"

UFortClientBotManager::UFortClientBotManager() {
    bHasAttemptedAbandon = false;
    bIsMatchmaking = false;
    bShouldPickRandomMap = false;
    bShouldRecordFPSCharts = false;
    bShouldRecordMemoryReports = false;
    bFPSRecordingStarted = false;
    bWatchingForCallStack = false;
    iSelectedTheater = 0;
    iSelectedTile = 0;
    RandomZoneDifficultyMinimum = 1;
    RandomZoneDifficultyMaximum = 1;
    NumSkillPurchasesAttempted = 0;
    MaxSkillPurchaseAttempts = 0;
    NumWorkerSlotsAttempted = 0;
    MaxWorkerSlotAttempts = 0;
    LobbyActionTimer = 1;
    TimeBetweenLobbyActions = 1;
    bWaitingForSkillTreePurchase = false;
    bWaitingForWorkerSlot = false;
    LoopsSpentWaitingForFrontend = 0;
    TimeBetweenStartButtonClicks = 1;
    TimeSinceFriendInvitesSent = 1;
    LastMatchmakeTime = 1;
    LastLoginCycleTime = 1;
    MatchmakingStartTime = 1;
    LastChangedStateTime = 1;
    LastRandomTurnTime = 1;
    LastPickLootTime = 1;
    LastPickEnemyTime = 1;
    LastEnemyKilledTime = 1;
    LastBuildingKilledTime = 1;
    LastGoodInteraction = 1;
    LastCheckGoodTarget = 1;
    EnemyTarget = NULL;
    PickupTarget = NULL;
    BuildingTarget = NULL;
    MissionTarget = NULL;
    PrimaryMissionTarget = NULL;
    MyPawn = NULL;
}

