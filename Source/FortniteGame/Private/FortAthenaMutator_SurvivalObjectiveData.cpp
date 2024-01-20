#include "FortAthenaMutator_SurvivalObjectiveData.h"

FFortAthenaMutator_SurvivalObjectiveData::FFortAthenaMutator_SurvivalObjectiveData() {
    this->BuildingActorObjectiveClass = NULL;
    this->ActivationSafezoneIndex = 0;
    this->bEndMatchOnDestroy = false;
    this->bSpawnOnPOI = false;
    this->bClearAreaOnSpawn = false;
    this->ClearAreaRadiusOverride = 0.00f;
    this->ClearAreaHalfHeightOverride = 0.00f;
    this->bIsSpecialActor = false;
    this->RandomizedPOICount = 0;
    this->SpawnedBuildingActorObjective = NULL;
}

