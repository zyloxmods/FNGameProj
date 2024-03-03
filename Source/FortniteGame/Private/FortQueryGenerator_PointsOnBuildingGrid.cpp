#include "FortQueryGenerator_PointsOnBuildingGrid.h"

UFortQueryGenerator_PointsOnBuildingGrid::UFortQueryGenerator_PointsOnBuildingGrid() {
    this->bStartGridFromBottom = true;
    this->bUsePointInVerticalCenterOfCell = true;
    this->GenerateAround = NULL;
}

