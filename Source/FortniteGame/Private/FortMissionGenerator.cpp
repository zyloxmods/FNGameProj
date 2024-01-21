#include "FortMissionGenerator.h"

UFortMissionGenerator::UFortMissionGenerator() {
    this->bUseNewMissionGeneration = false;
    this->MissionGenerationChance[0] = 1.00f;
    this->MissionGenerationChance[1] = 1.00f;
    this->MissionGenerationChance[2] = 1.00f;
    this->MissionGenerationChance[3] = 1.00f;
    this->bUseOverridePlayerSpawnPadPlacementData = false;
}

