#include "FortMissionAircraft.h"
#include "Templates/SubclassOf.h"

AFortAircraft* AFortMissionAircraft::CreateAircraft(const FTransform SpawnTransform, TSubclassOf<AFortAircraft> AircraftClass) {
    return NULL;
}

AFortMissionAircraft::AFortMissionAircraft() {
    Aircraft = NULL;
}

