#include "FortClientPilot_FrontendBase.h"

UFortClientPilot_FrontendBase::UFortClientPilot_FrontendBase() {
    bWaitingForSkillTreePurchase = false;
    bWaitingForWorkerSlot = false;
    NumSkillPurchasesAttempted = 0;
    MaxSkillPurchaseAttempts = 0;
    NumWorkerSlotsAttempted = 0;
    MaxWorkerSlotAttempts = 0;
    LoopsSpentWaitingForFrontend = 0;
    LobbyActionTimer = 1;
    TimeBetweenLobbyActions = 1;
    bHasAttemptedAbandon = false;
    LastMatchmakeTime = 1;
    LastLoginCycleTime = 1;
}

