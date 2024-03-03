#include "FortCurieSpatialManager.h"

void UFortCurieSpatialManager::HandleBuildingGridInitialized(UBuildingStructuralSupportSystem* StructuralSupportSystem) {
}

UFortCurieSpatialManager::UFortCurieSpatialManager() {
    this->TickInterval = 1;
    this->OverlapFireApplicationMagnitude = 1;
    this->OverlapFireApplicationMaxMagnitude = 1;
    this->GrassFoliageTypes.AddDefaulted(3);
    this->IgnitablePhysicalMaterials.AddDefaulted(1);
}

