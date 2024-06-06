#include "FortCurieSpatialManager.h"

void UFortCurieSpatialManager::HandleBuildingGridInitialized(UBuildingStructuralSupportSystem* StructuralSupportSystem) {
}

UFortCurieSpatialManager::UFortCurieSpatialManager() {
    TickInterval = 1;
    OverlapFireApplicationMagnitude = 1;
    OverlapFireApplicationMaxMagnitude = 1;
    GrassFoliageTypes.AddDefaulted(3);
    IgnitablePhysicalMaterials.AddDefaulted(1);
}

