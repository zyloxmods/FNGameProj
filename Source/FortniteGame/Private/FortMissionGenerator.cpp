#include "FortMissionGenerator.h"

UFortMissionGenerator::UFortMissionGenerator() {
    this->bUseNewMissionGeneration = false;
    this->MissionGenerationChance[0] = 1;
    this->MissionGenerationChance[1] = 1;
    this->MissionGenerationChance[2] = 1;
    this->MissionGenerationChance[3] = 1;
    this->bUseOverridePlayerSpawnPadPlacementData = false;
}

