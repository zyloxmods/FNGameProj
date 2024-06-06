#include "FortGameModeOutpost.h"

bool AFortGameModeOutpost::DoesOutpostStatusAllowMissionStart() const {
    return false;
}

AFortGameModeOutpost::AFortGameModeOutpost() {
    bSavePlayerBuiltStructuresAtAllTimes = false;
    MinTotalContinuousOneHitResourcesDistributedForForcedSave = 0;
    MaxContinuousOneHitResourcesDistributedBeforeForcedSave = 0;
    bEnableLargeScaleDisassemblyForcedSaves = true;
    bEnableUnsupportedStructureDisassembly = false;
    bCheckNavMeshAvailability = false;
}

