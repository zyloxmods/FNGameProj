#include "FortBuildingUpgradedParams.h"

void UFortBuildingUpgradedParams::SetParams(ABuildingActor* _OriginalBuilding, ABuildingActor* _NewBuilding, TEnumAsByte<EFortBuildingType::Type> _BuildingType, AFortPlayerController* _Editor, UFortBuildingUpgradedParams*& ThisParam) {
}

void UFortBuildingUpgradedParams::BreakParams(ABuildingActor*& _OriginalBuilding, ABuildingActor*& _NewBuilding, TEnumAsByte<EFortBuildingType::Type>& _BuildingType, AFortPlayerController*& _Editor) {
}

UFortBuildingUpgradedParams::UFortBuildingUpgradedParams() {
    this->OriginalBuilding = NULL;
    this->NewBuilding = NULL;
    this->BuildingType = EFortBuildingType::Wall;
    this->Editor = NULL;
}

