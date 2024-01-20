#include "BuildingTextureData.h"

UBuildingTextureData::UBuildingTextureData() {
    this->Diffuse = NULL;
    this->Normal = NULL;
    this->Specular = NULL;
    this->OverrideMaterial = NULL;
    this->Type = EFortTextureDataType::None;
    this->ResourceType = EFortResourceType::None;
    this->ResourceCost[0] = 0.00f;
    this->ResourceCost[1] = 0.00f;
    this->ResourceCost[2] = 0.00f;
    this->ResourceCost[3] = 0.00f;
}

