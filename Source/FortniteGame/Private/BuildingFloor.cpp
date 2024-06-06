#include "BuildingFloor.h"

bool ABuildingFloor::IsBalcony() const {
    return false;
}

ABuildingFloor::ABuildingFloor() {
    bShouldIgnoreForHorizontalHotspotSearch = true;
}

