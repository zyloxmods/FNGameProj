#include "FortBuildingDestroyedParams.h"

void UFortBuildingDestroyedParams::SetParams(ABuildingActor* _Building, TEnumAsByte<EFortBuildingType::Type> _BuildingType, AController* _Destroyer, UFortBuildingDestroyedParams*& ThisParam) {
}

void UFortBuildingDestroyedParams::BreakParams(ABuildingActor*& _Building, TEnumAsByte<EFortBuildingType::Type>& _BuildingType, AController*& _Destroyer) {
}

UFortBuildingDestroyedParams::UFortBuildingDestroyedParams() {
    Building = NULL;
    BuildingType = EFortBuildingType::Wall;
    Destroyer = NULL;
}

