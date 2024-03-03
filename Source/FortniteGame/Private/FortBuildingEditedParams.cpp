#include "FortBuildingEditedParams.h"

void UFortBuildingEditedParams::SetParams(ABuildingActor* _OriginalBuilding, ABuildingActor* _NewBuilding, TEnumAsByte<EFortBuildingType::Type> _BuildingType, AFortPlayerController* _Editor, UFortBuildingEditedParams*& ThisParam) {
}

void UFortBuildingEditedParams::BreakParams(ABuildingActor*& _OriginalBuilding, ABuildingActor*& _NewBuilding, TEnumAsByte<EFortBuildingType::Type>& _BuildingType, AFortPlayerController*& _Editor) {
}

UFortBuildingEditedParams::UFortBuildingEditedParams() {
    this->OriginalBuilding = NULL;
    this->NewBuilding = NULL;
    this->BuildingType = EFortBuildingType::Wall;
    this->Editor = NULL;
}

