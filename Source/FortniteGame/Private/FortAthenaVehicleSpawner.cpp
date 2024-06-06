#include "FortAthenaVehicleSpawner.h"
#include "Components/SceneComponent.h"

void AFortAthenaVehicleSpawner::SpawnVehicle_Implementation() {
}

UClass* AFortAthenaVehicleSpawner::GetVehicleClass() const {
    return NULL;
}

bool AFortAthenaVehicleSpawner::GetForceSpawnAlways() const {
    return false;
}

AFortAthenaVehicleSpawner::AFortAthenaVehicleSpawner() {
    DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    bForceSpawnAlways = false;
    CachedFortVehicleItemDef = NULL;
    bIsVehicleItemDefCached = false;
}

