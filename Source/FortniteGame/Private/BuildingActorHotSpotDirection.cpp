#include "BuildingActorHotSpotDirection.h"

FBuildingActorHotSpotDirection::FBuildingActorHotSpotDirection() {
    this->HotSpotConfig = NULL;
    this->bMirrorX = false;
    this->bMirrorY = false;
    this->Direction = EFortHotSpotDirection::PositiveX;
    this->TypeConfigUsage = EHotspotTypeConfigMode::AlwaysAdd;
}

