#include "SpecialActorSingleStatData.h"

FSpecialActorSingleStatData::FSpecialActorSingleStatData() {
    this->StatType = ESpecialActorStatType::NumEliminationsNearby;
    this->Value = 1;
    this->StatLogicValue = 1;
}

