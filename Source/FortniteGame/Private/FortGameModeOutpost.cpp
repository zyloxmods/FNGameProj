#include "FortGameModeOutpost.h"

bool AFortGameModeOutpost::DoesOutpostStatusAllowMissionStart() const {
    return false;
}

AFortGameModeOutpost::AFortGameModeOutpost() {
    this->bSavePlayerBuiltStructuresAtAllTimes = false;
    this->MinTotalContinuousOneHitResourcesDistributedForForcedSave = 0;
    this->MaxContinuousOneHitResourcesDistributedBeforeForcedSave = 0;
    this->bEnableLargeScaleDisassemblyForcedSaves = true;
    this->bEnableUnsupportedStructureDisassembly = false;
    this->bCheckNavMeshAvailability = false;
}

