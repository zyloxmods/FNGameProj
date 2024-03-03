#include "WaterBodyIsland.h"
#include "WaterSplineComponent.h"

UWaterSplineComponent* AWaterBodyIsland::GetWaterSpline() const {
    return NULL;
}

AWaterBodyIsland::AWaterBodyIsland() {
    this->SplineComp = CreateDefaultSubobject<UWaterSplineComponent>(TEXT("WaterSpline"));
}

