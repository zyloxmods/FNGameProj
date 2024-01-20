#include "FortClientPilot_GameplayBase.h"

UFortClientPilot_GameplayBase::UFortClientPilot_GameplayBase() {
    this->LastRandomTurnTime = 0.00f;
    this->LastPickLootTime = -100.00f;
    this->LastPickEnemyTime = -100.00f;
    this->LastEnemyKilledTime = 0.00f;
    this->LastBuildingKilledTime = 0.00f;
    this->LastGoodInteraction = 30.00f;
    this->LastCheckGoodTarget = 0.00f;
    this->LastPickEditTime = 0.00f;
    this->MyPawn = NULL;
}

