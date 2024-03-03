#include "FortDagwoodVehicleManager.h"

void UFortDagwoodVehicleManager::UpdatePropReplacement() {
}

void UFortDagwoodVehicleManager::SetVehicleFuel(float NewFuel) {
}

void UFortDagwoodVehicleManager::ServerSetVehicleFuel_Implementation(float NewFuel) {
}
bool UFortDagwoodVehicleManager::ServerSetVehicleFuel_Validate(float NewFuel) {
    return true;
}

void UFortDagwoodVehicleManager::OnVehicleSpawnsUpdated(UFortVehicleItemDefinition* VehicleItemDef, TArray<AActor*>& SpawnedVehicles, int32 NewVehicleCount) {
}

void UFortDagwoodVehicleManager::OnVehicleSpawned(AFortAthenaVehicle* Vehicle) {
}

void UFortDagwoodVehicleManager::CustomHandleActorStreamedInEditor(AActor* SourceActor) {
}

UFortDagwoodVehicleManager::UFortDagwoodVehicleManager() {
    this->bHasUpdatedPropReplacement = false;
}

