#include "BuildingFlagSpawn.h"
#include "FortCarriedObject.h"

void ABuildingFlagSpawn::SpawnCarriedObject() {
}

void ABuildingFlagSpawn::OnCarriedObjectDetachedEvent_Implementation() {
}

void ABuildingFlagSpawn::OnCarriedObjectAttachedEvent_Implementation() {
}

bool ABuildingFlagSpawn::IsSpawnedObjectAwayFromBase() const {
    return false;
}

ABuildingFlagSpawn::ABuildingFlagSpawn() {
    this->bPickupOnTouch = 0;
    this->CarriedObjectClass = AFortCarriedObject::StaticClass();
    this->SpawnedObject = NULL;
    this->SpawnDelay = 0.00f;
}

