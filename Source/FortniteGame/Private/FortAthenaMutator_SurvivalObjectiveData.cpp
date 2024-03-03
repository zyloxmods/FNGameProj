#include "FortAthenaMutator_SurvivalObjectiveData.h"

FFortAthenaMutator_SurvivalObjectiveData::FFortAthenaMutator_SurvivalObjectiveData() {
    this->BuildingActorObjectiveClass = NULL;
    this->ActivationSafeZoneIndex = 0;
    this->bEndMatchOnDestroy = false;
    this->bSpawnOnPOI = false;
    this->bClearAreaOnSpawn = false;
    this->ClearAreaRadiusOverride = 1;
    this->ClearAreaHalfHeightOverride = 1;
    this->bIsSpecialActor = false;
    this->RandomizedPOICount = 0;
    this->SpawnedBuildingActorObjective = NULL;
}

