#include "FortAIEncounterRiftManager.h"

AFortMission* UFortAIEncounterRiftManager::GetAssociatedMission() const {
    return NULL;
}

UFortAIEncounterRiftManager::UFortAIEncounterRiftManager() {
    MyEncounter = NULL;
    AIDirector = NULL;
    UpdateIntervalTimeSeconds = 1;
    NumRiftsToUse = 0;
    MinRiftsToUse = 0;
    ExtraSpawnLocationPercentage = 1;
    RiftClassTemplate = NULL;
    LastObjectiveBatchPathCostUpdateTime = 1;
    LastPlayerBatchPathCostUpdateTime = 1;
}

