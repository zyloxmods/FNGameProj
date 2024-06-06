#include "FortMissionEntry.h"

FFortMissionEntry::FFortMissionEntry() {
    Weight = 1;
    WorldMinLevel = 0;
    WorldMaxLevel = 0;
    MissionGenerator = NULL;
    MissionInfo = NULL;
    GenerationCategory = EMissionGenerationCategory::Primary;
}

