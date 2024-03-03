#include "ProceduralScatterSettings.h"

void UProceduralScatterSettings::SetSourcePointDistanceMin(float InValue) {
}

void UProceduralScatterSettings::SetSourcePointDistanceMax(float InValue) {
}

float UProceduralScatterSettings::GetSourcePointDistanceMin() const {
    return 0.0f;
}

float UProceduralScatterSettings::GetSourcePointDistanceMax() const {
    return 0.0f;
}

UProceduralScatterSettings::UProceduralScatterSettings() {
    this->Content = NULL;
    this->bContentVariationsModifiersEnabled = true;
    this->CollisionRadius = 1;
    this->bAutomaticCollisionRadius = false;
    this->bUseSphericalBoundsForAutomaticCollisionRadius = false;
    this->AutomaticCollisionRadiusScaleFactor = 1;
    this->DistributionSeed = 0;
    this->bDensityModifiersEnabled = true;
    this->Density = 1;
    this->bUseSourcePointExactNumber = true;
    this->SourcePointExactNumber = 0;
    this->bScaleModifiersEnabled = true;
    this->bRotationModifiersEnabled = true;
    this->bAlignToNormal = true;
    this->AlignMaxAngle = 1;
    this->bDetectOverhangingLedge = false;
    this->OverhangingLedgeDetectionRayCount = 0;
    this->OverhangingLedgeDetectionLength = 1;
    this->OverhangingLedgeDetectionVerticalThreshold = 1;
    this->OverhangingLedgeDetectionRadiusScale = 1;
    this->FilterMinimumScale = 1;
    this->OverlapPriority = 1;
    this->bCollisionWithWorld = false;
}

