#include "FortAIEncounterWaveProgressEstimation.h"

FFortAIEncounterWaveProgressEstimation::FFortAIEncounterWaveProgressEstimation() {
    this->SectionProgressEstimate = 0.00f;
    this->SectionStartTime = 0.00f;
    this->LastWaveProgressUpdateTime = 0.00f;
    this->PeakAndFadeWavePercentage = 0.00f;
    this->MaxAdjustmentPerSecond = 0.00f;
    this->CurrentSection = EFortAIWaveProgressSection::SectionOne;
    this->NumberOfWaveSegments = 0;
}

