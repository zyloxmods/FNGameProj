#include "InteriorAudioBuildingRotationConstraint.h"

FInteriorAudioBuildingRotationConstraint::FInteriorAudioBuildingRotationConstraint() {
    StartingOrientation = EInteriorAudioBuildingDefaultRotation::PositiveY;
    XScaleFlipRotation = 1;
    YScaleFlipRotation = 1;
    Quadrant = 0;
    bUseDotProductComparison = false;
    DotProductComparison = 1;
}

