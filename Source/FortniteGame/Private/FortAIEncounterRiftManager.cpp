#include "FortAIEncounterRiftManager.h"

AFortMission* UFortAIEncounterRiftManager::GetAssociatedMission() const {
    return NULL;
}

UFortAIEncounterRiftManager::UFortAIEncounterRiftManager() {
    this->MyEncounter = NULL;
    this->AIDirector = NULL;
    this->UpdateIntervalTimeSeconds = 1;
    this->NumRiftsToUse = 0;
    this->MinRiftsToUse = 0;
    this->ExtraSpawnLocationPercentage = 1;
    this->RiftClassTemplate = NULL;
    this->LastObjectiveBatchPathCostUpdateTime = 1;
    this->LastPlayerBatchPathCostUpdateTime = 1;
}

