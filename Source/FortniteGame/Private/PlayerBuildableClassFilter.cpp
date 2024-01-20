#include "PlayerBuildableClassFilter.h"

FPlayerBuildableClassFilter::FPlayerBuildableClassFilter() {
    this->ResourceType = EFortResourceType::Wood;
    this->BuildingType = EFortBuildingType::Wall;
    this->Level = 0;
    this->EditModeMetadata = NULL;
}

