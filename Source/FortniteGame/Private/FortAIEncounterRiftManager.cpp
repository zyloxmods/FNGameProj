#include "FortAIEncounterRiftManager.h"

AFortMission* UFortAIEncounterRiftManager::GetAssociatedMission() const {
    return NULL;
}

UFortAIEncounterRiftManager::UFortAIEncounterRiftManager() {
    this->MyEncounter = NULL;
    this->AIDirector = NULL;
    this->UpdateIntervalTimeSeconds = 0.10f;
    this->NumRiftsToUse = 0;
    this->MinRiftsToUse = 0;
    this->ExtraSpawnLocationPercentage = 0.00f;
    this->RiftClassTemplate = NULL;
    this->LastObjectiveBatchPathCostUpdateTime = -1000.00f;
    this->LastPlayerBatchPathCostUpdateTime = -1000.00f;
}

