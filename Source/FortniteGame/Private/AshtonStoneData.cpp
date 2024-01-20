#include "AshtonStoneData.h"

FAshtonStoneData::FAshtonStoneData() {
    this->StoneType = EAshtonStoneType::Purple;
    this->StoneItemDefinition = NULL;
    this->InitialStoneState = EAshtonStoneStateType::NotSpawned;
}

