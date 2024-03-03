#include "BuildingTextureData.h"

UBuildingTextureData::UBuildingTextureData() {
    this->Diffuse = NULL;
    this->Normal = NULL;
    this->Specular = NULL;
    this->OverrideMaterial = NULL;
    this->Type = EFortTextureDataType::None;
    this->ResourceType = EFortResourceType::None;
    this->ResourceCost[0] = 1;
    this->ResourceCost[1] = 1;
    this->ResourceCost[2] = 1;
    this->ResourceCost[3] = 1;
    this->ResourceCost[4] = 1;
}

