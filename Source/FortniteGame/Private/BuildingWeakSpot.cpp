#include "BuildingWeakSpot.h"




void ABuildingWeakSpot::Deactivate() {
}

ABuildingWeakSpot::ABuildingWeakSpot() {
    this->bHit = false;
    this->bFadeOut = false;
    this->bActive = false;
    this->HitCount = 0;
    this->Level = 0;
    this->MaxLevel = 7;
    this->PhysicalSurfaceType = SurfaceType12;
}

