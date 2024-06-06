#include "FortClientPilot_GameplayBase.h"

UFortClientPilot_GameplayBase::UFortClientPilot_GameplayBase() {
    LastRandomTurnTime = 1;
    LastPickLootTime = 1;
    LastPickEnemyTime = 1;
    LastEnemyKilledTime = 1;
    LastBuildingKilledTime = 1;
    LastGoodInteraction = 1;
    LastCheckGoodTarget = 1;
    LastPickEditTime = 1;
    MyPawn = NULL;
}

