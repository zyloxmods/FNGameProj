#include "InteriorAudioBuildingRotationConstraint.h"

FInteriorAudioBuildingRotationConstraint::FInteriorAudioBuildingRotationConstraint() {
    this->StartingOrientation = EInteriorAudioBuildingDefaultRotation::PositiveY;
    this->XScaleFlipRotation = 1;
    this->YScaleFlipRotation = 1;
    this->Quadrant = 0;
    this->bUseDotProductComparison = false;
    this->DotProductComparison = 1;
}

