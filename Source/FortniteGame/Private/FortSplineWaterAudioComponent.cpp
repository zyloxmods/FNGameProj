#include "FortSplineWaterAudioComponent.h"

void UFortSplineWaterAudioComponent::UpdateAudioZones(const TArray<FSplineWaterAudioZone>& NewZones) {
}

UFortSplineWaterAudioComponent::UFortSplineWaterAudioComponent() {
    InsideSplineSound = NULL;
    SplineEndSound = NULL;
    SplineFacingDirection = ESplineWaterAudioFacingDirection::None;
    bIsExclusionSpline = false;
    ShorelineOffset = 1;
    TerrainZOffset = 1;
    MaxVerticalDistanceToCheckInside = 1;
    WaterBodyOwner = NULL;
}

