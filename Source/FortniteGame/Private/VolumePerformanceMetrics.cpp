#include "VolumePerformanceMetrics.h"

FVolumePerformanceMetrics::FVolumePerformanceMetrics() {
    PerformanceValue = 0;
    PerformanceMaxValue = 0;
    PerformanceLowendThreshold = 0;
    PreviewDeltaValue = 0;
    Category = EFortBudgetCategory::Memory;
}

