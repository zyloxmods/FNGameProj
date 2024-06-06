#include "BuildingActorHotSpotDirection.h"

FBuildingActorHotSpotDirection::FBuildingActorHotSpotDirection() {
    HotSpotConfig = NULL;
    bMirrorX = false;
    bMirrorY = false;
    Direction = EFortHotSpotDirection::PositiveX;
    TypeConfigUsage = EHotspotTypeConfigMode::AlwaysAdd;
}

