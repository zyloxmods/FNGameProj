#include "BuildingPropWall.h"

ABuildingPropWall::ABuildingPropWall() {
    this->AreaShapeType = EBuildingWallArea::Regular;
    this->AreaWidthOverride = 0.00f;
    this->bOverrideAreaWidth = false;
}

