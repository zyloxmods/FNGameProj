#include "FortSkyTube.h"
#include "Components/SplineComponent.h"


bool AFortSkyTube::IsSkyTubeEnabled() const {
    return false;
}

void AFortSkyTube::DeferredEnableOverlaps() {
}

AFortSkyTube::AFortSkyTube() {
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->bEnabled = true;
}

