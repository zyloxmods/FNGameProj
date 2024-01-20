#include "AshtonStoneState.h"

FAshtonStoneState::FAshtonStoneState() {
    this->StoneType = EAshtonStoneType::Purple;
    this->StoneState = EAshtonStoneStateType::NotSpawned;
    this->SpawnTime = 0.00f;
    this->bHasEverSpawned = false;
    this->SpawnDataIdx = 0;
}

