#include "FortMissionEntry.h"

FFortMissionEntry::FFortMissionEntry() {
    this->Weight = 0.00f;
    this->WorldMinLevel = 0;
    this->WorldMaxLevel = 0;
    this->MissionGenerator = NULL;
    this->MissionInfo = NULL;
    this->GenerationCategory = EMissionGenerationCategory::Primary;
}

