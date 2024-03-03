#include "AudioAnalysisSpectralAnalysisSettings.h"

FAudioAnalysisSpectralAnalysisSettings::FAudioAnalysisSpectralAnalysisSettings() {
    this->UpdateRate = 1;
    this->DecibalNoiseFloor = 1;
    this->bDoNormalize = false;
    this->bDoAutoRange = false;
    this->AutoRangeAttackTime = 1;
    this->AutoRangeReleaseTime = 1;
}

