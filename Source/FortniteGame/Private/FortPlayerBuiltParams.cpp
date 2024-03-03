#include "FortPlayerBuiltParams.h"

void UFortPlayerBuiltParams::SetParams(ABuildingActor* _Building, TEnumAsByte<EFortBuildingType::Type> _BuildingType, AFortPlayerController* _Builder, UFortPlayerBuiltParams*& ThisParam) {
}

void UFortPlayerBuiltParams::BreakParams(ABuildingActor*& _Building, TEnumAsByte<EFortBuildingType::Type>& _BuildingType, AFortPlayerController*& _Builder) {
}

UFortPlayerBuiltParams::UFortPlayerBuiltParams() {
    this->Building = NULL;
    this->BuildingType = EFortBuildingType::Wall;
    this->Builder = NULL;
}

