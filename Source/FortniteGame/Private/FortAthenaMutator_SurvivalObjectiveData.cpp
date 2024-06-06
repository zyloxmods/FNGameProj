#include "FortAthenaMutator_SurvivalObjectiveData.h"

FFortAthenaMutator_SurvivalObjectiveData::FFortAthenaMutator_SurvivalObjectiveData() {
    BuildingActorObjectiveClass = NULL;
    ActivationSafeZoneIndex = 0;
    bEndMatchOnDestroy = false;
    bSpawnOnPOI = false;
    bClearAreaOnSpawn = false;
    ClearAreaRadiusOverride = 1;
    ClearAreaHalfHeightOverride = 1;
    bIsSpecialActor = false;
    RandomizedPOICount = 0;
    SpawnedBuildingActorObjective = NULL;
}

