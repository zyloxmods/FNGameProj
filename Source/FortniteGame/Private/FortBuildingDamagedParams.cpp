#include "FortBuildingDamagedParams.h"

void UFortBuildingDamagedParams::SetParams(ABuildingActor* _Building, TEnumAsByte<EFortBuildingType::Type> _BuildingType, AController* _DamagedBy, float _DamageAmount, UFortBuildingDamagedParams*& ThisParam) {
}

void UFortBuildingDamagedParams::BreakParams(ABuildingActor*& _Building, TEnumAsByte<EFortBuildingType::Type>& _BuildingType, AController*& _DamagedBy, float& _DamageAmount) {
}

UFortBuildingDamagedParams::UFortBuildingDamagedParams() {
    Building = NULL;
    BuildingType = EFortBuildingType::Wall;
    DamagedBy = NULL;
}

