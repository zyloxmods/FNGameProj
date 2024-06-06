#include "FortIntensityCurve.h"

FFortIntensityCurve::FFortIntensityCurve() {
    IntensityCurveTable = NULL;
    LowPlayerPerformancePeakIntensityThreshold = 1;
    NormalPlayerPerformancePeakIntensityThreshold = 1;
    HighPlayerPerformancePeakIntensityThreshold = 1;
    MaxRampTime = 1;
    FadeEndIntensityThreshold = 1;
    StartIntensityOffsetFloor = 1;
    EndIntensityOffsetFloor = 1;
    StartIntensityOffsetCeiling = 1;
    EndIntensityOffsetCeiling = 1;
}

