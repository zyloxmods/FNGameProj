#include "FortAIEncounterWaveProgressEstimation.h"

FFortAIEncounterWaveProgressEstimation::FFortAIEncounterWaveProgressEstimation() {
    SectionProgressEstimate = 1;
    SectionStartTime = 1;
    LastWaveProgressUpdateTime = 1;
    PeakAndFadeWavePercentage = 1;
    MaxAdjustmentPerSecond = 1;
    CurrentSection = EFortAIWaveProgressSection::SectionOne;
    NumberOfWaveSegments = 0;
}

