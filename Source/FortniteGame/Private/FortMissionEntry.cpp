#include "FortMissionEntry.h"

FFortMissionEntry::FFortMissionEntry() {
    this->Weight = 1;
    this->WorldMinLevel = 0;
    this->WorldMaxLevel = 0;
    this->MissionGenerator = NULL;
    this->MissionInfo = NULL;
    this->GenerationCategory = EMissionGenerationCategory::Primary;
}

