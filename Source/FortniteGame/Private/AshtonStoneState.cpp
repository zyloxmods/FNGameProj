#include "AshtonStoneState.h"

FAshtonStoneState::FAshtonStoneState() {
    StoneType = EAshtonStoneType::Purple;
    StoneState = EAshtonStoneStateType::NotSpawned;
    SpawnTime = 1;
    bHasEverSpawned = false;
    SpawnDataIdx = 0;
}

