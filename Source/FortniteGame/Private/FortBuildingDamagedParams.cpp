#include "FortBuildingDamagedParams.h"

void UFortBuildingDamagedParams::SetParams(ABuildingActor* _Building, TEnumAsByte<EFortBuildingType::Type> _BuildingType, AController* _DamagedBy, float _DamageAmount, UFortBuildingDamagedParams*& ThisParam) {
}

void UFortBuildingDamagedParams::BreakParams(ABuildingActor*& _Building, TEnumAsByte<EFortBuildingType::Type>& _BuildingType, AController*& _DamagedBy, float& _DamageAmount) {
}

UFortBuildingDamagedParams::UFortBuildingDamagedParams() {
    this->Building = NULL;
    this->BuildingType = EFortBuildingType::Wall;
    this->DamagedBy = NULL;
}

