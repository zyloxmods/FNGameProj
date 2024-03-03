#include "AthenaCompassBase.h"

UAthenaCompassBase::UAthenaCompassBase() {
    this->CompassMaterial = NULL;
    this->Image_Compass = NULL;
    this->MarkerVerticalOffset = 1;
    this->TimeToShowGunshotIndicators = 1;
    this->GunshotIndicatorScaleOverTime = NULL;
    this->GunshotIndicatorScaleByStrength = NULL;
    this->GunshotIndicatorAlphaOverTime = NULL;
    this->GunshotIndicatorAlphaByHeading = NULL;
}

