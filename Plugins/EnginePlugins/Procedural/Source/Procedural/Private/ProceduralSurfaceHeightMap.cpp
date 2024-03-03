#include "ProceduralSurfaceHeightMap.h"

void UProceduralSurfaceHeightMap::SetHeightRangeMin(float InValue) {
}

void UProceduralSurfaceHeightMap::SetHeightRangeMax(float InValue) {
}

float UProceduralSurfaceHeightMap::GetValue(float InHeight) const {
    return 0.0f;
}

float UProceduralSurfaceHeightMap::GetHeightRangeMin() const {
    return 0.0f;
}

float UProceduralSurfaceHeightMap::GetHeightRangeMax() const {
    return 0.0f;
}

UProceduralSurfaceHeightMap::UProceduralSurfaceHeightMap() {
    this->bNormalizedHeight = false;
}

