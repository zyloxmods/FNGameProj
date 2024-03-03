#include "FortClientPilot_GameplayBase.h"

UFortClientPilot_GameplayBase::UFortClientPilot_GameplayBase() {
    this->LastRandomTurnTime = 1;
    this->LastPickLootTime = 1;
    this->LastPickEnemyTime = 1;
    this->LastEnemyKilledTime = 1;
    this->LastBuildingKilledTime = 1;
    this->LastGoodInteraction = 1;
    this->LastCheckGoodTarget = 1;
    this->LastPickEditTime = 1;
    this->MyPawn = NULL;
}

