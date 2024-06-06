#include "FortSaveFileBuildingInstructionsHandler.h"

bool AFortSaveFileBuildingInstructionsHandler::SaveBuildings(AFortPlayerController* FortPC) {
    return false;
}

bool AFortSaveFileBuildingInstructionsHandler::ResetBuildings() {
    return false;
}

void AFortSaveFileBuildingInstructionsHandler::LoadBuildings(AFortPlayerController* FortPC) {
}

bool AFortSaveFileBuildingInstructionsHandler::AreBuildingsLoaded() {
    return false;
}

AFortSaveFileBuildingInstructionsHandler::AFortSaveFileBuildingInstructionsHandler() {
    bUseAbsoluteCoordinates = true;
    bTrackDestroyedBuildings = false;
    bLoadInvisible = false;
    bDespawnOnBuildingsSpawned = false;
    bSpawnBuildingsAutomaticallyAfterLoad = true;
}

