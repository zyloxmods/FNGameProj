#include "FortIntensityCurve.h"

FFortIntensityCurve::FFortIntensityCurve() {
    this->IntensityCurveTable = NULL;
    this->LowPlayerPerformancePeakIntensityThreshold = 1;
    this->NormalPlayerPerformancePeakIntensityThreshold = 1;
    this->HighPlayerPerformancePeakIntensityThreshold = 1;
    this->MaxRampTime = 1;
    this->FadeEndIntensityThreshold = 1;
    this->StartIntensityOffsetFloor = 1;
    this->EndIntensityOffsetFloor = 1;
    this->StartIntensityOffsetCeiling = 1;
    this->EndIntensityOffsetCeiling = 1;
}

