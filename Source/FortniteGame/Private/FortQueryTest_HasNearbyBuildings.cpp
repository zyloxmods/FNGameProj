#include "FortQueryTest_HasNearbyBuildings.h"

UFortQueryTest_HasNearbyBuildings::UFortQueryTest_HasNearbyBuildings() {
    this->bIncludeCenter = true;
    this->bIncludeFloors = true;
    this->bIncludeFloorsAbove = true;
    this->bIncludeWalls = true;
    this->ExtentXY = 0;
    this->ExtentZ = 0;
}

