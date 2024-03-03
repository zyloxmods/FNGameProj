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
    this->bUseAbsoluteCoordinates = true;
    this->bTrackDestroyedBuildings = false;
    this->bLoadInvisible = false;
    this->bDespawnOnBuildingsSpawned = false;
    this->bSpawnBuildingsAutomaticallyAfterLoad = true;
}

