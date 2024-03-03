#include "FortTravelLogMap.h"

void UFortTravelLogMap::InitializeFromTravelRecord(const FAthenaTravelRecord& Record) {
}

UFortTravelLogMap::UFortTravelLogMap() : UUserWidget(FObjectInitializer::Get()) {
    this->MapSize = 1;
    this->CurrentTimeFraction = 1;
    this->DistanceToCoalescePositions = 0;
}

