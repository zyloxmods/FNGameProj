#include "FortClientPilot_FrontendBase.h"

UFortClientPilot_FrontendBase::UFortClientPilot_FrontendBase() {
    this->bWaitingForSkillTreePurchase = false;
    this->bWaitingForWorkerSlot = false;
    this->NumSkillPurchasesAttempted = 0;
    this->MaxSkillPurchaseAttempts = 0;
    this->NumWorkerSlotsAttempted = 0;
    this->MaxWorkerSlotAttempts = 0;
    this->LoopsSpentWaitingForFrontend = 0;
    this->LobbyActionTimer = 1;
    this->TimeBetweenLobbyActions = 1;
    this->bHasAttemptedAbandon = false;
    this->LastMatchmakeTime = 1;
    this->LastLoginCycleTime = 1;
}

