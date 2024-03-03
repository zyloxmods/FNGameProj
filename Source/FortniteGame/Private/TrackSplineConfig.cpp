#include "TrackSplineConfig.h"

FTrackSplineConfig::FTrackSplineConfig() {
    this->bUseSpline = false;
    this->Start = ETrackDirection::YNegative;
    this->End = ETrackDirection::YNegative;
}

