#include "BuildingPropWall.h"

ABuildingPropWall::ABuildingPropWall() {
    this->AreaShapeType = EBuildingWallArea::Regular;
    this->AreaWidthOverride = 1;
    this->bOverrideAreaWidth = false;
}

