#include "FortBuildingEditedParams.h"

void UFortBuildingEditedParams::SetParams(ABuildingActor* _OriginalBuilding, ABuildingActor* _NewBuilding, TEnumAsByte<EFortBuildingType::Type> _BuildingType, AFortPlayerController* _Editor, UFortBuildingEditedParams*& ThisParam) {
}

void UFortBuildingEditedParams::BreakParams(ABuildingActor*& _OriginalBuilding, ABuildingActor*& _NewBuilding, TEnumAsByte<EFortBuildingType::Type>& _BuildingType, AFortPlayerController*& _Editor) {
}

UFortBuildingEditedParams::UFortBuildingEditedParams() {
    OriginalBuilding = NULL;
    NewBuilding = NULL;
    BuildingType = EFortBuildingType::Wall;
    Editor = NULL;
}

