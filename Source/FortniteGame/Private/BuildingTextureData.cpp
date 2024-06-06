#include "BuildingTextureData.h"

UBuildingTextureData::UBuildingTextureData() {
    Diffuse = NULL;
    Normal = NULL;
    Specular = NULL;
    OverrideMaterial = NULL;
    Type = EFortTextureDataType::None;
    ResourceType = EFortResourceType::None;
    ResourceCost[0] = 1;
    ResourceCost[1] = 1;
    ResourceCost[2] = 1;
    ResourceCost[3] = 1;
    ResourceCost[4] = 1;
}

