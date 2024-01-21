#include "FortIntensityCurve.h"

FFortIntensityCurve::FFortIntensityCurve() {
    this->IntensityCurveTable = NULL;
    this->LowPlayerPerformancePeakIntensityThreshold = 0.00f;
    this->NormalPlayerPerformancePeakIntensityThreshold = 0.00f;
    this->HighPlayerPerformancePeakIntensityThreshold = 0.00f;
    this->MaxRampTime = 0.00f;
    this->FadeEndIntensityThreshold = 0.00f;
    this->StartIntensityOffsetFloor = 0.00f;
    this->EndIntensityOffsetFloor = 0.00f;
    this->StartIntensityOffsetCeiling = 0.00f;
    this->EndIntensityOffsetCeiling = 0.00f;
}

