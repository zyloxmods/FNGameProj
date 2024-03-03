#include "AshtonStoneState.h"

FAshtonStoneState::FAshtonStoneState() {
    this->StoneType = EAshtonStoneType::Purple;
    this->StoneState = EAshtonStoneStateType::NotSpawned;
    this->SpawnTime = 1;
    this->bHasEverSpawned = false;
    this->SpawnDataIdx = 0;
}

