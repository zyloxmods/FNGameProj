#include "FortSplineWaterAudioComponent.h"

void UFortSplineWaterAudioComponent::UpdateAudioZones(const TArray<FSplineWaterAudioZone>& NewZones) {
}

UFortSplineWaterAudioComponent::UFortSplineWaterAudioComponent() {
    this->InsideSplineSound = NULL;
    this->SplineEndSound = NULL;
    this->SplineFacingDirection = ESplineWaterAudioFacingDirection::None;
    this->bIsExclusionSpline = false;
    this->ShorelineOffset = 1;
    this->TerrainZOffset = 1;
    this->MaxVerticalDistanceToCheckInside = 1;
    this->WaterBodyOwner = NULL;
}

