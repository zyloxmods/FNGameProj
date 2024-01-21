#include "FortBuildingInstructions.h"

UFortBuildingInstructions::UFortBuildingInstructions() {
    this->NumOfPiecesToSpawnAtOnce = 10;
    this->TimeBetweenSpawns = 0.20f;
    this->bSetOwnerID = true;
    this->bUsePlayerBuildAnimations = false;
}

