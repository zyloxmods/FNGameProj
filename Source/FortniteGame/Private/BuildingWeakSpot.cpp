#include "BuildingWeakSpot.h"




void ABuildingWeakSpot::Deactivate() {
}

ABuildingWeakSpot::ABuildingWeakSpot() {
    bHit = false;
    bFadeOut = false;
    bActive = false;
    HitCount = 0;
    Level = 0;
    MaxLevel = 0;
    PhysicalSurfaceType = SurfaceType12;
}

