#include "AudioAnalysisSpectralAnalysisSettings.h"

FAudioAnalysisSpectralAnalysisSettings::FAudioAnalysisSpectralAnalysisSettings() {
    UpdateRate = 1;
    DecibalNoiseFloor = 1;
    bDoNormalize = false;
    bDoAutoRange = false;
    AutoRangeAttackTime = 1;
    AutoRangeReleaseTime = 1;
}

