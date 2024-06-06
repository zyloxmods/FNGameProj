#include "FortPlayerBuiltParams.h"

void UFortPlayerBuiltParams::SetParams(ABuildingActor* _Building, TEnumAsByte<EFortBuildingType::Type> _BuildingType, AFortPlayerController* _Builder, UFortPlayerBuiltParams*& ThisParam) {
}

void UFortPlayerBuiltParams::BreakParams(ABuildingActor*& _Building, TEnumAsByte<EFortBuildingType::Type>& _BuildingType, AFortPlayerController*& _Builder) {
}

UFortPlayerBuiltParams::UFortPlayerBuiltParams() {
    Building = NULL;
    BuildingType = EFortBuildingType::Wall;
    Builder = NULL;
}

