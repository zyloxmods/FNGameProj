#include "ProceduralSurfaceSlopeAngleMap.h"

void UProceduralSurfaceSlopeAngleMap::SetSlopeAngleRangeMin(float InValue) {
}

void UProceduralSurfaceSlopeAngleMap::SetSlopeAngleRangeMax(float InValue) {
}

float UProceduralSurfaceSlopeAngleMap::GetValue(float InSlopeAngle) const {
    return 0.0f;
}

float UProceduralSurfaceSlopeAngleMap::GetSlopeAngleRangeMin() const {
    return 0.0f;
}

float UProceduralSurfaceSlopeAngleMap::GetSlopeAngleRangeMax() const {
    return 0.0f;
}

UProceduralSurfaceSlopeAngleMap::UProceduralSurfaceSlopeAngleMap() {
    this->bNormalizedSlopeAngle = false;
}

