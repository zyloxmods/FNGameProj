#include "FortBuildingDestroyedParams.h"

void UFortBuildingDestroyedParams::SetParams(ABuildingActor* _Building, EFortBuildingType _BuildingType, AController* _Destroyer, UFortBuildingDestroyedParams*& ThisParam) {
}

void UFortBuildingDestroyedParams::BreakParams(ABuildingActor*& _Building, EFortBuildingType& _BuildingType, AController*& _Destroyer) {
}

UFortBuildingDestroyedParams::UFortBuildingDestroyedParams() {
    this->Building = NULL;
    this->BuildingType = EFortBuildingType::Wall;
    this->Destroyer = NULL;
}

