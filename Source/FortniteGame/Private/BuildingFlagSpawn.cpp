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
    bPickupOnTouch = 0;
    CarriedObjectClass = AFortCarriedObject::StaticClass();
    SpawnedObject = NULL;
    SpawnDelay = 1;
}

