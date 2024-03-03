#include "FortAIEncounterWaveProgressEstimation.h"

FFortAIEncounterWaveProgressEstimation::FFortAIEncounterWaveProgressEstimation() {
    this->SectionProgressEstimate = 1;
    this->SectionStartTime = 1;
    this->LastWaveProgressUpdateTime = 1;
    this->PeakAndFadeWavePercentage = 1;
    this->MaxAdjustmentPerSecond = 1;
    this->CurrentSection = EFortAIWaveProgressSection::SectionOne;
    this->NumberOfWaveSegments = 0;
}

