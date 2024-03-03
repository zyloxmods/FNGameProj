#include "FortSkyTube.h"
#include "Components/SplineComponent.h"



bool AFortSkyTube::IsSkyTubeEnabled() const {
    return false;
}

bool AFortSkyTube::IsShuttingDown() const {
    return false;
}

bool AFortSkyTube::IsExemptFromShutdown() const {
    return false;
}

float AFortSkyTube::GetDelayUntilDisabled() const {
    return 0.0f;
}

void AFortSkyTube::DeferredEnableOverlaps() {
}

AFortSkyTube::AFortSkyTube() {
    this->bExemptFromShutdown = false;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->bEnabled = true;
    this->bShuttingDown = false;
}

