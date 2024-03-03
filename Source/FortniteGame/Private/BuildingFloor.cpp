#include "BuildingFloor.h"

bool ABuildingFloor::IsBalcony() const {
    return false;
}

ABuildingFloor::ABuildingFloor() {
    this->bShouldIgnoreForHorizontalHotspotSearch = true;
}

