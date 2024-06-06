#include "FortMissionGenerator.h"

UFortMissionGenerator::UFortMissionGenerator() {
    bUseNewMissionGeneration = false;
    MissionGenerationChance[0] = 1;
    MissionGenerationChance[1] = 1;
    MissionGenerationChance[2] = 1;
    MissionGenerationChance[3] = 1;
    bUseOverridePlayerSpawnPadPlacementData = false;
}

