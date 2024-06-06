#include "FortBuildingUpgradedParams.h"

void UFortBuildingUpgradedParams::SetParams(ABuildingActor* _OriginalBuilding, ABuildingActor* _NewBuilding, TEnumAsByte<EFortBuildingType::Type> _BuildingType, AFortPlayerController* _Editor, UFortBuildingUpgradedParams*& ThisParam) {
}

void UFortBuildingUpgradedParams::BreakParams(ABuildingActor*& _OriginalBuilding, ABuildingActor*& _NewBuilding, TEnumAsByte<EFortBuildingType::Type>& _BuildingType, AFortPlayerController*& _Editor) {
}

UFortBuildingUpgradedParams::UFortBuildingUpgradedParams() {
    OriginalBuilding = NULL;
    NewBuilding = NULL;
    BuildingType = EFortBuildingType::Wall;
    Editor = NULL;
}

