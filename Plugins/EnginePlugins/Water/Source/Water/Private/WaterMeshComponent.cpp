#include "WaterMeshComponent.h"

bool UWaterMeshComponent::IsEnabled() const {
    return false;
}

UWaterMeshComponent::UWaterMeshComponent() {
    this->ForceCollapseDensityLevel = 0;
    this->TileSize = 1;
    this->FarDistanceMaterial = NULL;
    this->FarDistanceMeshExtent = 1;
    this->TessellationFactor = 0;
    this->LODScale = 1;
}

