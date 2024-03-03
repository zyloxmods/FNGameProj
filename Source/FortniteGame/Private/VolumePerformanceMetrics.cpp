#include "VolumePerformanceMetrics.h"

FVolumePerformanceMetrics::FVolumePerformanceMetrics() {
    this->PerformanceValue = 0;
    this->PerformanceMaxValue = 0;
    this->PerformanceLowendThreshold = 0;
    this->PreviewDeltaValue = 0;
    this->Category = EFortBudgetCategory::Memory;
}

